// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view BC_ENCODER_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(// Compresses one level of an RGBA8 image (the ASTC decoder's output) to BC1 or BC3, one 4x4 block
)" R"(// per invocation, so re-compressed ASTC never round-trips through the CPU. Colour endpoints are
)" R"(// the block's bounding box, oriented along the colours' covariance and inset by 1/16; each texel
)" R"(// takes the nearest palette entry. Values are encoded as stored (sRGB data stays sRGB, like the
)" R"(// CPU path).
)" R"(
)" R"(#version 460 core
)" R"(
)" R"(layout (local_size_x = 8, local_size_y = 8, local_size_z = 1) in;
)" R"(
)" R"(layout (set = 0, binding = 0, rgba8) uniform readonly image2DArray source;
)" R"(
)" R"(layout (std430, set = 0, binding = 1) writeonly buffer Output {
)" R"(    uvec2 blocks[];
)" R"(};
)" R"(
)" R"(layout (push_constant) uniform PushConstants {
)" R"(    uint blocks_x;
)" R"(    uint blocks_y;
)" R"(    uint width;
)" R"(    uint height;
)" R"(    uint bc3;
)" R"(    uint out_offset; // in 8-byte units
)" R"(};
)" R"(
)" R"(uint Pack565(vec3 color) {
)" R"(    const uvec3 q = uvec3(round(clamp(color, 0.0, 1.0) * vec3(31.0, 63.0, 31.0)));
)" R"(    return (q.r << 11) | (q.g << 5) | q.b;
)" R"(}
)" R"(
)" R"(vec3 Unpack565(uint value) {
)" R"(    const uvec3 q = uvec3((value >> 11) & 31u, (value >> 5) & 63u, value & 31u);
)" R"(    const uvec3 e = uvec3((q.r << 3) | (q.r >> 2), (q.g << 2) | (q.g >> 4), (q.b << 3) | (q.b >> 2));
)" R"(    return vec3(e) / 255.0;
)" R"(}
)" R"(
)" R"(float Distance2(vec3 a, vec3 b) {
)" R"(    const vec3 d = a - b;
)" R"(    return dot(d, d);
)" R"(}
)" R"(
)" R"(// BC1 colour block. With punch_through (BC1 only), texels with alpha < 0.5 use the transparent
)" R"(// index of the three-colour mode; otherwise the four-colour mode is used (BC3 always decodes so).
)" R"(uvec2 EncodeColor(in vec4 texels[16], bool punch_through) {
)" R"(    vec3 lo = vec3(1.0);
)" R"(    vec3 hi = vec3(0.0);
)" R"(    for (int i = 0; i < 16; ++i) {
)" R"(        if (punch_through && texels[i].a < 0.5) {
)" R"(            continue;
)" R"(        }
)" R"(        lo = min(lo, texels[i].rgb);
)" R"(        hi = max(hi, texels[i].rgb);
)" R"(    }
)" R"(    if (any(greaterThan(lo, hi))) {
)" R"(        // Every texel transparent: colour0 == colour1 selects three-colour mode, index 3.
)" R"(        return uvec2(0u, 0xFFFFFFFFu);
)" R"(    }
)" R"(    const vec3 center = (lo + hi) * 0.5;
)" R"(    const vec3 extent = hi - lo;
)" R"(    const int major = extent.g >= extent.r && extent.g >= extent.b ? 1 : (extent.r >= extent.b ? 0 : 2);
)" R"(    vec3 covariance = vec3(0.0);
)" R"(    for (int i = 0; i < 16; ++i) {
)" R"(        if (punch_through && texels[i].a < 0.5) {
)" R"(            continue;
)" R"(        }
)" R"(        const vec3 d = texels[i].rgb - center;
)" R"(        covariance += d * d[major];
)" R"(    }
)" R"(    vec3 e0 = hi;
)" R"(    vec3 e1 = lo;
)" R"(    for (int c = 0; c < 3; ++c) {
)" R"(        if (covariance[c] < 0.0) {
)" R"(            e0[c] = lo[c];
)" R"(            e1[c] = hi[c];
)" R"(        }
)" R"(    }
)" R"(    const vec3 inset = (e0 - e1) / 16.0;
)" R"(    e0 -= inset;
)" R"(    e1 += inset;
)" R"(
)" R"(    uint q0 = Pack565(e0);
)" R"(    uint q1 = Pack565(e1);
)" R"(    // Four-colour mode needs colour0 > colour1, three-colour mode colour0 <= colour1.
)" R"(    if (punch_through ? q0 > q1 : q0 < q1) {
)" R"(        const uint t = q0;
)" R"(        q0 = q1;
)" R"(        q1 = t;
)" R"(    }
)" R"(    if (!punch_through && q0 == q1) {
)" R"(        return uvec2(q0 | (q1 << 16), 0u);
)" R"(    }
)" R"(    vec3 palette[4];
)" R"(    palette[0] = Unpack565(q0);
)" R"(    palette[1] = Unpack565(q1);
)" R"(    if (punch_through) {
)" R"(        palette[2] = (palette[0] + palette[1]) * 0.5;
)" R"(        palette[3] = vec3(0.0);
)" R"(    } else {
)" R"(        palette[2] = (2.0 * palette[0] + palette[1]) / 3.0;
)" R"(        palette[3] = (palette[0] + 2.0 * palette[1]) / 3.0;
)" R"(    }
)" R"(    const int entries = punch_through ? 3 : 4;
)" R"(    uint indices = 0u;
)" R"(    for (int i = 0; i < 16; ++i) {
)" R"(        uint best = 0u;
)" R"(        if (punch_through && texels[i].a < 0.5) {
)" R"(            best = 3u;
)" R"(        } else {
)" R"(            float best_distance = Distance2(texels[i].rgb, palette[0]);
)" R"(            for (int p = 1; p < entries; ++p) {
)" R"(                const float distance = Distance2(texels[i].rgb, palette[p]);
)" R"(                if (distance < best_distance) {
)" R"(                    best_distance = distance;
)" R"(                    best = uint(p);
)" R"(                }
)" R"(            }
)" R"(        }
)" R"(        indices |= best << (2 * i);
)" R"(    }
)" R"(    return uvec2(q0 | (q1 << 16), indices);
)" R"(}
)" R"(
)" R"(// BC3 alpha block: eight-value mode (alpha0 > alpha1), indices 0 = alpha0, 1 = alpha1, 2..7 the
)" R"(// ramp from alpha0 to alpha1.
)" R"(uvec2 EncodeAlpha(in vec4 texels[16]) {
)" R"(    float lo = 1.0;
)" R"(    float hi = 0.0;
)" R"(    for (int i = 0; i < 16; ++i) {
)" R"(        lo = min(lo, texels[i].a);
)" R"(        hi = max(hi, texels[i].a);
)" R"(    }
)" R"(    const uint a0 = uint(round(hi * 255.0));
)" R"(    const uint a1 = uint(round(lo * 255.0));
)" R"(    uint bits_lo = a0 | (a1 << 8);
)" R"(    uint bits_hi = 0u;
)" R"(    if (a0 == a1) {
)" R"(        return uvec2(bits_lo, bits_hi);
)" R"(    }
)" R"(    for (uint i = 0u; i < 16u; ++i) {
)" R"(        const float t = (texels[i].a * 255.0 - float(a1)) / float(a0 - a1);
)" R"(        const uint q = uint(clamp(round(t * 7.0), 0.0, 7.0));
)" R"(        const uint index = q == 7u ? 0u : (q == 0u ? 1u : 8u - q);
)" R"(        const uint bit = 16u + 3u * i;
)" R"(        if (bit < 32u) {
)" R"(            bits_lo |= index << bit;
)" R"(            if (bit > 29u) {
)" R"(                bits_hi |= index >> (32u - bit);
)" R"(            }
)" R"(        } else {
)" R"(            bits_hi |= index << (bit - 32u);
)" R"(        }
)" R"(    }
)" R"(    return uvec2(bits_lo, bits_hi);
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    const uvec3 id = gl_GlobalInvocationID;
)" R"(    if (id.x >= blocks_x || id.y >= blocks_y) {
)" R"(        return;
)" R"(    }
)" R"(    vec4 texels[16];
)" R"(    const ivec2 base = ivec2(id.xy) * 4;
)" R"(    const ivec2 last = ivec2(width, height) - 1;
)" R"(    bool any_transparent = false;
)" R"(    for (int y = 0; y < 4; ++y) {
)" R"(        for (int x = 0; x < 4; ++x) {
)" R"(            // Edge blocks repeat the last row/column so padding doesn't widen the endpoints.
)" R"(            const ivec2 coord = min(base + ivec2(x, y), last);
)" R"(            texels[y * 4 + x] = imageLoad(source, ivec3(coord, int(id.z)));
)" R"(            any_transparent = any_transparent || texels[y * 4 + x].a < 0.5;
)" R"(        }
)" R"(    }
)" R"(    const uint block = (id.z * blocks_y + id.y) * blocks_x + id.x;
)" R"(    if (bc3 != 0u) {
)" R"(        blocks[out_offset + block * 2u] = EncodeAlpha(texels);
)" R"(        blocks[out_offset + block * 2u + 1u] = EncodeColor(texels, false);
)" R"(    } else {
)" R"(        blocks[out_offset + block] = EncodeColor(texels, any_transparent);
)" R"(    }
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

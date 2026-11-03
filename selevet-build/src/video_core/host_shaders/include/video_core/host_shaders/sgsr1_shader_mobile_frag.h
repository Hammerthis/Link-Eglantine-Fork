// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view SGSR1_SHADER_MOBILE_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright (c) 2025, Qualcomm Innovation Center, Inc. All rights reserved.
)" R"(// SPDX-License-Identifier: BSD-3-Clause
)" R"(
)" R"(#version 460 core
)" R"(
)" R"(precision highp float;
)" R"(precision highp int;
)" R"(
)" R"(// Operation modes: RGBA -> 1, RGBY -> 3, LERP -> 4
)" R"(#define OPERATION_MODE 1
)" R"(#define EDGE_THRESHOLD (8.0 / 255.0)
)" R"(
)" R"(layout(push_constant) uniform constants {
)" R"(    vec2 scale;
)" R"(    vec2 size;
)" R"(    vec2 resize_factor;
)" R"(    vec2 crop_offset;
)" R"(    float edge_sharpness;
)" R"(};
)" R"(layout(set = 0, binding = 0) uniform sampler2D sampler0;
)" R"(layout(location=0) in vec2 texcoord;
)" R"(layout(location=0) out vec4 frag_color;
)" R"(
)" R"(vec4 weightY(vec4 dx, vec4 dy, vec4 std) {
)" R"(    vec4 x = ((dx * dx) + (dy * dy)) * 0.55f + std;
)" R"(    return (x - 1.f) * (x - 4.f) * 3.8125f; // approx. of (x - 1) * (x - 4)^3
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    vec4 color = textureLod(sampler0, texcoord.xy, 0.0f);
)" R"(    // image coord
)" R"(    vec2 icoord = (texcoord * size + vec2(-0.5f, 0.5f));
)" R"(    vec2 icoord_pixel = floor(icoord);
)" R"(    vec2 coord = icoord_pixel * scale;
)" R"(    vec2 pl = icoord - icoord_pixel;
)" R"(    // left: 0, right: 1, upDown: 2
)" R"(    mat3x4 dg = mat3x4(
)" R"(        textureGather(sampler0, coord, 1),
)" R"(        textureGather(sampler0, coord + vec2(2.f * scale.x, 0.0f), 1),
)" R"(        vec4(
)" R"(            textureGather(sampler0, coord + vec2(scale.x, -scale.y), 1).wz,
)" R"(            textureGather(sampler0, coord + vec2(scale.x, +scale.y), 1).yx
)" R"(        )
)" R"(    );
)" R"(    float edgeVote = abs(dg[0].z - dg[0].y) + abs(color.y - dg[0].y) + abs(color.y - dg[0].z);
)" R"(    if (edgeVote > EDGE_THRESHOLD) {
)" R"(        float mean = (dg[0].y + dg[0].z + dg[1].x + dg[1].w) * 0.25f;
)" R"(        dg = dg - mean;
)" R"(        vec4 sum = abs(dg[0]) + abs(dg[1]) + abs(dg[2]);
)" R"(        float std = 2.181818f / (sum.x + sum.y + sum.z + sum.w);
)" R"(        mat2x4 w = mat2x4(
)" R"(            weightY(
)" R"(                pl.xxxx + vec4(+1.0f, +0.0f, +0.0f, +1.0f),
)" R"(                pl.yyyy + vec4(-1.0f, -1.0f, +0.0f, +0.0f),
)" R"(                clamp(abs(dg[0]) * std, 0.0f, 1.0f)
)" R"(            ) + weightY(
)" R"(                pl.xxxx + vec4(-1.0f, -2.0f, -2.0f, -1.0f),
)" R"(                pl.yyyy + vec4(-1.0f, -1.0f, +0.0f, +0.0f),
)" R"(                clamp(abs(dg[1]) * std, 0.0f, 1.0f)
)" R"(            ) + weightY(
)" R"(                pl.xxxx + vec4(+0.0f, -1.0f, -1.0f, +0.0f),
)" R"(                pl.yyyy + vec4(+1.0f, +1.0f, -2.0f, -2.0f),
)" R"(                clamp(abs(dg[2]) * std, 0.0f, 1.0f)
)" R"(            ),
)" R"(            dg[0] + dg[1] + dg[2]
)" R"(        );
)" R"(        // compute final y with bounds
)" R"(        vec2 yb = vec2(
)" R"(            min(min(dg[0].y, dg[0].z), min(dg[1].x, dg[1].w)), // min
)" R"(            max(max(dg[0].y, dg[0].z), max(dg[1].x, dg[1].w))  // max
)" R"(        );
)" R"(        vec2 fvy = vec2(
)" R"(            w[0].x + w[0].y + w[0].z + w[0].w,
)" R"(            w[1].x + w[1].y + w[1].z + w[1].w
)" R"(        );
)" R"(        float fy = clamp((fvy.y / fvy.x) * edge_sharpness, yb[0], yb[1]);
)" R"(        // Smooth high contrast input
)" R"(        float dy = clamp(fy - color.y + mean, -23.0f / 255.0f, 23.0f / 255.0f);
)" R"(        color = clamp(color + dy, 0.0f, 1.0f);
)" R"(    }
)" R"(    color.w = 1.0f;  //assume alpha channel is not used
)" R"(    frag_color.xyzw = color;
)" R"(}
)" 
};

} // namespace HostShaders

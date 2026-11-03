// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view PRESENT_MITCHELL_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2025 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(#version 460 core
)" R"(layout (location = 0) in vec2 frag_tex_coord;
)" R"(layout (location = 0) out vec4 color;
)" R"(layout (binding = 0) uniform sampler2D color_texture;
)" R"(vec4 cubic(float x) {
)" R"(    float x2 = x * x;
)" R"(    float x3 = x2 * x;
)" R"(    return vec4(1.0, x, x2, x3) * transpose(mat4x4(
)" R"(         1.0,  16.0,   1.0,  0.0,
)" R"(        -9.0,   0.0,   9.0,  0.0,
)" R"(        15.0, -36.0,  27.0, -6.0,
)" R"(        -7.0,  21.0, -21.0,  7.0
)" R"(    ) * (1.0 / 18.0));
)" R"(}
)" R"(vec4 textureBicubic(sampler2D samp, vec2 uv) {
)" R"(    vec2 tex_size = vec2(textureSize(samp, 0));
)" R"(    vec2 cc_tex = uv * tex_size - 0.5f;
)" R"(    vec2 fex = cc_tex - floor(cc_tex);
)" R"(    vec4 xcubic = cubic(fex.x);
)" R"(    vec4 ycubic = cubic(fex.y);
)" R"(    vec4 c = floor(cc_tex).xxyy + vec2(-0.5f, 1.5f).xyxy;
)" R"(    vec4 z = vec4(xcubic.yw, ycubic.yw);
)" R"(    vec4 s = vec4(xcubic.xz, ycubic.xz) + z;
)" R"(    vec4 offset = (c + z / s) * (1.0f / tex_size).xxyy;
)" R"(    vec2 n = vec2(s.x / (s.x + s.y), s.z / (s.z + s.w));
)" R"(    return mix(
)" R"(        mix(texture(samp, offset.yw), texture(samp, offset.xw), n.x),
)" R"(        mix(texture(samp, offset.yz), texture(samp, offset.xz), n.x),
)" R"(    n.y);
)" R"(}
)" R"(void main() {
)" R"(    color = textureBicubic(color_texture, frag_tex_coord);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

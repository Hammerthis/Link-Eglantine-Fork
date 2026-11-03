// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view PRESENT_SPLINE1_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2025 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(// Spline (smooth linear inerpolation) with 1 texel fetch (needs bilinear to work)
)" R"(// Emulates bicubic without actually doing bicubic
)" R"(// See https://iquilezles.org/articles/texture, unfortunely there are issues with the original
)" R"(// where smoothstep "expansion" actually results in worse codegen (SPIRV-Opt does a direct conv to smoothstep)
)" R"(// TODO: Numerical analysis - fract is sawtooth func and floor, reuse params? Perhaps - no need for precision
)" R"(
)" R"(#version 460 core
)" R"(
)" R"(layout (location = 0) in vec2 frag_tex_coord;
)" R"(layout (location = 0) out vec4 color;
)" R"(layout (binding = 0) uniform sampler2D color_texture;
)" R"(
)" R"(vec4 textureSpline1(sampler2D sam, vec2 uv) {
)" R"(    float r = float(textureSize(sam, 0).x);
)" R"(    vec2 x = fract(uv * r + 0.5);
)" R"(    return texture(sam, (floor(uv * r + 0.5) + smoothstep(0.0, 1.0, x) - 0.5) / r);
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    color = textureSpline1(color_texture, frag_tex_coord);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

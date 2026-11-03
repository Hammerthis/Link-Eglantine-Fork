// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view PRESENT_LANCZOS_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2025 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(// https://en.wikipedia.org/wiki/Lanczos_resampling
)" R"(
)" R"(#version 460 core
)" R"(
)" R"(layout (location = 0) in vec2 frag_tex_coord;
)" R"(layout (location = 0) out vec4 color;
)" R"(layout (binding = 0) uniform sampler2D color_texture;
)" R"(
)" R"(#define PI 3.1415926535897932384626433
)" R"(float sinc(float x) {
)" R"(    return x == 0.0f ? 1.0f : sin(PI * x) / (PI * x);
)" R"(}
)" R"(float lanczos(vec2 v, float a) {
)" R"(    float d = length(v);
)" R"(    return sinc(d) / sinc(d / a);
)" R"(}
)" R"(vec4 textureLanczos(sampler2D textureSampler, vec2 p) {
)" R"(    vec3 c_sum = vec3(0.0f);
)" R"(    float w_sum = 0.0f;
)" R"(    vec2 res = vec2(textureSize(textureSampler, 0));
)" R"(    vec2 cc = floor(p * res) / res;
)" R"(    // kernel size = (2r + 1)^2
)" R"(    const int r = 3; //radius (1 = 3 steps)
)" R"(#define LANCZOS_LOOP_STEP(x, y) ;    { ;        vec2 kp = 0.5f * (vec2(x, y) / res); /* 0.5 = half-pixel level resampling */ ;        vec2 uv = cc + kp; ;        float w = lanczos(kp, float(r)); ;        c_sum += w * texture(textureSampler, p + kp).rgb; ;        w_sum += w; ;    }
)" R"(
)" R"(    for (int y = -r; y <= r; ++y) {
)" R"(        LANCZOS_LOOP_STEP(-3, y);
)" R"(        LANCZOS_LOOP_STEP(-2, y);
)" R"(        LANCZOS_LOOP_STEP(-1, y);
)" R"(        LANCZOS_LOOP_STEP(-0, y);
)" R"(        LANCZOS_LOOP_STEP(+1, y);
)" R"(        LANCZOS_LOOP_STEP(+2, y);
)" R"(        LANCZOS_LOOP_STEP(+3, y);
)" R"(    }
)" R"(    return vec4(c_sum / w_sum, 1.0f);
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    color = textureLanczos(color_texture, frag_tex_coord);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

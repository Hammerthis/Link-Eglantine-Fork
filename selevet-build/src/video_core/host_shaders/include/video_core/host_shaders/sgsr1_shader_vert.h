// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view SGSR1_SHADER_VERT = {
R"(// SPDX-FileCopyrightText: Copyright 2025 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(#version 450
)" R"(
)" R"(layout(push_constant) uniform constants {
)" R"(    vec2 scale;
)" R"(    vec2 size;
)" R"(    vec2 resize_factor;
)" R"(    vec2 crop_offset;
)" R"(    float edge_sharpness;
)" R"(};
)" R"(layout(location = 0) out highp vec2 texcoord;
)" R"(
)" R"(void main() {
)" R"(    float x = float((gl_VertexIndex & 1) << 2);
)" R"(    float y = float((gl_VertexIndex & 2) << 1);
)" R"(    gl_Position = vec4(x - 1.0f, y - 1.0f, 0.0, 1.0f) * vec4(sign(resize_factor), 1.f, 1.f);
)" R"(    texcoord = crop_offset + vec2(x, y) * abs(resize_factor) * 0.5;
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view BLIT_DEPTH_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(#version 450 core
)" R"(
)" R"(layout(binding = 0) uniform sampler2D depth_tex;
)" R"(
)" R"(layout(location = 0) in vec2 texcoord;
)" R"(
)" R"(void main() {
)" R"(    gl_FragDepth = textureLod(depth_tex, texcoord, 0).r;
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

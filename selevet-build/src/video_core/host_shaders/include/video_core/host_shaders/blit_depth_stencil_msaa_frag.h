// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view BLIT_DEPTH_STENCIL_MSAA_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(#version 450 core
)" R"(#extension GL_ARB_shader_stencil_export : require
)" R"(
)" R"(layout(binding = 0) uniform sampler2DMS depth_tex;
)" R"(layout(binding = 1) uniform usampler2DMS stencil_tex;
)" R"(
)" R"(layout(location = 0) in vec2 texcoord;
)" R"(
)" R"(void main() {
)" R"(    gl_FragDepth = texelFetch(depth_tex, ivec2(texcoord), gl_SampleID).r;
)" R"(    gl_FragStencilRefARB = int(texelFetch(stencil_tex, ivec2(texcoord), gl_SampleID).r);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

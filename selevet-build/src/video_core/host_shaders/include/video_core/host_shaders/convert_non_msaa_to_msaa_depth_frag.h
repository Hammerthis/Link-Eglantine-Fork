// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view CONVERT_NON_MSAA_TO_MSAA_DEPTH_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(#version 450 core
)" R"(
)" R"(layout(binding = 0) uniform sampler2D img_in;
)" R"(
)" R"(layout(push_constant) uniform PushConstants {
)" R"(    ivec2 dst_offset;
)" R"(    ivec2 src_offset;
)" R"(    ivec2 scale;
)" R"(};
)" R"(
)" R"(void main() {
)" R"(    const ivec2 msaa_coord = ivec2(gl_FragCoord.xy) - dst_offset;
)" R"(    const ivec2 sample_offset = ivec2(gl_SampleID % scale.x, gl_SampleID / scale.x);
)" R"(    const ivec2 coord = msaa_coord * scale + sample_offset + src_offset;
)" R"(    gl_FragDepth = texelFetch(img_in, coord, 0).r;
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view CONVERT_NON_MSAA_TO_MSAA_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(#version 450 core
)" R"(
)" R"(#ifndef SAMPLER_TYPE
)" R"(#define SAMPLER_TYPE sampler2D
)" R"(#endif
)" R"(#ifndef TEXEL_TYPE
)" R"(#define TEXEL_TYPE vec4
)" R"(#endif
)" R"(
)" R"(layout(binding = 0) uniform SAMPLER_TYPE img_in;
)" R"(
)" R"(layout(push_constant) uniform PushConstants {
)" R"(    ivec2 dst_offset;
)" R"(    ivec2 src_offset;
)" R"(    ivec2 scale;
)" R"(};
)" R"(
)" R"(layout(location = 0) out TEXEL_TYPE frag_color;
)" R"(
)" R"(void main() {
)" R"(    const ivec2 msaa_coord = ivec2(gl_FragCoord.xy) - dst_offset;
)" R"(    const ivec2 sample_offset = ivec2(gl_SampleID % scale.x, gl_SampleID / scale.x);
)" R"(    const ivec2 coord = msaa_coord * scale + sample_offset + src_offset;
)" R"(    frag_color = texelFetch(img_in, coord, 0);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view CONVERT_MSAA_TO_NON_MSAA_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(#version 450 core
)" R"(
)" R"(#ifndef SAMPLER_TYPE
)" R"(#define SAMPLER_TYPE sampler2DMS
)" R"(#endif
)" R"(#ifndef TEXEL_TYPE
)" R"(#define TEXEL_TYPE vec4
)" R"(#endif
)" R"(
)" R"(layout(binding = 0) uniform SAMPLER_TYPE msaa_in;
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
)" R"(    const ivec2 coord = ivec2(gl_FragCoord.xy) - dst_offset + src_offset;
)" R"(    const ivec2 msaa_coord = coord / scale;
)" R"(    const ivec2 sample_offset = coord % scale;
)" R"(    const int sample_id = sample_offset.x + scale.x * sample_offset.y;
)" R"(    frag_color = texelFetch(msaa_in, msaa_coord, sample_id);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

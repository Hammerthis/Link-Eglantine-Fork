// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view NV_OPTICAL_FLOW_CONVERT_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(#version 460 core
)" R"(
)" R"(// Converts the VK_NV_optical_flow output (VK_FORMAT_R16G16_SFIXED5_NV, copied to a buffer as one
)" R"(// packed 32-bit word per grid cell) to a two-channel float motion image in full-resolution
)" R"(// pixels, which is the format the frame interpolation shader expects.
)" R"(
)" R"(layout(local_size_x = 16, local_size_y = 16, local_size_z = 1) in;
)" R"(
)" R"(layout(std430, binding = 0) readonly buffer FlowBuffer {
)" R"(    uint flow_data[];
)" R"(};
)" R"(
)" R"(layout(binding = 1, rg16f) uniform writeonly image2D OutMotion;
)" R"(
)" R"(layout(push_constant) uniform PushConstants {
)" R"(    ivec2 flow_size;
)" R"(    float scale; // sign / 32.0 (S10.5 fixed point)
)" R"(};
)" R"(
)" R"(void main() {
)" R"(    const ivec2 coord = ivec2(gl_GlobalInvocationID.xy);
)" R"(    if (coord.x >= flow_size.x || coord.y >= flow_size.y) {
)" R"(        return;
)" R"(    }
)" R"(
)" R"(    const int word = int(flow_data[uint(coord.y) * uint(flow_size.x) + uint(coord.x)]);
)" R"(    const int x = bitfieldExtract(word, 0, 16);
)" R"(    const int y = bitfieldExtract(word, 16, 16);
)" R"(
)" R"(    imageStore(OutMotion, coord, vec4(vec2(float(x), float(y)) * scale, 0.0, 0.0));
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

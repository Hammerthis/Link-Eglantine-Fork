// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view RESOLVE_CONDITIONAL_RENDER_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(// SPDX-FileCopyrightText: Copyright 2023 yuzu Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(#version 450
)" R"(
)" R"(layout(local_size_x = 1) in;
)" R"(
)" R"(layout(std430, binding = 0) readonly buffer Query {
)" R"(    uint data[];
)" R"(};
)" R"(
)" R"(layout(std430, binding = 1) writeonly buffer Result {
)" R"(    uint result;
)" R"(};
)" R"(
)" R"(layout(push_constant) uniform PushConstants {
)" R"(    uint compare_to_zero;
)" R"(};
)" R"(
)" R"(void main() {
)" R"(    if (compare_to_zero != 0u) {
)" R"(        result = (data[0] != 0u && data[1] != 0u) ? 1u : 0u;
)" R"(    } else {
)" R"(        result = (data[0] == data[4] && data[1] == data[5]) ? 1u : 0u;
)" R"(    }
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

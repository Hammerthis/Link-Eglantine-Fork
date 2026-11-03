// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view FSR3_OPTICAL_FLOW_COMP = {
R"(#version 460 core
)" R"(
)" R"(layout(local_size_x = 16, local_size_y = 16, local_size_z = 1) in;
)" R"(
)" R"(layout(binding = 0) uniform sampler2D CurrentFrame;
)" R"(layout(binding = 1) uniform sampler2D PreviousFrame;
)" R"(layout(binding = 2, rg16f) uniform writeonly image2D OutMotionVectors;
)" R"(
)" R"(layout(push_constant) uniform PushConstants {
)" R"(    vec2 inv_render_size;
)" R"(    vec2 render_size;
)" R"(    float search_radius;
)" R"(    float block_size;
)" R"(};
)" R"(
)" R"(// ΓöÇΓöÇ Shared memory tile cache ΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇ
)" R"(const uint TILE = 16u;
)" R"(const uint BORDER = 2u;
)" R"(const uint PADDED = TILE + 2u * BORDER; // 20
)" R"(shared float s_curr_luma[PADDED * PADDED];
)" R"(
)" R"(float rgb2luma(vec3 c) {
)" R"(    return dot(c, vec3(0.299, 0.587, 0.114));
)" R"(}
)" R"(
)" R"(void loadTile(ivec2 tile_origin) {
)" R"(    uint thread_id = gl_LocalInvocationID.y * TILE + gl_LocalInvocationID.x;
)" R"(    for (uint i = thread_id; i < PADDED * PADDED; i += TILE * TILE) {
)" R"(        uint lx = i % PADDED;
)" R"(        uint ly = i / PADDED;
)" R"(        ivec2 coord = tile_origin + ivec2(lx, ly) - ivec2(BORDER);
)" R"(        vec2 uv = (vec2(coord) + 0.5) * inv_render_size;
)" R"(        s_curr_luma[i] = rgb2luma(texture(CurrentFrame, uv).rgb);
)" R"(    }
)" R"(    barrier();
)" R"(}
)" R"(
)" R"(float getCachedLuma(ivec2 local_coord) {
)" R"(    ivec2 padded = local_coord + ivec2(BORDER);
)" R"(    return s_curr_luma[padded.y * PADDED + padded.x];
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    ivec2 pixel_coord = ivec2(gl_GlobalInvocationID.xy);
)" R"(
)" R"(    ivec2 tile_origin = ivec2(gl_WorkGroupID.xy) * ivec2(TILE);
)" R"(    loadTile(tile_origin);
)" R"(
)" R"(    if (pixel_coord.x >= int(render_size.x) || pixel_coord.y >= int(render_size.y)) {
)" R"(        return;
)" R"(    }
)" R"(
)" R"(    vec2 uv = (vec2(pixel_coord) + 0.5) * inv_render_size;
)" R"(    ivec2 local = ivec2(gl_LocalInvocationID.xy);
)" R"(    float curr_luma = getCachedLuma(local);
)" R"(
)" R"(    float center_diff = abs(curr_luma - rgb2luma(texture(PreviousFrame, uv).rgb));
)" R"(
)" R"(    // Early-out only for truly identical pixels (very tight threshold)
)" R"(    if (center_diff < 0.002) {
)" R"(        imageStore(OutMotionVectors, pixel_coord, vec4(0.0, 0.0, 0.0, 0.0));
)" R"(        return;
)" R"(    }
)" R"(
)" R"(    vec2 best_motion = vec2(0.0);
)" R"(    float min_diff = center_diff;
)" R"(
)" R"(    // Large diamond (radius 2)
)" R"(    const vec2 diamond_large[4] = vec2[](
)" R"(        vec2(0.0, -2.0),
)" R"(        vec2(-2.0, 0.0), vec2(2.0, 0.0),
)" R"(        vec2(0.0, 2.0)
)" R"(    );
)" R"(
)" R"(    for (int i = 0; i < 4; ++i) {
)" R"(        vec2 offset_uv = uv + diamond_large[i] * inv_render_size;
)" R"(        float luma = rgb2luma(texture(PreviousFrame, offset_uv).rgb);
)" R"(        float d = abs(curr_luma - luma) + 0.04 * length(diamond_large[i]);
)" R"(        if (d < min_diff) {
)" R"(            min_diff = d;
)" R"(            best_motion = diamond_large[i];
)" R"(        }
)" R"(    }
)" R"(
)" R"(    // Small refinement diamond (radius 1)
)" R"(    const vec2 diamond_small[4] = vec2[](
)" R"(        vec2(0.0, -1.0),
)" R"(        vec2(-1.0, 0.0), vec2(1.0, 0.0),
)" R"(        vec2(0.0, 1.0)
)" R"(    );
)" R"(
)" R"(    vec2 center = best_motion;
)" R"(    for (int i = 0; i < 4; ++i) {
)" R"(        vec2 cand = center + diamond_small[i];
)" R"(        vec2 offset_uv = uv + cand * inv_render_size;
)" R"(        float luma = rgb2luma(texture(PreviousFrame, offset_uv).rgb);
)" R"(        float d = abs(curr_luma - luma) + 0.04 * length(cand);
)" R"(        if (d < min_diff) {
)" R"(            min_diff = d;
)" R"(            best_motion = cand;
)" R"(        }
)" R"(    }
)" R"(
)" R"(    // ΓöÇΓöÇ Dampen very small motions to prevent micro-jitter ΓöÇΓöÇ
)" R"(    // Motions below ~0.5 pixels are likely noise, not real movement
)" R"(    float motion_len = length(best_motion);
)" R"(    if (motion_len < 0.5) {
)" R"(        best_motion *= motion_len * 2.0; // smooth fade to zero
)" R"(    }
)" R"(
)" R"(    imageStore(OutMotionVectors, pixel_coord, vec4(best_motion, 0.0, 0.0));
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

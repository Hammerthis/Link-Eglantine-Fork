// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view FSR3_FRAME_INTERPOLATION_COMP = {
R"(#version 460 core
)" R"(
)" R"(layout(local_size_x = 16, local_size_y = 16, local_size_z = 1) in;
)" R"(
)" R"(layout(binding = 0) uniform sampler2D CurrentFrame;
)" R"(layout(binding = 1) uniform sampler2D PreviousFrame;
)" R"(layout(binding = 2) uniform sampler2D MotionVectors;
)" R"(layout(binding = 3, rgba8) uniform writeonly image2D OutGeneratedFrame;
)" R"(
)" R"(layout(push_constant) uniform PushConstants {
)" R"(    vec2 inv_render_size;
)" R"(    vec2 render_size;
)" R"(    float blend_factor; // timestamp between 0.0 and 1.0
)" R"(    float flow_scale;
)" R"(};
)" R"(
)" R"(// ΓöÇΓöÇ Optimized 3├ù3 motion vector median using textureGather ΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇ
)" R"(// textureGather fetches a 2├ù2 quad per call, so we only need 4 calls
)" R"(// to cover a 3├ù3 neighbourhood (vs 9 individual texture() calls).
)" R"(// We extract the median of X and Y components independently.
)" R"(void insertionSort5(inout float a[5]) {
)" R"(    for (int i = 1; i < 5; i++) {
)" R"(        float key = a[i];
)" R"(        int j = i - 1;
)" R"(        while (j >= 0 && a[j] > key) {
)" R"(            a[j + 1] = a[j];
)" R"(            j--;
)" R"(        }
)" R"(        a[j + 1] = key;
)" R"(    }
)" R"(}
)" R"(
)" R"(vec2 sampleMotionMedian(vec2 uv) {
)" R"(    vec2 texel = inv_render_size;
)" R"(
)" R"(    // textureGather returns 2├ù2 quads: (x-0.5, y-0.5) to (x+0.5, y+0.5)
)" R"(    // We use 4 gathers offset to cover the 3├ù3 region
)" R"(    // Gather component 0 = R (motion X), component 1 = G (motion Y)
)" R"(    vec4 gx0 = textureGather(MotionVectors, uv + vec2(-0.5, -0.5) * texel, 0); // TL quad
)" R"(    vec4 gx1 = textureGather(MotionVectors, uv + vec2( 0.5, -0.5) * texel, 0); // TR quad
)" R"(    vec4 gx2 = textureGather(MotionVectors, uv + vec2(-0.5,  0.5) * texel, 0); // BL quad
)" R"(    vec4 gx3 = textureGather(MotionVectors, uv + vec2( 0.5,  0.5) * texel, 0); // BR quad
)" R"(
)" R"(    vec4 gy0 = textureGather(MotionVectors, uv + vec2(-0.5, -0.5) * texel, 1);
)" R"(    vec4 gy1 = textureGather(MotionVectors, uv + vec2( 0.5, -0.5) * texel, 1);
)" R"(    vec4 gy2 = textureGather(MotionVectors, uv + vec2(-0.5,  0.5) * texel, 1);
)" R"(    vec4 gy3 = textureGather(MotionVectors, uv + vec2( 0.5,  0.5) * texel, 1);
)" R"(
)" R"(    // Extract 9 unique samples from overlapping 2├ù2 quads
)" R"(    // gatherN.w=TL, .z=TR, .x=BL, .y=BR of each quad
)" R"(    // 3├ù3 grid: row0=[gx0.w, gx0.z/gx1.w, gx1.z]
)" R"(    //           row1=[gx0.x/gx2.w, center, gx1.y/gx3.z]
)" R"(    //           row2=[gx2.x, gx2.y/gx3.x, gx3.y]
)" R"(    float xs[9] = float[](gx0.w, gx1.w, gx1.z, gx0.x, texture(MotionVectors, uv).x, gx1.y, gx2.x, gx3.x, gx3.y);
)" R"(    float ys[9] = float[](gy0.w, gy1.w, gy1.z, gy0.x, texture(MotionVectors, uv).y, gy1.y, gy2.x, gy3.x, gy3.y);
)" R"(
)" R"(    // Partial sort: only need to find element [4] (median)
)" R"(    // Use two passes of 5-element insertion sort on the lower half
)" R"(    float xlo[5] = float[](xs[0], xs[1], xs[2], xs[3], xs[4]);
)" R"(    float ylo[5] = float[](ys[0], ys[1], ys[2], ys[3], ys[4]);
)" R"(    insertionSort5(xlo);
)" R"(    insertionSort5(ylo);
)" R"(
)" R"(    // Insert remaining 4 elements, keeping only the 5 smallest
)" R"(    for (int i = 5; i < 9; i++) {
)" R"(        if (xs[i] < xlo[4]) { xlo[4] = xs[i]; insertionSort5(xlo); }
)" R"(        if (ys[i] < ylo[4]) { ylo[4] = ys[i]; insertionSort5(ylo); }
)" R"(    }
)" R"(
)" R"(    return vec2(xlo[4], ylo[4]);
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    ivec2 pixel_coord = ivec2(gl_GlobalInvocationID.xy);
)" R"(    if (pixel_coord.x >= int(render_size.x) || pixel_coord.y >= int(render_size.y)) {
)" R"(        return;
)" R"(    }
)" R"(
)" R"(    vec2 uv = (vec2(pixel_coord) + 0.5) * inv_render_size;
)" R"(
)" R"(    // Median-filtered motion vector (reduces outlier jitter)
)" R"(    vec2 motion = sampleMotionMedian(uv) * (flow_scale * inv_render_size);
)" R"(
)" R"(    // Forward and backward warped coordinates
)" R"(    vec2 forward_uv  = clamp(uv - motion * blend_factor,        0.0, 1.0);
)" R"(    vec2 backward_uv = clamp(uv + motion * (1.0 - blend_factor), 0.0, 1.0);
)" R"(
)" R"(    vec4 forward_color  = texture(PreviousFrame, forward_uv);
)" R"(    vec4 backward_color = texture(CurrentFrame,  backward_uv);
)" R"(
)" R"(    // Colour-difference occlusion
)" R"(    vec3 color_diff = abs(forward_color.rgb - backward_color.rgb);
)" R"(    float occlusion = clamp(dot(color_diff, vec3(0.333)) * 2.0, 0.0, 1.0);
)" R"(
)" R"(    // Smooth bilateral interpolation ΓÇö bias toward centre on occlusion
)" R"(    float alpha = mix(blend_factor, 0.5, occlusion * 0.4);
)" R"(    vec4 interpolated = mix(forward_color, backward_color, alpha);
)" R"(
)" R"(    // ΓöÇΓöÇ Anti-flicker: blend with un-warped centre pixel ΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇΓöÇ
)" R"(    float motion_magnitude = length(motion * render_size);
)" R"(    float direct_weight = exp(-motion_magnitude * 0.5);
)" R"(    vec4 center_color = mix(texture(CurrentFrame, uv), texture(PreviousFrame, uv), blend_factor);
)" R"(    interpolated = mix(interpolated, center_color, direct_weight * 0.3);
)" R"(
)" R"(    imageStore(OutGeneratedFrame, pixel_coord, interpolated);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

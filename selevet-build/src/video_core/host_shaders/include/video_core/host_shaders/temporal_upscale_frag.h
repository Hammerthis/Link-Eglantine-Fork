// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view TEMPORAL_UPSCALE_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(// Stands in for a game's DLSS evaluation (the tensor-core network cannot run here): a temporal
)" R"(// upscale. Each frame's input samples are placed where the camera jitter put them and weighted by
)" R"(// their distance to the output pixel; they accumulate with the previous output, reprojected along
)" R"(// the game's motion vectors (bicubic) and clipped to the current 3x3 neighbourhood.
)" R"(
)" R"(#version 450
)" R"(
)" R"(layout(binding = 0) uniform sampler2D input_color;
)" R"(layout(binding = 1) uniform sampler2D motion_vectors;
)" R"(layout(binding = 2) uniform sampler2D history;
)" R"(
)" R"(layout(push_constant) uniform PushConstants {
)" R"(    // The vertex stage's texture scale and offset come first.
)" R"(    layout(offset = 16) vec2 jitter;  // this frame's sample offset, in input pixels
)" R"(    vec2 motion_scale;                // motion vector -> UV offset to the previous frame
)" R"(    float current_weight;             // largest weight of this frame; 1 ignores the history
)" R"(};
)" R"(
)" R"(layout(location = 0) in vec2 texcoord;  // 0 to 1 across the output
)" R"(layout(location = 0) out vec4 color;
)" R"(
)" R"(// The blit helper's samplers take unnormalized (texel) coordinates.
)" R"(
)" R"(// Blending in a range-compressed space keeps bright pixels from dominating the average.
)" R"(vec3 Compress(vec3 c) {
)" R"(    return c / (1.0 + max(max(c.r, c.g), c.b));
)" R"(}
)" R"(
)" R"(vec3 Expand(vec3 c) {
)" R"(    c = clamp(c, vec3(0.0), vec3(1.0 - 1.0 / 65504.0));
)" R"(    return c / (1.0 - max(max(c.r, c.g), c.b));
)" R"(}
)" R"(
)" R"(vec3 RgbToYCoCg(vec3 c) {
)" R"(    return vec3(dot(c, vec3(0.25, 0.5, 0.25)), dot(c, vec3(0.5, 0.0, -0.5)),
)" R"(                dot(c, vec3(-0.25, 0.5, -0.25)));
)" R"(}
)" R"(
)" R"(vec3 YCoCgToRgb(vec3 c) {
)" R"(    return vec3(c.x + c.y - c.z, c.x + c.z, c.x - c.y - c.z);
)" R"(}
)" R"(
)" R"(// Moves value towards the box centre until it lies inside the box.
)" R"(vec3 ClipToBox(vec3 value, vec3 low, vec3 high) {
)" R"(    const vec3 center = 0.5 * (low + high);
)" R"(    const vec3 extent = 0.5 * (high - low) + 1.0 / 65504.0;
)" R"(    const vec3 offset = value - center;
)" R"(    const vec3 units = abs(offset / extent);
)" R"(    const float largest = max(units.x, max(units.y, units.z));
)" R"(    return largest > 1.0 ? center + offset / largest : value;
)" R"(}
)" R"(
)" R"(// Catmull-Rom filtered history from five bilinear fetches: repeated bilinear reprojection would
)" R"(// blur the accumulated image a little more every frame.
)" R"(vec3 SampleHistory(vec2 position) {
)" R"(    const vec2 texel1 = floor(position - 0.5) + 0.5;
)" R"(    const vec2 f = position - texel1;
)" R"(    const vec2 w0 = f * (-0.5 + f * (1.0 - 0.5 * f));
)" R"(    const vec2 w1 = 1.0 + f * f * (-2.5 + 1.5 * f);
)" R"(    const vec2 w2 = f * (0.5 + f * (2.0 - 1.5 * f));
)" R"(    const vec2 w3 = f * f * (-0.5 + 0.5 * f);
)" R"(    const vec2 w12 = w1 + w2;
)" R"(    const vec2 texel0 = texel1 - 1.0;
)" R"(    const vec2 texel3 = texel1 + 2.0;
)" R"(    const vec2 texel12 = texel1 + w2 / w12;
)" R"(    vec3 sum = texture(history, vec2(texel12.x, texel0.y)).rgb * (w12.x * w0.y);
)" R"(    sum += texture(history, vec2(texel0.x, texel12.y)).rgb * (w0.x * w12.y);
)" R"(    sum += texture(history, texel12).rgb * (w12.x * w12.y);
)" R"(    sum += texture(history, vec2(texel3.x, texel12.y)).rgb * (w3.x * w12.y);
)" R"(    sum += texture(history, vec2(texel12.x, texel3.y)).rgb * (w12.x * w3.y);
)" R"(    const float weight = w12.x * w0.y + w0.x * w12.y + w12.x * w12.y + w3.x * w12.y + w12.x * w3.y;
)" R"(    return max(sum / weight, vec3(0.0));
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    const ivec2 input_size = textureSize(input_color, 0);
)" R"(    const ivec2 motion_size = textureSize(motion_vectors, 0);
)" R"(    // The output pixel's centre in input pixels. Input texel k sampled the scene at k + 0.5 - jitter
)" R"(    // (the sign measured against consecutive frames).
)" R"(    const vec2 target = texcoord * vec2(input_size);
)" R"(    const ivec2 nearest = ivec2(floor(target + jitter));
)" R"(
)" R"(    vec3 filtered = vec3(0.0);
)" R"(    float total_weight = 0.0;
)" R"(    float nearest_weight = 0.0;
)" R"(    vec3 sum = vec3(0.0);
)" R"(    vec3 squares = vec3(0.0);
)" R"(    vec2 motion = vec2(0.0);
)" R"(    float longest = -1.0;
)" R"(    for (int y = -1; y <= 1; ++y) {
)" R"(        for (int x = -1; x <= 1; ++x) {
)" R"(            const ivec2 texel = clamp(nearest + ivec2(x, y), ivec2(0), input_size - 1);
)" R"(            const vec3 sample_color = RgbToYCoCg(Compress(texelFetch(input_color, texel, 0).rgb));
)" R"(            // A Blackman-Harris-like window over the sample's distance to the output pixel.
)" R"(            const vec2 distance = vec2(texel) + 0.5 - jitter - target;
)" R"(            const float weight = exp(-2.29 * dot(distance, distance));
)" R"(            filtered += sample_color * weight;
)" R"(            total_weight += weight;
)" R"(            nearest_weight = max(nearest_weight, weight);
)" R"(            sum += sample_color;
)" R"(            squares += sample_color * sample_color;
)" R"(            // The longest motion around the pixel, so that an edge follows the object in front.
)" R"(            const vec2 candidate =
)" R"(                texelFetch(motion_vectors, clamp(texel, ivec2(0), motion_size - 1), 0).rg;
)" R"(            const float length_squared = dot(candidate, candidate);
)" R"(            if (length_squared > longest) {
)" R"(                longest = length_squared;
)" R"(                motion = candidate;
)" R"(            }
)" R"(        }
)" R"(    }
)" R"(    const vec3 current = filtered / total_weight;
)" R"(    const vec3 mean = sum / 9.0;
)" R"(    const vec3 deviation = sqrt(max(squares / 9.0 - mean * mean, vec3(0.0)));
)" R"(    const vec3 low = mean - deviation;
)" R"(    const vec3 high = mean + deviation;
)" R"(
)" R"(    const vec2 previous = texcoord + motion * motion_scale;
)" R"(    // A frame whose samples land close to this pixel counts more; one whose samples land between
)" R"(    // pixels mostly keeps the history (from other jitter positions) there.
)" R"(    float weight = current_weight * nearest_weight;
)" R"(    if (current_weight >= 1.0 || any(lessThan(previous, vec2(0.0))) ||
)" R"(        any(greaterThan(previous, vec2(1.0)))) {
)" R"(        weight = 1.0;
)" R"(    }
)" R"(    const vec2 history_position = previous * vec2(textureSize(history, 0));
)" R"(    const vec3 past = ClipToBox(RgbToYCoCg(Compress(SampleHistory(history_position))), low, high);
)" R"(    color = vec4(Expand(YCoCgToRgb(mix(past, current, weight))), 1.0);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

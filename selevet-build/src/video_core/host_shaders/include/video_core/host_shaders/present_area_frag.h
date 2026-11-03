// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view PRESENT_AREA_FRAG = {
R"(#version 460 core
)" R"(
)" R"(layout(location = 0) in vec2 frag_tex_coord;
)" R"(layout(location = 0) out vec4 color;
)" R"(layout(binding = 0) uniform sampler2D color_texture;
)" R"(
)" R"(#ifdef VULKAN
)" R"(
)" R"(struct ScreenRectVertex {
)" R"(    vec2 position;
)" R"(    vec2 tex_coord;
)" R"(};
)" R"(layout (push_constant) uniform PushConstants {
)" R"(    mat4 modelview_matrix;
)" R"(    ScreenRectVertex vertices[4];
)" R"(};
)" R"(
)" R"(#else // OpenGL
)" R"(
)" R"(layout(location = 1) uniform uvec2 screen_size;
)" R"(
)" R"(#endif
)" R"(
)" R"(/***** Area Sampling *****/
)" R"(
)" R"(// By Sam Belliveau and Filippo Tarpini. Public Domain license.
)" R"(// Effectively a more accurate sharp bilinear filter when upscaling,
)" R"(// that also works as a mathematically perfect downscale filter.
)" R"(// https://entropymine.com/imageworsener/pixelmixing/
)" R"(// https://github.com/obsproject/obs-studio/pull/1715
)" R"(// https://legacy.imagemagick.org/Usage/filter/
)" R"(vec4 AreaSampling(sampler2D textureSampler, vec2 texCoords, vec2 source_size, vec2 target_size) {
)" R"(    // Determine the sizes of the source and target images.
)" R"(    vec2 inverted_target_size = vec2(1.0) / target_size;
)" R"(
)" R"(    // Determine the range of the source image that the target pixel will cover.
)" R"(    vec2 range = source_size * inverted_target_size;
)" R"(    vec2 beg = (texCoords.xy * source_size) - (range * 0.5);
)" R"(    vec2 end = beg + range;
)" R"(
)" R"(    // Compute the top-left and bottom-right corners of the pixel box.
)" R"(    ivec2 f_beg = ivec2(floor(beg));
)" R"(    ivec2 f_end = ivec2(floor(end));
)" R"(
)" R"(    // Compute how much of the start and end pixels are covered horizontally & vertically.
)" R"(    float area_w = 1.0 - fract(beg.x);
)" R"(    float area_n = 1.0 - fract(beg.y);
)" R"(    float area_e = fract(end.x);
)" R"(    float area_s = fract(end.y);
)" R"(
)" R"(    // Compute the areas of the corner pixels in the pixel box.
)" R"(    float area_nw = area_n * area_w;
)" R"(    float area_ne = area_n * area_e;
)" R"(    float area_sw = area_s * area_w;
)" R"(    float area_se = area_s * area_e;
)" R"(
)" R"(    // Initialize the color accumulator.
)" R"(    vec4 avg_color = vec4(0.0, 0.0, 0.0, 0.0);
)" R"(
)" R"(    // Accumulate corner pixels.
)" R"(    avg_color += area_nw * texelFetch(textureSampler, ivec2(f_beg.x, f_beg.y), 0);
)" R"(    avg_color += area_ne * texelFetch(textureSampler, ivec2(f_end.x, f_beg.y), 0);
)" R"(    avg_color += area_sw * texelFetch(textureSampler, ivec2(f_beg.x, f_end.y), 0);
)" R"(    avg_color += area_se * texelFetch(textureSampler, ivec2(f_end.x, f_end.y), 0);
)" R"(
)" R"(    // Determine the size of the pixel box.
)" R"(    int x_range = int(f_end.x - f_beg.x - 0.5);
)" R"(    int y_range = int(f_end.y - f_beg.y - 0.5);
)" R"(
)" R"(    // Accumulate top and bottom edge pixels.
)" R"(    for (int x = f_beg.x + 1; x <= f_beg.x + x_range; ++x) {
)" R"(        avg_color += area_n * texelFetch(textureSampler, ivec2(x, f_beg.y), 0);
)" R"(        avg_color += area_s * texelFetch(textureSampler, ivec2(x, f_end.y), 0);
)" R"(    }
)" R"(
)" R"(    // Accumulate left and right edge pixels and all the pixels in between.
)" R"(    for (int y = f_beg.y + 1; y <= f_beg.y + y_range; ++y) {
)" R"(        avg_color += area_w * texelFetch(textureSampler, ivec2(f_beg.x, y), 0);
)" R"(        avg_color += area_e * texelFetch(textureSampler, ivec2(f_end.x, y), 0);
)" R"(
)" R"(        for (int x = f_beg.x + 1; x <= f_beg.x + x_range; ++x) {
)" R"(            avg_color += texelFetch(textureSampler, ivec2(x, y), 0);
)" R"(        }
)" R"(    }
)" R"(
)" R"(    // Compute the area of the pixel box that was sampled.
)" R"(    float area_corners = area_nw + area_ne + area_sw + area_se;
)" R"(    float area_edges = float(x_range) * (area_n + area_s) + float(y_range) * (area_w + area_e);
)" R"(    float area_center = float(x_range) * float(y_range);
)" R"(
)" R"(    // Return the normalized average color.
)" R"(    return avg_color / (area_corners + area_edges + area_center);
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    vec2 source_image_size = textureSize(color_texture, 0);
)" R"(    vec2 window_size;
)" R"(
)" R"(    #ifdef VULKAN
)" R"(    window_size.x = vertices[1].position.x - vertices[0].position.x;
)" R"(    window_size.y = vertices[2].position.y - vertices[0].position.y;
)" R"(    #else // OpenGL
)" R"(    window_size = screen_size;
)" R"(    #endif
)" R"(
)" R"(    color = AreaSampling(color_texture, frag_tex_coord, source_image_size, window_size);
)" R"(}
)" R"(
)" 
};

} // namespace HostShaders

// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view BLOCK_LINEAR_UNSWIZZLE_3D_BCN_COMP = {
R"(// SPDX-FileCopyrightText: Copyright 2025 Eden Emulator Project
)" R"(// SPDX-License-Identifier: GPL-3.0-or-later
)" R"(
)" R"(#version 430
)" R"(
)" R"(#ifdef VULKAN
)" R"(    #extension GL_EXT_shader_16bit_storage : require
)" R"(    #extension GL_EXT_shader_8bit_storage  : require
)" R"(    #define HAS_EXTENDED_TYPES 1
)" R"(    #define BEGIN_PUSH_CONSTANTS layout(push_constant) uniform PushConstants {
)" R"(    #define END_PUSH_CONSTANTS };
)" R"(    #define UNIFORM(n)
)" R"(    #define BINDING_INPUT_BUFFER   0
)" R"(    #define BINDING_OUTPUT_BUFFER  1
)" R"(#else
)" R"(    #extension GL_NV_gpu_shader5 : enable
)" R"(    #ifdef GL_NV_gpu_shader5
)" R"(        #define HAS_EXTENDED_TYPES 1
)" R"(    #else
)" R"(        #define HAS_EXTENDED_TYPES 0
)" R"(    #endif
)" R"(    #define BEGIN_PUSH_CONSTANTS
)" R"(    #define END_PUSH_CONSTANTS
)" R"(    #define UNIFORM(n) layout(location = n) uniform
)" R"(    #define BINDING_INPUT_BUFFER   1
)" R"(    #define BINDING_OUTPUT_BUFFER  0
)" R"(#endif
)" R"(
)" R"(// --- Push Constants / Uniforms ---
)" R"(#ifdef VULKAN
)" R"(layout(push_constant) uniform PushConstants {
)" R"(    uvec3 blocks_dim;           // Offset 0
)" R"(    uint bytes_per_block_log2;  // Offset 12
)" R"(
)" R"(    uvec3 origin;               // Offset 16
)" R"(    uint slice_size;            // Offset 28
)" R"(
)" R"(    uint block_size;            // Offset 32
)" R"(    uint x_shift;               // Offset 36
)" R"(    uint block_height;          // Offset 40
)" R"(    uint block_height_mask;     // Offset 44
)" R"(
)" R"(    uint block_depth;           // Offset 48
)" R"(    uint block_depth_mask;      // Offset 52
)" R"(    uint native_tiling;                   // Offset 56
)" R"(
)" R"(    ivec3 destination;          // Offset 60
)" R"(} pc;
)" R"(#else
)" R"(BEGIN_PUSH_CONSTANTS
)" R"(    UNIFORM(0)  uvec3 origin;
)" R"(    UNIFORM(1)  ivec3 destination;
)" R"(    UNIFORM(2)  uint  bytes_per_block_log2;
)" R"(    UNIFORM(3)  uint  slice_size;
)" R"(    UNIFORM(4)  uint  block_size;
)" R"(    UNIFORM(5)  uint  x_shift;
)" R"(    UNIFORM(6)  uint  block_height;
)" R"(    UNIFORM(7)  uint  block_height_mask;
)" R"(    UNIFORM(8)  uint  block_depth;
)" R"(    UNIFORM(9)  uint  block_depth_mask;
)" R"(    UNIFORM(10) uvec3 blocks_dim;
)" R"(    UNIFORM(11) uint native_tiling;
)" R"(END_PUSH_CONSTANTS
)" R"(#define pc // Map pc prefix to nothing for OpenGL compatibility
)" R"(#endif
)" R"(
)" R"(// --- Buffers ---
)" R"(#if HAS_EXTENDED_TYPES
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) buffer InputBufferU8   { uint8_t  u8data[];  };
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) buffer InputBufferU16  { uint16_t u16data[]; };
)" R"(#endif
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) buffer InputBufferU32  { uint   u32data[];  };
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) buffer InputBufferU64  { uvec2  u64data[];  };
)" R"(layout(binding = BINDING_INPUT_BUFFER, std430) buffer InputBufferU128 { uvec4  u128data[]; };
)" R"(
)" R"(layout(binding = BINDING_OUTPUT_BUFFER, std430) writeonly buffer OutputBuffer {
)" R"(    uint out_u32[];
)" R"(};
)" R"(
)" R"(// --- Constants ---
)" R"(layout(local_size_x = 8, local_size_y = 8, local_size_z = 4) in;
)" R"(
)" R"(const uint GOB_SIZE_X = 64;
)" R"(const uint GOB_SIZE_Y = 8;
)" R"(const uint GOB_SIZE_Z = 1;
)" R"(const uint GOB_SIZE   = GOB_SIZE_X * GOB_SIZE_Y * GOB_SIZE_Z;
)" R"(
)" R"(const uint GOB_SIZE_X_SHIFT = 6;
)" R"(const uint GOB_SIZE_Y_SHIFT = 3;
)" R"(const uint GOB_SIZE_Z_SHIFT = 0;
)" R"(const uint GOB_SIZE_SHIFT   = GOB_SIZE_X_SHIFT + GOB_SIZE_Y_SHIFT + GOB_SIZE_Z_SHIFT;
)" R"(const uvec2 SWIZZLE_MASK = uvec2(GOB_SIZE_X - 1u, GOB_SIZE_Y - 1u);
)" R"(
)" R"(uint SwizzleTable(uint pos) {
)" R"(    const uint t[8] = uint[](
)" R"(        0x12100200, 0x13110301, 0x16140604, 0x17150705,
)" R"(        0x1a180a08, 0x1b190b09, 0x1e1c0e0c, 0x1f1d0f0d
)" R"(    );
)" R"(    const uint i = pos >> 4;
)" R"(    const uint h = (t[i / 4] >> ((i % 4) * 8)) & 0xff;
)" R"(    return (h << 4) | (pos & 0xf);
)" R"(}
)" R"(
)" R"(// --- Helpers ---
)" R"(uint SwizzleOffset(uvec2 pos) {
)" R"(    pos &= SWIZZLE_MASK;
)" R"(    uint offset = SwizzleTable(pos.y * 64 + pos.x);
)" R"(    if (pc.native_tiling != 0) {
)" R"(        uint difference = ((offset >> 5) ^ (offset >> 6)) & 1;
)" R"(        offset ^= (difference << 5) | (difference << 6);
)" R"(    }
)" R"(    return offset;
)" R"(}
)" R"(
)" R"(uvec4 ReadTexel(uint offset) {
)" R"(    uint bpl2 = pc.bytes_per_block_log2;
)" R"(    switch (bpl2) {
)" R"(#if HAS_EXTENDED_TYPES
)" R"(        case 0u: return uvec4(u8data[offset], 0u, 0u, 0u);
)" R"(        case 1u: return uvec4(u16data[offset / 2u], 0u, 0u, 0u);
)" R"(#else
)" R"(        case 0u: return uvec4(bitfieldExtract(u32data[offset / 4u], int((offset * 8u) & 24u), 8), 0u, 0u, 0u);
)" R"(        case 1u: return uvec4(bitfieldExtract(u32data[offset / 4u], int((offset * 8u) & 16u), 16), 0u, 0u, 0u);
)" R"(#endif
)" R"(        case 2u: return uvec4(u32data[offset / 4u], 0u, 0u, 0u);
)" R"(        case 3u: return uvec4(u64data[offset / 8u], 0u, 0u);
)" R"(        case 4u: return u128data[offset / 16u];
)" R"(    }
)" R"(    return uvec4(0u);
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    uvec3 block_coord = gl_GlobalInvocationID;
)" R"(    if (any(greaterThanEqual(block_coord, pc.blocks_dim))) {
)" R"(        return;
)" R"(    }
)" R"(
)" R"(    uint bytes_per_block = 1u << pc.bytes_per_block_log2;
)" R"(    // Origin is in pixels, divide by 4 for block-space (e.g. BCn formats)
)" R"(    uvec3 pos;
)" R"(    pos.x = (block_coord.x + (pc.origin.x >> 2u)) * bytes_per_block;
)" R"(    pos.y = block_coord.y + (pc.origin.y >> 2u);
)" R"(    pos.z = block_coord.z + pc.origin.z;
)" R"(
)" R"(    uint swizzle = SwizzleOffset(pos.xy);
)" R"(    uint block_y = pos.y >> GOB_SIZE_Y_SHIFT;
)" R"(    uint offset  = 0u;
)" R"(    // Apply block-linear offsets
)" R"(    offset += (pos.z >> pc.block_depth) * pc.slice_size;
)" R"(    offset += (pos.z & pc.block_depth_mask) << (GOB_SIZE_SHIFT + pc.block_height);
)" R"(    offset += (block_y >> pc.block_height) * pc.block_size;
)" R"(    offset += (block_y & pc.block_height_mask) << GOB_SIZE_SHIFT;
)" R"(    offset += (pos.x >> GOB_SIZE_X_SHIFT) << pc.x_shift;
)" R"(    offset += swizzle;
)" R"(
)" R"(    uvec4 texel = ReadTexel(offset);
)" R"(
)" R"(    // Calculate linear output index
)" R"(    uint block_index = block_coord.x +
)" R"(                       (block_coord.y * pc.blocks_dim.x) +
)" R"(                       (block_coord.z * pc.blocks_dim.x * pc.blocks_dim.y);
)" R"(    uint out_idx = block_index * (bytes_per_block >> 2u);
)" R"(
)" R"(    out_u32[out_idx]     = texel.x;
)" R"(    out_u32[out_idx + 1u] = texel.y;
)" R"(    if (pc.bytes_per_block_log2 == 4u) {
)" R"(        out_u32[out_idx + 2u] = texel.z;
)" R"(        out_u32[out_idx + 3u] = texel.w;
)" R"(    }
)" R"(}
)" 
};

} // namespace HostShaders

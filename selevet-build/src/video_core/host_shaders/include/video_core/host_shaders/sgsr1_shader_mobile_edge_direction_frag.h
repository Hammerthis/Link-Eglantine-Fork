// SPDX-FileCopyrightText: 2020 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <string_view>

namespace HostShaders {

constexpr std::string_view SGSR1_SHADER_MOBILE_EDGE_DIRECTION_FRAG = {
R"(// SPDX-FileCopyrightText: Copyright (c) 2025, Qualcomm Innovation Center, Inc. All rights reserved.
)" R"(// SPDX-License-Identifier: BSD-3-Clause
)" R"(
)" R"(#version 460 core
)" R"(
)" R"(//precision float;
)" R"(//precision int;
)" R"(
)" R"(// Operation modes: RGBA -> 1, RGBY -> 3, LERP -> 4
)" R"(#define OperationMode 1
)" R"(#define EdgeThreshold 8.0/255.0
)" R"(
)" R"(layout( push_constant ) uniform constants {
)" R"(    vec4 ViewportInfo[1];
)" R"(    vec2 ResizeFactor;
)" R"(    vec2 CropOffset;
)" R"(    float EdgeSharpness;
)" R"(};
)" R"(layout(set = 0, binding = 0) uniform sampler2D ps0;
)" R"(layout(location=0) in vec2 in_TEXCOORD0;
)" R"(layout(location=0) out vec4 out_Target0;
)" R"(
)" R"(float fastLanczos2(float x) {
)" R"(    float wA = x-4.0;
)" R"(    float wB = x*wA-wA;
)" R"(    wA *= wA;
)" R"(    return wB*wA;
)" R"(}
)" R"(
)" R"(vec2 weightY(float dx, float dy, float c, vec3 data) {
)" R"(    float std = data.x;
)" R"(    vec2 dir = data.yz;
)" R"(    float edgeDis = ((dx*dir.y)+(dy*dir.x));
)" R"(    float x = (((dx*dx)+(dy*dy))+((edgeDis*edgeDis)*((clamp(((c*c)*std),0.0,1.0)*0.7)+-1.0)));
)" R"(    float w = fastLanczos2(x);
)" R"(    return vec2(w, w * c);
)" R"(}
)" R"(
)" R"(vec2 edgeDirection(vec4 left, vec4 right) {
)" R"(    vec2 dir;
)" R"(    float RxLz = (right.x + (-left.z));
)" R"(    float RwLy = (right.w + (-left.y));
)" R"(    vec2 delta;
)" R"(    delta.x = (RxLz + RwLy);
)" R"(    delta.y = (RxLz + (-RwLy));
)" R"(    float lengthInv = inversesqrt((delta.x * delta.x+ 3.075740e-05) + (delta.y * delta.y));
)" R"(    dir.x = (delta.x * lengthInv);
)" R"(    dir.y = (delta.y * lengthInv);
)" R"(    return dir;
)" R"(}
)" R"(
)" R"(void main() {
)" R"(    vec4 color;
)" R"(    if(OperationMode == 1)
)" R"(        color.xyz = textureLod(ps0, in_TEXCOORD0.xy, 0.0).xyz;
)" R"(    else
)" R"(        color.xyzw = textureLod(ps0, in_TEXCOORD0.xy, 0.0).xyzw;
)" R"(
)" R"(    if ( OperationMode!=4) {
)" R"(        vec2 imgCoord = ((in_TEXCOORD0.xy*ViewportInfo[0].zw)+vec2(-0.5,0.5));
)" R"(        vec2 imgCoordPixel = floor(imgCoord);
)" R"(        vec2 coord = (imgCoordPixel*ViewportInfo[0].xy);
)" R"(        vec2 pl = imgCoord - imgCoordPixel;
)" R"(        vec4  left = textureGather(ps0, coord, OperationMode);
)" R"(        float edgeVote = abs(left.z - left.y) + abs(color[OperationMode] - left.y)  + abs(color[OperationMode] - left.z) ;
)" R"(        if(edgeVote > EdgeThreshold) {
)" R"(            coord.x += ViewportInfo[0].x;
)" R"(
)" R"(            vec2 IR_highp_vec2_0 = coord + vec2(ViewportInfo[0].x, 0.0);
)" R"(            vec4 right = textureGather(ps0, IR_highp_vec2_0, OperationMode);
)" R"(            vec4 upDown;
)" R"(            vec2 IR_highp_vec2_1 = coord + vec2(0.0, -ViewportInfo[0].y);
)" R"(            upDown.xy = textureGather(ps0, IR_highp_vec2_1, OperationMode).wz;
)" R"(            vec2 IR_highp_vec2_2 = coord + vec2(0.0, ViewportInfo[0].y);
)" R"(            upDown.zw  = textureGather(ps0, IR_highp_vec2_2, OperationMode).yx;
)" R"(
)" R"(            float mean = (left.y+left.z+right.x+right.w)*0.25;
)" R"(            left = left - vec4(mean);
)" R"(            right = right - vec4(mean);
)" R"(            upDown = upDown - vec4(mean);
)" R"(            color.w =color[OperationMode] - mean;
)" R"(
)" R"(            float sum = (((((abs(left.x)+abs(left.y))+abs(left.z))+abs(left.w))+(((abs(right.x)+abs(right.y))+abs(right.z))+abs(right.w)))+(((abs(upDown.x)+abs(upDown.y))+abs(upDown.z))+abs(upDown.w)));
)" R"(            float sumMean = 1.014185e+01/sum;
)" R"(            float std = (sumMean*sumMean);
)" R"(
)" R"(            vec3 data = vec3(std, edgeDirection(left, right));
)" R"(            vec2 aWY = weightY(pl.x, pl.y+1.0, upDown.x,data);
)" R"(            aWY += weightY(pl.x-1.0, pl.y+1.0, upDown.y,data);
)" R"(            aWY += weightY(pl.x-1.0, pl.y-2.0, upDown.z,data);
)" R"(            aWY += weightY(pl.x, pl.y-2.0, upDown.w,data);
)" R"(            aWY += weightY(pl.x+1.0, pl.y-1.0, left.x,data);
)" R"(            aWY += weightY(pl.x, pl.y-1.0, left.y,data);
)" R"(            aWY += weightY(pl.x, pl.y, left.z,data);
)" R"(            aWY += weightY(pl.x+1.0, pl.y, left.w,data);
)" R"(            aWY += weightY(pl.x-1.0, pl.y-1.0, right.x,data);
)" R"(            aWY += weightY(pl.x-2.0, pl.y-1.0, right.y,data);
)" R"(            aWY += weightY(pl.x-2.0, pl.y, right.z,data);
)" R"(            aWY += weightY(pl.x-1.0, pl.y, right.w,data);
)" R"(
)" R"(            float finalY = aWY.y/aWY.x;
)" R"(            float maxY = max(max(left.y,left.z),max(right.x,right.w));
)" R"(            float minY = min(min(left.y,left.z),min(right.x,right.w));
)" R"(            float deltaY = clamp(EdgeSharpness*finalY, minY, maxY) -color.w;
)" R"(
)" R"(            //smooth high contrast input
)" R"(            deltaY = clamp(deltaY, -23.0 / 255.0, 23.0 / 255.0);
)" R"(
)" R"(            color.x = clamp((color.x+deltaY),0.0,1.0);
)" R"(            color.y = clamp((color.y+deltaY),0.0,1.0);
)" R"(            color.z = clamp((color.z+deltaY),0.0,1.0);
)" R"(        }
)" R"(    }
)" R"(    color.w = 1.0;  //assume alpha channel is not used
)" R"(    out_Target0.xyzw = color;
)" R"(}
)" 
};

} // namespace HostShaders

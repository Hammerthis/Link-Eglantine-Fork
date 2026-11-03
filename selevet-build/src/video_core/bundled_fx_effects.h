// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include <string_view>

namespace VideoCore {

struct BundledFxEffect {
    std::string_view name;
    std::string_view source;
};

constexpr BundledFxEffect BUNDLED_FX_EFFECTS[]{
    {
        "AMDBoost.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(// AMD Boost - Combined AMD FidelityFX enhancement suite
)"
        R"(// Implements FSR 1 EASU upscaling + RCAS sharpening + optional denoising
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float ScaleFactor <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Scale Factor";
)"
        R"(    ui_tooltip = "Upscaling factor (1.0 = native, 1.5 = 1.5x, 2.0 = 2x). Higher values require more performance.";
)"
        R"(    ui_min = 1.0; ui_max = 4.0; ui_step = 0.1;
)"
        R"(> = 1.5;
)"
        R"(
)"
        R"(uniform float Sharpness <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Sharpness";
)"
        R"(    ui_tooltip = "RCAS sharpening strength. Higher values increase edge contrast.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.01;
)"
        R"(> = 0.5;
)"
        R"(
)"
        R"(uniform bool EnableDenoise <
)"
        R"(    ui_type = "checkbox";
)"
        R"(    ui_label = "Enable Denoising";
)"
        R"(    ui_tooltip = "Apply a light denoising pass before upscaling to reduce artifacts.";
)"
        R"(> = false;
)"
        R"(
)"
        R"(uniform float DenoiseStrength <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Denoise Strength";
)"
        R"(    ui_tooltip = "Strength of the denoising filter. Only applies when denoising is enabled.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.01;
)"
        R"(> = 0.3;
)"
        R"(
)"
        R"(uniform bool EnableUpscaling <
)"
        R"(    ui_type = "checkbox";
)"
        R"(    ui_label = "Enable Upscaling";
)"
        R"(    ui_tooltip = "Enable FSR 1 EASU upscaling. Disable for sharpening only.";
)"
        R"(> = true;
)"
        R"(
)"
        R"(#define FFX_FSR1_EASU_MAX_TAPS 5
)"
        R"(
)"
        R"(// EASU constants - packed into uniforms
)"
        R"(uniform float4 EASUCon0;
)"
        R"(uniform float4 EASUCon1;
)"
        R"(uniform float4 EASUCon2;
)"
        R"(uniform float4 EASUCon3;
)"
        R"(
)"
        R"(// RCAS constants
)"
        R"(uniform float4 RCASCon;
)"
        R"(
)"
        R"(// Compute input size from output size and scale factor
)"
        R"(float2 GetInputSize(float2 outputSize, float scale)
)"
        R"({
)"
        R"(    return outputSize / scale;
)"
        R"(}
)"
        R"(
)"
        R"(// EASU: Edge-Adaptive Spatial Upsampling
)"
        R"(float4 EASU(float2 uv, float2 inputSize, float2 outputSize)
)"
        R"({
)"
        R"(    float2 inputViewportInPixels = outputSize;
)"
        R"(    float2 outputSizeInPixels = outputSize;
)"
        R"(    float2 inputSizeInPixels = inputSize;
)"
        R"(
)"
        R"(    // Compute constants
)"
        R"(    float2 con0 = EASUCon0.xy;
)"
        R"(    float2 con1 = EASUCon1.xy;
)"
        R"(    float2 con2 = EASUCon2.xy;
)"
        R"(    float2 con3 = EASUCon3.xy;
)"
        R"(
)"
        R"(    // Sample positions
)"
        R"(    float2 uv_input = uv * con0 + con1;
)"
        R"(    
)"
        R"(    // 5-tap sampling pattern
)"
        R"(    float2 offsets[5];
)"
        R"(    offsets[0] = float2(0.0, 0.0);
)"
        R"(    offsets[1] = float2(con2.x, con2.y);
)"
        R"(    offsets[2] = float2(-con2.x, con2.y);
)"
        R"(    offsets[3] = float2(con2.x, -con2.y);
)"
        R"(    offsets[4] = float2(-con2.x, -con2.y);
)"
        R"(
)"
        R"(    float4 samples[5];
)"
        R"(    for (int i = 0; i < 5; i++)
)"
        R"(    {
)"
        R"(        float2 sample_uv = uv_input + offsets[i] * con3.xy;
)"
        R"(        samples[i] = tex2D(BackBuffer, saturate(sample_uv));
)"
        R"(    }
)"
        R"(
)"
        R"(    // Compute gradients
)"
        R"(    float3 c = samples[0].rgb;
)"
        R"(    float3 n = samples[1].rgb;
)"
        R"(    float3 s = samples[2].rgb;
)"
        R"(    float3 e = samples[3].rgb;
)"
        R"(    float3 w = samples[4].rgb;
)"
        R"(
)"
        R"(    // Luminance weights
)"
        R"(    float3 luma_weights = float3(0.299, 0.587, 0.114);
)"
        R"(    
)"
        R"(    float luma_c = dot(c, luma_weights);
)"
        R"(    float luma_n = dot(n, luma_weights);
)"
        R"(    float luma_s = dot(s, luma_weights);
)"
        R"(    float luma_e = dot(e, luma_weights);
)"
        R"(    float luma_w = dot(w, luma_weights);
)"
        R"(
)"
        R"(    // Gradient computation
)"
        R"(    float grad_ns = abs(luma_n - luma_s);
)"
        R"(    float grad_ew = abs(luma_e - luma_w);
)"
        R"(
)"
        R"(    // Direction
)"
        R"(    float2 dir = float2(grad_ew, grad_ns);
)"
        R"(    float dir_length = length(dir) + 1e-6;
)"
        R"(    dir /= dir_length;
)"
        R"(
)"
        R"(    // Weights
)"
        R"(    float len = length(dir * float2(grad_ew, grad_ns));
)"
        R"(    float weight = 1.0 / (len + 1e-6);
)"
        R"(
)"
        R"(    // Reconstruct
)"
        R"(    float3 result = c;
)"
        R"(    result += (n + s - 2.0 * c) * dir.y * weight;
)"
        R"(    result += (e + w - 2.0 * c) * dir.x * weight;
)"
        R"(
)"
        R"(    return float4(saturate(result), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(// RCAS: Radeon Contrast Adaptive Sharpening
)"
        R"(float4 RCAS(float2 uv, float2 inputSize, float2 outputSize)
)"
        R"({
)"
        R"(    float2 texel = float2(1.0 / inputSize.x, 1.0 / inputSize.y);
)"
        R"(    
)"
        R"(    float3 c = tex2D(BackBuffer, uv).rgb;
)"
        R"(    float3 n = tex2D(BackBuffer, uv + float2(0.0, -texel.y)).rgb;
)"
        R"(    float3 s = tex2D(BackBuffer, uv + float2(0.0, texel.y)).rgb;
)"
        R"(    float3 e = tex2D(BackBuffer, uv + float2(texel.x, 0.0)).rgb;
)"
        R"(    float3 w = tex2D(BackBuffer, uv + float2(-texel.x, 0.0)).rgb;
)"
        R"(
)"
        R"(    float3 luma_weights = float3(0.299, 0.587, 0.114);
)"
        R"(    
)"
        R"(    float luma_c = dot(c, luma_weights);
)"
        R"(    float luma_n = dot(n, luma_weights);
)"
        R"(    float luma_s = dot(s, luma_weights);
)"
        R"(    float luma_e = dot(e, luma_weights);
)"
        R"(    float luma_w = dot(w, luma_weights);
)"
        R"(
)"
        R"(    float grad_n = abs(luma_n - luma_c);
)"
        R"(    float grad_s = abs(luma_s - luma_c);
)"
        R"(    float grad_e = abs(luma_e - luma_c);
)"
        R"(    float grad_w = abs(luma_w - luma_c);
)"
        R"(
)"
        R"(    float grad_ns = max(grad_n, grad_s);
)"
        R"(    float grad_ew = max(grad_e, grad_w);
)"
        R"(
)"
        R"(    float2 dir = float2(grad_ew, grad_ns);
)"
        R"(    float dir_len = length(dir) + 1e-6;
)"
        R"(    dir /= dir_len;
)"
        R"(
)"
        R"(    float sharpness = RCASCon.x;
)"
        R"(    float weight = sharpness * (1.0 - smoothstep(0.0, 0.5, dir_len));
)"
        R"(
)"
        R"(    float3 result = c;
)"
        R"(    result += (n + s - 2.0 * c) * dir.y * weight;
)"
        R"(    result += (e + w - 2.0 * c) * dir.x * weight;
)"
        R"(
)"
        R"(    return float4(saturate(result), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(// Simple denoise (bilateral-like)
)"
        R"(float4 Denoise(float2 uv, float2 inputSize)
)"
        R"({
)"
        R"(    float2 texel = float2(1.0 / inputSize.x, 1.0 / inputSize.y);
)"
        R"(    float3 center = tex2D(BackBuffer, uv).rgb;
)"
        R"(    
)"
        R"(    float3 sum = center;
)"
        R"(    float total_weight = 1.0;
)"
        R"(    
)"
        R"(    float3 luma_weights = float3(0.299, 0.587, 0.114);
)"
        R"(    float center_luma = dot(center, luma_weights);
)"
        R"(    
)"
        R"(    // 4-tap cross pattern
)"
        R"(    float2 offsets[4] = {
)"
        R"(        float2(-texel.x, 0.0),
)"
        R"(        float2(texel.x, 0.0),
)"
        R"(        float2(0.0, -texel.y),
)"
        R"(        float2(0.0, texel.y)
)"
        R"(    };
)"
        R"(    
)"
        R"(    for (int i = 0; i < 4; i++)
)"
        R"(    {
)"
        R"(        float3 sample = tex2D(BackBuffer, uv + offsets[i]).rgb;
)"
        R"(        float sample_luma = dot(sample, luma_weights);
)"
        R"(        float diff = abs(sample_luma - center_luma);
)"
        R"(        float weight = exp(-diff * DenoiseStrength * 50.0);
)"
        R"(        
)"
        R"(        sum += sample * weight;
)"
        R"(        total_weight += weight;
)"
        R"(    }
)"
        R"(    
)"
        R"(    return float4(sum / total_weight, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_AMDBoost(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float2 outputSize = float2(BUFFER_WIDTH, BUFFER_HEIGHT);
)"
        R"(    float2 inputSize = GetInputSize(outputSize, ScaleFactor);
)"
        R"(    
)"
        R"(    float4 color = tex2D(BackBuffer, uv);
)"
        R"(    
)"
        R"(    // Apply denoising first if enabled
)"
        R"(    if (EnableDenoise)
)"
        R"(    {
)"
        R"(        color = Denoise(uv, outputSize);
)"
        R"(    }
)"
        R"(    
)"
        R"(    // Apply upscaling if enabled
)"
        R"(    if (EnableUpscaling && ScaleFactor > 1.0)
)"
        R"(    {
)"
        R"(        color = EASU(uv, inputSize, outputSize);
)"
        R"(    }
)"
        R"(    
)"
        R"(    // Apply RCAS sharpening
)"
        R"(    if (Sharpness > 0.0)
)"
        R"(    {
)"
        R"(        color = RCAS(uv, EnableUpscaling ? inputSize : outputSize, outputSize);
)"
        R"(    }
)"
        R"(    
)"
        R"(    return color;
)"
        R"(}
)"
        R"(
)"
        R"(technique AMDBoost <
)"
        R"(    ui_label = "AMD Boost";
)"
        R"(    ui_tooltip = "AMD FidelityFX Boost: Combines FSR 1 upscaling (EASU), RCAS sharpening, and optional denoising for enhanced image quality.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_AMDBoost;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "Bloom.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(// SPDX-FileCopyrightText: Copyright 2012 PPSSPP Project
)"
        R"(// SPDX-License-Identifier: GPL-2.0-or-later
)"
        R"(// Ported from bloomnoblur.fsh in PPSSPP.
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Radius <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Radius";
)"
        R"(    ui_tooltip = "How far the glow spreads from bright areas.";
)"
        R"(    ui_min = 0.0; ui_max = 4.0; ui_step = 0.05;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float Amount <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Amount";
)"
        R"(    ui_tooltip = "Strength of the glow added on top of the image.";
)"
        R"(    ui_min = 0.0; ui_max = 2.0; ui_step = 0.05;
)"
        R"(> = 0.6;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float Weight(float3 color)
)"
        R"({
)"
        R"(    float gray = (color.r + color.g + color.b) / 3.0;
)"
        R"(    float saturation = (abs(color.r - gray) + abs(color.g - gray) + abs(color.b - gray)) / 3.0;
)"
        R"(    return gray * gray / max(saturation, 0.25);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_Bloom(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float3 color = tex2D(BackBuffer, uv).rgb;
)"
        R"(
)"
        R"(    float gray = (color.r + color.g + color.b) / 3.0;
)"
        R"(    float saturation = (abs(color.r - gray) + abs(color.g - gray) + abs(color.b - gray)) / 3.0;
)"
        R"(    float spread = 0.002 * gray / max(saturation, 0.25) * Radius;
)"
        R"(
)"
        R"(    float3 sum = float3(0.0, 0.0, 0.0);
)"
        R"(    [unroll] for (int x = -3; x <= 3; x += 2)
)"
        R"(    {
)"
        R"(        [unroll] for (int y = -3; y <= 3; y += 2)
)"
        R"(        {
)"
        R"(            float3 tap = tex2D(BackBuffer, uv + float2(x, y) * spread).rgb;
)"
        R"(            sum += tap * Weight(tap);
)"
        R"(        }
)"
        R"(    }
)"
        R"(    sum /= 16.0;
)"
        R"(
)"
        R"(    return float4(saturate(color + sum * Amount), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique Bloom <
)"
        R"(    ui_label = "Bloom";
)"
        R"(    ui_tooltip = "Bleeds light out of the brightest areas into a soft halo, the way a camera does when pointed at something too bright.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_Bloom;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "Blur.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Radius <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Radius";
)"
        R"(    ui_tooltip = "How far the blur reaches, in pixels.";
)"
        R"(    ui_min = 1.0; ui_max = 12.0; ui_step = 0.5;
)"
        R"(> = 4.0;
)"
        R"(
)"
        R"(uniform float Strength <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Strength";
)"
        R"(    ui_tooltip = "Blend between the original image and the blurred one.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float FocusSize <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Sharp Centre";
)"
        R"(    ui_tooltip = "Size of the region left in focus at the centre of the screen. At zero the whole image is blurred evenly.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(uniform float FocusSoftness <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Focus Falloff";
)"
        R"(    ui_tooltip = "How gradually the sharp centre gives way to the blur.";
)"
        R"(    ui_min = 0.05; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 0.4;
)"
        R"(
)"
        R"(static const int TAPS = 17;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_Blur(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float2 texel = float2(BUFFER_RCP_WIDTH, BUFFER_RCP_HEIGHT);
)"
        R"(    float3 original = tex2D(BackBuffer, uv).rgb;
)"
        R"(
)"
        R"(    float2 centred = (uv - 0.5) * float2(BUFFER_WIDTH * BUFFER_RCP_HEIGHT, 1.0) * 2.0;
)"
        R"(    float distance_from_centre = length(centred);
)"
        R"(    float no_focus = 1.0 - step(0.001, FocusSize);
)"
        R"(    float focus = max(smoothstep(FocusSize, FocusSize + FocusSoftness, distance_from_centre), no_focus);
)"
        R"(    float amount = Strength * focus;
)"
        R"(
)"
        R"(    float angle = frac(sin(dot(pos.xy, float2(12.9898, 78.233))) * 43758.5453) * 6.2831853;
)"
        R"(    float2 spoke = float2(cos(angle), sin(angle));
)"
        R"(
)"
        R"(    const float2 turn = float2(cos(2.39996323), sin(2.39996323));
)"
        R"(    const float decay = exp(-2.0 / float(TAPS));
)"
        R"(    float weight = exp(-1.0 / float(TAPS));
)"
        R"(
)"
        R"(    float3 sum = float3(0.0, 0.0, 0.0);
)"
        R"(    float total = 0.0;
)"
        R"(    [unroll] for (int i = 0; i < TAPS; ++i)
)"
        R"(    {
)"
        R"(        float reach = sqrt((float(i) + 0.5) / float(TAPS));
)"
        R"(        sum += tex2D(BackBuffer, uv + spoke * reach * texel * Radius).rgb * weight;
)"
        R"(        total += weight;
)"
        R"(        weight *= decay;
)"
        R"(        spoke = float2(spoke.x * turn.x - spoke.y * turn.y,
)"
        R"(                       spoke.x * turn.y + spoke.y * turn.x);
)"
        R"(    }
)"
        R"(
)"
        R"(    float3 blurred = sum / total;
)"
        R"(    return float4(lerp(original, blurred, amount), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique Blur <
)"
        R"(    ui_label = "Blur";
)"
        R"(    ui_tooltip = "Gaussian blur with an optional sharp centre, for softening the picture or faking depth of field.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_Blur;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "CRT.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(// SPDX-FileCopyrightText: Copyright 2012 PPSSPP Project
)"
        R"(// SPDX-License-Identifier: GPL-2.0-or-later
)"
        R"(// Ported from crt.fsh in PPSSPP, by KillaMaaki.
)"
        R"(
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Timer < source = "timer"; > = 0.0;
)"
        R"(
)"
        R"(uniform float Density <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Line Density";
)"
        R"(    ui_min = 60.0; ui_max = 720.0; ui_step = 10.0;
)"
        R"(> = 272.0;
)"
        R"(
)"
        R"(uniform float RollSpeed <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Roll Speed";
)"
        R"(    ui_tooltip = "Speed of the rolling bar. Zero disables it.";
)"
        R"(    ui_min = 0.0; ui_max = 2.0; ui_step = 0.05;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float Bleed <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Colour Bleed";
)"
        R"(    ui_tooltip = "Horizontal separation of the red and green channels.";
)"
        R"(    ui_min = 0.0; ui_max = 4.0; ui_step = 0.1;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_CRT(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float seconds = Timer * 0.001;
)"
        R"(    float scan = floor((uv.y + seconds * RollSpeed * 0.5) * Density);
)"
        R"(    float line_intensity = frac(scan * 0.5) * 2.0;
)"
        R"(
)"
        R"(    float2 shift = float2(line_intensity * 0.0005, 0.0);
)"
        R"(    float2 bleed = float2(BUFFER_RCP_WIDTH * Bleed, 0.0);
)"
        R"(
)"
        R"(    float r = tex2D(BackBuffer, uv + bleed + shift).r;
)"
        R"(    float g = tex2D(BackBuffer, uv - bleed + shift).g;
)"
        R"(    float b = tex2D(BackBuffer, uv).b;
)"
        R"(
)"
        R"(    float3 color = float3(r, g * 0.99, b) * clamp(line_intensity, 0.85, 1.0);
)"
        R"(
)"
        R"(    if (RollSpeed > 0.0)
)"
        R"(    {
)"
        R"(        float rollbar = sin((uv.y + seconds * RollSpeed) * 4.0);
)"
        R"(        color += rollbar * 0.02;
)"
        R"(    }
)"
        R"(
)"
        R"(    return float4(saturate(color), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique CRT <
)"
        R"(    ui_label = "CRT";
)"
        R"(    ui_tooltip = "Curved scanlines and the phosphor mask of a CRT television, for games that were drawn with that kind of screen in mind.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_CRT;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "Cartoon.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(// SPDX-FileCopyrightText: Copyright 2012 PPSSPP Project
)"
        R"(// SPDX-FileCopyrightText: guest(r)
)"
        R"(// SPDX-License-Identifier: GPL-2.0-or-later
)"
        R"(// Ported from cartoon.fsh in PPSSPP, Advanced Cartoon shader I by guest(r).
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float EdgeStrength <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Edge Strength";
)"
        R"(    ui_tooltip = "Darkness of the ink outline drawn around detected edges.";
)"
        R"(    ui_min = 0.0; ui_max = 2.0; ui_step = 0.05;
)"
        R"(> = 0.5;
)"
        R"(
)"
        R"(uniform float Levels <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Colour Levels";
)"
        R"(    ui_tooltip = "How many bands the colours are quantised into.";
)"
        R"(    ui_min = 2.0; ui_max = 16.0; ui_step = 1.0;
)"
        R"(> = 4.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_Cartoon(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float2 texel = float2(BUFFER_RCP_WIDTH, BUFFER_RCP_HEIGHT);
)"
        R"(
)"
        R"(    float3 c00 = tex2D(BackBuffer, uv + texel * float2(-1.0, -1.0)).rgb;
)"
        R"(    float3 c10 = tex2D(BackBuffer, uv + texel * float2( 0.0, -1.0)).rgb;
)"
        R"(    float3 c20 = tex2D(BackBuffer, uv + texel * float2( 1.0, -1.0)).rgb;
)"
        R"(    float3 c01 = tex2D(BackBuffer, uv + texel * float2(-1.0,  0.0)).rgb;
)"
        R"(    float3 c11 = tex2D(BackBuffer, uv).rgb;
)"
        R"(    float3 c21 = tex2D(BackBuffer, uv + texel * float2( 1.0,  0.0)).rgb;
)"
        R"(    float3 c02 = tex2D(BackBuffer, uv + texel * float2(-1.0,  1.0)).rgb;
)"
        R"(    float3 c12 = tex2D(BackBuffer, uv + texel * float2( 0.0,  1.0)).rgb;
)"
        R"(    float3 c22 = tex2D(BackBuffer, uv + texel * float2( 1.0,  1.0)).rgb;
)"
        R"(
)"
        R"(    const float3 dt = float3(1.0, 1.0, 1.0);
)"
        R"(
)"
        R"(    float d1 = dot(abs(c00 - c22), dt);
)"
        R"(    float d2 = dot(abs(c20 - c02), dt);
)"
        R"(    float hl = dot(abs(c01 - c21), dt);
)"
        R"(    float vl = dot(abs(c10 - c12), dt);
)"
        R"(    float edge = EdgeStrength * (d1 + d2 + hl + vl) / (dot(c11, dt) + 0.15);
)"
        R"(
)"
        R"(    float lc = Levels * length(c11);
)"
        R"(    float f = frac(lc);
)"
        R"(    f *= f;
)"
        R"(    lc = (floor(lc) + f * f) / Levels + 0.05;
)"
        R"(
)"
        R"(    float3 unit = normalize(max(c11, 0.0001));
)"
        R"(    float3 quant = Levels * unit;
)"
        R"(    float3 frct = frac(quant);
)"
        R"(    frct *= frct;
)"
        R"(    quant = floor(quant) + 0.05 * dt + frct * frct;
)"
        R"(
)"
        R"(    float3 color = lc * (1.1 - edge * sqrt(edge)) * quant / Levels;
)"
        R"(    return float4(saturate(color), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique Cartoon <
)"
        R"(    ui_label = "Cartoon";
)"
        R"(    ui_tooltip = "Ink outlines and flat colour bands. Faithful port of the PPSSPP shader; the outline gets heavy in dark scenes, so try Cartoon Soft or Cel Shading if the blacks smear.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_Cartoon;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "CartoonSoft.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(// SPDX-FileCopyrightText: Copyright 2012 PPSSPP Project
)"
        R"(// SPDX-FileCopyrightText: guest(r)
)"
        R"(// SPDX-License-Identifier: GPL-2.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float EdgeStrength <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Edge Strength";
)"
        R"(    ui_tooltip = "Darkness of the ink outline drawn around detected edges.";
)"
        R"(    ui_min = 0.0; ui_max = 2.0; ui_step = 0.05;
)"
        R"(> = 0.45;
)"
        R"(
)"
        R"(uniform float ShadowGuard <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Shadow Guard";
)"
        R"(    ui_tooltip = "Holds the outline back in dark areas. Raise it if shadows turn into black blobs.";
)"
        R"(    ui_min = 0.1; ui_max = 2.0; ui_step = 0.05;
)"
        R"(> = 0.8;
)"
        R"(
)"
        R"(uniform float Levels <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Colour Levels";
)"
        R"(    ui_tooltip = "How many bands the colours are quantised into.";
)"
        R"(    ui_min = 2.0; ui_max = 16.0; ui_step = 1.0;
)"
        R"(> = 6.0;
)"
        R"(
)"
        R"(uniform float Smoothing <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Banding";
)"
        R"(    ui_tooltip = "How far the picture is pushed towards flat bands.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 0.75;
)"
        R"(
)"
        R"(uniform float Saturation <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Saturation";
)"
        R"(    ui_min = 0.0; ui_max = 2.0; ui_step = 0.05;
)"
        R"(> = 1.15;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_CartoonSoft(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float2 texel = float2(BUFFER_RCP_WIDTH, BUFFER_RCP_HEIGHT);
)"
        R"(
)"
        R"(    float3 c00 = tex2D(BackBuffer, uv + texel * float2(-1.0, -1.0)).rgb;
)"
        R"(    float3 c10 = tex2D(BackBuffer, uv + texel * float2( 0.0, -1.0)).rgb;
)"
        R"(    float3 c20 = tex2D(BackBuffer, uv + texel * float2( 1.0, -1.0)).rgb;
)"
        R"(    float3 c01 = tex2D(BackBuffer, uv + texel * float2(-1.0,  0.0)).rgb;
)"
        R"(    float3 c11 = tex2D(BackBuffer, uv).rgb;
)"
        R"(    float3 c21 = tex2D(BackBuffer, uv + texel * float2( 1.0,  0.0)).rgb;
)"
        R"(    float3 c02 = tex2D(BackBuffer, uv + texel * float2(-1.0,  1.0)).rgb;
)"
        R"(    float3 c12 = tex2D(BackBuffer, uv + texel * float2( 0.0,  1.0)).rgb;
)"
        R"(    float3 c22 = tex2D(BackBuffer, uv + texel * float2( 1.0,  1.0)).rgb;
)"
        R"(
)"
        R"(    const float3 dt = float3(1.0, 1.0, 1.0);
)"
        R"(    const float3 luma_weights = float3(0.299, 0.587, 0.114);
)"
        R"(
)"
        R"(    float d1 = dot(abs(c00 - c22), dt);
)"
        R"(    float d2 = dot(abs(c20 - c02), dt);
)"
        R"(    float hl = dot(abs(c01 - c21), dt);
)"
        R"(    float vl = dot(abs(c10 - c12), dt);
)"
        R"(
)"
        R"(    float luma = dot(c11, luma_weights);
)"
        R"(    float response = (d1 + d2 + hl + vl) / (luma * 2.0 + ShadowGuard);
)"
        R"(    float ink = 1.0 - saturate(response * EdgeStrength);
)"
        R"(
)"
        R"(    float scaled = luma * Levels;
)"
        R"(    float step_position = frac(scaled);
)"
        R"(    float eased = step_position * step_position * (3.0 - 2.0 * step_position);
)"
        R"(    float banded = (floor(scaled) + eased) / Levels;
)"
        R"(    float target = lerp(luma, banded, Smoothing);
)"
        R"(
)"
        R"(    float3 tinted = c11 * (target / max(luma, 0.001));
)"
        R"(    float3 grey = dot(tinted, luma_weights);
)"
        R"(    float3 color = lerp(grey, tinted, Saturation) * ink;
)"
        R"(
)"
        R"(    return float4(saturate(color), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique CartoonSoft <
)"
        R"(    ui_label = "Cartoon Soft";
)"
        R"(    ui_tooltip = "Ink outlines and flat colour bands, with the outline held back in the shadows so dark scenes do not turn into black blobs.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_CartoonSoft;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "CelShading.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Bands <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Shading Bands";
)"
        R"(    ui_tooltip = "How many flat steps the lighting is collapsed into. Three or four gives the classic look.";
)"
        R"(    ui_min = 2.0; ui_max = 8.0; ui_step = 1.0;
)"
        R"(> = 4.0;
)"
        R"(
)"
        R"(uniform float BandContrast <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Band Contrast";
)"
        R"(    ui_tooltip = "Spreads the bands towards pure black and white. Lower it if the shadows crush.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 0.5;
)"
        R"(
)"
        R"(uniform float BandEdge <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Band Edge";
)"
        R"(    ui_tooltip = "Width of the transition between bands. Low values give hard cel steps.";
)"
        R"(    ui_min = 0.02; ui_max = 1.0; ui_step = 0.02;
)"
        R"(> = 0.15;
)"
        R"(
)"
        R"(uniform float Detail <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Texture Detail";
)"
        R"(    ui_tooltip = "How much surface texture survives the flattening. At zero the bands are completely flat.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 0.6;
)"
        R"(
)"
        R"(uniform float OutlineStrength <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Outline Strength";
)"
        R"(    ui_tooltip = "Opacity of the ink line drawn along detected edges.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 0.8;
)"
        R"(
)"
        R"(uniform float OutlineThreshold <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Outline Threshold";
)"
        R"(    ui_tooltip = "How strong an edge has to be before it is inked. Raise it to keep ink off textures and specular highlights.";
)"
        R"(    ui_min = 0.01; ui_max = 0.4; ui_step = 0.01;
)"
        R"(> = 0.18;
)"
        R"(
)"
        R"(uniform float Saturation <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Saturation";
)"
        R"(    ui_tooltip = "Colour intensity of the flat regions.";
)"
        R"(    ui_min = 0.0; ui_max = 2.0; ui_step = 0.05;
)"
        R"(> = 1.25;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_CelShading(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    const float3 luma_weights = float3(0.2126, 0.7152, 0.0722);
)"
        R"(    float2 texel = float2(BUFFER_RCP_WIDTH, BUFFER_RCP_HEIGHT);
)"
        R"(
)"
        R"(    float3 centre = tex2D(BackBuffer, uv).rgb;
)"
        R"(    float luma = dot(centre, luma_weights);
)"
        R"(
)"
        R"(    float2 near = texel * 1.5;
)"
        R"(    float2 far = texel * 3.5;
)"
        R"(
)"
        R"(    float a00 = dot(tex2D(BackBuffer, uv + near * float2(-1.0, -1.0)).rgb, luma_weights);
)"
        R"(    float a20 = dot(tex2D(BackBuffer, uv + near * float2( 1.0, -1.0)).rgb, luma_weights);
)"
        R"(    float a02 = dot(tex2D(BackBuffer, uv + near * float2(-1.0,  1.0)).rgb, luma_weights);
)"
        R"(    float a22 = dot(tex2D(BackBuffer, uv + near * float2( 1.0,  1.0)).rgb, luma_weights);
)"
        R"(
)"
        R"(    float b00 = dot(tex2D(BackBuffer, uv + far * float2(-1.0, -1.0)).rgb, luma_weights);
)"
        R"(    float b20 = dot(tex2D(BackBuffer, uv + far * float2( 1.0, -1.0)).rgb, luma_weights);
)"
        R"(    float b02 = dot(tex2D(BackBuffer, uv + far * float2(-1.0,  1.0)).rgb, luma_weights);
)"
        R"(    float b22 = dot(tex2D(BackBuffer, uv + far * float2( 1.0,  1.0)).rgb, luma_weights);
)"
        R"(
)"
        R"(    float gx = (a00 + a02) - (a20 + a22);
)"
        R"(    float gy = (a00 + a20) - (a02 + a22);
)"
        R"(    float gradient = sqrt(gx * gx + gy * gy);
)"
        R"(    float ink = smoothstep(OutlineThreshold, OutlineThreshold + 0.04, gradient);
)"
        R"(
)"
        R"(    float lighting = (a00 + a20 + a02 + a22 + b00 + b20 + b02 + b22) * 0.125;
)"
        R"(    float detail = luma - lighting;
)"
        R"(
)"
        R"(    float softness = max(BandEdge, 0.001);
)"
        R"(    float coord = lighting * Bands - softness * 0.5;
)"
        R"(    float index = floor(coord) + smoothstep(1.0 - softness, 1.0, frac(coord));
)"
        R"(
)"
        R"(    float centred = (index + 0.5) / Bands;
)"
        R"(    float stretched = index / max(Bands - 1.0, 1.0);
)"
        R"(    float banded = saturate(lerp(centred, stretched, BandContrast));
)"
        R"(
)"
        R"(    float target = saturate(banded + detail * Detail);
)"
        R"(
)"
        R"(    float gain = min(target / max(luma, 0.001), 4.0);
)"
        R"(    float3 shaded = centre * gain;
)"
        R"(    float3 grey = dot(shaded, luma_weights);
)"
        R"(    float3 color = lerp(grey, shaded, Saturation);
)"
        R"(    color *= 1.0 - ink * OutlineStrength;
)"
        R"(
)"
        R"(    return float4(saturate(color), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique CelShading <
)"
        R"(    ui_label = "Cel Shading";
)"
        R"(    ui_tooltip = "Collapses the lighting into a few hard steps and inks the edges, keeping texture detail and hue intact.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_CelShading;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "ChromaticAberration.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Strength <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Strength";
)"
        R"(    ui_tooltip = "Channel separation in pixels, measured at the edge of the screen.";
)"
        R"(    ui_min = 0.0; ui_max = 8.0; ui_step = 0.1;
)"
        R"(> = 1.5;
)"
        R"(
)"
        R"(uniform float Falloff <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Falloff";
)"
        R"(    ui_tooltip = "How fast the separation grows away from the centre. Higher keeps the middle clean.";
)"
        R"(    ui_min = 1.0; ui_max = 4.0; ui_step = 0.1;
)"
        R"(> = 2.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_ChromaticAberration(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float2 texel = float2(BUFFER_RCP_WIDTH, BUFFER_RCP_HEIGHT);
)"
        R"(
)"
        R"(    float2 direction = uv - float2(0.5, 0.5);
)"
        R"(    float radius = length(direction);
)"
        R"(    float2 unit = direction / max(radius, 0.0001);
)"
        R"(    float2 offset = unit * Strength * pow(radius * 2.0, Falloff) * texel;
)"
        R"(
)"
        R"(    float red = tex2D(BackBuffer, uv + offset).r;
)"
        R"(    float green = tex2D(BackBuffer, uv).g;
)"
        R"(    float blue = tex2D(BackBuffer, uv - offset).b;
)"
        R"(
)"
        R"(    return float4(red, green, blue, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique ChromaticAberration <
)"
        R"(    ui_label = "Chromatic Aberration";
)"
        R"(    ui_tooltip = "Splits the colour channels apart towards the edges of the screen, the way a cheap lens fails to focus every colour on the same spot.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_ChromaticAberration;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "ColorGrade.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(// SPDX-FileCopyrightText: Copyright 2012 PPSSPP Project
)"
        R"(// SPDX-License-Identifier: GPL-2.0-or-later
)"
        R"(// Based on colorcorrection.fsh in PPSSPP.
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Saturation <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Saturation";
)"
        R"(    ui_min = 0.0; ui_max = 2.0; ui_step = 0.01;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float Brightness <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Brightness";
)"
        R"(    ui_min = 0.0; ui_max = 2.0; ui_step = 0.01;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float Contrast <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Contrast";
)"
        R"(    ui_min = 0.0; ui_max = 2.0; ui_step = 0.01;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float Gamma <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Gamma";
)"
        R"(    ui_min = 0.5; ui_max = 2.0; ui_step = 0.01;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_ColorGrade(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float3 rgb = tex2D(BackBuffer, uv).rgb;
)"
        R"(
)"
        R"(    float luma = dot(rgb, float3(0.2126, 0.7152, 0.0722));
)"
        R"(    rgb = lerp(float3(luma, luma, luma), rgb, Saturation);
)"
        R"(    rgb *= Brightness;
)"
        R"(    rgb = (rgb - 0.5) * Contrast + 0.5;
)"
        R"(    rgb = pow(max(rgb, 0.0), 1.0 / max(Gamma, 0.0001));
)"
        R"(
)"
        R"(    return float4(saturate(rgb), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique ColorGrade <
)"
        R"(    ui_label = "Colour Grade";
)"
        R"(    ui_tooltip = "The four basic colour controls in one pass: saturation, brightness, contrast and gamma. Reach for this before anything more specialised.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_ColorGrade;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "Deband.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(// SPDX-FileCopyrightText: Copyright 2015 Niklas Haas
)"
        R"(// SPDX-License-Identifier: MIT
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Threshold <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Threshold";
)"
        R"(    ui_tooltip = "How flat a neighbourhood must be before it gets smoothed. Raise it to catch wider bands, lower it to keep more detail.";
)"
        R"(    ui_min = 0.002; ui_max = 0.05; ui_step = 0.001;
)"
        R"(> = 0.012;
)"
        R"(
)"
        R"(uniform float Radius <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Radius";
)"
        R"(    ui_tooltip = "How far the sampling reaches, in pixels. Wider gradients need a larger radius.";
)"
        R"(    ui_min = 1.0; ui_max = 32.0; ui_step = 1.0;
)"
        R"(> = 8.0;
)"
        R"(
)"
        R"(uniform float Grain <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Dither";
)"
        R"(    ui_tooltip = "Noise added to break up whatever banding survives the smoothing.";
)"
        R"(    ui_min = 0.0; ui_max = 0.02; ui_step = 0.001;
)"
        R"(> = 0.004;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float Hash(float2 p)
)"
        R"({
)"
        R"(    float3 scattered = frac(float3(p.x, p.y, p.x) * 0.1031);
)"
        R"(    scattered += dot(scattered, scattered.yzx + 33.33);
)"
        R"(    return frac((scattered.x + scattered.y) * scattered.z);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_Deband(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float2 texel = float2(BUFFER_RCP_WIDTH, BUFFER_RCP_HEIGHT);
)"
        R"(
)"
        R"(    float3 centre = tex2D(BackBuffer, uv).rgb;
)"
        R"(    float base = Hash(pos.xy) * 6.2831853;
)"
        R"(
)"
        R"(    float3 total = float3(0.0, 0.0, 0.0);
)"
        R"(    float3 deviation = float3(0.0, 0.0, 0.0);
)"
        R"(
)"
        R"(    [unroll] for (int ring = 1; ring <= 2; ++ring)
)"
        R"(    {
)"
        R"(        float angle = base + float(ring) * 2.3999632;
)"
        R"(        float reach = Radius * float(ring) * 0.5;
)"
        R"(        float2 along = float2(cos(angle), sin(angle)) * reach;
)"
        R"(        float2 across = float2(-along.y, along.x);
)"
        R"(
)"
        R"(        float3 s0 = tex2D(BackBuffer, uv + along * texel).rgb;
)"
        R"(        float3 s1 = tex2D(BackBuffer, uv - along * texel).rgb;
)"
        R"(        float3 s2 = tex2D(BackBuffer, uv + across * texel).rgb;
)"
        R"(        float3 s3 = tex2D(BackBuffer, uv - across * texel).rgb;
)"
        R"(
)"
        R"(        total += s0 + s1 + s2 + s3;
)"
        R"(        deviation = max(deviation, max(max(abs(s0 - centre), abs(s1 - centre)),
)"
        R"(                                       max(abs(s2 - centre), abs(s3 - centre))));
)"
        R"(    }
)"
        R"(
)"
        R"(    float3 average = total * 0.125;
)"
        R"(    float3 flatness = float3(1.0, 1.0, 1.0) -
)"
        R"(                      smoothstep(Threshold * 0.5, Threshold, deviation);
)"
        R"(    float3 result = lerp(centre, average, flatness);
)"
        R"(
)"
        R"(    float dither = (Hash(pos.xy + float2(71.3, 41.7)) - 0.5) * Grain;
)"
        R"(
)"
        R"(    return float4(saturate(result + dither), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique Deband <
)"
        R"(    ui_label = "Deband";
)"
        R"(    ui_tooltip = "Smooths the visible steps in gradients such as skies, then dithers whatever survives. Worth adding whenever large flat areas show rings.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_Deband;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "Denoise.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(// SPDX-FileCopyrightText: Copyright 2019-2021 bloc97
)"
        R"(// SPDX-License-Identifier: MIT
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Strength <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Strength";
)"
        R"(    ui_min = 0.01; ui_max = 0.5; ui_step = 0.01;
)"
        R"(> = 0.1;
)"
        R"(
)"
        R"(uniform float Radius <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Radius";
)"
        R"(    ui_min = 0.3; ui_max = 2.0; ui_step = 0.05;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float Curve <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Shadow Bias";
)"
        R"(    ui_min = 0.0; ui_max = 2.0; ui_step = 0.05;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float3 IntensityWeight(float3 value, float3 sigma, float3 centre)
)"
        R"({
)"
        R"(    float3 scaled = (value - centre) / sigma;
)"
        R"(    return exp(-0.5 * scaled * scaled);
)"
        R"(}
)"
        R"(
)"
        R"(float SpatialWeight(float distance, float sigma)
)"
        R"({
)"
        R"(    float scaled = distance / sigma;
)"
        R"(    return exp(-0.5 * scaled * scaled);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_Denoise(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float2 texel = float2(BUFFER_RCP_WIDTH, BUFFER_RCP_HEIGHT);
)"
        R"(
)"
        R"(    float3 centre = tex2D(BackBuffer, uv).rgb;
)"
        R"(    float3 intensity_sigma = max(pow(centre + 0.0001, Curve) * Strength, 0.0001);
)"
        R"(    float spatial_sigma = max(Radius, 0.05);
)"
        R"(
)"
        R"(    float3 sum = float3(0.0, 0.0, 0.0);
)"
        R"(    float3 total = float3(0.0, 0.0, 0.0);
)"
        R"(
)"
        R"(    [unroll] for (int y = -2; y <= 2; ++y)
)"
        R"(    {
)"
        R"(        [unroll] for (int x = -2; x <= 2; ++x)
)"
        R"(        {
)"
        R"(            float2 offset = float2(x, y);
)"
        R"(            float3 tap = tex2D(BackBuffer, uv + offset * texel).rgb;
)"
        R"(            float3 weight = IntensityWeight(tap, intensity_sigma, centre) *
)"
        R"(                            SpatialWeight(length(offset), spatial_sigma);
)"
        R"(            sum += weight * tap;
)"
        R"(            total += weight;
)"
        R"(        }
)"
        R"(    }
)"
        R"(
)"
        R"(    return float4(sum / total, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique Denoise <
)"
        R"(    ui_label = "Denoise";
)"
        R"(    ui_tooltip = "Edge preserving blur that clears dithering and compression noise while leaving outlines sharp. Ported from Anime4K.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_Denoise;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "FilmGrain.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Intensity <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Intensity";
)"
        R"(    ui_min = 0.0; ui_max = 0.2; ui_step = 0.005;
)"
        R"(> = 0.03;
)"
        R"(
)"
        R"(uniform float Size <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Size";
)"
        R"(    ui_tooltip = "Grain cell size in pixels.";
)"
        R"(    ui_min = 1.0; ui_max = 4.0; ui_step = 1.0;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float Colored <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Colour";
)"
        R"(    ui_tooltip = "Zero gives monochrome grain, one gives independent noise per channel.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.01;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float Hash(float2 p)
)"
        R"({
)"
        R"(    float3 scattered = frac(float3(p.x, p.y, p.x) * 0.1031);
)"
        R"(    scattered += dot(scattered, scattered.yzx + 33.33);
)"
        R"(    return frac((scattered.x + scattered.y) * scattered.z);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_FilmGrain(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float3 rgb = tex2D(BackBuffer, uv).rgb;
)"
        R"(
)"
        R"(    float2 cell = floor(pos.xy / max(Size, 1.0));
)"
        R"(    float mono = Hash(cell) - 0.5;
)"
        R"(    float3 chroma = float3(Hash(cell + 11.7), Hash(cell + 23.1), Hash(cell + 37.5)) - 0.5;
)"
        R"(    float3 noise = lerp(float3(mono, mono, mono), chroma, Colored);
)"
        R"(
)"
        R"(    float luma = dot(rgb, float3(0.2126, 0.7152, 0.0722));
)"
        R"(    float response = 1.0 - abs(luma * 2.0 - 1.0);
)"
        R"(
)"
        R"(    return float4(saturate(rgb + noise * Intensity * response), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique FilmGrain <
)"
        R"(    ui_label = "Film Grain";
)"
        R"(    ui_tooltip = "Adds photographic grain, strongest in the midtones and fading out in blacks and whites.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_FilmGrain;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "FilmicCurve.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Exposure <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Exposure";
)"
        R"(    ui_min = 0.5; ui_max = 2.0; ui_step = 0.01;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float Toe <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Toe";
)"
        R"(    ui_tooltip = "Above 1.0 deepens the shadows, below 1.0 lifts them.";
)"
        R"(    ui_min = 0.5; ui_max = 2.0; ui_step = 0.01;
)"
        R"(> = 1.2;
)"
        R"(
)"
        R"(uniform float Shoulder <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Shoulder";
)"
        R"(    ui_tooltip = "Above 1.0 opens up the highlights, below 1.0 compresses them.";
)"
        R"(    ui_min = 0.5; ui_max = 2.0; ui_step = 0.01;
)"
        R"(> = 1.2;
)"
        R"(
)"
        R"(uniform float Amount <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Amount";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.01;
)"
        R"(> = 0.7;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_FilmicCurve(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float3 rgb = tex2D(BackBuffer, uv).rgb;
)"
        R"(
)"
        R"(    float3 curved = saturate(rgb * Exposure);
)"
        R"(    curved = pow(max(curved, 0.0), Toe);
)"
        R"(    curved = 1.0 - pow(max(1.0 - curved, 0.0), Shoulder);
)"
        R"(
)"
        R"(    return float4(saturate(lerp(rgb, curved, Amount)), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique FilmicCurve <
)"
        R"(    ui_label = "Filmic Curve";
)"
        R"(    ui_tooltip = "Filmic contrast curve. Deepens the shadows and opens the highlights without clipping either end.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_FilmicCurve;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "LensDistortion.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Distortion <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Distortion";
)"
        R"(    ui_tooltip = "Positive bulges the picture outwards, negative pinches it inwards.";
)"
        R"(    ui_min = -0.5; ui_max = 0.5; ui_step = 0.01;
)"
        R"(> = 0.1;
)"
        R"(
)"
        R"(uniform float Zoom <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Zoom";
)"
        R"(    ui_tooltip = "Scales the picture to hide the edges the warp pulls in.";
)"
        R"(    ui_min = 0.5; ui_max = 1.5; ui_step = 0.01;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_LensDistortion(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float aspect = BUFFER_WIDTH * BUFFER_RCP_HEIGHT;
)"
        R"(    float2 half_size = float2(aspect, 1.0);
)"
        R"(    float2 unit = half_size / length(half_size);
)"
        R"(
)"
        R"(    float2 centred = (uv - 0.5) * 2.0 * unit;
)"
        R"(    float r2 = dot(centred, centred);
)"
        R"(    centred *= 1.0 + Distortion * r2;
)"
        R"(    centred /= max(Zoom, 0.001);
)"
        R"(
)"
        R"(    float2 source = centred / (2.0 * unit) + 0.5;
)"
        R"(
)"
        R"(    return float4(tex2D(BackBuffer, source).rgb, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique LensDistortion <
)"
        R"(    ui_label = "Lens Distortion";
)"
        R"(    ui_tooltip = "Barrel or pincushion warp, like looking through a wide angle lens.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_LensDistortion;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "Levels.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float InputBlack <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Input Black";
)"
        R"(    ui_tooltip = "Input level mapped to black. Raise it to deepen washed out shadows.";
)"
        R"(    ui_min = 0.0; ui_max = 0.5; ui_step = 0.005;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(uniform float InputWhite <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Input White";
)"
        R"(    ui_min = 0.5; ui_max = 1.0; ui_step = 0.005;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float Gamma <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Gamma";
)"
        R"(    ui_min = 0.2; ui_max = 3.0; ui_step = 0.01;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float OutputBlack <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Output Black";
)"
        R"(    ui_tooltip = "Lifts crushed shadows so detail stops collapsing into one flat black.";
)"
        R"(    ui_min = 0.0; ui_max = 0.5; ui_step = 0.005;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(uniform float OutputWhite <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Output White";
)"
        R"(    ui_min = 0.5; ui_max = 1.0; ui_step = 0.005;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_Levels(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float3 rgb = tex2D(BackBuffer, uv).rgb;
)"
        R"(
)"
        R"(    rgb = saturate((rgb - InputBlack) / max(InputWhite - InputBlack, 0.001));
)"
        R"(    rgb = pow(max(rgb, 0.0), 1.0 / max(Gamma, 0.001));
)"
        R"(    rgb = lerp(OutputBlack, OutputWhite, rgb);
)"
        R"(
)"
        R"(    return float4(saturate(rgb), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique Levels <
)"
        R"(    ui_label = "Levels";
)"
        R"(    ui_tooltip = "Black point, white point, gamma and output range. Use it to fix crushed or washed out shadows.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_Levels;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "MotionBlur.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Length <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Length";
)"
        R"(    ui_tooltip = "How far the streaks reach, as a percentage of screen height.";
)"
        R"(    ui_min = 0.0; ui_max = 20.0; ui_step = 0.5;
)"
        R"(> = 5.0;
)"
        R"(
)"
        R"(uniform float Zoom <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Zoom";
)"
        R"(    ui_tooltip = "Streaks running out from the centre of the screen, as if rushing forward. The centre stays sharp.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float Pan <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Pan";
)"
        R"(    ui_tooltip = "Streaks running in one fixed direction, as if the camera were sweeping across.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(uniform float Angle <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Pan Angle";
)"
        R"(    ui_tooltip = "Direction of the sweep, in degrees.";
)"
        R"(    ui_min = 0.0; ui_max = 360.0; ui_step = 5.0;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(uniform float Spin <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Spin";
)"
        R"(    ui_tooltip = "Streaks curling around the centre, as if the camera were rolling. Negative turns the other way.";
)"
        R"(    ui_min = -1.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(static const int TAPS = 24;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_MotionBlur(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float aspect = BUFFER_WIDTH * BUFFER_RCP_HEIGHT;
)"
        R"(    float2 to_screen = float2(aspect, 1.0);
)"
        R"(
)"
        R"(    float2 centred = (uv - 0.5) * to_screen * 2.0;
)"
        R"(    float2 outward = centred;
)"
        R"(    float2 around = float2(-centred.y, centred.x);
)"
        R"(
)"
        R"(    float radians_angle = Angle * 0.01745329;
)"
        R"(    float2 sweep = float2(cos(radians_angle), sin(radians_angle));
)"
        R"(
)"
        R"(    float2 velocity = sweep * Pan + outward * Zoom + around * Spin;
)"
        R"(    velocity *= Length * 0.01;
)"
        R"(    velocity /= to_screen;
)"
        R"(
)"
        R"(    float jitter = frac(sin(dot(pos.xy, float2(12.9898, 78.233))) * 43758.5453);
)"
        R"(
)"
        R"(    float3 sum = float3(0.0, 0.0, 0.0);
)"
        R"(    [unroll] for (int i = 0; i < TAPS; ++i)
)"
        R"(    {
)"
        R"(        float t = (float(i) + jitter) / float(TAPS) - 0.5;
)"
        R"(        sum += tex2D(BackBuffer, uv + velocity * t).rgb;
)"
        R"(    }
)"
        R"(
)"
        R"(    return float4(sum / float(TAPS), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique MotionBlur <
)"
        R"(    ui_label = "Motion Blur";
)"
        R"(    ui_tooltip = "Camera style motion blur: streaks the picture outwards, sideways or around, without touching still detail at the centre.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_MotionBlur;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "NaturalColors.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(// SPDX-FileCopyrightText: Copyright 2012 PPSSPP Project
)"
        R"(// SPDX-License-Identifier: GPL-2.0-or-later
)"
        R"(// Ported from naturalA.fsh in PPSSPP, by ShadX, modified by SimoneT.
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Luma <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Luma Curve";
)"
        R"(    ui_tooltip = "Gamma applied to the luminance channel in YIQ space.";
)"
        R"(    ui_min = 0.5; ui_max = 2.0; ui_step = 0.01;
)"
        R"(> = 1.2;
)"
        R"(
)"
        R"(uniform float Chroma <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Chroma Gain";
)"
        R"(    ui_tooltip = "Boost applied to the two colour difference channels.";
)"
        R"(    ui_min = 0.0; ui_max = 2.0; ui_step = 0.01;
)"
        R"(> = 1.2;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_Natural(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    const float3x3 RGBtoYIQ = float3x3(0.299, 0.587, 0.114,
)"
        R"(                                       0.596, -0.275, -0.321,
)"
        R"(                                       0.212, -0.523, 0.311);
)"
        R"(
)"
        R"(    const float3x3 YIQtoRGB = float3x3(1.0, 0.95568806, 0.61985809,
)"
        R"(                                       1.0, -0.27158180, -0.64687382,
)"
        R"(                                       1.0, -1.10817733, 1.70506456);
)"
        R"(
)"
        R"(    float3 rgb = tex2D(BackBuffer, uv).rgb;
)"
        R"(    float3 yiq = mul(RGBtoYIQ, rgb);
)"
        R"(
)"
        R"(    yiq.x = pow(max(yiq.x, 0.0), Luma);
)"
        R"(    yiq.yz *= Chroma;
)"
        R"(
)"
        R"(    return float4(saturate(mul(YIQtoRGB, yiq)), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique NaturalColors <
)"
        R"(    ui_label = "Natural Colours";
)"
        R"(    ui_tooltip = "Warms the picture and lifts saturation for a less washed out look. Ported from the PPSSPP shader.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_Natural;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "Reflections.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Timer < source = "timer"; > = 0.0;
)"
        R"(
)"
        R"(uniform float Horizon <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Reflection Line";
)"
        R"(    ui_tooltip = "Height on screen where the reflective floor begins. Everything above it is left untouched.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.01;
)"
        R"(> = 0.55;
)"
        R"(
)"
        R"(uniform float Amount <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Amount";
)"
        R"(    ui_tooltip = "How strongly the reflection shows through the floor.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 0.35;
)"
        R"(
)"
        R"(uniform float Falloff <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Falloff";
)"
        R"(    ui_tooltip = "How quickly the reflection fades as the floor comes towards the viewer. At zero it stays even.";
)"
        R"(    ui_min = 0.0; ui_max = 4.0; ui_step = 0.1;
)"
        R"(> = 1.2;
)"
        R"(
)"
        R"(uniform float Perspective <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Perspective";
)"
        R"(    ui_tooltip = "Stretches or squashes the mirrored image. One is a true mirror, higher values pull it towards the line.";
)"
        R"(    ui_min = 0.2; ui_max = 2.0; ui_step = 0.05;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(uniform float Ripple <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Ripple";
)"
        R"(    ui_tooltip = "Amplitude of the waves disturbing the reflection. At zero the mirror is perfectly still.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(uniform float RippleSpeed <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Ripple Speed";
)"
        R"(    ui_tooltip = "How fast the waves travel.";
)"
        R"(    ui_min = 0.0; ui_max = 4.0; ui_step = 0.1;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_Reflections(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float3 color = tex2D(BackBuffer, uv).rgb;
)"
        R"(
)"
        R"(    float depth = uv.y - Horizon;
)"
        R"(    float on_floor = step(0.0, depth);
)"
        R"(    float span = max(1.0 - Horizon, 0.001);
)"
        R"(    float distance_down = saturate(depth / span);
)"
        R"(
)"
        R"(    float seconds = Timer * 0.001;
)"
        R"(    float wave = sin(uv.x * 38.0 + seconds * RippleSpeed * 2.0) *
)"
        R"(                 sin(uv.y * 21.0 - seconds * RippleSpeed * 1.3);
)"
        R"(    float2 disturbance = float2(wave * 0.004, wave * 0.002) * Ripple * distance_down;
)"
        R"(
)"
        R"(    float2 mirrored = float2(uv.x, Horizon - depth * Perspective) + disturbance;
)"
        R"(    float3 reflection = tex2D(BackBuffer, saturate(mirrored)).rgb;
)"
        R"(
)"
        R"(    float fade = pow(max(1.0 - distance_down, 0.0001), Falloff);
)"
        R"(    float strength = Amount * fade * on_floor;
)"
        R"(
)"
        R"(    return float4(lerp(color, reflection, strength), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique Reflections <
)"
        R"(    ui_label = "Reflections";
)"
        R"(    ui_tooltip = "Mirrors the picture into a reflective floor below a line you choose, with optional water ripples.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_Reflections;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "Scanlines.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(// SPDX-FileCopyrightText: Copyright 2012 PPSSPP Project
)"
        R"(// SPDX-License-Identifier: GPL-2.0-or-later
)"
        R"(// Ported from scanlines.fsh in PPSSPP.
)"
        R"(
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Density <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Line Density";
)"
        R"(    ui_tooltip = "Number of scanline pairs across the screen.";
)"
        R"(    ui_min = 60.0; ui_max = 720.0; ui_step = 10.0;
)"
        R"(> = 340.0;
)"
        R"(
)"
        R"(uniform float Intensity <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Intensity";
)"
        R"(    ui_tooltip = "How dark the gaps between lines become.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 0.5;
)"
        R"(
)"
        R"(uniform float Tint <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Phosphor Tint";
)"
        R"(    ui_tooltip = "Strength of the green-warm phosphor cast.";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.05;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_Scanlines(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float line_pos = uv.y * Density * 0.5;
)"
        R"(    float gate = cos((frac(line_pos) - 0.5) * 3.1415926 * Intensity) * 1.5;
)"
        R"(
)"
        R"(    float3 rgb = tex2D(BackBuffer, uv).rgb;
)"
        R"(    float3 color = rgb * 0.5 + 0.5 * rgb * rgb * 1.2;
)"
        R"(
)"
        R"(    float3 phosphor = lerp(float3(1.0, 1.0, 1.0), float3(0.9, 1.0, 0.7), Tint);
)"
        R"(    color *= phosphor;
)"
        R"(
)"
        R"(    float2 diff = uv - 0.5;
)"
        R"(    color *= 1.1 - 0.6 * (dot(diff, diff) * 2.0);
)"
        R"(
)"
        R"(    return float4(saturate(color * saturate(gate)), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique Scanlines <
)"
        R"(    ui_label = "Scanlines";
)"
        R"(    ui_tooltip = "Darkens alternating rows of pixels to imitate the horizontal scanlines of a CRT. Cheaper than the full CRT effect when you only want the lines.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_Scanlines;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "Sharpen.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Amount <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Amount";
)"
        R"(    ui_min = 0.0; ui_max = 3.0; ui_step = 0.01;
)"
        R"(> = 0.6;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_Sharpen(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float2 texel = float2(BUFFER_RCP_WIDTH, BUFFER_RCP_HEIGHT);
)"
        R"(
)"
        R"(    float3 centre = tex2D(BackBuffer, uv).rgb;
)"
        R"(    float3 blur = tex2D(BackBuffer, uv + float2(-texel.x, 0.0)).rgb;
)"
        R"(    blur += tex2D(BackBuffer, uv + float2(texel.x, 0.0)).rgb;
)"
        R"(    blur += tex2D(BackBuffer, uv + float2(0.0, -texel.y)).rgb;
)"
        R"(    blur += tex2D(BackBuffer, uv + float2(0.0, texel.y)).rgb;
)"
        R"(    blur *= 0.25;
)"
        R"(
)"
        R"(    return float4(centre + (centre - blur) * Amount, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique Sharpen <
)"
        R"(    ui_label = "Sharpen";
)"
        R"(    ui_tooltip = "Unsharp mask that brings back edge detail lost to scaling. Most useful after upscaling a low internal resolution.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_Sharpen;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "SplitToning.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float ShadowHue <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Shadow Hue";
)"
        R"(    ui_min = 0.0; ui_max = 360.0; ui_step = 1.0;
)"
        R"(> = 210.0;
)"
        R"(
)"
        R"(uniform float ShadowStrength <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Shadow Strength";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.01;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(uniform float HighlightHue <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Highlight Hue";
)"
        R"(    ui_min = 0.0; ui_max = 360.0; ui_step = 1.0;
)"
        R"(> = 45.0;
)"
        R"(
)"
        R"(uniform float HighlightStrength <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Highlight Strength";
)"
        R"(    ui_min = 0.0; ui_max = 1.0; ui_step = 0.01;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(uniform float Balance <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Balance";
)"
        R"(    ui_tooltip = "Moves the split between what counts as shadow and what counts as highlight.";
)"
        R"(    ui_min = -0.5; ui_max = 0.5; ui_step = 0.01;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float3 HueToRGB(float hue)
)"
        R"({
)"
        R"(    float h = frac(hue / 360.0) * 6.0;
)"
        R"(    return saturate(float3(abs(h - 3.0) - 1.0, 2.0 - abs(h - 2.0), 2.0 - abs(h - 4.0)));
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_SplitToning(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float3 rgb = tex2D(BackBuffer, uv).rgb;
)"
        R"(
)"
        R"(    float luma = saturate(dot(rgb, float3(0.2126, 0.7152, 0.0722)) + Balance);
)"
        R"(
)"
        R"(    float3 shadow_tint = HueToRGB(ShadowHue) - 0.5;
)"
        R"(    float3 highlight_tint = HueToRGB(HighlightHue) - 0.5;
)"
        R"(
)"
        R"(    rgb += shadow_tint * ShadowStrength * 0.25 * (1.0 - luma);
)"
        R"(    rgb += highlight_tint * HighlightStrength * 0.25 * luma;
)"
        R"(
)"
        R"(    return float4(saturate(rgb), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique SplitToning <
)"
        R"(    ui_label = "Split Toning";
)"
        R"(    ui_tooltip = "Tints the shadows and the highlights towards two different hues.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_SplitToning;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "Vignette.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(// SPDX-FileCopyrightText: Copyright 2012 PPSSPP Project
)"
        R"(// SPDX-License-Identifier: GPL-2.0-or-later
)"
        R"(// Ported from vignette.fsh in PPSSPP, by Henrik Rydgard.
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Strength <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Strength";
)"
        R"(    ui_tooltip = "How dark the corners become.";
)"
        R"(    ui_min = 0.0; ui_max = 2.0; ui_step = 0.01;
)"
        R"(> = 0.6;
)"
        R"(
)"
        R"(uniform float Aspect <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Aspect";
)"
        R"(    ui_min = 0.5; ui_max = 2.0; ui_step = 0.01;
)"
        R"(> = 1.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_Vignette(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float2 diff = uv - 0.5;
)"
        R"(    diff.x *= Aspect;
)"
        R"(    diff.y /= max(Aspect, 0.0001);
)"
        R"(
)"
        R"(    float falloff = 1.0 - min(1.0, Strength * dot(diff, diff) * 2.0);
)"
        R"(    float3 rgb = tex2D(BackBuffer, uv).rgb;
)"
        R"(
)"
        R"(    return float4(rgb * falloff, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique Vignette <
)"
        R"(    ui_label = "Vignette";
)"
        R"(    ui_tooltip = "Darkens the corners of the screen to pull the eye towards the middle, the way a camera lens falls off at its edges.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_Vignette;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
    {
        "WhiteBalance.fx",
        R"(// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
)"
        R"(// SPDX-License-Identifier: GPL-3.0-or-later
)"
        R"(
)"
        R"(texture BackBufferTex : COLOR;
)"
        R"(sampler BackBuffer { Texture = BackBufferTex; };
)"
        R"(
)"
        R"(uniform float Temperature <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Temperature";
)"
        R"(    ui_tooltip = "Negative cools the picture towards blue, positive warms it towards orange.";
)"
        R"(    ui_min = -100.0; ui_max = 100.0; ui_step = 1.0;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(uniform float Tint <
)"
        R"(    ui_type = "slider";
)"
        R"(    ui_label = "Tint";
)"
        R"(    ui_tooltip = "Negative shifts towards green, positive towards magenta.";
)"
        R"(    ui_min = -100.0; ui_max = 100.0; ui_step = 1.0;
)"
        R"(> = 0.0;
)"
        R"(
)"
        R"(void VS_PostProcess(in uint id : SV_VertexID, out float4 pos : SV_Position, out float2 uv : TEXCOORD)
)"
        R"({
)"
        R"(    uv = float2(float(id & 2), float((id & 1) << 1));
)"
        R"(    pos = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(float3 WhitePointLMS(float t1, float t2)
)"
        R"({
)"
        R"(    float shift = 0.05;
)"
        R"(    if (t1 < 0.0)
)"
        R"(    {
)"
        R"(        shift = 0.10;
)"
        R"(    }
)"
        R"(    float x = 0.31271 - t1 * shift;
)"
        R"(    float y = 2.87 * x - 3.0 * x * x - 0.27509507 + t2 * 0.05;
)"
        R"(
)"
        R"(    float big_y = 1.0;
)"
        R"(    float big_x = big_y * x / y;
)"
        R"(    float big_z = big_y * (1.0 - x - y) / y;
)"
        R"(
)"
        R"(    return float3( 0.7328 * big_x + 0.4296 * big_y - 0.1624 * big_z,
)"
        R"(                  -0.7036 * big_x + 1.6975 * big_y + 0.0061 * big_z,
)"
        R"(                   0.0030 * big_x + 0.0136 * big_y + 0.9834 * big_z);
)"
        R"(}
)"
        R"(
)"
        R"(float4 PS_WhiteBalance(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target
)"
        R"({
)"
        R"(    float3 rgb = pow(max(tex2D(BackBuffer, uv).rgb, 0.0), 2.2);
)"
        R"(
)"
        R"(    float3 balance = float3(0.949237, 1.03542, 1.08728) /
)"
        R"(                     WhitePointLMS(Temperature / 65.0, Tint / 65.0);
)"
        R"(
)"
        R"(    const float3x3 rgb_to_lms = float3x3(0.390405, 0.549941, 0.008926,
)"
        R"(                                         0.070841, 0.963172, 0.001358,
)"
        R"(                                         0.023108, 0.128021, 0.936245);
)"
        R"(    const float3x3 lms_to_rgb = float3x3( 2.858470, -1.628790, -0.024891,
)"
        R"(                                         -0.210182,  1.158200,  0.000324,
)"
        R"(                                         -0.041812, -0.118169,  1.068670);
)"
        R"(
)"
        R"(    float3 lms = mul(rgb_to_lms, rgb) * balance;
)"
        R"(    rgb = mul(lms_to_rgb, lms);
)"
        R"(
)"
        R"(    return float4(saturate(pow(max(rgb, 0.0), 1.0 / 2.2)), 1.0);
)"
        R"(}
)"
        R"(
)"
        R"(technique WhiteBalance <
)"
        R"(    ui_label = "White Balance";
)"
        R"(    ui_tooltip = "Corrects a picture that looks too cool, too warm or tinted.";
)"
        R"(>
)"
        R"({
)"
        R"(    pass
)"
        R"(    {
)"
        R"(        VertexShader = VS_PostProcess;
)"
        R"(        PixelShader = PS_WhiteBalance;
)"
        R"(    }
)"
        R"(}
)"
        R"(
)"
    },
};

} // namespace VideoCore

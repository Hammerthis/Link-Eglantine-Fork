// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include <string_view>

namespace VideoCore {

struct BundledFxPreset {
    std::string_view name;
    std::string_view source;
};

constexpr BundledFxPreset BUNDLED_FX_PRESETS[]{
    {
        "Anime.fxp",
        R"(name=Anime
)"
        R"(description=Cel shaded look: the picture is cleaned first, then the lighting is collapsed into flat bands with inked edges, finished with a small glow.
)"
        R"(chain=Denoise.fx|Denoise|Strength=0.18,Radius=1.2;CelShading.fx|CelShading|Bands=5,BandContrast=0.35,BandEdge=0.2,Detail=0.7,OutlineStrength=0.7,OutlineThreshold=0.2,Saturation=1.3;Bloom.fx|Bloom|Radius=1.2,Amount=0.25
)"
        R"(
)"
    },
    {
        "Cinematic.fxp",
        R"(name=Cinematic
)"
        R"(description=Film look: soft glow on the highlights, a filmic contrast curve, cool shadows against warm highlights, fine grain and a gentle vignette.
)"
        R"(chain=Bloom.fx|Bloom|Radius=1.6,Amount=0.35;FilmicCurve.fx|FilmicCurve|Toe=1.35,Shoulder=1.3,Amount=0.85;SplitToning.fx|SplitToning|ShadowHue=210,ShadowStrength=0.25,HighlightHue=38,HighlightStrength=0.3;FilmGrain.fx|FilmGrain|Intensity=0.022;Vignette.fx|Vignette|Strength=0.5
)"
        R"(
)"
    },
    {
        "Clean.fxp",
        R"(name=Clean
)"
        R"(description=Cleans up a low internal resolution: removes dithering and compression noise, smooths banded skies and brings edge detail back. The safe starting point if you are not sure what you want.
)"
        R"(chain=Denoise.fx|Denoise|Strength=0.14,Curve=1.2;Deband.fx|Deband|;Sharpen.fx|Sharpen|Amount=0.75
)"
        R"(
)"
    },
    {
        "Dreamy.fxp",
        R"(name=Dreamy
)"
        R"(description=Soft focus: the centre of the screen stays sharp while everything around it blurs, with a wide glow over the highlights. Good for slower games and cutscenes.
)"
        R"(chain=Blur.fx|Blur|Radius=6,Strength=0.85,FocusSize=0.28,FocusSoftness=0.5;Bloom.fx|Bloom|Radius=2.0,Amount=0.55
)"
        R"(
)"
    },
    {
        "Retro.fxp",
        R"(name=Retro
)"
        R"(description=Old television look: colour fringing at the edges of the screen, curved scanlines with a phosphor mask, and darkened corners. The scanline roll is switched off so it does not crawl.
)"
        R"(chain=ChromaticAberration.fx|ChromaticAberration|Strength=1.0;CRT.fx|CRT|RollSpeed=0,Bleed=1.2;Vignette.fx|Vignette|Strength=0.7
)"
        R"(
)"
    },
    {
        "Vivid.fxp",
        R"(name=Vivid
)"
        R"(description=Punchier colour without stylising the image: warmer and more saturated, blacks and whites pushed to the ends of the range, and a light sharpen.
)"
        R"(chain=NaturalColors.fx|NaturalColors|Luma=1.15,Chroma=1.35;Levels.fx|Levels|InputBlack=0.02,InputWhite=0.98;Sharpen.fx|Sharpen|Amount=0.5
)"
        R"(
)"
    },
};

} // namespace VideoCore

#include <algorithm>
#include <cstdint>
#include <cassert>
using u32=uint32_t; using u64=uint64_t;
namespace Common { template<class T, class U> T AlignUp(T n,U a) { const T align=a; return (n+align-1)&~(align-1); } }
struct Nx2ImageLayout {
    u32 width;
    u32 height;
    u64 pitch;
    u32 block_height_log2;
    u64 size;
    u64 alignment;
};

inline Nx2ImageLayout Nx2CalculateImageLayout(const u32* preference) {
    Nx2ImageLayout layout{};
    layout.width = (preference[2] & 0xFFFF) + 1;
    layout.height = (preference[2] >> 16) + 1;
    const u64 pitch_gobs = preference[5];
    const u32 block_height_log2 = preference[4];
    if (block_height_log2 <= 8 && pitch_gobs >= (u64{layout.width} * 4 + 63) / 64 &&
        pitch_gobs <= 4096) {
        layout.pitch = pitch_gobs * 64;
        layout.block_height_log2 = block_height_log2;
    } else {
        layout.pitch = Common::AlignUp(u64{layout.width} * 4, 64);
        layout.block_height_log2 = 7;
    }
    const u64 block_rows = u64{1} << layout.block_height_log2;
    layout.size = layout.pitch * Common::AlignUp(u64{layout.height}, block_rows);
    // Buffer alignment is independent of the block-linear tile height. Requiring a
    // full tile rejects the SDK's 4 KiB-aligned native window buffers.
    layout.alignment = 0x1000;
    return layout;
}


int main() {
 u32 p[16]{}; p[1]=2; p[2]=(2160-1)*65536+(3840-1); p[4]=7; p[5]=240; p[6]=1;
 const auto four_k=Nx2CalculateImageLayout(p);
 assert(four_k.size==0x1fe0000); assert(four_k.pitch==0x3c00);
 assert(four_k.alignment==0x1000);
 assert((0x1000 & (four_k.alignment-1))==0);
 assert(four_k.size<=0x3000000);
 p[2]=(720-1)*65536+(1280-1); p[4]=7; p[5]=80;
 const auto hd=Nx2CalculateImageLayout(p);
 assert(hd.size==5120*768); assert(hd.alignment==0x1000);
 p[4]=99; p[5]=0;
 const auto fallback=Nx2CalculateImageLayout(p);
 assert(fallback.size==hd.size); assert(fallback.alignment==0x1000);
}

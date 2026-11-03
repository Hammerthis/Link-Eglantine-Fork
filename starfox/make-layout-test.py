from pathlib import Path
s=Path('work/selevet-source/src/core/hle/service/nx2_gsv.h').read_text()
a=s.index('struct Nx2ImageLayout {');z=s.index('// GameChat',a)
code='''#include <algorithm>\n#include <cstdint>\n#include <cassert>\nusing u32=uint32_t; using u64=uint64_t;\nnamespace Common { template<class T, class U> T AlignUp(T n,U a) { const T align=a; return (n+align-1)&~(align-1); } }\n'''+s[a:z]+'''
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
'''
Path('work/starfox/test_image_layout.cpp').write_text(code)


import sys,struct,pathlib
sys.path.insert(0,str(pathlib.Path('work/python-libs').resolve()))
import lz4.block,capstone
p=pathlib.Path(r'C:\ns2roms\StarFox\Star Fox (Switch 2)\base\exefs\main')
b=p.read_bytes(); u32=lambda o:struct.unpack_from('<I',b,o)[0]
print('flags',hex(u32(12)))
segs=[struct.unpack_from('<4I',b,16+i*16) for i in range(3)]
image=bytearray(max(loc+size for off,loc,size,_ in segs))
for i,(off,loc,size,_) in enumerate(segs):
 data=b[off:off+(u32(0x60+4*i) if u32(12)&(1<<i) else size)]
 if u32(12)&(1<<i): data=lz4.block.decompress(data,uncompressed_size=size)
 image[loc:loc+size]=data
pathlib.Path('work/starfox/main-image.bin').write_bytes(image)
ro=segs[1][1]; strings=ro+u32(0x90); syms=ro+u32(0x98); symsize=u32(0x9c)
functions=[]
for off in range(syms,syms+symsize,24):
 name,info,other,section,val,size=struct.unpack_from('<IBBHQQ',image,off)
 if val and name:
  end=image.find(0,strings+name); label=image[strings+name:end].decode('utf-8','replace')
  functions.append((val,size,label))
functions.sort()
for target in [0xb14fb40,0xb14facc,0xb155680]:
 print('TARGET',hex(target))
 nearby=[x for x in functions if x[0]<=target][-4:]
 for x in nearby: print(hex(x[0]),hex(x[1]),x[2])
 md=capstone.Cs(capstone.CS_ARCH_ARM64,capstone.CS_MODE_LITTLE_ENDIAN)
 for ins in md.disasm(bytes(image[target-64:target+128]),target-64): print(hex(ins.address),ins.mnemonic,ins.op_str)
pathlib.Path('work/starfox/main-symbols.txt').write_text('\n'.join(f'{a:x} {s:x} {n}' for a,s,n in functions))




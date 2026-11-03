import sys,pathlib
sys.path.insert(0,str(pathlib.Path('work/python-libs').resolve()))
import capstone
b=pathlib.Path('work/starfox/sdk-image.bin').read_bytes()
syms={int(l.split()[0],16):' '.join(l.split()[2:]) for l in pathlib.Path('work/starfox/sdk-symbols.txt').read_text().splitlines()}
md=capstone.Cs(capstone.CS_ARCH_ARM64,capstone.CS_MODE_LITTLE_ENDIAN)
for a,n in [(0x329d10,0x58),(0x327e40,0x190)]:
 print('\nFUNCTION',hex(a),syms.get(a,''))
 for i in md.disasm(b[a:a+n],a):
  extra=''
  if i.mnemonic in ['bl','b'] and i.op_str.startswith('#'): extra=syms.get(int(i.op_str[1:],16),'')
  print(f'{i.address:x}: {i.mnemonic} {i.op_str} {extra}')



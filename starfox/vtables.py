import pathlib,struct
b=pathlib.Path('work/starfox/sdk-image.bin').read_bytes()
for a in [0xe50a48,0xe50b60]:
 print(hex(a),[hex(x) for x in struct.unpack_from('<13Q',b,a)])

import sys
from pathlib import Path
sys.path.insert(0, 'work/python-libs')
import capstone

b = Path('work/starfox/main-image.bin').read_bytes()
base = 0x80101000
md = capstone.Cs(capstone.CS_ARCH_ARM64, capstone.CS_MODE_LITTLE_ENDIAN)
syms = [(int(x.split()[0], 16), x.split(' ', 2)[2]) for x in Path('work/starfox/main-symbols.txt').read_text().splitlines()]
for pc in (0x8b250b40, 0x8b259680):
    target = pc - base
    print('TARGET', hex(target), 'FUNCTION', max((s for s in syms if s[0] <= target), default=None))
    for ins in md.disasm(b[target-48:target+68], target-48):
        print(hex(ins.address), ins.mnemonic, ins.op_str)

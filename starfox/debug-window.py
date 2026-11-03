import socket,pathlib,re,time,json
s=socket.create_connection(('127.0.0.1',6543),10); s.settimeout(40)
def recv():
 while s.recv(1)!=b'$': pass
 data=b''
 while True:
  c=s.recv(1)
  if c==b'#': break
  data+=c
 s.recv(2);s.sendall(b'+');return data.decode()
def cmd(t):
 b=t.encode();s.sendall(b'$'+b+b'#'+f'{sum(b)%256:02x}'.encode());return recv()
def reg(n):return int.from_bytes(bytes.fromhex(cmd('p'+format(n,'x'))),'little')
def mem(a,n):return cmd(f'm{a:x},{n:x}')
print(cmd('qSupported'),flush=True)
log=pathlib.Path.home()/'AppData/Roaming/eden/log/eden_log.txt'
text=log.read_text(errors='replace'); base=int(re.search(r'Module sdk loaded at (0x[0-9a-f]+)',text)[1],16)
print('base',hex(base),flush=True)
offsets=[0x5e5770,0x5e5980,0x5e64c0,0x5e69c0,0x5e6800,0x5e6a40,0x5e6a54,0x5e6fa0]
for o in offsets: print('break',hex(o),cmd(f'Z0,{base+o:x},4'),flush=True)
for hit in range(12):
 print('stop',cmd('c'),flush=True)
 regs={f'x{i}':hex(reg(i)) for i in range(31)};pc=reg(32)
 print('pc',hex(pc),'offset',hex(pc-base),'regs',json.dumps(regs),flush=True)
 if pc-base in [0x5e64c0,0x5e69c0,0x5e6800]: print('texture',mem(int(regs['x2'],16),80),flush=True)
 if pc-base in offsets: print('remove',cmd(f'z0,{pc:x},4'),flush=True)
 else: break
 if pc-base==0x5e6fa0:break
s.close()

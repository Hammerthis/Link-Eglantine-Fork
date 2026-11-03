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

print('temporary alignment probe',cmd(f'M{base+0x5e649c:x},4:080082d2'),flush=True)
s.sendall(b'$c#63'); time.sleep(2)
s.close()



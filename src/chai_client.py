"""Client CHAI natif — parle au VNM CopperLan via TCP :5500
Framing : ef51 <len:1B> <flag:1B> <message> <crc32(msg) BIG-ENDIAN>
flag: b0=client->VNM, 20=VNM->client, 10=keepalive, a0=ping
"""
import socket,struct,zlib,time

VNM_HOST='127.0.0.1'; VNM_PORT=55000
ID_UTRACK=0x34b96e2e   # endpoint uTrack24
ID_DEFAULT=0x69727160  # endpoint client (à rendre unique)

def frame(msg,flag=0xb0):
    return b'\xef\x51'+bytes([len(msg)&0xff])+bytes([flag])+msg+struct.pack('>I',zlib.crc32(msg)&0xffffffff)

class ChaiClient:
    def __init__(self,host=VNM_HOST,port=VNM_PORT,name=b'DewiTool'):
        self.name=name
        self.s=socket.socket();self.s.connect((host,port))
        self.buf=b''
    def send(self,msg,flag=0xb0):
        self.s.sendall(frame(msg,flag))
    def rx(self,t=1.0):
        self.s.settimeout(t);buf=b''
        try:
            while True:
                d=self.s.recv(65536)
                if not d:break
                buf+=d
        except socket.timeout:pass
        return buf
    def hello(self):
        self.s.sendall(bytes.fromhex('ef510180010000000f4e13bf'))
        return self.rx(0.5)
    def declare(self,member_id=ID_DEFAULT):
        """Déclare le membre (adapté du message c842 capturé)."""
        msg=bytes.fromhex('0001c84200000000000000000000000000000000010000000342001047000e000200')+struct.pack('<I',member_id)+bytes.fromhex('000000000000000000000000000008006000010040000000000000000040000000400000000000000040000000001000700')+self.name+b'\x00'
        self.send(msg);return self.rx(1.0)
    def raw(self,hexmsg):
        self.send(bytes.fromhex(hexmsg));return self.rx(1.0)

if __name__=='__main__':
    import sys
    c=ChaiClient()
    print('hello:',c.hello().hex())
    print('decl:',c.declare().hex()[:160])
    # mute canal 1 — corps capturé pendant uRemote
    print('mute:',c.raw('000184230000000001000100d01f000000000000000001000e00010034b96e2e0000000001000000012304103400fe0101000100d01f000000004009000000000000').hex()[:160])

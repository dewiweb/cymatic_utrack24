"""Client CHAI natif — membre visible dans CopperLan Manager.
Protocole: TCP :55000, framing ef51<len8><flag><msg><crc32BE>
flag: b0=client->VNM, 20=VNM->client, 10=keepalive, a0=ping, 0180=hello
"""
import socket,struct,zlib,time,threading

VNM_HOST='127.0.0.1'; VNM_PORT=55000

def frame(msg,flag=0xb0):
    return b'\xef\x51'+bytes([len(msg)&0xff])+bytes([flag])+msg+struct.pack('>I',zlib.crc32(msg)&0xffffffff)

class ChaiClient:
    def __init__(self,name=b'DewiTool',member_id=0x6d795442,host=VNM_HOST,port=VNM_PORT):
        self.name=name;self.mid=member_id
        self.s=socket.socket();self.s.connect((host,port))
        self.s.settimeout(0.5)
    def send(self,msg,flag=0xb0):
        self.s.sendall(frame(msg,flag))
    def rx(self,t=0.5):
        buf=b''
        try:
            while True:
                d=self.s.recv(65536)
                if not d:break
                buf+=d
        except socket.timeout:pass
        return buf
    def hello(self):
        # ef51 01 80 = hello (le 01=version? 80=type), réponse ef510000+rand
        self.s.sendall(b'\xef\x51\x01\x80\x01\x00\x00\x00'+struct.pack('<I',0x0f4e13bf))
        return self.rx(0.5)
    def _decl(self,payload):
        self.send(payload)
    def declare(self):
        """Rejoue la séquence de déclaration capturée, avec notre nom."""
        # 1. déclaration courte (x2)
        base=bytes.fromhex('0001c84200000000000000000000000000000000010000000142041012')
        self._decl(base+bytes.fromhex('00010001001718000000000000000000'))
        self._decl(base+bytes.fromhex('000e00020000000000000000000000'))
        # 2. membre CHAI.1817
        self._decl(bytes.fromhex('0001c842000000000000000000000000000000000100000003420010490001000100171800000000000000000000000000000000000000000100108400000000000000000100008400000000000000000000000000000900')+b'CHAI.1817\x00\x00\x00')
        # 3. membre nommé (notre nom + ID)
        self._decl(bytes.fromhex('0001c84200000000000000000000000000000000010000000342001047000e000200')+struct.pack('<I',self.mid)+bytes.fromhex('00000000000000000000000000075e000080060000100400000000000000040000000400000000000000040000000001000700')+self.name+b'\x00')
        return self.rx(1.0)
    def keepalive(self):
        self.s.sendall(bytes.fromhex('ef5100a02d4ee686'))
    def run(self):
        print('hello:',self.hello().hex()[:80])
        print('decl:',self.declare().hex()[:120])
        print('membre déclaré — vérifier CopperLan Manager!')
        try:
            while True:
                self.keepalive()
                r=self.rx(1.0)
                if r:print('rx:',r[:60].hex())
        except KeyboardInterrupt:pass

if __name__=='__main__':
    ChaiClient().run()

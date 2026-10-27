"""Controle du uTrack24 via CopperLan/CHAI (VNM local :55000), sans uRemote.

Valide sur le materiel: play / stop / rec (ctrl 0xd000, sous-session 02).
Trame = copie octet pour octet de celle d'uRemote (research/assets/cap/play_true.log t=45.207).

Usage CLI: python src/utrack_control.py play | stop | rec | ctrl d000 4 [sub]
"""
import os,sys,time,socket,struct,threading
sys.path.insert(0,os.path.dirname(__file__))
from chai_session import frame,parse

ROOT=os.path.join(os.path.dirname(__file__),'..')
SEQ_FILE=os.path.join(ROOT,'research','assets','cap','init_seq_fresh.txt')

# 8437 / TLV 4337 : membre uRemote 06972716 -> device uTrack 34b96e2e
CTRL_TEMPLATE=bytes.fromhex('00018437000000000e0002000697271600000200000001000e00010034b96e2e0000020001000000'
                            '433700101e001600000000d00000000000000000000000000000000004000000')
SUB_OFFS=(18,34);CTRL_OFF=50

TRANSPORT=0xd000
STOP,PLAY,REC=3,4,5   # PLAY sert aussi de Pause (meme valeur emise par uRemote)

def ctrl_msg(ctrl,val,sub=2):
    m=bytearray(CTRL_TEMPLATE)
    for o in SUB_OFFS:struct.pack_into('<H',m,o,sub)
    struct.pack_into('<H',m,CTRL_OFF,ctrl)
    struct.pack_into('<i',m,len(m)-4,val)
    return bytes(m)

class UTrackControl:
    def __init__(self,host='127.0.0.1',port=55000,seq_file=SEQ_FILE):
        self.addr=(host,port);self.seq_file=seq_file
        self.s=None;self.lock=threading.Lock();self.alive=False

    def _send(self,data):
        with self.lock:self.s.sendall(data)

    def _drain(self):
        try:
            while self.s.recv(65536):pass
        except socket.timeout:pass

    def connect(self):
        self.s=socket.socket();self.s.connect(self.addr);self.s.settimeout(0.02)
        for l in open(self.seq_file):
            self._send(bytes.fromhex(l.strip()));self._drain();time.sleep(0.003)
        self.s.settimeout(0.2);self.alive=True
        threading.Thread(target=self._loop,daemon=True).start()
        return self

    def _loop(self):
        buf=b'';last=0
        while self.alive:
            try:
                d=self.s.recv(65536)
                if not d:break
                buf+=d
            except socket.timeout:pass
            except OSError:break
            frames,buf=parse(buf)
            for fl,body,ok in frames:
                if fl==2 and body[:4]==b'\x00\x01\xc4\x23':
                    resp=bytearray(body);resp[2:4]=b'\x44\x23'
                    self._send(frame(bytes(resp)))
            if time.time()-last>0.4:
                self._send(frame(b'',0xa));last=time.time()
        self.alive=False

    def ctrl(self,ctrl,val,sub=2):
        self._send(frame(ctrl_msg(ctrl,val,sub)))

    def play(self):self.ctrl(TRANSPORT,PLAY)
    def pause(self):self.ctrl(TRANSPORT,PLAY)
    def stop(self):self.ctrl(TRANSPORT,STOP)
    def rec(self):self.ctrl(TRANSPORT,REC)

    def close(self):
        self.alive=False
        if self.s:self.s.close()

if __name__=='__main__':
    a=sys.argv[1:]
    if not a:sys.exit(__doc__)
    u=UTrackControl().connect()
    if a[0]=='ctrl':u.ctrl(int(a[1],16),int(a[2]),int(a[3]) if len(a)>3 else 2)
    else:getattr(u,a[0])()
    print(a[0],'envoye');time.sleep(2);u.close()

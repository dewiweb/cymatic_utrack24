"""Controle du uTrack24 via CopperLan/CHAI (VNM local :55000), sans uRemote.

Valide sur le materiel: play / stop / rec (ctrl 0xd000, sous-session 02).
Trame = copie octet pour octet de celle d'uRemote (research/assets/cap/play_true.log t=45.207).

Usage CLI: python src/utrack_control.py play | stop | rec | state | ctrl d000 4 [sub] | num d070 e7ce
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

# 8437 / TLV 4237 : ecriture numerique (chai2_125803.log t=15.823)
NUM_TEMPLATE=bytes.fromhex(CTRL_TEMPLATE[:40].hex()+'4237001028002000'+'00'*32)
NUM_VAL_OFF=68

NODE={0xf:0,0xe:1,0xd:2,0xc:3,0xb:4}
def node(ctrl):return NODE[ctrl>>12]

TRANSPORT=0xd000
STOP,PLAY,REC=3,4,5   # PLAY sert aussi de Pause (meme valeur emise par uRemote)

# Domaines extraits de la decompilation uRemote (research/notes/device_model.md)
SETTINGS={0xb000:[(0,'Internal'),(1,'Wordclock'),(2,'Digital I/O'),(3,'PTP')],
          0xb001:[(0,'Play'),(1,'Play-Pause'),(2,'Record'),(3,'Play-Stop')],
          0xb102:[(1,'44.1 kHz'),(2,'48 kHz'),(3,'88.2 kHz'),(4,'96 kHz')],
          0xb103:[(16,'16-bit'),(24,'24-bit')],
          0xb104:[(2,'Stereo')]+[(n,'%d Ch'%n) for n in (4,8,12,16,20,24)],
          0xb203:[(-1,'Single'),(0,'Continuous'),(1,'Shuffle'),(2,'Repeat One'),(3,'Repeat All')],
          0xb204:[(n,'%d-%d'%(n,n+1)) for n in range(1,32,2)],
          0xb205:[(n,'%d-%d'%(n,n+1)) for n in range(1,32,2)]}
def att_raw(db):return ((db+30)*0xffff)//30
def att_db(raw):return round(raw*30/65535-30)
def ms_raw(v):return ((v+1000)*0xffff)//2000
def ms_val(raw):return round(raw*2000/65535-1000)

def ctrl_msg(ctrl,val,sub=None):
    if sub is None:sub=node(ctrl)
    m=bytearray(CTRL_TEMPLATE)
    for o in SUB_OFFS:struct.pack_into('<H',m,o,sub)
    struct.pack_into('<H',m,CTRL_OFF,ctrl)
    struct.pack_into('<i',m,len(m)-4,val)
    return bytes(m)

def num_msg(ctrl,val,sub=None):
    if sub is None:sub=node(ctrl)
    m=bytearray(NUM_TEMPLATE)
    for o in SUB_OFFS:struct.pack_into('<H',m,o,sub)
    struct.pack_into('<H',m,CTRL_OFF,ctrl)
    struct.pack_into('<H',m,NUM_VAL_OFF,val)
    return bytes(m)

class UTrackControl:
    def __init__(self,host='127.0.0.1',port=55000,seq_file=SEQ_FILE):
        self.addr=(host,port);self.seq_file=seq_file
        self.s=None;self.lock=threading.Lock();self.alive=False
        self.slock=threading.Lock();self.state={};self._hbi=0

    def _send(self,data):
        with self.lock:self.s.sendall(data)

    def _drain(self):
        d=b''
        try:
            while True:
                r=self.s.recv(65536)
                if not r:break
                d+=r
        except socket.timeout:pass
        return d

    def connect(self):
        self.s=socket.socket();self.s.connect(self.addr);self.s.settimeout(0.02)
        buf=b''
        for l in open(self.seq_file):
            self._send(bytes.fromhex(l.strip()));buf+=self._drain();time.sleep(0.003)
        for fl,body,ok in parse(buf)[0]:
            if body[2:4]==b'\x44\x37':self._update(body)
        self.s.settimeout(0.2);self.alive=True
        threading.Thread(target=self._loop,daemon=True).start()
        return self

    # keepalives de souscription c423 (rejoues, en rotation comme uRemote)
    HBS=[bytes.fromhex(h) for h in (
        'ef5130b00001c4230000000001000100d01f000000000000000001000e00010034b96e2e00000000010000009023001008000200ad520aac',
        'ef5130b00001c423000000000e0002000697271600000000000001000e00010034b96e2e00000000010000009023001008000100a5523aaa',
        'ef5130b00001c423fffffffffeff2000f4de012f011000000000010001000200ca53d56b00000000010000009023001008000100af5a25de',
        'ef5130b00001c423fffffffffeff2000f4de012f00100000000001000e00010034b96e2e00000000010000009023001008000100e659b6cf')]

    def ensure_alive(self):
        """Reconnecte la session si le thread de reception est mort."""
        if self.alive:return
        self.alive=True
        threading.Thread(target=self._reconnect,daemon=True).start()

    def _reconnect(self):
        try:
            try:self.s.close()
            except Exception:pass
            self.connect()
        except Exception:
            self.alive=False

    def _loop(self):
        buf=b'';last=0;last_hb=0
        while self.alive:
            try:
                d=self.s.recv(65536)
                if not d:break
                buf+=d
            except socket.timeout:pass
            except OSError:break
            frames,buf=parse(buf)
            for fl,body,ok in frames:
                try:
                    if fl==2 and body[:4]==b'\x00\x01\xc4\x23':
                        resp=bytearray(body);resp[2:4]=b'\x44\x23'
                        self._send(frame(bytes(resp)))
                    elif body[2:4]==b'\x44\x37':self._update(body)
                except Exception:continue  # trame malformee : ne pas tuer la boucle
            if time.time()-last_hb>0.5:
                try:self._send(self.HBS[self._hbi%len(self.HBS)]);self._hbi+=1
                except OSError:break
                last_hb=time.time()
            if time.time()-last>0.4:
                self._send(frame(b'',0xa));last=time.time()
        self.alive=False
        try:self.s.close()
        except Exception:pass

    def _update(self,m):
        o=40
        while o+8<=len(m):
            try:t,f,L,l2=struct.unpack_from('<HHHH',m,o)
            except struct.error:break
            if f!=0x1000 or L<8:break
            pl=m[o+8:o+8+l2];o+=(L+3)&~3
            if t!=0x37c8 or len(pl)<16:continue
            op=pl[0];ctrl=struct.unpack_from('<H',pl,6)[0];v=l=None
            if op in (0xc1,0xc2):
                v=struct.unpack_from('<H',pl,12)[0];lo=14 if op==0xc2 else 24
                if len(pl)>=lo+2:
                    n=struct.unpack_from('<H',pl,lo)[0]
                    if 0<n<=len(pl)-lo-2:l=pl[lo+2:lo+2+n].decode('ascii','replace')
            elif op==0xc3:
                n=struct.unpack_from('<H',pl,12)[0]
                if 0<n<=len(pl)-14:l=pl[14:14+n].decode('ascii','replace')
            else:continue
            with self.slock:self.state[ctrl]=(v,l,time.time())

    def wait(self,ctrl,pred,timeout=2.0):
        """Attend que state[ctrl] satisfasse pred(valeur,libelle) ; rend l'entree ou None."""
        t0=time.time()
        while time.time()-t0<timeout:
            with self.slock:e=self.state.get(ctrl)
            if e and pred(e[0],e[1]):return e
            time.sleep(0.02)

    def ctrl(self,ctrl,val,sub=None):
        self._send(frame(ctrl_msg(ctrl,val,sub)))

    def set(self,ctrl,val):self.ctrl(ctrl,val)
    def num(self,ctrl,val):self._send(frame(num_msg(ctrl,val)))

    def _toggle(self,ctrl,on):
        with self.slock:e=self.state.get(ctrl)
        if e is None or e[0]!=(1 if on else 0):self.set(ctrl,2)

    def mute(self,ch,on):self._toggle(0xd030+ch,on)
    def solo(self,ch,on):self._toggle(0xd010+ch,on)
    def fader(self,ch,raw):self.num(0xd070+ch,raw)
    def pan(self,ch,raw):self.num(0xd050+ch,raw)

    def play(self):self.ctrl(TRANSPORT,PLAY)
    def pause(self):self.ctrl(TRANSPORT,PLAY)
    def stop(self):self.ctrl(TRANSPORT,STOP)
    def rec(self):self.ctrl(TRANSPORT,REC)
    def marker(self):self.ctrl(TRANSPORT,PLAY)   # Play pendant un enregistrement = nouveau marqueur (manuel uRemote p.15, verifie Take0012)

    def close(self):
        self.alive=False
        if self.s:self.s.close()

    # status word 0xf050 "UTrack Operation Status" (cf ghidra_utrack_notify.md):
    # bit0=sync lock, bits1-3=input-select mask (3 blocs de 8), bits4-5=channelmode,
    # bits8-10=digital board id (1=MADI 2=ADAT 3=AudioLAN)
    def op_status(self):
        with self.slock:
            v=self.state.get(0xf050)
        if not v:return None
        raw=v[1] if isinstance(v,(list,tuple)) and len(v)>1 else v
        try:return int(str(raw))
        except:return None
    def input_select(self):
        s=self.op_status()
        if s is None:return None
        m=(s>>1)&0x7
        return [bool(m&1),bool(m&2),bool(m&4)]  # True=digital pour blocs 1,2,3

if __name__=='__main__':
    a=sys.argv[1:]
    if not a:sys.exit(__doc__)
    u=UTrackControl().connect()
    if a[0]=='state':
        time.sleep(3)
        for c in sorted(u.state):print('%04x'%c,u.state[c][0],u.state[c][1])
    else:
        if a[0]=='ctrl':u.ctrl(int(a[1],16),int(a[2]),int(a[3]) if len(a)>3 else None)
        elif a[0]=='num':u.num(int(a[1],16),int(a[2],16))
        else:getattr(u,a[0])()
        print(a[0],'envoye');time.sleep(2)
    u.close()

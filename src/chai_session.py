"""Session CHAI interactive — rejoue init + repond aux sondes du VNM pour rester adopte."""
import socket,time,sys,os,struct,threading
from chai_proto import CID, CID_BY_ID, pack_generic, unpack_generic, parse_announce_records, record_param_name
SEQ_FILE='research/assets/cap/init_seq_fresh.txt'

def cksum(data):
    """Somme Adler-like CopperLan (FUN_00678cd0): seeds 0x4c4d/0x5054 mod 0xfff1, sur ef51+hdr+payload."""
    a,b=0x4c4d,0x5054
    for x in data:a=(a+x)%0xfff1;b=(b+a)%0xfff1
    return struct.pack('<HH',a,b)

def frame(msg,flags=0xb):
    """ef51 | u16 LE (flags<<12 | len) | payload | cksum (a LE, b LE)."""
    head=b'\xef\x51'+struct.pack('<H',(flags<<12)|len(msg))
    return head+msg+cksum(head+msg)

def send_param(s, param_id, value, tag=0x1e, flag=0, cid=None):
    """Envoie un write param 20B (format CCPMessage_Generic, rea_maps §24/28)."""
    s.sendall(frame(pack_generic(cid or CID['SM_Signal'], param_id, value, tag, flag)))

def describe(body):
    """Decode lisible d'un body: class_id + champs Generic ou records announce."""
    if len(body) < 4: return '?'
    cid = struct.unpack_from('<I', body, 0)[0]
    name = CID_BY_ID.get(cid, hex(cid))
    if cid == CID['MEMBER_BROADCAST']:
        recs = parse_announce_records(body)
        return f'{name} ({len(recs)} records: ' + ','.join(record_param_name(r['payload']) for r in recs[:6]) + ')'
    g = unpack_generic(body)
    return f'{name} {g}' if g else name

def parse(buf):
    """Decoupe buf en (flags,payload,ok) ; retourne (frames, reste)."""
    out=[]
    while True:
        i=buf.find(b'\xef\x51')
        if i<0:return out,b''
        if len(buf)<i+4:return out,buf[i:]
        hv=struct.unpack_from('<H',buf,i+2)[0];n=hv&0xfff
        end=i+4+n+4
        if len(buf)<end:return out,buf[i:]
        f=buf[i:end];out.append((hv>>12,f[4:-4],cksum(f[:-4])==f[-4:]))
        buf=buf[end:]

def run(host='127.0.0.1',port=55000,seq_file=None):
    seq=[l.strip() for l in open(seq_file or SEQ_FILE)]
    while True:
        try:
            s=socket.socket();s.settimeout(4.0);s.connect((host,port));s.settimeout(0.05)
            print('connecte — replay %d msgs'%len(seq));sys.stdout.flush()
            for hx in seq:
                s.sendall(bytes.fromhex(hx))
                try:
                    while s.recv(65536):pass
                except socket.timeout:pass
                time.sleep(0.015)
            print('adopte — maintien interactif');sys.stdout.flush()
            buf=b''
            last_ka=time.time()
            while True:
                try:
                    d=s.recv(65536)
                    if d:buf+=d
                except socket.timeout:pass
                # parse les frames et reponds aux sondes c423
                frames,buf=parse(buf)
                for fl,body,ok in frames:
                    # sondes VNM (flags 2): c423->4423 (echo), d842->echo (link neg), d423->4423
                    if fl==2 and len(body)>=4 and body[0:2]==b'\x00\x01':
                        st=body[2:4]
                        if st==b'\xc4\x23':  # c423
                            resp=bytearray(body);resp[2:4]=b'\x44\x23'
                            s.sendall(frame(bytes(resp)))
                        elif st==b'\xd8\x42':  # d842 link neg -> echo back
                            s.sendall(frame(bytes(body)))
                        elif st==b'\xd4\x23':  # d423 -> 4423
                            resp=bytearray(body);resp[2:4]=b'\x44\x23'
                            s.sendall(frame(bytes(resp)))
                        elif st==b'\x54\x23':  # 5423 subscribe -> ack
                            resp=bytearray(body);resp[2:4]=b'\x44\x23'
                            s.sendall(frame(bytes(resp)))
                    elif ok and fl==2:
                        print('<<',describe(body))
                if time.time()-last_ka>0.4:
                    s.sendall(bytes.fromhex('ef5100a02d4ee686'));last_ka=time.time()
        except Exception as e:
            print('coupe:',e,'— reconnect');sys.stdout.flush();time.sleep(2)

if __name__=='__main__':
    run()

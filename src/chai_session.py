"""Session CHAI interactive — rejoue init + repond aux sondes du VNM pour rester adopte."""
import socket,time,sys,os,struct,threading
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
                    # sonde c423 du VNM (flags 2) -> reponds 4423
                    if fl==2 and body[:4]==b'\x00\x01\xc4\x23':
                        resp=bytearray(body);resp[2:4]=b'\x44\x23'  # c423->4423
                        s.sendall(frame(bytes(resp)))
                if time.time()-last_ka>0.4:
                    s.sendall(bytes.fromhex('ef5100a02d4ee686'));last_ka=time.time()
        except Exception as e:
            print('coupe:',e,'— reconnect');sys.stdout.flush();time.sleep(2)

if __name__=='__main__':
    run()

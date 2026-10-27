"""Session CHAI interactive — rejoue init + repond aux sondes du VNM pour rester adopte."""
import socket,time,sys,os,struct,zlib,threading
SEQ_FILE='research/assets/cap/init_seq_fresh.txt'

def frame(msg):return b'\xef\x51'+bytes([len(msg)&0xff])+b'\xb0'+msg+struct.pack('>I',zlib.crc32(msg)&0xffffffff)

def run(host='127.0.0.1',port=55000,seq_file=None):
    seq=[l.strip() for l in open(seq_file or SEQ_FILE)]
    while True:
        try:
            s=socket.socket();s.connect((host,port));s.settimeout(0.05)
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
                while True:
                    i=buf.find(b'\xef\x51')
                    if i<0 or len(buf)<i+4:break
                    ln=buf[i+2]&0x0f | (buf[i+3]&0x0f)<<8  # taille approx
                    if len(buf)<i+8:break
                    # sonde c423 du VNM (flag 20) -> reponds 4423
                    if buf[i+3]==0x20 and buf[i+4:i+8]==b'\x00\x01\xc4\x23':
                        body=bytearray(buf[i+4:i+2+ ((buf[i+2]|(buf[i+3]<<8))&0xfff )+7 &~3]) if False else buf[i+4:-4]
                        resp=bytearray(body);resp[2:4]=b'\x44\x23'  # c423->4423
                        s.sendall(frame(bytes(resp)))
                    buf=buf[i+4:]  # avance
                if time.time()-last_ka>0.4:
                    s.sendall(bytes.fromhex('ef5100a02d4ee686'));last_ka=time.time()
        except Exception as e:
            print('coupe:',e,'— reconnect');sys.stdout.flush();time.sleep(2)

if __name__=='__main__':
    run()

"""Session CHAI — rejoue la sequence init + maintient le lien + log les msgs VNM."""
import socket,time,sys,os
SEQ_FILE='research/assets/cap/init_seq_fresh.txt'

def run(host='127.0.0.1',port=55000,seq_file=None):
    seq=[l.strip() for l in open(seq_file or SEQ_FILE)]
    while True:  # reconnexion auto si le VNM coupe
        try:
            s=socket.socket();s.connect((host,port));s.settimeout(0.05)
            print('connecte — replay %d msgs'%len(seq));sys.stdout.flush()
            for hx in seq:
                s.sendall(bytes.fromhex(hx))
                try:
                    while s.recv(65536):pass
                except socket.timeout:pass
                time.sleep(0.02)  # respecte un rythme
            print('membre adopte — maintien du lien');sys.stdout.flush()
            while True:
                s.sendall(bytes.fromhex('ef5100a02d4ee686'))
                try:
                    while True:
                        d=s.recv(65536)
                        if not d:break
                        # log les types recus (pas les keepalives)
                        if d[:4]==b'\xef\x51' and d[3] not in (0x10,0xa0):
                            pass
                except socket.timeout:pass
                time.sleep(0.4)
        except Exception as e:
            print('coupe:',e,'— reconnecte dans 2s');sys.stdout.flush()
            time.sleep(2)

if __name__=='__main__':
    run()

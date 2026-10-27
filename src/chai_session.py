"""Session CHAI — rejoue la sequence d'init uRemote pour etre adopte par le VNM.
Le membre apparait comme "uRemote" dans CopperLan Manager tant qu'on est connecte.
"""
import socket,time,sys,os
sys.path.insert(0,os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
SEQ_FILE='research/assets/cap/init_seq.txt'

def run(host='127.0.0.1',port=55000):
    seq=[l.strip() for l in open(SEQ_FILE)]
    s=socket.socket();s.connect((host,port));s.settimeout(0.3)
    print('connecte, replay de la sequence init uRemote (%d msgs)'%len(seq));sys.stdout.flush()
    for hx in seq:
        s.sendall(bytes.fromhex(hx))
        try:
            while s.recv(65536):pass
        except:pass
    print('membre adopte — session maintenue');sys.stdout.flush()
    while True:
        s.sendall(bytes.fromhex('ef5100a02d4ee686'))
        try:
            while s.recv(65536):pass
        except socket.timeout:pass
        time.sleep(0.5)

if __name__=='__main__':
    run()

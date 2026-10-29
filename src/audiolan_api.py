"""audiolan_api — client JSON/HTTP pour la carte AudioLAN (Archwave uMAN AES67).
Endpoints verifies le 28/10/2026 sur 192.168.10.175 (fw 4078). Lecture: GET.
Ecriture: POST JSON {"ArchwaveAES67":{"version":N,...}} sur /sources /outputs /general,
reboot via POST /command {"ArchwaveCMD":{"version":1,"reboot":true,"bootloader":false}}.
"""
import socket,json,zlib

class AudioLan:
    def __init__(self,host='192.168.10.175',port=80,timeout=4):
        self.addr=(host,port);self.timeout=timeout

    def _http(self,method,path,body=None):
        s=socket.socket();s.settimeout(self.timeout);s.connect(self.addr)
        req='%s %s HTTP/1.0\r\nContent-Type: application/json\r\nContent-Length: %d\r\n\r\n'%(method,path,len(body or b''))
        s.sendall(req.encode()+(body or b''))
        d=b''
        try:
            while True:
                r=s.recv(65536)
                if not r:break
                d+=r
        except socket.timeout:pass
        s.close()
        head,_,data=d.partition(b'\r\n\r\n')
        if b'content-encoding: gzip' in head.lower():data=zlib.decompress(data,16+zlib.MAX_WBITS)
        code=int(head.split(b' ')[1])
        return code,data

    def get(self,path):
        code,d=self._http('GET',path)
        if code!=200:raise RuntimeError('%s -> HTTP %d'%(path,code))
        return json.loads(d) if d else {}

    def post(self,path,payload):
        code,d=self._http('POST',path,json.dumps(payload).encode())
        if code not in (200,204):raise RuntimeError('%s -> HTTP %d %r'%(path,code,d[:200]))
        return d

    # --- lectures (verifiees) ---
    def status(self):return self.get('/status')
    def sources(self):return self.get('/sources')
    def outputs(self):return self.get('/outputs')
    def general(self):return self.get('/general')
    def stream_list(self):return self.get('/stream_list')
    def device_list(self):return self.get('/device_list')
    def parameter_strings(self):return self.get('/parameter_strings')
    def sw_versions(self):return self.get('/sw_versions')

    # --- ecritures (format extrait du JS ; non testees sur l'appareil) ---
    def set_sources(self,sources):
        """sources = liste complete (relire GET /sources, modifier, renvoyer sans
        multicastIp/multicastPort/streamStatus)."""
        for s in sources:
            for k in('multicastIp','multicastPort','streamStatus'):s.pop(k,None)
        return self.post('/sources',{'ArchwaveAES67':{'version':1,'sources':sources}})

    def set_outputs(self,outputs):
        for o in outputs:
            for k in('streamStatus','currentStream','currentStreamChannel','isCollapsedChannel','streamPathFake'):o.pop(k,None)
        return self.post('/outputs',{'ArchwaveAES67':{'version':1,'outputs':outputs}})

    # --- routing stream->carte (streamPath='nom/canal', canal 1-indexe) ---
    # valide: streamPath persiste si manualSDP='' ET manualSDPChannel present.
    def route(self,output_ch,stream_name=None,stream_ch=1):
        """Route output_ch (0-indexe) sur stream_name/stream_ch (1-indexe), ou
        desabonne si stream_name=None. Relit les 24 outputs, modifie, reposte."""
        outs=self.outputs()['ArchwaveAES67']['outputs']
        for i,o in enumerate(outs):
            for k in('streamStatus','currentStream','currentStreamChannel','isCollapsedChannel','streamPathFake'):
                o.pop(k,None)
            if i==output_ch:
                o['manualSDP']=''
                o['streamPath']='%s/%d'%(stream_name,stream_ch) if stream_name else ''
        return self.post('/outputs',{'ArchwaveAES67':{'version':1,'outputs':outs}})

    def route_all(self,stream_name,ch_map=None):
        """ch_map={output_ch(0-idx):stream_ch(1-idx)}; absent ->1..8; None entree=off."""
        outs=self.outputs()['ArchwaveAES67']['outputs']
        for i,o in enumerate(outs):
            for k in('streamStatus','currentStream','currentStreamChannel','isCollapsedChannel','streamPathFake'):
                o.pop(k,None)
            o['manualSDP']=''
            o['streamPath']='%s/%d'%(stream_name,ch_map.get(i,0)) if (ch_map or {}).get(i) else ''
        return self.post('/outputs',{'ArchwaveAES67':{'version':1,'outputs':outs}})

    def discovered_streams(self):
        return self.stream_list().get('ArchwaveAES67',{}).get('streams',[])

    def set_general(self,config):
        if 'playoutDelay' in config and 'delayInSamples' in config['playoutDelay']:
            config['playoutDelay']['delayInSamples']=int(config['playoutDelay']['delayInSamples'])
        return self.post('/general',{'ArchwaveAES67':{'version':1,'config':config}})

    def reboot(self,bootloader=False):
        return self.post('/command',{'ArchwaveCMD':{'version':1,'reboot':True,'bootloader':bootloader}})

def _demo():
    a=AudioLan()
    print(json.dumps(a.device_list(),indent=1))
    g=a.general()['ArchwaveAES67']['config']
    print('nom:',g['name'],'| IP:',g['currentIPaddress'],'| DHCP:',g['DHCPenable'])
    for s in a.sources()['ArchwaveAES67']['sources']:
        print('src:',s['name'],'| on:',s['streamEnable'],'|',s['multicastAddress'])

if __name__=='__main__':_demo()

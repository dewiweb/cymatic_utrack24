"""demo_device — faux backend uTrack24 + AudioLAN pour le mode --demo.

Simule un device connecte : state CHAI realiste (meters animes),
reponses SDS en conserve, REST carte. Permet d'explorer toute la GUI
hors-ligne et de valider l'esthetique sans hardware.

    python src/utrack_remote_qt.py --demo
"""
import time, random, threading


def _st():
    """state CHAI simule : ctrl -> (val, text, ts)."""
    t = time.time()
    st = {
        0xf000: (0, 'Take0012', t), 0xf003: (48000, '48 kHz', t),
        0xf004: (24, '24', t), 0xf005: (24, '24', t),
        0xf040: (6000000, '6000000', t), 0xf006: (144000000, '144000000', t),
        0xf010: (0, 'Idle', t), 0xf060: (0, '', t),
        0xb000: (1, 'Internal', t), 0xb001: (48000, '44.1 kHz', t),
        0xb102: (0, 'Stereo', t), 0xb103: (0, 'Single', t),
        0xb104: (0, 'Play', t), 0xb203: (1, '1-2', t), 0xb204: (1, '1-2', t),
        0xb205: (0, '16-bit', t), 0xb201: (0, '0 dB', t), 0xb202: (0, '0 ms', t),
        0xb200: (1, '', t), 0xb105: (0, '', t), 0xb207: (0, '', t),
        0xb206: (0, '', t), 0xb003: (1, '', t),
        0xb004: (0, '192.168.10.5', t), 0xb005: (0, '255.255.255.0', t),
        0xb002: (0, '2026-11-03 12:00', t),
        0xc000: (0, '/takes/Take0012', t),
    }
    for i in range(26):
        st[0xe000+i] = (random.randint(8000, 60000), '', t)
        st[0xd070+i] = (random.randint(28000, 46000), '', t)
        st[0xd050+i] = (32768, '', t)
        st[0xd030+i] = (0 if i % 5 else 1, '', t)
        st[0xd010+i] = (0 if i % 7 else 1, '', t)
    return st


class DemoControl:
    """UTrackControl factice — state anime, methodes no-op coherentes."""
    def __init__(self, *a, **k):
        self.state = _st()
        self.slock = threading.Lock()
        self.alive = True
        self._t0 = time.time()
        self._playing = False
        threading.Thread(target=self._anim, daemon=True).start()

    def _anim(self):
        while True:
            time.sleep(0.15)
            with self.slock:
                t = time.time()
                for i in range(26):
                    v = max(0, int(32768 + 22000*__import__('math').sin(t*2+i)
                                   + random.randint(-4000, 4000)))
                    self.state[0xe000+i] = (min(v, 65535), '', t)
                if self._playing:
                    p = self.state[0xf040][0] + int(48000*0.15)
                    r = self.state[0xf006][0] - int(48000*0.15)
                    self.state[0xf040] = (p, str(p), t)
                    self.state[0xf006] = (max(0, r), str(max(0, r)), t)

    def op_status(self):
        return (0<<4)|(3<<8)|0x111   # cm=24In/26Out, board=AudioLAN(3), lock
    def input_select(self):
        return [0, 0, 1]   # ch1-8 analog, 9-16 analog, 17-24 digital
    def meters_peak(self):
        return {i: self.state[0xe000+i][0] for i in range(26)}
    def ensure_alive(self):
        self.alive = True
    def connect(self):
        self.alive = True; return self
    def close(self):
        self.alive = False
    # controle no-op realiste
    def _noop(self, *a, **k): pass
    text = ctrl = num = _noop
    def play(self): self._playing = True; self.state[0xf010] = (1, 'Playing', time.time())
    def pause(self): self._playing = False
    def stop(self): self._playing = False; self.state[0xf010] = (0, 'Idle', time.time())
    def rec(self):
        self._playing = True; self.state[0xf010] = (2, 'Recording', time.time())
    prev = next = save = marker = _noop
    def file_root(self): pass
    def file_up(self): pass
    def file_sel(self, *a): pass
    def mute(self, ch, on): self.state[0xd030+ch] = (1 if on else 0, '', time.time())
    def solo(self, ch, on): self.state[0xd010+ch] = (1 if on else 0, '', time.time())
    def set(self, ctrl, val):
        self.state[ctrl] = (val, '', time.time())


TAKES = """Take0001\nTake0002\nTake0003\nTake0012\n"""
RECLOG = """Take0012 — concert test
Started: 2026-11-02 20:14:33
Stopped: 2026-11-02 21:58:02
Duration: 01:43:29 @48kHz/24bit
Tracks: 24 · Marker #3 @ 00:12:44
"""


class DemoTel:
    """SDS factice — renvoie des sorties plausibles."""
    def close(self): pass
    def cmd(self, c, wait=0.0):
        c = c.strip()
        if c == 'versulu':
            return 'HWID: 0x2e6 · rev A · CPLD 1.4 · MCU 4218'
        if c.startswith('ls'):
            return TAKES if 'takes' in c else 'takes\nplaylists\nMultiTrack\n'
        if c == 'pwd': return '/'
        if c.startswith('mixer querylevels'):
            return 'Level meters:\n' + '\n'.join(
                'CH %02d: 0x%08x' % (i+1, random.randint(0x2000, 0xf000))
                for i in range(26))
        if c == 'mixer stat':
            return 'mixer: 26 channels, monitor bus, 24-track engine'
        if c.startswith('mixer get'):
            return 'fader: -12.0dB pan: 0 mute: off'
        if c.startswith('inputselect'):
            return 'inputselect: ch1-8 analog ch9-16 analog ch17-24 digital'
        if c == 'channelmode': return 'channelmode: 24In/26Out'
        if c == 'samplerate': return '48000'
        if c == 'cpsync': return 'sync: internal 48k'
        if c.startswith('filerec stat') or c.startswith('fileplay stat'):
            return 'cycle 1240 file 42 samples 0 dropouts 0'
        if c.startswith('reclog'):
            return RECLOG
        if c.startswith('showtree') or c.startswith('ls cne'):
            return 'AppSettings/Sync/Mode\nAppSettings/CopperLan/Midi/Enabled\n' \
                   'AppSettings/AudioLan/InterfaceAsInput\n' \
                   'AppSettings/Recording/PreRecording\n' \
                   'SavedSettings/Sync/Mode\n'
        if c == 'threads': return 'main rx0 mixer0 wav0 vshell0 dsp0 idle'
        if c == 'free': return 'heap: 12.4MB free, 84% used'
        if c == 'sem': return '4 semaphores, 0 contention'
        return f'> {c}\nOK'
    # wrappers utilises par l'app
    def ls(self, p=''): return self.cmd('ls ' + p)
    def dir_read(self, p='.'): return self.cmd('ls')
    def tree(self, p=''): return self.cmd('ls cne')
    def showtree(self, p='', o=''): return self.cmd('showtree')
    def file_up(self): return self.cmd('cd ..')
    def file_root(self): return self.cmd('cd /')
    def reclog_parsed(self, t): return {'take': t, 'lines': RECLOG.splitlines()}
    def delete_take(self, t, loaded=None): return 'deleted'
    def rename_take(self, t, new, loaded=None): return 'renamed'
    def take_new(self, name): return 'created ' + name
    def inputselect(self, *a): return 'ok'
    def channelmode(self, m): return 'ok'
    def mixer_set(self, ch, w, v): return 'ok'
    def filerec(self, *a): return 'filerec: ok'
    def fileplay(self, *a): return 'fileplay: ok'
    def get(self, path): return 'DemoVal' if path else ''
    def set(self, path, v): return 'set ok'
    def rd(self, a, n=1, mode=''): return '0x%08x: 0xdeadbeef' % a
    def wr(self, a, v, mode=''): return 'wr ok'


class DemoAlan:
    """AudioLAN REST factice."""
    def status(self):
        return {'ArchwaveAES67': {
            'inputs': [{'status': 5, 'name': 'rx1'}],
            'outputs': [{'status': 4, 'name': 'tx1'}]},
            'board_id': 3, 'ptp': 'locked', 'lock': True}
    def sw_versions(self):
        return {'firmware': '4078', 'fpga': '1.2', 'driver': '6.19'}
    def stream_list(self):
        return {'streams': [{'name': 'FOH_Main_L', 'channels': 2, 'addr': '239.10.0.1'},
                            {'name': 'Mon_Wedges', 'channels': 4, 'addr': '239.10.0.4'}]}
    def discovered_streams(self):
        return ['FOH_Main_L (239.10.0.1)', 'Mon_Wedges (239.10.0.4)',
                'Stage_A_24ch (239.10.1.0)']
    def device_list(self):
        return {'devices': [{'name': 'uTrack24', 'id': '34b96e2e'}]}
    def sources(self):
        return {'ArchwaveAES67': {'sources': [
            {'name':'FOH_Main','streamEnable':True,'multicastAddress':'239.10.0.1',
             'multicastPort':5004,'RTPTTL':32,'automaticConfigEnabled':True,'SIPusername':''},
            {'name':'Stage_A','streamEnable':False,'multicastAddress':'239.10.1.0',
             'multicastPort':5004,'RTPTTL':32,'automaticConfigEnabled':False,'SIPusername':'u24'}]}}
    def outputs(self): return {'outputs': [{'ch': i, 'src': 'aes67'} for i in range(24)]}
    def general(self):
        return {'ArchwaveAES67': {'config': {
            'name':'uT24 AudioLAN','DHCPenable':False,
            'IPaddress':'192.168.10.175','IPmask':'255.255.255.0','IPgateway':'192.168.10.1',
            'currentIPaddress':'192.168.10.175','currentIPmask':'255.255.255.0','currentIPgateway':'192.168.10.1',
            'IPDNS1':'8.8.8.8','IPDNS2':'',
            'audioMode':1,'samplingRate':2,'resolution':24,'syntonizedMode':True,
            'playoutDelay':{'delayInSamples':4800},
            'PTP':{'domain':0,'preferredMaster':False,'slaveOnly':True},
            'SAP':{'SessionAnnouncementEnabled':True,'BrowsingEnabled':True,
                   'MulticastAddress':'239.10.9.9','Port':9875,'SessionTimeout':60},
            'SIPreceivers':{'SIPserver':'','SIPusername':'','SIPpassword':''}}}}
    def parameter_strings(self):
        return {'parameter_strings': {
            'audioModes':[{'displayString':'8CH InOut','index':0},
                          {'displayString':'24CH InOut','index':1},
                          {'displayString':'24CH In / 2CH Out','index':2}],
            'samplingRates':[{'displayString':'44.1 kHz','index':1},{'displayString':'48 kHz','index':2}],
            'resolutions':[{'displayString':'16-bit','index':16},{'displayString':'24-bit','index':24}]}}
    def get(self,path):
        fake={'/SHA204':{'chip':'ATECC508A','locked':True},
              '/SPDIF':{'enabled':False,'rate':48000},
              '/SDRamCfg':{'size':'128MB','speed':'166MHz'},
              '/Exchange/samir':{'state':'idle'},
              '/SlaveOnly':{'value':True},
              '/Shell/cne/Shell/':{'prompt':'cne>'},
              '/USB/EP1/Rx/FifoSize':{'bytes':1024}}
        return fake.get(path,{'path':path,'status':'n/a'})
    def route_all(self, *a, **k): return True
    def set_general(self, *a, **k): return True
    def set_outputs(self, *a, **k): return True
    def set_sources(self, *a, **k): return True
    def upload(self, *a, **k): return {'ok': True}
    def install_progress(self): return {'progress': 100, 'state': 'done'}
    def reboot(self, *a, **k): return True
    def reset(self): return True

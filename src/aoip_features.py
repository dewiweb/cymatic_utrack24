"""aoip_features — fonctions extensibles du uTrack24+AudioLAN (RE doc).

Toutes s'appuient sur les chemins CnE (cne_paths.md) et commandes SDS/CHAI
deja implementes dans utrack_telnet/utrack_control — aucun nouveau protocole.

Categories:
  sync multi-unites (uTrack24SyncCL via CnE Sync/*)
  MIDI (CopperLan/Midi, Playback/Midi/MidiOffset, fichiers .mid)
  macros (bat <leaf>, persparam wrb)
  backup/restore (SavedSettings vs actifs, SM_D_CollectSetupData)
  monitoring (os/sys RTOS: threads/mem/stat)
  routing avance (madi/adat/InputDelay par FS)
"""
import re, json


class SyncGroup:
    """Gestion du groupe de sync multi-unites (max 4: master + 3 slaves)."""

    PATH = 'cne/AppSettings/Sync'

    def __init__(self, sds):
        self.s = sds

    def mode(self, mode=None):
        """mode: None lit, 'Master'|'Slave'|'Standalone' ecrit."""
        if mode is None:
            return self.s.get(f'{self.PATH}/Mode')
        return self.s.set(f'{self.PATH}/Mode', mode)

    def group_id(self, gid=None):
        if gid is None:
            return self.s.get(f'{self.PATH}/GroupId')
        return self.s.set(f'{self.PATH}/GroupId', gid)

    def slave_index(self, idx=None):
        if idx is None:
            return self.s.get(f'{self.PATH}/SlaveIndex')
        return self.s.set(f'{self.PATH}/SlaveIndex', idx)

    def slave_id(self, n, uid=None):
        """n=1..3 — id du slave N."""
        key = f'{self.PATH}/Slave_{n}_Id'
        if uid is None:
            return self.s.get(key)
        return self.s.set(key, uid)

    def describe(self):
        return {'mode': self.mode(), 'group': self.group_id(),
                'index': self.slave_index(),
                'slaves': [self.slave_id(i) for i in (1, 2, 3)]}


class Midi:
    """MIDI sur le device: over-CopperLan, fichiers .mid, offset."""

    def __init__(self, sds):
        self.s = sds
        self.base = 'cne/AppSettings'

    def enable(self, on=True):
        return self.s.set(f'{self.base}/Global/EnableMIDI', 1 if on else 0)

    def control(self, enabled=True, mode=None, name=None):
        """MIDI-over-CopperLan (surface de controle)."""
        p = f'{self.base}/CopperLan/Midi'
        if enabled is not None:
            self.s.set(f'{p}/ControlEnabled', 1 if enabled else 0)
        if mode is not None:
            self.s.set(f'{p}/ControlMode', mode)
        if name is not None:
            self.s.set(f'{p}/ControlName', name)

    def offset(self, ms=None):
        """Playback/Midi/MidiOffset (ms) — sync timecode MIDI."""
        k = f'{self.base}/Playback/Midi/MidiOffset'
        if ms is None:
            return self.s.get(k)
        return self.s.set(k, ms)


class Macros:
    """Execution de batches stockes dans le tree (bat <leaf>, max 5 recursion)."""

    def __init__(self, sds):
        self.s = sds

    def run(self, leaf: str):
        return self.s.bat(leaf)

    def write_leaf(self, path: str, hex_data: str):
        """ecrit une leaf batch via persparam wrb (hex)."""
        return self.s.persparam('wrb', path, hex_data)


class ConfigProfiles:
    """Backup/restore via SavedSettings + get/set CnE."""

    def __init__(self, sds):
        self.s = sds

    def snapshot(self, prefix='cne/AppSettings') -> dict:
        """Snapshot de l'arbre de config (chemins -> valeurs)."""
        out = {}
        # chemins actifs principaux (cne_paths.md)
        for p in ('Global/DeviceMode', 'Global/SampleRate', 'Global/StreamingInterface',
                  'Global/uTrackName', 'Recording/SampleRate', 'Recording/SampleSize',
                  'Recording/TrackCount', 'Recording/PreRecording',
                  'Playback/PlaybackMode', 'Playback/OutputAttenuation',
                  'Playback/StereoOutputs', 'Playback/AutoPlay',
                  'MixerControl/MonitorBoost', 'Sync/Mode', 'Sync/GroupId'):
            try:
                out[p] = self.s.get(f'{prefix}/{p}')
            except Exception:
                out[p] = None
        return out

    def save(self, path='device_config.json'):
        cfg = self.snapshot()
        json.dump(cfg, open(path, 'w'), indent=1)
        return path

    def restore(self, path='device_config.json', prefix='cne/AppSettings'):
        cfg = json.load(open(path))
        for k, v in cfg.items():
            if v is not None:
                self.s.set(f'{prefix}/{k}', v)


class Monitor:
    """Diagnostics RTOS (os/sys non-auth shell)."""

    def __init__(self, sds):
        self.s = sds

    def threads(self):
        return self.s.cmd('os th', 1.5)

    def memory(self):
        return self.s.cmd('os free', 1.5)

    def load(self):
        return self.s.cmd('os load', 1.5)

    def stats(self):
        return {'threads': self.threads(), 'mem': self.memory(),
                'load': self.load(), 'ver': self.s.sys_ver()}

    def flash_info(self):
        return self.s.sys('flash')


class AdvancedRouting:
    """Routage bas niveau: madi/adat par groupe, delay carte par FS."""

    def __init__(self, sds):
        self.s = sds

    def madi_input(self, utrack_ch, madi_ch=None):
        """madi input <uTrackCh> [<madiCh>] — map FPGA nibble-packed."""
        return self.s.cmd(f'madi input {utrack_ch}' + (f' {madi_ch}' if madi_ch else ''), 1.5)

    def madi_output(self, utrack_ch, madi_ch):
        return self.s.cmd(f'madi output {utrack_ch} {madi_ch}', 1.5)

    def adat_source(self, port):
        return self.s.cmd(f'adat source {port}', 1.5)

    def madi_info(self):
        return self.s.cmd('madi', 1.5)

    def adat_info(self):
        return self.s.cmd('adat', 1.5)


def attach(sds):
    """Retourne un objet composite lie a un client SDS."""
    return type('AoIPFeatures', (), {
        'sds': sds,
        'sync': SyncGroup(sds),
        'midi': Midi(sds),
        'macros': Macros(sds),
        'profiles': ConfigProfiles(sds),
        'monitor': Monitor(sds),
        'routing': AdvancedRouting(sds),
    })()

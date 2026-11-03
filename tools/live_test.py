#!/usr/bin/env python3
"""live_test — runner de validation device-live uTrack24 + AudioLAN.

Usage (Windows / WSL / Linux — pure stdlib + src/):
    python tools/live_test.py --host 192.168.10.198 --card 192.168.10.175
    python tools/live_test.py --host X --stages 0-3          # lecture seule
    python tools/live_test.py --host X --stages 5 --danger   # ecritures
    python tools/live_test.py --host X --stages 6 --danger --confirm-flash

Etapes:
    0  connectivite (ports 23/55000/80/554)
    1  SDS lecture seule (version/status/tree/mixer)
    2  session CHAI (controles transport/mixeur)
    3  fichiers/takes (ls/takes/dir/reclog/playlists)
    4  AudioLAN REST + RTSP
    5  ecritures actives (mixer set, transport, inputselect, channelmode)  [--danger]
    6  zones dangereuses (versulu, rd flash read-only) [--danger --confirm-flash]
    7  diagnostics RTOS (threads/free/sem/load — read-only)
    8  profils+sync+MIDI (SavedSettings, Sync/*, CopperLan/Midi — read-only)
    9  RE-validation extras (reclog, reclog_parsed, cne paths annexes)

Sortie: PASS/FAIL/SKIP par test + resume + log JSON (--out).
"""
import sys, os, json, time, socket, argparse

sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'src'))

RESULTS = []
def rec(stage, name, ok, detail=''):
    tag = 'PASS' if ok is True else ('FAIL' if ok is False else 'SKIP')
    RESULTS.append({'stage': stage, 'test': name, 'result': tag, 'detail': detail})
    print(f"  [{tag}] {name}" + (f"  — {detail[:100]}" if detail else ''))

def port_open(host, port, t=1.5):
    try:
        s = socket.create_connection((host, port), t)
        s.close()
        return True
    except OSError:
        return False


# ---------- stage 0 : connectivite ----------
def stage0(host, card):
    print("\n== STAGE 0 — connectivite ==")
    for name, h, p in [('SDS telnet', host, 23), ('CHAI', host, 55000),
                       ('uTrack HTTP', host, 80), ('AudioLAN REST', card, 80),
                       ('AudioLAN RTSP', card, 554)]:
        ok = port_open(h, p)
        rec(0, f'{name} {h}:{p}', ok)


# ---------- stage 1 : SDS lecture seule ----------
def stage1(host):
    print("\n== STAGE 1 — SDS lecture seule ==")
    try:
        from utrack_telnet import UTrack24
        u = UTrack24(host)
    except Exception as e:
        rec(1, 'SDS connect', False, str(e)); return None
    rec(1, 'SDS connect', True)
    try:
        r = u.cmd('versulu')
        rec(1, 'versulu (chip versions)', bool(r.strip()), r.strip()[:80])
    except Exception as e:
        rec(1, 'versulu', False, str(e))
    for name, fn in [('get cne root', lambda: u.get('')),
                     ('ls tree', lambda: u.ls()),
                     ('pwd', u.pwd),
                     ('mixer levels', u.mixer_levels),
                     ('mixer stat', u.mixer_stat),
                     ('inputselect stat', u.inputselect_status),
                     ('engine stat rec', lambda: u.engine_stat(True)),
                     ('samplerate', u.samplerate),
                     ('cpsync', u.cpsync)]:
        try:
            r = fn()
            rec(1, name, bool(r and str(r).strip()), str(r).strip()[:80])
        except Exception as e:
            rec(1, name, False, str(e)[:80])
    return u


# ---------- stage 2 : session CHAI ----------
def stage2(host):
    print("\n== STAGE 2 — session CHAI ==")
    try:
        from utrack_control import UTrackControl
        c = UTrackControl(host)
        c.connect()
        rec(2, 'CHAI connect', bool(c.alive), f"alive={c.alive}")
        return c
    except Exception as e:
        rec(2, 'CHAI connect', False, str(e)[:100]); return None


# ---------- stage 3 : fichiers/takes/playlists ----------
def stage3(u):
    print("\n== STAGE 3 — fichiers/takes/playlists ==")
    if u is None:
        rec(3, 'files', None, 'SDS indisponible'); return
    for name, fn in [('ls racine', lambda: u.ls()),
                     ('dir read .', lambda: u.dir_read('.')),
                     ('tree', lambda: u.tree()),
                     ('showtree', lambda: u.showtree()),
                     ('ls takes', lambda: u.ls('takes')),
                     ('ls MultiTrack', lambda: u.ls('MultiTrack')),
                     ('playlists', lambda: u.cmd('ls playlists'))]:
        try:
            r = fn()
            n = len([l for l in str(r).splitlines() if l.strip()])
            rec(3, name, n > 0, f'{n} lignes')
        except Exception as e:
            rec(3, name, False, str(e)[:80])


# ---------- stage 4 : AudioLAN ----------
def stage4(card):
    print("\n== STAGE 4 — AudioLAN REST/RTSP ==")
    if not port_open(card, 80):
        rec(4, 'AudioLAN REST', None, 'port 80 ferme'); return
    try:
        from audiolan_api import AudioLan
        a = AudioLan(card)
        r = a.sw_versions()
        rec(4, 'REST sw_versions', bool(r), str(r)[:80])
        for name in ('status', 'stream_list', 'device_list'):
            try:
                r = getattr(a, name)()
                rec(4, f'REST {name}', bool(r), str(r)[:60])
            except Exception as e:
                rec(4, f'REST {name}', False, str(e)[:60])
    except Exception as e:
        rec(4, 'AudioLAN REST', False, str(e)[:80])
    if port_open(card, 554):
        try:
            from audiolan_rtsp import RtspClient
            rec(4, 'RTSP port', True, '554 ouvert')
        except ImportError:
            rec(4, 'RTSP', None, 'module import')
    else:
        rec(4, 'RTSP', None, '554 ferme')


# ---------- stage 5 : ecritures actives ----------
def stage5(u, c, danger):
    print("\n== STAGE 5 — ecritures actives ==")
    if not danger:
        rec(5, 'ecritures', None, '--danger requis'); return
    if u:
        try:
            r = u.mixer_set(0, 'fader', -20)
            rec(5, 'mixer_set fader', True, str(r)[:60])
            g = u.mixer_get(0)
            rec(5, 'mixer_get verif', bool(g), str(g)[:60])
            u.mixer_set(0, 'fader', 0)  # restaure
        except Exception as e:
            rec(5, 'mixer set/get', False, str(e)[:80])
        try:
            r = u.cmd('inputselect stat')
            rec(5, 'inputselect stat', bool(r.strip()), r.strip()[:60])
        except Exception as e:
            rec(5, 'inputselect', False, str(e)[:80])
        try:
            r = u.cmd('channelmode')
            rec(5, 'channelmode stat', bool(r.strip()), r.strip()[:60])
        except Exception as e:
            rec(5, 'channelmode', False, str(e)[:80])
    if c:
        try:
            c.text(0xd001, '0')   # locate 0 — ecriture texte 0x3744 (fixe)
            rec(5, 'text write d001=0', True, 'envoye')
        except Exception as e:
            rec(5, 'text write', False, str(e)[:80])


# ---------- stage 6 : zones dangereuses ----------
def stage6(u, danger, confirm):
    print("\n== STAGE 6 — zones dangereuses ==")
    if not (danger and confirm):
        rec(6, 'danger zone', None, '--danger --confirm-flash requis'); return
    if not u:
        rec(6, 'danger', None, 'SDS indisponible'); return
    # lecture seule des zones sensibles — JAMAIS d ecriture ici
    try:
        r = u.cmd('versulu')
        rec(6, 'versulu versions', bool(r.strip()), r.strip()[:80])
    except Exception as e:
        rec(6, 'versulu', False, str(e)[:60])
    try:
        r = u.rd(0x40000, 4)   # lecture debut zone non-protegee — read-only
        rec(6, 'rd 0x40000', bool(r.strip()), r.strip()[:60])
    except Exception as e:
        rec(6, 'rd flash', False, str(e)[:60])
    print("  NB: flash receive/erase, persparam wrb, fileupload = MANUEL seulement")


# ---------- stage 7 : diagnostics RTOS ----------
def stage7(u):
    print("\n== STAGE 7 — diagnostics RTOS (read-only) ==")
    if u is None:
        rec(7, 'rtos', None, 'SDS indisponible'); return
    for c in ('threads', 'free', 'sem', 'timer', 'ip_hdr', 'index'):
        try:
            r = u.cmd(c, 1.2)
            rec(7, c, bool(r and r.strip()), r.strip()[:80])
        except Exception as e:
            rec(7, c, False, str(e)[:60])


# ---------- stage 8 : profils + sync + MIDI ----------
def stage8(u):
    print("\n== STAGE 8 — profils/sync/MIDI (read-only) ==")
    if u is None:
        rec(8, 'cfg', None, 'SDS indisponible'); return
    for name, path in [('SavedSettings tree', 'cne/SavedSettings'),
                       ('Sync/Mode', 'cne/AppSettings/Sync/Mode'),
                       ('Sync/GroupId', 'cne/AppSettings/Sync/GroupId'),
                       ('CopperLan/Midi/Enabled',
                        'cne/AppSettings/CopperLan/Midi/Enabled'),
                       ('Playback/Midi/MidiOffset',
                        'cne/AppSettings/Playback/Midi/MidiOffset'),
                       ('AudioLan/InterfaceAsInput',
                        'cne/AppSettings/AudioLan/InterfaceAsInput'),
                       ('Recording/PreRecording',
                        'cne/AppSettings/Recording/PreRecording'),
                       ('MixerControl/MonitorBoost',
                        'cne/AppSettings/MixerControl/MonitorBoost')]:
        try:
            r = u.get(path) if 'Settings' in path else u.ls(path)
            rec(8, name, r is not None, str(r).strip()[:70])
        except Exception as e:
            rec(8, name, False, str(e)[:60])


# ---------- stage 9 : extras RE-validation ----------
def stage9(u):
    print("\n== STAGE 9 — extras validation RE ==")
    if u is None:
        rec(9, 'extras', None, 'SDS indisponible'); return
    try:
        r = u.cmd('mixer querylevels', 1.5)
        rows = [l for l in r.splitlines() if 'CH' in l]
        rec(9, 'querylevels format', len(rows) >= 24, f'{len(rows)} lignes CH')
    except Exception as e:
        rec(9, 'querylevels', False, str(e)[:60])
    try:
        m = u.meters_db()
        rec(9, 'meters_db parse', bool(m), f'{len(m) if m else 0} metres')
    except Exception as e:
        rec(9, 'meters_db', False, str(e)[:60])
    # reclog sur la premiere take trouvee
    try:
        lst = u.ls('takes')
        tk = next((l.split()[-1] for l in lst.splitlines()
                   if l.strip() and not l.strip().isupper()), None)
        if tk:
            r = u.reclog_parsed(tk)
            rec(9, f'reclog {tk}', r is not None, str(r)[:70])
        else:
            rec(9, 'reclog', None, 'pas de take')
    except Exception as e:
        rec(9, 'reclog', False, str(e)[:60])


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--host', default='192.168.10.198', help='IP uTrack24')
    ap.add_argument('--card', default='192.168.10.175', help='IP carte AudioLAN')
    ap.add_argument('--stages', default='0-4,7-9',
                    help='etapes ex: 0-4,7-9 ; 5/6 = ecriture (--danger)')
    ap.add_argument('--danger', action='store_true',
                    help='autorise les ecritures (stages 5-6)')
    ap.add_argument('--confirm-flash', action='store_true',
                    help='stage 6 read-only sur zones flash')
    ap.add_argument('--out', default='', help='log JSON de sortie')
    a = ap.parse_args()

    stages = set()
    for part in a.stages.split(','):
        if '-' in part:
            lo, hi = part.split('-'); stages.update(range(int(lo), int(hi) + 1))
        else:
            stages.add(int(part))

    print(f"live_test — host={a.host} card={a.card} stages={sorted(stages)}")
    u = c = None
    if 0 in stages: stage0(a.host, a.card)
    if 1 in stages: u = stage1(a.host)
    if 2 in stages: c = stage2(a.host)
    if 3 in stages: stage3(u)
    if 4 in stages: stage4(a.card)
    if 5 in stages: stage5(u, c, a.danger)
    if 6 in stages: stage6(u, a.danger, a.confirm_flash)
    if 7 in stages: stage7(u)
    if 8 in stages: stage8(u)
    if 9 in stages: stage9(u)

    n = {'PASS': 0, 'FAIL': 0, 'SKIP': 0}
    for r in RESULTS: n[r['result']] += 1
    print(f"\n== RESUME == {n['PASS']} PASS / {n['FAIL']} FAIL / {n['SKIP']} SKIP")
    if a.out:
        json.dump({'host': a.host, 'card': a.card, 'when': time.ctime(),
                   'results': RESULTS}, open(a.out, 'w'), indent=1)
        print(f"log -> {a.out}")


if __name__ == '__main__':
    main()

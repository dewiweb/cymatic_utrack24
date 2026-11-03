# Device-live testing depuis Windows (+ WSL)

Kit de validation du duo uTrack24 + carte AudioLAN depuis une session Windows.
Tout est **Python stdlib** + les modules de `src/` — aucun binaire externe requis.

## 1. Setup

```
python -m pip install PySide6 requests
git clone https://github.com/dewiweb/cymatic_utrack24.git
cd cymatic_utrack24
```

Python 3.9+ suffit. `PySide6`/`requests` ne servent que pour la GUI et
certains clients REST — `live_test.py`/`discover.py` sont 100% stdlib.

## 2. Trouver les devices

```
python tools\discover.py            # table ARP (cherche OUI 00:07:F5 Archwave)
python tools\discover.py --net 192.168.10 --scan
```

- uTrack24 : IP par DHCP ou config front panel ; ports 23 (SDS) / 55000 (CHAI) / 80
- AudioLAN : ports 80 (REST) / 554 (RTSP)
- Firewall Windows : autoriser les connexions sortantes TCP (aucun port entrant
  n'est nécessaire pour live_test/discover)

## 3. Validation par étapes — `tools/live_test.py`

```
python tools\live_test.py --host <IP_utrack> --card <IP_carte>
```

| Stage | Contenu | Sécurité |
|-------|---------|----------|
| 0 | ports ouverts (23/55000/80/554) | lecture seule |
| 1 | SDS : versulu, get, ls, mixer levels/stat, inputselect, engine stat | lecture seule |
| 2 | session CHAI (`UTrackControl.connect`) | session seule |
| 3 | fichiers/takes (ls, dir, tree) | lecture seule |
| 4 | AudioLAN REST (sw_versions, status, stream_list) + RTSP port | lecture seule |
| 5 | écritures : `mixer set`, `inputselect stat`, **text write 0xd001** | `--danger` requis |
| 6 | zones sensibles (versulu, `rd` flash read-only) | `--danger --confirm-flash` |

```
python tools\live_test.py --host X --stages 0-3              # lecture seule
python tools\live_test.py --host X --stages 5 --danger       # ecritures controle
python tools\live_test.py --host X --out report.json         # log JSON
```

## 4. Outils de capture — boucler les 3% RE restants

| Outil | Role | Ce qu'il valide |
|-------|------|-----------------|
| `tools/chai_proxy.py` | MITM TCP 55000, log chaque trame ef51 (C>D / D>C) | wire format text-write `0x3744`, uTS frames, sequence session uRemote reelle — pointer uRemote sur `127.0.0.1:15500` |
| `tools/meter_watch.py` | session CHAI + capture pushes + cross-check `querylevels` | format push meters `e0xx` ~10Hz (§55) |
| `tools/probe_endpoints.py` | sondes : endpoints caches carte (`/SHA204`, `/SPDIF`, `/Exchange/samir`…), usages SDS no-arg, dump `showtree`→diff vs `cne_paths.md`, RTOS read-only | surfaces cachees, feuilles CnE nouvelles, limites commandes |

```
python tools\chai_proxy.py --device <IP> --listen 15500
python tools\meter_watch.py --host <IP> --secs 15 --raw meters.hex
python tools\probe_endpoints.py --host <IP> --card <IP> --out probe.json
```

Wireshark sur Windows (capture complete) : filtre `tcp.port==55000 || tcp.port==23`
pour CHAI/SDS ; `udp.port==9875 || udp.port==319 || udp.port==320` pour RTP/PTP.
Le decodage ef51 est documente dans `research/notes/rea_maps.md`.

## 5. Ce que le live doit capturer pour les 3% RE

| Question RE ouverte | Capture attendue |
|---------------------|------------------|
| text-write `0x3744` on-wire | `chai_proxy` + ecrire un locate dans uRemote |
| uTS msgId-7 + enveloppe post() | `chai_proxy` entre 2 devices en groupe sync |
| famille 0x1xx/0x2xx (sync transport) | idem — play/rec sur le master |
| `file write` = benchmark | `live_test` stage 5 : sortie "Write succeeded … %u jobs" attendue |
| AES67 sync-error status=12 | sender PC -> carte : `src/fake_aes67_sender.py` + `stream_list` avant/apres |
| upload fichier arbitraire | confirme impossible en SDS (§49) — reste : HTTP fileupload host? `flash receive` XMODEM |
| meter push exact layout | `meter_watch.py` raw hex vs `(peak>>15)&0xffff` |
| `persparam wrb` taille max | probe incrementale hex blob (manuel, prudent) |
| USB channelmode -> descripteurs | USBView/Device Manager avant/apres `channelmode` |
| hidden card paths | `probe_endpoints.py` les interroge directement |

## 6. Tests manuels (ne PAS automatiser)

Ces opérations sont volontairement **hors du runner** :

| Action | Commande | Risque |
|--------|----------|--------|
| Upload firmware carte | `src/audiolan_update.py` | **brick** si image erronée — valider CRC via `bcd_file.py` d'abord |
| `flash receive` XMODEM | `flash receive <off> <size>` | pas de plancher offset → écrit bootloader |
| `persparam wrb` | blob hex → flash config | corruption config |
| `versulu` | read-only OK | — |
| SDS upload fichier | **n'existe pas** (§49 : `file write` = benchmark) | — |

Vérifier une image `.bcd` avant tout upload :

```
python src\bcd_file.py <firmware.bcd>   # CRC header+image doivent etre OK
```

## 7. GUI

```
python src\utrack_remote_qt.py
```

7 onglets : Mixer / Réglages / Prises / AES67 / Matrice / AoIP / Fonctions+.
Le gating carte s'applique (AoIP ↔ board_id 3, MADI ↔ board_id 1).

## 8. WSL si besoin

- WSL2 : réseau NAT'd — le LAN est joignable sans config ; `live_test.py`
  marche tel quel (`python3 tools/live_test.py`)
- Si Windows bloque les sockets Python : WSL les contourne
- GUI Qt sous WSL : nécessite WSLg (Windows 11) ou un X server

## 9. Ce que le live doit valider (checklist)

Voir `research/notes/session_implementation.md` §3 pour la liste complète.
Priorités : `inputselect digital` + `filerec` (chaîne AES67→disque),
push meters `e0xx` vs `querylevels` SDS, `channelmode` flux USB réels,
`sync.*` → trafic `uTS_Msg_*`, text-write `d001` (fixé — à confirmer on-wire).

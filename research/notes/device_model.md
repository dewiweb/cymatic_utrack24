# Modèle de contrôle du uTrack24 (annoncé par l'appareil lui-même)

Source : messages `4437` envoyés par le uTrack (`34b96e2e`) à uRemote, TLV `c837` (type 0x37c8), extraits de toutes les captures par `research/tools/device_model.py` (sortie brute : `device_model_raw.txt`).
Envois uRemote : `research/tools/scan_sends.py` → `urem_sends.txt`. Chronologie envoi/écho : `research/tools/ctrl_timeline.py`.

## Enregistrement de contrôle (TLV c837, envoyé par l'appareil)
```
+0 u8  type   c1 = numérique, c2 = liste/bouton (valeur + libellé), c3 = texte, c9 = ?
+2 u16 node   = la sous-session à utiliser pour écrire ce contrôle
+4 u16 kind   1 (c1), 2 (c2), 4 (c3)
+6 u16 ctrl   identifiant
+8 u32 flags  (0x00400000 / 0x00600000 / 0x00200000 …)
+12 u16 valeur (c1/c2) | +12 u16 longueur texte (c3)
+14 u16 longueur libellé (c2) puis libellé ASCII
```
## Règle de sous-session (prouvée par l'appareil, pas devinée)
Chaque contrôle annonce son node. Toutes les captures donnent : `0xf0xx`→0, `0xe0xx`→1, `0xd0xx`→2, `0xc0xx`→3, `0xb0xx`/`0xb1xx`/`0xb2xx`→4.

## Écriture (envoyée par uRemote, `8437`, sous-session = node)
| TLV | Usage | Charge utile | Preuve |
|---|---|---|---|
| `4337` (0x3743), 22 o | liste / bouton | ctrl u16 @2, valeur u16 @20 | play/stop/rec validés sur l'appareil ; mute d030 avec écho `On`/`Off` (mute1.log) |
| `4237` (0x3742), 32 o | numérique (fader, pan) | ctrl u16 @2, valeur u16 @20 | chai2_125803.log : 0xd072 et 0xd052 balayés, l'appareil renvoie la même valeur |
| texte (0xd001 locate, d002/d003) | slot 0x17c, valeur = `juce::String(int)` (`FUN_00624830`) | **format fil non capturé** | |

## Carte node 2 (transport + mixer 24 voies), ch = 0..23
| ctrl | type | sens | preuve |
|---|---|---|---|
| 0xd000 | bouton | transport : 3 stop, 4 play/pause, 5 rec | validé sur l'appareil |
| 0xd001 | texte | position (locate) ; écrit par ProgressBarPanel/MarkerListPanel/TransportKeys | code |
| 0xd002 / 0xd003 | texte | loop in / loop out (ProgressBarPanel, `FUN_00543ab0`) | code + manuel (bouton Loop) |
| 0xd008 | liste | RemoteDisplay::MyItem | code |
| 0xd009 / 0xd088 | bouton | ViewSelection items 5/6 | code |
| 0xd010+ch | bouton 2=bascule | **Solo** voie ch | code DSPMChannelStrip `id-0x2ff0` + manuel ; écho 1/0 vérifié sur l'appareil (verify_20261028.txt) |
| 0xd030+ch | bouton 2=bascule | **Mute** voie ch (écho 1=On / 0=Off) | mute1.log, mute_off.log |
| 0xd050+ch | numérique | **Pan** (0x8000 = centre, pas 0x100) | chai2_125803.log |
| 0xd070+ch | numérique | **Fader niveau** (défaut 0xe7ce) | chai2_125803.log |

## Node 4 (réglages) — valeurs actuelles annoncées
| ctrl | libellé courant | UI (RTTI) |
|---|---|---|
| 0xb000 | Int. Clock (0) | VI_ClockSourceChoice |
| 0xb001 | Play-Pause (1) | VI_FootswitchChoice |
| 0xb002 | date/heure (texte) | |
| 0xb003 | On | VI_DHCPChoice ⚠ |
| 0xb004 | 192.168.4.233 (texte) | VI_StaticIP ⚠ |
| 0xb005 | 255.255.255.0 (texte) | VI_SubnetMask ⚠ |
| 0xb102 | 48 kHz (2) | VI_SampleRateChoice |
| 0xb103 | 24-bit (0x18) | VI_ResolutionChoice |
| 0xb104 | 24 Ch (0x18) | VI_TrackCountChoice |
| 0xb105 | On | VI_PreRecordingChoice |
| 0xb200 | On | VI_AutoPlayChoice |
| 0xb201 | -1dB (numérique) | ? |
| 0xb202 | -11 ms (numérique) | ? |
| 0xb203 | Single (0xffff) | VI_PlaybackModeChoice |
| 0xb204 / 0xb205 | 1-2 | VI_StereoOutputsChoice |
| 0xb206 | On | ? |
| 0xb207 | On | VI_MultitrackOutPostFaderChoice |

Attention : la valeur sur le fil est la valeur brute annoncée par l'appareil (ex. 0x18 pour 24 pistes), pas forcément l'index de la liste uRemote.

## Autres nodes
- node 0 : état/affichage `0xf000`–`0xf060` (nom de la prise, fréquence, résolution, nb pistes, date…).
- node 1 : `0xe000`–`0xe019` = 26 vu-mètres.
- node 3 : `0xc000` fichier chargé, `0xc001` dossier courant.

## Vérification sur l'appareil (2026-10-28, `research/tools/verify_cmds.py`, `verify_20261028.txt`)
PASS (écho de l'appareil puis restauration) : mute ch1, solo ch1, fader ch1 (0xd070), pan ch1 (0xd050), 0xb200, 0xb105, 0xb207, 0xb001.
FAIL : 0xb201 et 0xb202 ignorent l'écriture numérique `4237` (pas d'écho, valeur inchangée).
Non testés volontairement : transport (déjà validé), horloge 0xb000, réseau 0xb003-b005, listes à domaine inconnu (b102-b104, b203-b205).

## Reste ouvert
- 0xb201 / 0xb202 : format d'écriture différent ou lecture seule.
- Format fil de l'écriture texte (0xd001 locate, 0xd002/0xd003 loop) : une capture uRemote (glisser la barre de lecture, choisir un marqueur, Loop) le donnera.
- Skip Back / Skip Forward : aucune trame dans transport_all.log ; valeur du bouton non trouvée (le champ +0x180 n'est pas écrit par une constante).
- Unité des faders (0xd070) et de b201/b202 : la correspondance valeur→dB est à mesurer.

## Domaines de valeurs des réglages (décompilation uRemote, `settings_choices*.txt`, `settings_handlers.txt`, `b201_b202.txt`)
Valeur envoyée = id de l'item JUCE − 1 (sauf mention). Cohérent avec les valeurs annoncées par l'appareil.
| ctrl | valeurs |
|---|---|
| 0xb000 horloge | 0 Internal, 1 Wordclock, 2 Digital I/O, 3 PTP (uRemote ne propose que les sources supportées) |
| 0xb001 footswitch | 0 Play, 1 Play-Pause, 2 Record, 3 Play-Stop |
| 0xb102 fréquence | 1 = 44.1 kHz, 2 = 48 kHz, 3 = 88.2 kHz, 4 = 96 kHz |
| 0xb103 résolution | 16, 24 |
| 0xb104 pistes | 2 (Stereo), 4, 8, 12, 16, 20, 24 |
| 0xb203 mode de lecture (id − 10) | -1 (0xffff) Single, 0 Continuous, 1 Shuffle, 2 Repeat One, 3 Repeat All |
| 0xb204 / 0xb205 sorties stéréo (id envoyé tel quel) | n impair = paire n-(n+1) ; 1..7 en 88.2/96 kHz, 1..31 en 44.1/48 kHz |
| 0xb201 Output Attenuation (slot 0x164, u64) | raw = (dB+30)·0xffff/30, dB entier −30..0 (−1 dB = 63350 ✓) |
| 0xb202 (slot 0x164, u64) | raw = (v+1000)·0xffff/2000, v −1000..1000 ms (−11 ms = 32408 ✓) |

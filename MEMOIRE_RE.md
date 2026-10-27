# MEMOIRE — RE Cymatic uTrack24 / CopperLan (a relire apres reset)

## OBJECTIF
Remplacer uRemote/uTool2 par un outil natif (Qt GUI). Reverse-engineering du protocole
CHAI/CopperLan pour controler le uTrack24 (transport/mixer/monitoring/routing AES67).

## ETAT = ADOPTION REUSSIE dans CopperLan Manager
Notre client Python src/chai_session.py rejoue la sequence init_seq_fresh.txt
(1073 msgs captures de uRemote sur VNM vierge) → le membre "uRemote" apparait
dans CopperLan Manager avec un edge vers uTrack. Session tient via keepalives.

## PROTOCOLE DECODE (verifie dans le code Ghidra)
Frame: ef51 | u16 (flags<<12 | len max 0x58c) | payload aligne4 | crc32-BE
Flags: b0=client→VNM  20=VNM→client  10/a0=keepalive
Checksum interne = Adler-like FUN_00678cd0 (seeds 0x4c4d/0x5054, mod 0xfff1)

Handshake: hello ef510180+nonce → accept ef510000 → puis decls c842
c842 = declarations membres/devices (VNM echoit = accepte)
d842 = negociation lien VNM→client (SmartConnect payloads 0x37c4)
8423 = writes proprietes (controles)  |  4437 = metering flux
5423 = subscriptions  |  c423/4423 = polls/sync  |  c010/d010 = session
Membre: ID persistant 0x69727160 (cote client) ; handle session alloue par VNM
uRemote cree: device "uTrack24 Remote" classe 0x6800000, membre "uRemote",
containers Status/Meters/Controllers/Files/Settings (FUN_00545da0)
Mute = FUN_0051b610 toggle par canal ; serialiseur TLV 0123 = FUN_005834a0

## FICHIERS CLES
src/chai_session.py      = client session interactive (replay + reponses)
research/assets/cap/init_seq_fresh.txt  = sequence d'adoption complete
research/assets/cap/clean_130604.log    = capture session uRemote
research/assets/cap/fresh_vnm.log       = capture VNM vierge + uRemote
research/notes/copperlan_vnm_findings.md = toutes les notes RE
research/assets/software/uRemote.exe    = binaire analyse
research/assets/chai_sdk/               = SDK freeware 2011 + sources

## GHIDRA — projet pret
C:\tools\ghidra_projects\uremote_v36 (uRemote.exe analyse, 16909 vftables)
Scripts: C:\tools\ghidra_scripts\ (Decomp*.java, FindCHAI, Callers, ChainRTTI*)
Cmd: analyzeHeadless.bat C:\tools\ghidra_projects uremote_v36 -process uRemote.exe
     -noanalysis -scriptPath C:\tools\ghidra_scripts -postScript <Nom>.java

## RESEAU
uTrack24=192.168.10.197  AudioLAN=192.168.10.175  VNM TCP=127.0.0.1:55000
SDK v1.5 se connecte :40987 (autre service, rejete pour adoption)

## PROCHAINE ETAPE
1. Stabiliser membre (repondre a toutes sondes VNM) ou renommer DewiTool
2. Capturer 1 action utilisateur seule (mute ch1) = isoler le msg 8423 exact
3. Decoder le mapping propriete<->canal puis reproduire mixer complet

# RE CopperLan/uRemote — ETAT (a reprendre)

## ACCOMPLI
- Framing: ef51 <u16 flags|len> <payload align4> <crc32-BE> — DECODE du code Ghidra
- Checksum trame = FUN_00678cd0 (Adler-like 0x4c4d/0x5054 mod 0xfff1)
- Adoption VNM: replay init_seq_fresh.txt -> membre APPARAIT dans Manager (prouve!)
- Session interactive src/chai_session.py tient le lien (repond sondes c423)
- Serialiseurs decodes: Hello=1bool, SmartConnect=u16flags+blob, CHAIInfo=u16+u16+blob
- uRemote enregistre: device "uTrack24 Remote" cls 0x6800000 + membre "uRemote" + 5 groups (Status/Meters/Controllers/Files/Settings)
- Mute handler = FUN_0051b610 (toggle par canal, base 0x2ff0)
- Keepalives: ef5100a0 (c->s) / ef510010 (s->c); VNM echoit c842 quand membre accepte

## A FAIRE (suite RE)
1. Stabiliser membre: repondre a TOUTES les sondes VNM (pas juste c423) — d842/d423
2. Renommer membre "DewiTool" (ID 0x69727160 libre, nom dans decl c842)
3. Decoder les writes 8423 -> mixer (mutes/faders/gain) par canal
4. Decoder 4437 metering (vumetres) + subscriptions 5423
5. Serialiseur proprietes = FUN_5834a0 (TLV 0123)
6. Projet Ghidra: C:\tools\ghidra_projects\uremote_v36 (scripts dans C:\tools\ghidra_scripts)
7. uTrack IP 192.168.10.197 ; VNM TCP 55000 ; AudioLAN 192.168.10.175

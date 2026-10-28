# MEMOIRE RE — Cymatic uTrack24 / CopperLan (relire en entier apres reset)

## OBJECTIF
Remplacer uRemote/uTool2 par notre outil (Qt GUI). Controle du uTrack24
(transport, mixer 24ch, metering, monitoring, routing AES67).

## ✅ ACCOMPLI — protocole casse, adoption prouvee
- Framing: ef51 | u16(flags<<12|len max 0x58c) | payload align4 | crc32-BE
  flags b0=client->VNM, 20=VNM->client, 10/a0=keepalive
- Checksum FUN_00678cd0 = Adler-like (seeds 0x4c4d/0x5054 mod 0xfff1)
- Discovery: VNMSRCH UDP -> VNMINFO -> TCP :55000
- ADOPTION: replay init_seq_fresh.txt -> membre "uRemote" dans Manager,
  edge vers uTrack visible = membre adopte + session ouverte
- c437 = open-session (ouvre le routing vers le device)
- READ 5423 vers uTrack 34b96e2e FONCTIONNE (reponses recues)

## ❌ BLOQUE — controle du device
Writes 8423 partent mais uTrack ne reagit pas (play/mute/test 414 msgs).
Le routing vers le device existe (reads passent) mais les writes n'ont
pas d'effet. Le transport n'est pas un write 8423 classique ou l'endpoint/
propID/valeur est faux. Le play n'est pas "propID 6506 val 28018400".

## PROCHAINE ETAPE — la plus directe
Tracer bouton Play UI -> msg envoye. Chaine 'Play' a .rdata 0x2cc0ac
(file 0x2cc0ac). La fonction qui lit cette chaine = handler play; elle
construit la commande exacte (8423 ou invoke 0x37c4). La retrouver dans
le code = avoir la commande parfaite, plus besoin de deviner.

## FONCTIONS CLES (Ghidra, projet uremote_v36)
FUN_00545da0 = enregistrement membre uRemote (device+membre+5 groupes)
FUN_00627bd0 = ctor CComputerCHAI ; FUN_006257b0 = factory CHAI core
FUN_0064dfe0/64e1b0 = construisent invoke 0x37c4 ; FUN_00630ce0 = dispatch
FUN_0062edd0 = send msg ; FUN_0064c110 = frame ; FUN_0064bf70 = parse
FUN_00679060/6794b0 = SmartConnect session ; FUN_00676560 = send ctrl msg
FUN_00547350 = handler mute (0x2fd0/0x2ff0) ; transport=0xd000/0xd001
FUN_005834a0 = serialiseur TLV 0123 (writes proprietes)

## ADRESSES/IDS
uTrack24=192.168.10.197 ep 34b96e2e | AudioLAN=192.168.10.175
membre uRemote: ID 0x69727160 (persistant client) | handle session VNM varie
endpoints vus: 34b96e2e(uTrack) ca53d56b 0386214e ca53d56b(0200)
GHIDRA: project C:\tools\ghidra_projects\uremote_v36
scripts C:\tools\ghidra_scripts\ (Decomp*.java utilisables)

## FICHIERS
src/chai_session.py = session interactive (replay+reponses sondes)
research/assets/cap/init_seq_fresh.txt = seq adoption (1073 msgs)
research/assets/cap/play.log = capture uRemote faisant play
research/assets/cap/fresh_vnm.log = capture VNM vierge
research/assets/software/uRemote.exe = binaire analyse

## ERREURS COMMUNES
- getScalars() n'existe pas sur Instruction -> getOpObjects()
- substring() : verifier .length() d'abord
- $_ se mange en bash -> utiliser fichier .ps1
- le write 'play' envoye n'a PAS marche: verifier endpoint+valeur+handle

## NOTE — strings UI pas de ptr direct (Qt/ressource)
'Play'@0x2cc0ac pas de xref code = strings Qt chargees via metaObject
La commande play a trouver par: decompiler les handlers boutons
(QPushButton clicked -> slot) ou les fonctions qui envoient au device.
La cle reste: trouver la fct qui construit la commande transport exacte.

## TEST write+read (resultat a analyser)
- write 8423 prop 0x0000 val 0xaa -> puis read 5423
- reponse device recue (34b96e2e + membre) = routing fonctionne
- la valeur lue n'etait pas visible clairement -> format read a affiner
- NEXT: extraire la valeur proprement de la reponse read;
  si write+read coherent => writes marchent, il faut juste les bonnes cmdes

## !!! CORRECTION MAJEURE — tous les tests de commande precedents etaient invalides
1. Le framing construit utilisait zlib.crc32 : FAUX. Le VNM jetait toutes nos trames construites
   (play, mute, barrage 414). Seul le replay verbatim (octets captures) passait.
   VRAI format (verifie sur 706/710 trames de play.log):
     ef51 | u16 LE = (flags<<12)|len | payload(len) | a(u16 LE) b(u16 LE)
     a,b = 0x4c4d,0x5054 ; pour chaque octet de ef51+hdr+payload: a=(a+x)%0xfff1 ; b=(b+a)%0xfff1
   Implemente dans src/chai_session.py (cksum/frame/parse). chai_client.py l'utilise.
2. Les scripts d'analyse tronquaient les trames a l'affichage (l[:120]) et ces chaines
   tronquees ont ete rejouees -> messages incomplets.
3. Le champ apres "3400" (9c02, 9e02, a002 ... 6306, 6406, 6506) est un COMPTEUR qui
   s'incremente a chaque message (numero de sequence/transaction), PAS un propID.
   "prop 6506" n'existe pas.
Outil: research/tools/replay_action.py <log> <t0> <t1> = adopte + rejoue l'action re-framee.

## TABLE COMPLETE DES COMMANDES DEVICE (Ghidra CtrlCalls.java -> research/notes/ctrl_calls.txt)
Toutes via vtable[0x174](ctrlID,0,valeur,0) (0x17c = variante, ex 0xd001 seek avec position).
Sur le fil: 8437 / TLV 4337 vers 0e00 0100 34b96e2e sous-session 04 (cf fresh_vnm.log t=36.13).
Transport: 0xd000=valeur bouton (FUN_00512810; val 3 -> dialogue confirmation, probablement REC),
  0xd001 locate (0x17c), 0xd002/0xd003, 0xd008, 0xd009, 0xd088
Settings: 0xb000-0xb005, 0xb102-0xb105, 0xb200-0xb207, 0xb210-0xb212, 0xb300-0xb302,
  0xc003, 0xc010, 0xf060 ; canaux: (id-0x2ff0)=mute val2, (id-0x2fd0) val2, (id-0x4cd0/4ce0/4cf0)
Le play.log capturait un AUTRE client (src 0100 0100 3602 + dst MachineID ca53d56b=6bd553ca), pas uRemote.
Outil: research/tools/send_ctrl.py d000=1 wait=10 d000=0

## VERITE TERRAIN (play_true.log, capture corrigee)
- capture_loopback.py jetait les paquets >1600B et ne loggait pas le port -> corrige (port=).
- port 35614 = CopperLanManager (verifie Get-NetTCPConnection). TOUTES les anciennes captures
  "play" etaient le trafic du Manager (handle 3602, dst MachineID ca53d56b). uRemote = port 58587.
- Play uRemote reel (t=45.207) = UNE trame:
  00018437 00000000 0e000200 06972716 0000 0200 | 0000 0100 0e000100 34b96e2e 0000 0200 | 01000000
  4337 0010 1e00 1600 0000 [ctrl=00d0] 0000.. [val u32 = 04000000]
  => ctrl 0xd000, valeur 4, sous-session 02 (offsets sous-session 18 et 34)
- send_ctrl.py reproduit octet pour octet les trames reelles (d000=4@2, b000=0@4).

## ✅✅ PREMIERE COMMANDE VALIDEE SUR LE DEVICE (17:50:40)
python research/tools/send_ctrl.py d000=4@2  -> le uTrack24 passe en PLAY (confirme visuellement par l'user),
uRemote ferme. Chaine complete OK: adoption (init_seq_fresh) + framing Adler + trame 8437/4337.
=> mecanisme de controle prouve. Reste: mapper les valeurs (stop/rec/...) et les autres ctrlIDs.

## TRANSPORT (transport_all.log, uRemote port 43894) — ctrl 0xd000 @ sous-session 02
Ordre user: Play, Pause, Stop, Rec(+confirm), Stop, autres boutons.
  38.990 val=4  Play      (valide sur device)
  53.241 val=4  Pause     -> meme valeur que Play (bouton bascule ?) a confirmer
  59.875 val=3  Stop
  65.991 val=5  Rec
  89.323 val=3  Stop (apres dialogue: coherent avec FUN_00512810: val==3 && etat 0x288 in {3,6} -> dialogue)
Les "autres boutons" n'ont emis AUCUN 0xd000 (passent probablement par 0xd001 locate via vtable[0x17c]).
Test 17:55:14 play(4) puis 17:55:21 stop(3) envoye par notre client.

## ✅ TRANSPORT COMPLET VALIDE SUR LE DEVICE
play(4) 17:50 / stop(3) 17:55 / rec(5)+stop 17:56 -> confirmes par l'user (prise ~8s creee).
API: src/utrack_control.py  (UTrackControl().connect().play()/stop()/rec()/ctrl(id,val,sub))
CLI: python src/utrack_control.py play|stop|rec|ctrl d000 4 2
NEXT: 0xd001 locate (vtable[0x17c], autre TLV) pour ff/rew/position ; puis mixer/settings
      (table ctrl_calls.txt) en capturant chaque action uRemote avec capture_loopback.py (port=).

## CARTE COMMANDES (RTTI) -> research/notes/command_map.md
Chaque ctrl relie a sa classe UI via RTTI (ClassOf.java). Ouvert: regle sous-session, slot 0x17c, mute vs solo.

## A FAIRE DEMAIN (dans cet ordre)
1. Lire dans le code la regle de sous-session (d000->2, b0xx->4 observes seulement).
2. Valider une commande sans risque sur le device (0xb200 AutoPlay ou 0xb105 PreRecording).
3. Decoder le builder 0x17c (FUN_0064de20) -> 0xd001 locate/ff/rew.
4. Mixer: DSPMChannelStrip (+0x2b0 / +0x3c8) mute vs solo, ids par canal.
NE PAS tester sans accord: 0xb003/b004/b005 (reseau), 0xb000 (horloge).
Outils: src/utrack_control.py, research/tools/capture_loopback.py (port=), send_ctrl.py, Ghidra ClassOf/CtrlCalls/Truth.

## 2026-10-28 RE outils Cymatic
- PROUVE: le uTrack annonce son modele de controles (4437/TLV c837): node=sous-session de chaque ctrl. Voir research/notes/device_model.md.
- Ecriture: TLV 4337 (liste/bouton) et 4237 (numerique fader/pan), ctrl@2 valeur u16@20.
- Mixer: 0xd030+ch Mute (prouve), 0xd010+ch Solo (elimination), 0xd050+ch Pan, 0xd070+ch Fader (prouves capture).
- Reste: format fil ecriture texte (0xd001 locate, d002/d003 loop), Skip Back/Fwd.
- Outils: radare2 6.2.4 C:/tools/radare2/bin ; ilspycmd 8.2 ; Mixerpanel .NET decompile dans C:/tools/ilspy_out (API USB BeBoB: CDriverInterface.cs, NE PAS commiter = code tiers).
- Scripts RE: research/tools/*.py (gitignore!) + research/tools/ghidra/*.java ; Ghidra: analyzeHeadless C:/tools/ghidra_projects uremote_v36 -process uRemote.exe -noanalysis -readOnly -postScript X.java (JAVA_HOME=C:/tools/jdk21).

## 2026-10-28 fin de session - RE file write firmware
- Base image bcd = 0x60005f84 (histogramme deltas). Projet ghidra: C:/tools/ghidra_projects/utrack_fw.
- FUN_6002c4fc = table denregistrement des commandes shell `file` (research/notes/fw_file_cmds.txt). Chaque bloc enregistre une commande via tables DAT_6002cdxx: handlers a decompiler ensuite pour la syntaxe reelle de `file write`.
- StrFile.java (research/tools/ghidra) + fw_strings_to_find.txt = trouve les users de chaines dans le firmware.
- Prouve: file open ro/size/print/close lit le disque (reclog, .set, wav). rename/delete prises marche (fs rename/fs rm). markers = Play pendant REC (wav cue chunk).
- Reste: file write syntax (buffer_offset?), file move, fs mkfs = volontairement exclus jusquici.

## Session 2 — requetes parametres CopperLan depuis notre client
- Member AudioLan = 253d (stable, vu dans annonces VNM PC).
- Init Manager extrait : research/tools/cpm_init_seq.txt (71 msgs). Rejoue -> 0 reponse (identite membre occupee par Manager en cours).
- 8423 verbatim uRemote (membre 3602) apres init -> aucun 4423 non plus. Donc: les requetes parametres echouent dans la session rejouee, quel que soit le membre. Manque: member-open/adoption avec cookies de session (4023 porte 9a430000/2e410e/06972716) ou type de session Manager.
- Ecriture decodee OK (DevinTest): 8437 -> TLV 4437 [path 0400 1110][00000000 00000001 ...][len u16][str].
- Piste B utilisable tout de suite : API JSON HTTP de la carte (sources/outputs/general).

## Mode USB interface audio (verifie 28/10)
- uTrack annonce 0 controle CopperLan en mode USB (device present, arbre vide).
- Controle en mode USB = driver Windows (IOCTLs 0x8089xxxx, cf bebob_usb.md) + SDS telnet (usb drv, mixer, cne/AppSettings).
- Enumeration OK apres debranchement de la cle stockage : VID_1511 PID_0043, driver WDM installe, 24 lignes + MIDI + PCM stereo.
- AppSettings SDS: AnalogInputs/Inputs00to07=3,08to15=4,16to23=5 (inputselect par groupe de 8); AudioLan InterfaceAsInput=true; USBConfigurationId=2; DeviceMode=0; StreamingInterface=USB.

## Matrice de routage - reconciliation doc/RE (28/10)
- Doc AudioLAN confirme: inputs analog vs AudioLAN par blocs de 8 -> inputselect 1|2|3|all.
- inputselect digital: vu-metres -> 0 (receveurs silencieux, pas de stream assigne). inputselect analog: retour signal. VERIFIE.
- SDS mixer: get/set <ch> fader|pan|mute; MonitorBoost=0.0, Monitor fader 0x7FFF, Bus fader 0x7FFF.
- AnalogInputs Inputs00to07=3/08to15=4/16to23=5 = descripteurs hardware, PAS la selection.
- 0xb202 = MIDI offset (-11ms), pas un delay monitor.
- Mode USB: 0 controle CopperLan; SDS toujours actif.
- Etat courant inputselect: pas d attribut cne dedie trouve -> probablement interne DSP/UI.

## inputselect - verite firmware (FUN_6013dc64/6017d894/6017ee88)
- inputselect "1|2|3|all" -> bitmask blocs (1,2,4,7); "analog"=0 "digital"=1.
- Etat = bits 24,25,26 du u32 ctx+0x7c (1 bit par bloc de 8; (mode^1)).
- ctx obtenu via FUN_601cca98(900, DAT_6017eedc) -> proxy id 900; ptr stocke a DAT_6017eedc.
- Lecture possible: rd <DAT_6017eedc contenu> puis rd <ctx+0x7c> bits24-26; ou get sur l attribut id 900.
 
- rd memoire OK: 0x6017eedc -> ctx 0x60404068, +0x7c = 0x00000004 STABLE apres inputselect all digital/analog -> ctx+7c nest PAS letat live.
- Diff ls -e -r cne/AppSettings analog vs digital: aucun changement -> etat pas dans AppSettings (dump: utrack_appsettings_digital.txt).
- Reste: persparam, etat UI/DSP, ou lecteurs de ctx+7c a trouver.

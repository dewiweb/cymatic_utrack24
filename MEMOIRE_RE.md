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

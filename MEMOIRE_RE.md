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

## UPDATE — messages de controle 8423 decodes
Format: 8423 | src membre | dst device uTrack (34b96e2e) | TLV 0123 0410 3400 | propID u16 | valeur
La rafale a ~22.8s = sync etat (tous les canaux). Le mute ch1 = un write specifique.
NEXT: comparer 2 captures (ch1 mute on vs off) pour isoler le propID du mute.

## PENDING — mute off non capture
mute1.log a les writes 8423 (sync etat ~22.8s) mais pas le toggle isole
mute_off.log = aucun write 8423 -> uRemote n'envoyait pas (pas sur vue mixer?)
NEXT: recapturer en gardant uRemote sur l'onglet mixer, toggle ch1 proprement.
Les writes 8423 = TLV 0123 0410 3400 <propID u16> <valeur> vers device 34b96e2e

## BLOQUE — capture des writes de controle
- mute_off.log + prop_edit.log : QUE du trafic de fond (4437 metering, polls)
- L'editeur CopperLan Manager n'envoie pas de 8423 sur :55000 capte
- Le write de controle passe peut-etre par :40987 (service controle) ou
  une session Manager differente qu'on ne capte pas sur loopback:55000
- NEXT: capturer TOUS les ports CPVNM, ou les writes en live depuis notre session

## APPROCHE — envoyer les writes depuis NOTRE session
Capturer les writes utilisateur ne marche pas (Manager parle ailleurs).
Meilleur: notre session adoptee peut ENVOYER des 8423 au uTrack directement.
8423 TLV 0123 0410 3400 <propID> <valeur> vers 34b96e2e = write propriete.
Les propIDs du mixer (mutes/faders) a decouvrir en sondant (read 0123 vs write).

## GHIDRA — chaine de commande (mise a jour)
- FUN_00516c30 = dispatch evenements -> FUN_00547400 / FUN_00547350 (mute)
- FUN_005262c0 = dispatch avec routes -> FUN_00547780/545420/5453a0/545320/545200
- FUN_00585430 = encoder write propriete (flags +0x30 selectionne le type)
- mute = FUN_0051b610 toggle canal ; session keepalive = FUN_00545200 (c010)
- PropIDs transport vus en capture: 6306-6b06 (4023) et 6506 (8423 write)
- le write play (6506/28018400) n'a PAS declenche la lecture = mauvais champ

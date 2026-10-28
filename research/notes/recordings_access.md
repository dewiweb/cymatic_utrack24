# Accès aux enregistrements du uTrack24 (vérifié le 2026-10-28)

## Shell Telnet sds:// (port 23, sans authentification) — lecture seule utilisée
- `fs info` : FAT32, espace libre (30067 Mo).
- `fs ls /MultiTrack` : une prise = un dossier `TakeNNNN` (+ `_TempTakeNNNN` = tampon de pré-enregistrement).
- `fs ls /MultiTrack/Take0012` : `Take0012(0001).wav`, `Take0012.set`, `reclog.txt`.
- `wavefile <chemin.wav>` : fréquence, bits, nombre de voies, nb d'échantillons, **marqueurs en échantillons**.
  Ex. Take0012 : 44100 Hz, 16 bits, 8 voies, 414672 échantillons, 2 marqueurs (143912, 277568) → les marqueurs créés par Play pendant REC sont bien écrits dans le WAV.
- Réglages réels d'enregistrement : `/cne/AppSettings/Recording` (`SampleSize`, `TrackCount`, `SampleRate`, `PreRecording`) et `/cne/AppSettings/Global`.
- Lecture d'un fichier (syntaxe tirée des textes d'aide du firmware 4218, `utrack24_fw_strings.txt` l.7825-7843 ; vérifié) :
  `file open <chemin> ro` → `file size` → `file print <octets>` (dump hexa 16 o/ligne) → `file close`.
  Autres : `file read <octets> {-a}`, `file seek <offset>`, `file tell`, `file stat <chemin>`, `file move <a> <b>`, `file remove <nom>`, `file write <octets> {<count>} {<buffer_offset>}` (modifient le disque : non utilisés).
- `reclog.txt` : journal texte de la prise (format SR/bits/pistes, création de dossier, « Adding a Marker @:3 » en secondes, arrêt).
- `TakeNNNN.set` : XML `<song_settings>` (nom, sample count, format, et par voie : output_level/mute/channel, track_name, monitor_volume/mute/pan). Exemple : `research/notes/Take0012.set`.
- Attention : `file open` sans argument a fait fermer la connexion par l'appareil (le uTrack reste joignable). Ne pas appeler les sous-commandes `file` sans connaître leur syntaxe. Le shell garde la ligne en cours entre connexions : envoyer des backspaces pour la vider si l'invite est polluée.

## Écriture (vérifié le 2026-10-28)
- `fs mkdir <chemin complet>` : crée un dossier vide (probé : `/MultiTrack/_DevinTest`).
- `fs rename <oldname> <newname>` : chemins complets acceptés, pour dossiers ET fichiers ; sortie silencieuse en cas de succès (pas de message "done").
- `fs rm <chemin>` : supprime un fichier, et aussi un dossier **vide** (probé). Sortie silencieuse en cas de succès.
- Renommer une prise : renommer le dossier puis chaque fichier préfixé `<old>` (wav, .set) — ne pas toucher reclog.txt ni le contenu du .set.
- Supprimer une prise : `fs rm` chaque fichier puis le dossier ; vérifier par `fs ls`.

## CopperLan
- node 3 : `0xc000` fichier chargé, `0xc001` dossier courant ; node 0 : `0xf000` nom de la prise, `0xf003`–`0xf005` format.
- uRemote s'abonne à d'autres contrôles (liste construite dans `FUN_005412d0` : 0xb000, 0xb001, 0xf00b, 0xd008, 0xf00a, 0xc003, 0xc004…) traités par `FUN_00541080` ; 0xc003/0xc004/0xf00a/0xf00b n'apparaissent pas dans nos sessions → mécanisme d'abonnement (navigateur de fichiers, compteur de marqueurs) à capturer.
- `0xc003` (FilePanel) = sélection/chargement d'un fichier.

## Constat
Le passage en 44.1/16/8 a été fait par l'utilisateur avec la télécommande (confirmé) : les écritures de réglages fonctionnent.
Les prises Take0011–Take0014 (28/10) sont en 44.1 kHz / 16 bits / 8 voies ; Take0010 (27/10) en 48 kHz / 24 bits / 24 voies. L'appareil est actuellement réglé en 44.1/16/8 (Telnet et CopperLan concordent), alors que verify_settings_20261028.txt annonce une restauration en 48/24/24 → origine du changement à établir.

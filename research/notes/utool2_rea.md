# uTool2.exe — RE via REA (x86 PE, PDB: uTool2.pdb ref)

## Formats fichiers identifies
- `.playlistprj` : projet playlist PC, **XML** `ns0:playlist_project` (ns http://www.cymaticaudio.com/PlaylistProject/1.0), `ns0:playlist_name`
- `.play` : fichier playlist device (dans `#PLAYLISTS/`), `autoplay.play` = auto-playlist
- `#PLAYLISTS` : repertoire device des playlists
- `sessions.xml` : sessions multi-tracks
- Wav : metadonnees **EBUCore XML** (ISRC via `ebucore:identifier`)

## Fonctions cles
- `FUN_005bd870` : mappeur dossiers device — type×index -> `Music`/`Recording`/`MultiTrack`/`#PLAYLISTS` (types: stereo->Recording, multitrack->MultiTrack)
- `FUN_00595b20` : walker export playlist — itere les songs, appelle `FUN_005955a0` (ecrit settings+refs par song), aggrege taille/duree @+0x2760
- RTTI : `PlaylistContentList`, `PlaylistContentListItem` @0xc801a8-f8

## UI strings utiles
- Types : "Multitrack Playlists" vs "Stereo Playlists" (devices cibles differents — "song type not matching target device")
- "Playlist rejected (missing Song)" : validation refs
- "Export only new content and any modified song settings and playlist files." : export differentiel

## Schema .playlistprj (XML)
`ns0:playlist_project` > `playlist_name`, `song_projects` > `song_project` > `song_project_name`,
`track_count`, `song_name`, `song_type`, `markers` > `marker`. Dir librairie = `PlaylistLib`.

## Chaine export (device)
- `FUN_00595b20` (export walker) <- `FUN_00593a60`, `FUN_005979c0` (2 points d'entree export)
- `FUN_005955a0` (par song) : decide nouveau/modifie (types 1-4), cumule octets @param_7/10 — export differentiel
- `FUN_00551b30` (4.7K) : resolution chemins projet (.play/.playlistprj/#PLAYLISTS) — PAS le serialiseur binaire
- `.play` = fichier binaire device (dans `#PLAYLISTS/`); le serialiseur reste a identifier (suivre les writers dans l'export)

## Formats confirmes
- stereo playlists -> `Recording/`, multitrack -> `MultiTrack/`, musique libre -> `Music/`
- RTTI : `PlaylistContentList/Item`, `ProjectExplorerItem_Song` (type via FUN_006f6dd6)

## Entrees export (suite)
- `FUN_00593a60` : scan/preview export — calcule octets manquants @+0x2760, capacite disque @+0x1850 (+0x20000000 garde), met a jour les boutons export ; mode post/pre-fader flag @+0x2080&2
- `FUN_005979c0` : 2e point d'entree, meme walker
- Writer `.play` binaire : TOUJOURS a localiser — probablement dans le chemin CreateFileW pendant l'export, ou dans FUN_005955a0 cote fichier

## Correction cle (firmware)
- `.play` device = **XML** (pas binaire) — fw parse `playlistname` + erreur "Error in reading Playlist File %ls"
- `.BCD` = conteneur `ArchwaveBCD` (projet/session, distinct du magic BcOd firmware); uTool2 ecrit le `.set` XML
- Playlist controls device : `0xf030-33` start-mode/time, `0xd008` song idx (selector), `0xd009` exit, `0xd088` mixer config

## song.set (XML par take/song, dans le dossier du take)
`ns0:SongProject` > `song_name`, `song_type`, `version`, `timestamp`,
`duration_seconds`, `total_sample_count`, `sampling_rate`, `resolution`,
`sync_units`, `midi_file`, `midi_duration`, `markers` > `marker`,
`tracks` > `track` > `audiofile`, `audiofiletrackindex`, `channel`,
`trackname`, `samplingrate`, `monitor_level`, `monitor_pan`, `monitor_mute`,
`direct_level`, `validationtimestamp`

## sessions.xml (index sessions sur le media)
`ns0:sessiontree` > `items` > `item` (ns http://www.cymaticaudio.com/sessiontree/1.0), `version`

## mixerpreset (dans song.set ou projet)
`ns0:mixerpreset` > `channels` > `channel` > `name`, `pre`

## playlist_project (XML, champs vus)
`playlist_name`, `project_type`, `version`, `timestamp`,
`start_mode`, `start_mode_delay`,
`song_projects` > `song_project` > `song_project_name`, `project_file_location`

## Media/disque
- **FAT32** requis (string @0x74860c/0x748db0) ; `_TempTake` = dossier temporaire
- Registre : `DontAskForDiskFormatConfirmation`, `ShowOnlyTakes`
- Types song : chaines `multitrack`, `multitrackplaylist` (ids dans exports)
- Stack : **JUCE** (WasapiClasses, SessionSelector) + **r8brain-free-src** (SRC resample embarque) + `MyAudioFormatWriter::Create`
- WAV export : metadonnees EBUCore XML (ISRC) injectees

## Serialiseurs localises (adresses uTool2.exe)
- `FUN_005406f0` (4989 B) : serialiseur `song.set` — contient xref `ns0:SongProject`
- `FUN_00551b30` (4768 B) : resolution chemins projet/device (.play/.playlistprj/#PLAYLISTS)
- `FUN_00595b20` (1255 B) : walker export (appelle FUN_005955a0 par song)
- `FUN_005955a0` : logique export par-item (new/modified, cumul tailles)
- `FUN_005bd870` : mappeur dossiers device (Music/Recording/MultiTrack/#PLAYLISTS)

## Serialiseur song.set (FUN_005406f0) — structure
Builder DOM : `FUN_00634c10`=create elem, `FUN_0061a340`=append child, `FUN_006104a0`=text/value, `FUN_005bde60`/`FUN_005bdc20`=formatters (version?), `FUN_00633ba0`=attrib. ~90 creates: racine SongProject -> version/timestamp -> song_name/song_type -> sampling_rate/resolution/duration/total_sample_count/sync_units/midi -> tracks(track*) -> markers(marker*) -> monitor/mixer. Valeur `-` (0x2d) pour champs vides. song_type codes 1/2/3 (multitrack/stereo/playlist?). Ordre exact = cf dump ev_0e820b79.

## Negatif
- `ArchwaveBCD` absent de uTool2 — le .BCD projet n'y est PAS ecrit (magic vu fw-side @0x116300, parser FUN_00115d40). uTool2 ecrit seulement song.set/.playlistprj/.play/sessions.xml
- Writer .BCD = autre outil (uTool original? updater?) — a verifier dans uTool 1.1.46

## uTool 1.1.46 (uTool.exe, x86)
- Extrait de l'installeur Wayback (7z NSIS) : research/assets/software/utool_1146/extracted/uTool.exe
- `ArchwaveBCD`/`BCD` **absent aussi** — le conteneur .BCD projet n'est ecrit par NI uTool2 NI uTool
- => .BCD est probablement ecrit par le device lui-meme (export interne) ou l'updater firmware, pas par les outils PC
- Reste a verifier : l'updater (.exe firmware) ou generation on-device

## RESOLU — ArchwaveBCD
- Magic **embarque dans les .bcd firmware** : AudioLAN-4078 @0xc55dc, uTrack-4218 @0x116300
- = bloc template/defaut projet embarque dans le firmware, parse par FUN_00115d40
- Pas un format exporte par les outils PC — confirme l'absence dans uTool/uTool2

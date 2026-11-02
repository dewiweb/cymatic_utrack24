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

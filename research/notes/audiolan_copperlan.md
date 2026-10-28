# AudioLAN via CopperLan — paramètres CHAI (capture CopperLan Manager 28/10/2026)

Source : `research/assets/cap/cpm_audiolan.log` (loopback TCP:55000, CopperLanManager.exe ↔ VNM). Messages parsés : `research/notes/cpm_msgs.pkl`.

## Faits établis

- La carte AudioLAN est un **membre CopperLan** : handle **`253d`** (`0100 0100 253d` dans les messages). uRemote ne s'y connecte pas (il cible le device uTrack `34b96e2e`), mais **CopperLan Manager lit/écrit ses paramètres via le VNM du PC**.
- Famille de messages (mêmes codes que le uTrack) :

| Opcode | Sens | Rôle |
|---|---|---|
| `4023` | uR>VNM | sélection/ouverture du membre |
| `8423` | uR>VNM | **lecture d'un nœud** de l'arbre de paramètres (index de nœud dans le corps) |
| `4423` | VNM>uR | **réponse : nom + type + flags + valeur** du nœud |
| `8437` | uR>VNM | écritures/notifications TLV (`4337`, `4437`, `4837` internes) — même famille que les contrôles uTrack |
| `4437` | VNM>uR | états/notifications (`c837`, valeurs) |
| `c437` | uR>VNM + VNM>uR | découverte broadcast |
| `5423`/`c423`/`d842` | les deux sens | housekeeping de session/adoption |

## Arbre de paramètres observé (membre 253d)

- `Audio to network` (sources/émetteurs RTP)
- `Network to audio` (receveurs)
- `Settings`
- Par stream (`uT24 channels 1-8`, `9-16`, `17-24`) :
  - `Network Configuration` → `Status` (énum : `Idle`/`Transmitting`)
  - `Stream Name`, `Enabled`, `Use automatic config`, `Multicast Address`, `Multicast Port`
  - `Commit changes` (commande)
  - `Channels Configuration` → `Channel name` ×N (liste `1: Channel 9`, `2: …`)

Mêmes champs que l'API JSON `/sources` — cohérent : deux vues sur le même modèle.

**Branche Settings** (panneau Settings de CopperLan Manager, lu à ~75.4s/88.5s) :
- `Network Configuration` : DHCP Mode, Static IP Address, Static IP Mask, Static IP Gateway, Commit changes
- `Audio Configuration` : Sampling Rate, Resolution, Commit changes
- `Receiver Configuration` : Delay Samples, Delay Time, Syntonized Mode, Commit change
- `PTP Configuration` : State, Grandmaster ID, Current Offset (ns), Domain, Preffered Master, Commit change
- `Receivers SIP Identity (need reboot)` : SIP identity, Commit change

Plus riche que l'API JSON (état PTP, offset, grandmaster, identité SIP, mode syntonisé).

## Format de requête `8423` (lecture)

```
corps: 0100 0100 <membre:2> 0000 0000 0000 0000 0100 feff <local member:4> 0080 0000 0100 0000
       01 23 04 10 34 00 <seq:2=transaction> <nodePath...>
```
Réponses `4423` : même en-tête, `01 23 02 10 <len:1> <seq:2> <nodePath>` puis `19 01 7e/1e 18 <namelen:1> 00 <name>` + type/flags + valeur.
Les index de nœud vus s'incrémentent (`0a e8`, `0a e9`, `0a ea`… = parcours de l'arbre ; sous-index `0200`/`0400`/`0200 1010`…).

## Format d'écriture — décodé (edit « DevinTest » sur Channel name, ~505.7s)

Écriture = trame `8437` (dest `ffffffff`), TLV interne **`4437`** :

```
8437 ... | 4437 0010 <len:2> <seq:2>
           0400 1110            <- path param : groupe 0x0004, index 0x1011 (« Channel name »)
           0000 0000            <- ?
           0000 0001            <- type valeur ? (1 = chaîne)
           0000 0000 0000 0000  <- flags
           09 00 "DevinTest"    <- <len:2> + chaîne
```

La même trame part deux fois (l'UI envoie un doublon). Pas de message « Commit » séparé observé pour ce champ — l'écriture TLV suffit (le « Commit changes » est peut-être un autre param-path, ex. `0400 1210`, vu en `4837 ffff 0000`).

Autres TLV d'écriture observés :
- `4837 0010 <len> <seq> 0a00/8800 ... <path:4> <type:2> <val:2>` — enum/int (ex. `0400 1110 0200 0a00`, `0400 1210 ffff 0000`)
- `4337 0010 <len> <seq> 0000 <path:2> <data>` — autre type (toggles ?)

## Échos `c837` (notifications valeurs, trames `4437` VNM>uR)

`c837 0010 <len> <seq> <c2|c3> 0000 <groupe:2> <index:2> <type/flags> <len:1?> <valeur>`
Exemples lus : `0400 0050`→«192.168.100.220» (Static IP), `0200 0050`→«On» (DHCP), `0400 0110`→«4800» (Sampling Rate index), `0400 0010`→«109.090 ms» (Delay Time), `0400 3010`→«00-07-F5-FF-FE-49-00-30» (PTP Grandmaster), `0400 3110` (PTP State).

## À faire

1. Écrire le parseur réponse `4423` (nom, type, valeur) → dumper l'arbre complet 253d.
2. Corréler chaque `8437` de la capture avec l'action Manager (édition de champ, Commit) → format write exact.
3. Rejouer une lecture `8423` depuis notre client (identité rejouée OK) et vérifier l'écho.
4. Même protocole attendu pour les paramètres SDS `cne/` vus en telnet ? (probablement non — les params CopperLan sont un sous-ensemble haut niveau).

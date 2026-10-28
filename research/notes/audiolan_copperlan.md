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

## Format d'écriture (à décoder finement)

Trames `8437` broadcast `ffffffff` portant TLV internes :
- `4837 0010 0a00 0200 8100 <u16>` — notification état/abonnement ?
- `4437 0010 2b00 ... 0400 1110 <val>` — écriture paramètre (path `0400 1110`, type, valeur)
- `4337 0010 1e00 16/23 ...` — écriture autre paramètre

## À faire

1. Écrire le parseur réponse `4423` (nom, type, valeur) → dumper l'arbre complet 253d.
2. Corréler chaque `8437` de la capture avec l'action Manager (édition de champ, Commit) → format write exact.
3. Rejouer une lecture `8423` depuis notre client (identité rejouée OK) et vérifier l'écho.
4. Même protocole attendu pour les paramètres SDS `cne/` vus en telnet ? (probablement non — les params CopperLan sont un sous-ensemble haut niveau).

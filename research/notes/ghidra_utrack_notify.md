# uTrack24 firmware 4218 — CopperLan NOTIFICATION / state-push system

Ghidra 12.0.4, project `research\ghidra\utrack_fw_proj` (utrack_fw), program
`uTRACK24_Release_4218.bcd`, flat load at base 0 (Ghidra addr = file offset;
runtime = file + 0x60005F84). Extends `ghidra_utrack_map.md` §3 and
`ghidra_utrack_dsp.md` §Key-state. READ-ONLY analysis; no firmware source changed.

Objects in play:
- **app singleton / ctx** = `*(0x60403AA4)` (`FUN_000f8ee0()` accessor).
- **uTrackCopperLan (uCL)** = `FUN_000aa570()` singleton (ctor `FUN_000b0224`,
  ~0x8e0 bytes). `uCL+0x130` = CHAI member object, `uCL+0x134` = CHAI device
  (created via `member->vt[0xb4]`), `uCL+0x120` = message-handler functor bound
  onto every member-variable group, `uCL+0x848` = write/commit sub-object,
  `uCL+0x810` = file-list container.
- **LevelMeters DTO** = `0x60405AEC` `{vptr, valid@4, count@8, data@0xC}` —
  26 u32 peaks, produced by `appCtx->vt[0x84]` (= `FUN_000f67c0` wrapper).
- **Peak-hold block** = `*0x60401A94`, `*0x60401A90` records of **12 bytes**;
  `FUN_000d731c(rec)` returns `*(rec+4)` = the held peak u32.
- **Status word** = `0x60401A98` u32: bit0 sync-lock, **bits1-3 input-select
  mask**, bits4-5 channel-mode, bits8-10 digital-board-id.

---

## 1. The 4437 notification fan-out (periodic push)

### 1.1 Producer — `FUN_000f6810` (the notify tick)

Registered once at streaming start in `FUN_000f5eb4`:

```c
FUN_0005b530(0x1b);                                  // build 27 peak-hold records
uVar4 = FUN_000923c8();                              // 300-byte notifier singleton
FUN_0009231c(uVar4, FUN_000f6810 /*0x600fc794*/);    // → FUN_00067f3c(obj+0x34, cb)
```

`FUN_0009231c` stores the callback at `notifier+0x34+0xf4` (= `+0x128`). The
notifier's ctor `FUN_00092424` registers it as a listener on the **"UIService"**
(enumerates providers via `FUN_000b4840(reg,"UIService",&list)` then
`provider->vt[0x14](provider, subObj)`), so `FUN_000f6810` is fired by the UI
service tick — this is the ~10 Hz meter/status cadence seen on the wire.

Body (verified decompile):

```c
uVar2 = FUN_000f8ee0();                          // app ctx
iVar3 = FUN_000f67c0(uVar2, 0x60405AEC);         // ctx->vt[0x84]: fill meter DTO
if (iVar3 == 0) { /* zero all 26 entries */ }
FUN_00178f04();                                  // HWCom lazy-init
uVar7 = FUN_00177acc();                          // input-select mask (3 bits)
*0x60401A98 = *0x60401A98 & 0xfffffff1 | (uVar7 & 7) << 1;   // pack bits1-3
FUN_0005b438(param_1, 0x60405AEC, *0x60401A98);  // peak-hold + status → records
iVar3 = FUN_000f8ee0();
for (it = list_begin(iVar3 + 0x408); it != list_end(iVar3 + 0x408); next(it))
    (*(code *)*elem)(param_1, 0x60405AEC);       // call subscriber thunk
```

### 1.2 Peak-hold + status packing — `FUN_0005b438`

```c
if (DTOvalid && *0x60401A94 != 0) {
  n = min(*0x60401A90 /*0x1B*/, DTOcount);       // 27 records
  for (i = 0; i < n; i++)
    if (*FUN_000d731c(blk + i*0xC) < peak[i])    // max-hold per channel
      *FUN_000d731c(blk + i*0xC) = peak[i];
  *0x60401A98 = status;                          // write-back to global
  *FUN_000d731c(blk + (count-1)*0xC) = status;   // record[26] = STATUS WORD
}
```

So the peak-hold block = **27 records**: `0..25` = channel peaks,
`26` = the packed status word (its `rec+4` value field).

### 1.3 Record→endpoint binding — `FUN_0005b530(n)`

Re-creates the block and **binds every record to each
"USBHighSpeedCtrlService" provider**:

```c
FUN_000b4840(registry /*FUN_000b4964*/, "USBHighSpeedCtrlService", &providers);
/* free old: per provider vt[0x28](provider, oldRec+i*0xC), then free */
blk = FUN_001c6a94(n*0xC + 8, tag); blk[0]=0xC; blk[1]=n;
for (i = 0; i < n; i++)
  for (each provider p)
    p->vt[0x18](p, blk + i*0xC, 0, &flag=1, i+2);   // endpoint index = record+2
```

Called only with `n = 0x1B` (27) from `FUN_000f5eb4`. Record 26 (status) →
provider endpoint index **28**. This is the HSCI/USB control channel feed; the
providers (enumerated by service name via `obj->vt[0x10]` name match in
`FUN_000b4840`) own the actual message emission — they hold a pointer into each
12-byte record and read `rec+4` on their own cadence.

### 1.4 The ctx+0x408 subscriber list — `FUN_000f7688`

`appCtx+0x408` is a std::list of **code pointers** (thunks). Two registrations
found:

| pusher | thunk addr | meaning |
|---|---|---|
| `FUN_000a5dfc` (uTrackCopperLan bind) | `0x600b0c34` (file 0xB0C34) | `ldr r1,[r0]; ldr r1,[r1,#0xf4]; bx r1` → `param_1->vt[0xf4](param_1)` |
| `FUN_000dc300` = `UIControl_uTrack24::init` | `0x6006f264` (file 0x6F264) | Thumb forwarder → `param_1` vt slot |

The fan-out calls `thunk(param_1, DTO)`; the thunk collapses to a virtual call
on `param_1` (the tick argument — the owning object the notifier fires on).
Net effect: **on every UI tick the meter DTO + status are pushed to
(a) the CopperLan path (uTrackCopperLan) and (b) the local LCD UI** — both from
the same tick, both keyed off `param_1`'s vtable.

---

## 2. Which ctrl ID carries status word 0x60401A98 — **0xf050**

`LitUsers 60401a98` proves the word has **no direct reader** outside the four
writers (`FUN_000f65ec` bits4-5, `FUN_000f8124` bit0, `FUN_000f8fcc` bits8-10,
`FUN_000f6810` bits1-3) plus `FUN_0005b438` (write-back + record[26] store).
The packed word itself therefore reaches the outside only as **peak-block
record 26** (HSCI endpoint 28, §1.3).

The CopperLan-published copy is **ctrl `0xf050` "UTrack Operation Status"**
(node 0, kind c3 text). Chain, fully verified:

- **source field**: `FUN_001b5b0c(svc) = *(u16*)(svc + 0x126)` where
  `svc = FUN_000f4fc0(singleton) = singleton + 0x140` (settings service).
- **setter/notify**: `FUN_000ad9b8(uCL, v)`:

  ```c
  if (*(u16*)(uCL + 0x662) != v) {            // DAT_000ada00 = +0x662
    *(u16*)(uCL + 0x662) = v;                 // cached low-16 of status
    *(u8*) (uCL + 0x664) = 1;                 // "changed" flag
    (*(uCL+0x2b8)->vt[0x58])(uCL+0x2b8, 0, v);// 0xf050 handle → CHAI notify push
  }
  ```

  (`uCL+0x2b8` = handle stored when `0xf050` was declared in `FUN_000a6464`.)
- **serve/announce-read**: `FUN_000adab0` case `local_20 == 0xf050`
  (binary-tree index `iVar5 == 0x47`, base = 0xf009): builds a **decimal string**
  from `*(u16*)(uCL+0x662)` via `FUN_00171c08`, or-s `0x80` into the response
  flags if `uCL+0x664` was set, then clears `uCL+0x664`.

Wire confirmation (`research/notes/evidence/device_model_raw.txt`):
`(0, 195, '0xf050', '514')` — **514 = 0x202** = bit1 (input-select mask 1)
+ bit9 (digital-board-id 2). Consistent with the documented bit layout.

**To read input-select / channel-mode / board-id live over CopperLan: poll (or
subscribe to) ctrl `0xf050` — value = decimal string of the low 16 bits of the
packed status word.** Full-width u32 is additionally exported on the
USBHighSpeedCtrl peak-block endpoint (record 26 / endpoint index 28), not as a
declared control.

Refresh trigger: `FUN_000ac18c` (uCL "refresh property" dispatcher, ~54-case
switch) case `0x22` → `FUN_000ad9b8(uCL, FUN_001b5b0c(svc))`. FUN_000ac18c is
invoked indirectly (vtable — it is a uCL method; no direct callers).

---

## 3. Published-state model — `FUN_000a6464` declarations

Called from `FUN_000a5dfc` (uCL bind). Mechanics:

- `uCL+0x130 = CHAI member`; device created via `member->vt[0xb4]` → `uCL+0x134`.
- **Groups**: `device->vt[0x138](devContainer, 0, "Status"|"Meters"|"Controls"|…,
  0x60414bf0)` → handles at `uCL+0x248` (Status), `+0x2c0` (Meters), `+0x32c`
  (Controls). Each group then `group->vt[0x4c](group, uCL+0x120)` binds the
  shared message handler (read/write/enum → `FUN_000adab0`/`FUN_000ace70`/
  `FUN_000acd6c`/`FUN_000aa898`/`FUN_000ab3f8`).
- **Sub-session groups**: `member->vt[0xa4](member, nodeId, name)` →
  `uCL+0x138..0x1a0` (nodes 1=?,2=?,3,4,5,7,9,0xb,0xc … — node numbers match the
  wire rule `f0xx→0, e0xx→1, d0xx→2, c0xx→3, b*→4`).
- **Controls**: `group->vt[0x84](grp,name,ctrlId,0,subIdx,fmtLo,fmtHi)` (text/
  numeric), `vt[0x80]` (list/button; extra args = parent handle + default),
  `vt[0x7c]` (meter: `(grp,"Meter N",0xe000+i,0,0x8000,&DAT_000a825c,"-12dB",
  &DAT_000a8250,0,0,fmtLo,fmtHi)`).
- Handle slots: `uCL+0x24c..` f0xx, `+0x2c4+i*4` meters, `+0x330..` d0xx,
  `+0x3a4/0x404/0x344/…` solo/mute/pan/fader, etc.

### Control table (declared; source = cached uCL field unless noted)

| ctrl | name | cached source (uCL+) | update |
|---|---|---|---|
| 0xf000 | Current song | +0x5fc str | on-change |
| 0xf001 | Next song | +0x604 str | on-change |
| 0xf002 | Song length | +0x60c str | on-change |
| 0xf003 | Song sample rate | +0x614 u16 + label-list +0x14c | on-change |
| 0xf004 | Song resolution | +0x618 u16 + label-list +0x150 | on-change |
| 0xf005 | Song track count | +0x610 (fmt "N Ch"/"Stereo") | on-change |
| 0xf006 | Remaining song length | +0x61c str | periodic-ish (player tick) |
| 0xf007 | Played song length | +0x620 str | periodic |
| 0xf008 | Playback loop start | +0x630 str | on-change |
| 0xf009 | Playback loop end | +0x63c str | on-change |
| 0xf00a | Playback Channels | cached (not via FUN_000adab0 f-tree) | on-change |
| 0xf00b | Markers | cached/list | on-change |
| 0xf00c | Sync | +0x244 bool→idx (c2 labels: "Master Not Present"…) | on-change |
| 0xf010 | UTrack State | +0x660 u8 | on-change (setter `FUN_000aa7e0`) |
| 0xf011 | Pre Rec Play State | +0x666 u8 | on-change (`FUN_000aaebc`) |
| 0xf012 | Player Mode | +0x665 u8 | on-change (`FUN_000aa6d0`) |
| 0xf013 | Playback In Loop | +0x667 u8 | on-change (`FUN_000aad30`) |
| 0xf020..24 | Recording name/time/remaining/markers/dropouts | +0x66c/+0x674/+0x678/+0x67c/+0x680 strings | on-change |
| 0xf030 | Current Playlist | +0x81c string | on-change |
| 0xf032/33 | Playlist start mode/time | +0x830/+0x838 | on-change |
| 0xf040 | DateTime | +0x684 (formatted; `FUN_000acba4` refreshes) | periodic-ish |
| **0xf050** | **UTrack Operation Status** | **+0x662 u16 ← svc+0x126; flag +0x664** | **on-change (`FUN_000ad9b8`)** |
| 0xf060 | Error Code | +0x6d0 string | on-change |
| 0xe000..19 | Meter 1..26 | `+0x6d8+i*4` u16 — **cleared on each read** | periodic peak (FUN_000f6810) |
| 0xd000 | Action | write-only (transport) | — |
| 0xd001..3 | cursors (text) | +0x604/+0x60c… | on-change |
| 0xd008 | Playlist songs | list via +0x19c | on-change |
| 0xd009 | Exit Playlist Mode | via +0x1a0 | — |
| 0xd00f | Current Controller | +0x340 cached enum | on-change |
| 0xd010+ch | Solo | `+0x7d0? (2000)+i*2` u16 | on-change |
| 0xd030+ch | Mute | `+0x7a0+i*2` u16 | on-change |
| 0xd050+ch | Pan | `+0x770+i*2` u16 | on-change |
| 0xd070+ch | Fader | `+0x740+i*2` u16 | on-change |
| 0xc000 | Current song path | +0x800 | on-change |
| 0xc001 | Current dir | +0x808 | on-change |
| 0xc003/4 | Dir names/types | +0x810 list | on-change |
| 0xc010 | file select (enum path `FUN_000aa898`) | +0x810 list | query |
| 0xb000 | Clock source | +0x578 | on-change |
| 0xb001 | Foot switch | +0x579 | on-change |
| 0xb002 | DateTime | +0x684 | on-change |
| 0xb003 | DHCP | +0x57a | on-change |
| 0xb004/5 | Static IP/Subnet | +0x584/+0x58c? (text) | on-change |
| 0xb102 | Sample Rate | +0x58c u16 | on-change |
| 0xb103 | Resolution | +0x590 | on-change |
| 0xb104 | Track count | +0x591 | on-change |
| 0xb105 | Pre recording | +0x592 | on-change |
| 0xb200 | Auto play | +0x593 | on-change |
| 0xb201 | Output Attenuation | +0x594 + fmt +0x598 | on-change |
| 0xb202 | MIDI Offset | +0x59c + fmt +0x5a0 | on-change |
| 0xb203 | Folder Mode | +0x5a2 (s8) | on-change |
| 0xb204/5 | Stereo outs 88/96k, 44/48k | +0x5a4/+0x5a8 u16 | on-change |
| 0xb206/7 | Stereo/MT post fader | +0x5ac u16 / +0x5b0 u16 | on-change |
| 0xb210/1/2 | (queried) | +0x5b4/0x5b8/0x5bc u16 | query |
| 0xb300 | MADI Input | +0x5f0+i*4 u16 (i=id-0xb330 loop) | on-change |
| 0xb301/2 | MADI Mode/Frame | +0x5f0 block | on-change |
| 0xb320+2i | 88/96k out-groups | +0x5e0+i*4 | on-change |
| 0xb330+2i | 44/48k out-groups | +0x5c0+i*4 | on-change |

(Indices reconstructed from `FUN_000adab0`'s compare tree: DAT bases 0xb332,
0xb207, 0xb104, 0xf009, 0x1cd0, 0x3cd7 + range blocks 0xe000-0xe0ff,
0xd010/30/50/70±0x17.)

Update mechanism is uniform: **cached field + dirty flag +
`handle->vt[0x58](ctrl,0,val)` = the on-change 4437 push**. Periodic-only
families: meters (0xe0xx, peak-hold) and the streaming position fields.

---

## 4. Subscription mechanics

- Subscription state is **inside the CHAI objects**, not app code: the member
  (`uCL+0x130`) / device (`uCL+0x134`) / group / control handles created by
  `FUN_000a6464` are the bookkeeping; the app never enumerates subscribers.
- Wire view (from captures): `5423`/`c437`/`8437`-family frames =
  subscribe requests, `4437` = pushed data, `4423`/`c423` = polls/keepalives.
- On the device side the flow is: CHAI message → group handler (`uCL+0x120`,
  bound by `group->vt[0x4c]`) → read `FUN_000adab0` / enum `FUN_000aa898` /
  write `FUN_000ace70` (0x4337 list/btn) + `FUN_000acd6c` (0x4237 numeric) /
  status-list `FUN_000ab3f8` — the handler fills a CHAI response object via its
  vtable (`resp->vt[0x4c]` formatted, `vt[0x50]` numeric, `vt[0x54]` string).
- The **c423 rotation** we replay = a *poll*, i.e. a get-value request: the
  device runs `FUN_000adab0`, which both answers and (for 0xf050) clears the
  +0x664 "changed" flag — so a c423 poll doubles as "ack" of the last notified
  value. No app-level TTL/expiry exists; member/session lifetime is enforced by
  the VNM/CHAI link layer (session handle + keepalive), not by the uTrack app.
- Actual notify emission: per-control `handle->vt[0x58](ctrl,0,val)` calls from
  the cached-value setters (e.g. `FUN_000ad9b8`, `FUN_000aa7e0`) — CHAI then
  serializes a 4437 frame to every subscribed endpoint. Meters bypass this and
  go through the §1 tick + record-binding path (they are declared `vt[0x7c]`
  "high-rate" controls — updated in place; read side clears the u16 slot).

---

## 5. Announce model (~152-control burst at session open)

The announce is **generated by the CHAI stack from the declared object tree** —
there is no app-side "send 152 descriptors" function. What the app builds in
`FUN_000a6464` IS the descriptor source:

```
member (uCL+0x134, name via vt[0xfc](id=0x101,"uTrack"))
├─ vt[0xe4]  sub-session containers (5: Status/Meters/Controls/Files/Settings)
├─ vt[0x138] member-variable groups → uCL+0x248 Status, +0x2c0 Meters, +0x32c Controls, …
│   └─ group->vt[0x4c](uCL+0x120)  shared handler
│   └─ group->vt[0x84]/[0x80]/[0x7c]  per-control declarations → handles uCL+0x24c…
├─ vt[0xa4]  sub-session nodes (uCL+0x138..0x1a0, ids 1..0xC)
└─ vt[0xa8]  4 extra leaf nodes (uCL+0x18c..0x198, playlist/enum helpers)
```

Control count ≈ 30 (f0xx) + 26 (e0xx meters) + ~6 fixed d0xx + 4×24 mixer
(solo/mute/pan/fader) + 4 c0xx + ~20 b0xx (+8 conditional MADI b3xx when the
digital card is present) ≈ **152 — matches the observed announce burst**.

Each announced record (TLV `c837`) contains: type byte (c1 num / c2 list /
c3 text), node (= the vt[0xa4] sub-session id), kind, ctrl id, flags
(`0x00200000/0x00400000/0x00600000` — from the fmt args in the declare calls),
and the **current value** filled on demand by the `uCL+0x120` handler →
`FUN_000adab0` (cached fields; meters via `+0x6d8` read-clear).

---

## 6. Key address table (file offsets; runtime = +0x60005F84)

| what | addr | notes |
|---|---|---|
| `FUN_000f6810` notify tick | 0xF6810 | registered `FUN_000f5eb4`@0xF6268, literal @0xF62A4=0x600FC794 |
| `FUN_0005b438` peak-hold+status | 0x5B438 | pools: blk=`0x60401A94`, cnt=`0x60401A90`, status=`0x60401A98` |
| `FUN_0005b530` record alloc/bind | 0x5B530 | binds to "USBHighSpeedCtrlService" providers (vt[0x18]/vt[0x28]) |
| `FUN_000f7688` subscriber push | 0xF7688 | `FUN_0023442c(&it, ctx+0x408, &elem)` |
| meter-DTO | `0x60405AEC` | ctor `FUN_00144908(0x60405AEC,0x1A)` in `FUN_001cb3e4` |
| status word | `0x60401A98` | bit0 lock,1-3 inputsel,4-5 chmode,8-10 boardId |
| peak block | `*0x60401A94`, n=`*0x60401A90` | 12B/record; `rec+4` = value |
| uCL cached 0xf050 | `uCL+0x662` (u16), flag `+0x664` | setter `FUN_000ad9b8` |
| uCL cached meters | `uCL+0x6D8+i*4` | read-clear |
| 0xf050 handle | `uCL+0x2B8` | `->vt[0x58]` = notify push |
| read dispatch | `FUN_000adab0` | binary tree; bases 0xF009/0xB332/0xB207/0xB104/0x1CD0/0x3CD7 |
| numeric write (4237) | `FUN_000acd6c` | b201/b202/d050+/d070+ via `uCL+0x848` |
| list/button write (4337) | `FUN_000ace70` | binary tree incl. b000..b3xx |
| enum | `FUN_000aa898` | 0xb210-2 getters, 0xc010 file list via uCL+0x810 |
| refresh dispatcher | `FUN_000ac18c` | ~54-case switch; case 0x22 → 0xf050 update |
| subscriber thunks | 0xB0C34 (uCL), 0x6F264 (UIControl) | `param_1->vt[slot]` forwarders |

## 7. Open items / caveats

- Writer of the master status field `svc+0x126` (= singleton+0x266) not yet
  pinned — it is written through register-offset addressing (no imm-offset
  site); `FUN_000ac18c` case 0x22 is what copies it into `uCL+0x662`. The
  packed-word writers are `FUN_000f8124` (bit0), `FUN_000f65ec` (bits4-5),
  `FUN_000f8fcc` (bits8-10), `FUN_000f6810` (bits1-3).
- `param_1` passed into the subscriber thunks = the object the UI tick fires on
  (thunk calls `param_1->vt[0xf4]`); whether that is uTrackCopperLan itself or
  the UI-control owner is inferred from registration order (uCL registers the
  0xf4-thunk, UIControl registers 0x6F264) — param_1 is a multi-vtable object
  exposing both handler slots.
- `uCL+0x848` sub-object = write-commit path for numeric settings
  (`FUN_0013e424` Attenuation, `FUN_0013e17c` MIDI-Offset, `FUN_0013e998` pan,
  `FUN_0013e9f8` fader, `FUN_0013eab8`/`FUN_0013e444`/`FUN_0013e0e0` helpers);
  the FAILed 0xb201/0xb202 writes on wire likely need this path's commit flag.
- Ghidra project lock was contended by a concurrent headless run during this
  session; all results above were verified before/after the lock windows.

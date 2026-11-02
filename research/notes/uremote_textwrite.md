# uRemote.exe — TEXT (c3) control-write wire format

Reverse-engineered from `research/assets/software/uRemote.exe` (x86 PE, 9 166 336 o,
Ghidra project `research/ghidra/projects/uremote_v36`, program `uRemote.exe`,
addresses = image-base 0x400000 VAs). Device-side companion: `ghidra_utrack_files.md` §1b.
New dumps: `research/ghidra/dumps/ur_*.txt`; new scripts: `TxtScan*.java`, `DisasAt.java`.

## Verdict

**The text write is a THIRD app-message TLV inside the `8437` member message: TLV `4437`**
(wire bytes `44 37`, u16 type 0x3744), produced by **`CPCHAI::CAppTextMessage`** —
the c3 pendant of `CAppModifierMessage` (`4237`) and `CAppSelectorMessage` (`4337`).

## Proof chain

1. **UI → API.** Locate/loop buttons call `memberObj->vtable[0x17c]`:
   `FUN_005450f0` (ProgressBarPanel seek, `transport_buttons.txt`) does
   `FUN_00624830(pos)` (int → decimal ASCII, `setval_decomp.txt`) then
   `(*(obj+0x190)+0x17c)(0xd001,0,0,str)`. Same slot for 0xf060 error text
   (`FUN_00545290`, `files_ctrls.txt`) and 0xb004/0xb005 (`FUN_00544950`/`FUN_005448b0`).
   `FUN_00543ab0` uses it for 0xd002/0xd003 (`ctrl_calls.txt`).
2. **vftable 0xc3ea50 +0x17c** → adjustor thunk `FUN_0048fb72` (`SUB ECX,[ECX-4]; JMP
   FUN_00682a40`) → `FUN_00682a40` → `FUN_0064de20`: builds the `8437` session record
   (`msg+0x4c = 0x3784`, `msg+0x48 = member+0xe0` = destination member id) and queues an
   app message through `FUN_00630930`.
3. **Every app write serializes through `FUN_00634680(size, classIdx, flags)`** and the
   class index is the TLV low byte:
   | class | RTTI TD | ctor (passes type id to `CCHAIObject` +0x14) | serialize | idx | TLV | payload |
   |---|---|---|---|---|---|---|
   | event | `CAppEventMessage` c8d338 | `FUN_00649af0` → 0x8200 | `FUN_00634680(0x12,1,…)` | 1 | `4137` | 18 B fixed |
   | numeric | `CAppModifierMessage` c8cffc | `FUN_00646cd0` → 0x8201 | `FUN_00634680(0x20,2,…)` | 2 | **`4237`** | 32 B fixed (ctrl@2, val@20) ✓ captured |
   | list | `CAppSelectorMessage` c8cbb4 | `FUN_00644a90` → 0x8202 | `FUN_006449a0` → `FUN_00634680(0x16,3,…)` | 3 | **`4337`** | 22 B fixed (ctrl@2, u32@18) ✓ captured |
   | **text** | **`CAppTextMessage` c8d418** | **`FUN_0064b7b0` → 0x8206** | **`FUN_0064b6a0` → `FUN_00634680(len+0x16,4,…)`** | **4** | **`4437`** | **0x16+len B** |
   | internal | `CAppInternalControlMessage` c8d4c8 | `FUN_0064e290` → 0x82ff | `FUN_0064cad0` → `FUN_00634680(n,8|9,…)` | 8/9 | `4837`/`4937` | kind u8 + params (`8100` seen on wire) |
   (`0x3744` also appears as the *outer* msg type of device→client notify frames — the
   inner-TLV namespace is shared; inside `8437` a `4437` TLV is the text write.)
4. **Device side agrees**: `FUN_000abbc8` (listener +0x0c) extracts the string via
   `param_3->vt+0xc4` = `ITextMessage::GetText` → only a `CAppTextMessage` provides it.
   The forwarded-type mask (uRemote `FUN_00631240`: `low6(type) ∈ {1..6}`) covers
   `0x3741..0x3746` = the write/query family dispatched to member listeners
   (num +0x04, list +0x08, **text +0x0c**, special +0x10).

## `CAppTextMessage::Serialize` (`FUN_0064b6a0`) — exact layout

```c
len  = *(u16*)(msg + 0x92);                       // string length
iVar = FUN_00634680(len + 0x16, 4, flags);        // reserve record, class idx 4
p    = *(u16**)(iVar + 0x1c);
p[0]=msg+0x78; p[1]=msg+0x7a; p[2..9]=msg+0x7c..0x8a; p[10]=msg+0x92;
memcpy(p+11, *(u32*)(msg + 0x8c), len);           // string bytes
```

Wire record (N = strlen):

```
4437 0010 <N+0x1e> <N+0x16> | 0000 | ctrl u16 | 0000 ×8 | strlen u16 | ASCII
```

- TLV header: `44 37` type, then constant `10 00` (same in `4237 0010` / `4337 0010`).
- Inner length pair: `{content+8 u16, content u16}` — identical pattern to the two
  captured writes (`4337 0010 1e00 1600` + 22 B; `4237 0010 2800 2000` + 32 B).
- `u16@0` = 0 (field +0x78; 0 in all captured writes — no flags).
- `u16@2` = ctrl (same slot as selector's 0xd000; device reads ctrl via `param_2->vt+0x34`).
- `u16@4…@18` = 8 zero u16s (reserved member/addr fields, 0 in captures).
- `u16@20` = strlen, then ASCII bytes, no NUL. Content = 0x16 + N; record is not padded.
- Sub-session: **same `SUB_OFFS` (18, 34) of the 8437 header** as ctrl_msg/num_msg —
  `node(ctrl)`: 0xd00x→2, 0xc00x→3, 0xb0xx→4, 0xf0xx→0.

## Template + proposed implementation

`TXT_TEMPLATE` (shell for `text_msg(ctrl, s)`, ctrl patched @payload+2, len @+20,
string @+22, sizes recomputed — shown for ctrl=0xd001, s="0"):

```
00018437000000000e0002000697271600000200000001000e00010034b96e2e0000020001000000
443700101f001700000001d000000000000000000000000000000000010030
```

```python
# utrack_control.py — proposal (report only, NOT applied)
TXT_HDR = bytes.fromhex('4437 0010'.replace(' ',''))
def text_msg(ctrl, s, sub=None):
    if sub is None: sub = node(ctrl)
    b = s.encode('ascii'); pl = 0x16 + len(b)
    m = bytearray(NUM_TEMPLATE[:40])            # same 8437 member header (40 B)
    for o in SUB_OFFS: struct.pack_into('<H', m, o, sub)
    m += struct.pack('<HHHH', 0x3744, 0x10, pl + 8, pl)
    m += struct.pack('<HH', 0, ctrl) + b'\x00' * 16 + struct.pack('<H', len(b)) + b
    return bytes(m)

def text(self, ctrl, s, sub=None):
    self._send(frame(text_msg(ctrl, s, sub)))
def seek(self, sample):    self.text(0xd001, str(int(sample)))
def loop_in(self, sample): self.text(0xd002, str(int(sample)))
def loop_out(self, sple):  self.text(0xd003, str(int(sple)))
def chdir(self, path):     self.text(0xc001, path)            # literal path → FUN_0013eab8
def set_clock(self, y,mo,d,h,mi,s): self.text(0xb002, '%d:%d:%d:%d:%d:%d'%(y,mo,d,h,mi,s))
def set_ip(self, ip):      self.text(0xb004, ip)              # only when DHCP off
def set_mask(self, m):     self.text(0xb005, m)
def err_code(self, s):     self.text(0xf060, s)               # node 0
```

Current `seek/loop_in/loop_out` in `src/utrack_control.py` use `num()` (TLV 4237) —
the device routes c3 controls to the text listener, so they almost certainly never
landed; they must switch to `text()` above.

## c423 subscription (bonus)

`FUN_00633f10` / `FUN_00635fc0` build `+0x4c = 0x23c4` messages wrapping
`CCPMessage_SM_ServiceDevice` (`puVar1[4]=0x10002390`) / `CCPMessage_SM_D_RecordingControl`
(`0x10002361`) — the SM-layer sub-TLVs inside the c423 keepalives in `HBS[]`.
Variable parts per replayed frame: source member record @+0x1c…+0x24 (the
`0e00`-style 10-byte record), dest member id @+0x48 (uTrack `34b96e2e` or VNM
`f4de012f`-style ids), and the inner TLV `9023`/`6123` + trailing u32 cookie —
matching the 4 rotated HBS strings (member ids `d01f`, `06972716`, `f4de012f`).

## Note on the +0x17c chain

`vt+0x17c → FUN_00682a40 → FUN_0064de20` additionally emits a `CAppInternalControlMessage`
(kind byte **0x83**, payload `[83 00 xx]` inside TLV `4837`/`4937`) — most likely the
async invoke/ack envelope that carries the app write as a task; the *control-value*
payload itself is the `4437` record documented above. If a `4437` write ever fails on
hardware, sniff whether uRemote also wraps it in a `4837` invoke — worth one capture.

## Write paths (REA follow-up)

Two client→device write families in uRemote.exe:

- **Property writes** `41xx` TLVs: `4137`,`4237`(modifier),`4337`(selector),`4437`(text),`4537`,`4637` — serializer `FUN_00634680(len,classIdx,flag80,flag40)`, factory `0x629xxx` block builds `CAppModifierMessage` (ctor `0x646cd0`, type `0x8201`) etc. Faders `0xb201/2` use plain `4237` — NO commit message follows a property write.
- **Internal invoke** `4837/4937` (`CAppInternalControlMessage`, ctor `0x64e290`, type `0x82ff`): kind byte at payload[0], ~20 sub-kinds (`0x02,0x06,0x10,0x44,0x45,0x46,0x4a,0x83,0x84,0x85,0x87,0xc0,0xc2,0xc8,0xf0,0xf1,0xf3`), one wrapper fn per kind at `0x64d1xx-0x64e6xx`, reached via member vtable `+0x17c` (`FUN_0048fb72`→`FUN_00682a40`→`FUN_0064de20`). Kind `0x84` = {u32,u8 flag,u32} invoke-with-arg.

=> uTrack `uCL+0x848` deferred-commit is device-internal; no client commit frame needed.

## Announce class byte (capture directed_1224.log)

Records `110X 0000 <ctrl> 000007 <flag>` — flag = write family:
- `00` = numeric → modifier `4237`
- `40` = text → `4437`
- `80` = selector → `4337`

Confirmed: `b201`=num, `d001-3`=text, `c001`=text, `c006/7/8`=sel, `d006/7/8`=sel, `d011+`=text, `c011+`=text.
=> `d008/d009` playlist + `c010` file-select = **selector `4337`** (fixed — were sent as `4237`).
Transport `d000` already uses `4337` (CTRL_TEMPLATE) — that's why it always worked.

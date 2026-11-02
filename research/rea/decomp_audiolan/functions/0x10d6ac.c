// rea decompile_all
// name: FUN_0010d6ac
// address: 0x10d6ac
// body: available
// range: 0x10d6ac-0x10d9b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10d9b4 to 0x1a43c <EXTERNAL>::thunk_EXT_FUN_0040010c (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010d6ac(int *param_1)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined1 *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 auStack_9c [8];
  undefined1 auStack_94 [48];
  ushort local_64;
  ushort local_5c;
  undefined4 local_58 [2];
  undefined1 auStack_50 [12];
  int *local_44;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [16];
  
  uVar5 = 0;
  FUN_001a0700(param_1 + 0xee);
  local_44 = param_1 + 0x137;
  do {
    local_58[0] = 0;
    FUN_000eea30(&local_b0);
    iVar3 = FUN_001094f8(local_44,&local_b0,local_58);
    if (iVar3 == 0) {
      param_1[0x1e2] = param_1[0x1e2] + 1;
      if ((local_64 & 0x10) == 0) {
        if ((local_64 & 0xc) == 0) {
          FUN_0010bdc8(param_1,&local_b0,local_58[0]);
          FUN_000ee880(&local_b0);
        }
        else {
          if ((local_64 & 0xc) != 4) {
            if ((local_64 & 0xc) == 8) {
              FUN_0010b338(param_1,&local_b0,local_58[0]);
            }
            goto LAB_0010d7ac;
          }
          FUN_0010ba20(param_1,&local_b0,local_58[0]);
          FUN_000ee880(&local_b0);
        }
      }
      else {
        if ((local_64 & 0xc) == 0) {
          (**(code **)(*param_1 + 0x20))(param_1,&local_b0);
        }
        else {
          if ((local_64 & 0xc) == 8) {
            pcVar4 = *(code **)(*param_1 + 0x28);
          }
          else {
            if ((local_64 & 0xc) != 4) goto LAB_0010d7ac;
            (**(code **)(*param_1 + 0x20))(param_1,&local_b0);
            pcVar4 = *(code **)(*param_1 + 0x28);
          }
          (*pcVar4)(param_1,&local_b0);
        }
LAB_0010d7ac:
        FUN_000ee880(&local_b0);
      }
      bVar1 = true;
    }
    else {
      FUN_000ee880(&local_b0);
      bVar1 = false;
    }
    FUN_000ee880(&local_b0);
    FUN_000e9f98(auStack_9c);
    FUN_000e9f98(&local_a4);
    local_ac = 0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = 0;
    if (bVar1) {
      uVar5 = uVar5 + 1;
    }
    if ((char)param_1[0x1ed] == '\0') {
LAB_0010d984:
      if (!bVar1) break;
    }
    else {
      FUN_000eea30(&local_a8);
      FUN_000ea2e0(auStack_50);
      FUN_000ea2e0(auStack_40);
      FUN_000ea2e0(auStack_34);
      local_b0 = auStack_34;
      iVar3 = FUN_000ffe74(param_1 + 0x1b3,&local_ac,auStack_50,auStack_40);
      if (iVar3 != 0) {
        FUN_000ece7c(&local_a8,local_ac);
        param_1[0x1e3] = param_1[0x1e3] + 1;
        uVar2 = local_5c & 0xff00;
        if (uVar2 == 0x3700) {
LAB_0010d918:
          (**(code **)(*param_1 + 0x28))(param_1,&local_a8);
        }
        else if (uVar2 < 0x3701) {
          if (uVar2 == 0x1000) {
            FUN_0010c0dc(param_1,&local_a8,auStack_50);
          }
          else if (uVar2 == 0x2300) {
            FUN_0010ae7c(param_1,&local_a8,auStack_50);
          }
        }
        else if (uVar2 == 0x5b00 || uVar2 == 0x6300) goto LAB_0010d918;
      }
      FUN_000ee880(&local_a8);
      FUN_000ea314(auStack_34);
      FUN_000ea314(auStack_40);
      FUN_000ea314(auStack_50);
      FUN_000ee880(&local_a8);
      FUN_000e9f98(auStack_94);
      FUN_000e9f98(auStack_9c);
      local_a4 = 0;
      local_a0 = 0;
      bVar1 = iVar3 != 0 || bVar1;
      if (iVar3 == 0) goto LAB_0010d984;
      uVar5 = uVar5 + 1;
    }
    local_a8 = 0;
  } while (uVar5 < 0x11);
  local_a8 = 0;
  FUN_001a0d18(param_1 + 0xee);
  if (!bVar1) {
    return;
  }
  thunk_EXT_FUN_0040010c(param_1 + 0x5b);
  return;
}


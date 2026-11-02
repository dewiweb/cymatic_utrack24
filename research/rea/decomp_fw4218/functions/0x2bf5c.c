// rea decompile_all
// name: FUN_0002bf5c
// address: 0x2bf5c
// body: available
// range: 0x2bf5c-0x2c10d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002bf5c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,uint param_7,int param_8,uint param_9,int param_10,
                 undefined4 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  int iVar2;
  int local_b0;
  int local_ac;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [20];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  FUN_0003c060(auStack_98);
  FUN_0003c060(auStack_a8);
  FUN_0003c060(auStack_78);
  FUN_0003c060(auStack_88);
  FUN_0003c060(auStack_68);
  local_b0 = param_7 + param_9;
  local_ac = param_8 + param_10 + (uint)CARRY4(param_7,param_9);
  FUN_0003c23c(auStack_88,&local_b0);
  local_ac = param_6;
  local_b0 = param_5;
  FUN_0003c23c(auStack_68,&local_b0);
  FUN_0003c3c2(auStack_48,DAT_0002c110);
  FUN_0003c3c2(auStack_38,DAT_0002c114);
  FUN_0003c3c2(DAT_0002c110,DAT_0002c118);
  FUN_0003c070(DAT_0002c118,auStack_88,local_1c);
  FUN_0003c3c2(DAT_0002c114,DAT_0002c11c);
  FUN_0003c3c2(DAT_0002c11c,local_20);
  FUN_0003c68c(auStack_78,local_20,local_1c);
  FUN_0003c3c2(auStack_58,DAT_0002c120);
  FUN_0003c68c(DAT_0002c120,auStack_78,auStack_88);
  FUN_0003c68c(auStack_a8,DAT_0002c120,auStack_68);
  iVar2 = FUN_0002b6a8(auStack_98,auStack_a8,DAT_0002c118,DAT_0002c110,DAT_0002c11c,DAT_0002c114,
                       param_11,param_12);
  uVar1 = _DAT_0002c124;
  if (iVar2 != 0) {
    iVar2 = FUN_000366e0(_DAT_0002c124);
    if (iVar2 != 0) {
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(6,s__CURRENT_DS__Offset__0002c127 + 1);
    }
    iVar2 = FUN_000366e0(uVar1);
    if (iVar2 != 0) {
      FUN_0003c640(auStack_a8);
    }
    iVar2 = FUN_000366e0(uVar1);
    if (iVar2 != 0) {
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(6,s_CURRENT_DS__Time_since_previous_E_0002c140,param_12);
    }
    FUN_0003c30c(auStack_a8,local_24 + 8);
    iVar2 = FUN_000366e0(uVar1);
    if (iVar2 != 0) {
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(6,s_CURRENT_DS__Loop_control_out__0002c17c);
    }
    iVar2 = FUN_000366e0(uVar1);
    if (iVar2 != 0) {
      FUN_0003c640(auStack_98);
    }
    FUN_0002bc4c(auStack_98,param_11);
    return;
  }
  iVar2 = FUN_000366e0(_DAT_0002c124);
  if (iVar2 != 0) {
    FUN_0002f9bc(uVar1);
    FUN_0002f9fc(6,s_Skipping__>_CURRENT_DS__Offset__0002c19c);
  }
  iVar2 = FUN_000366e0(uVar1);
  if (iVar2 != 0) {
    FUN_0003c640(auStack_a8);
  }
  iVar2 = FUN_000366e0(uVar1);
  if (iVar2 != 0) {
    FUN_0002f9bc(uVar1);
    FUN_0002f9fc(6,DAT_0002c1c0,param_12);
  }
  FUN_0003c3c2(DAT_0002c118,DAT_0002c110);
  FUN_0003c3c2(DAT_0002c11c,DAT_0002c114);
  FUN_0003c3c2(DAT_0002c110,auStack_48);
  FUN_0003c3c2(DAT_0002c114,auStack_38);
  FUN_0003c3c2(DAT_0002c120,auStack_58);
  return;
}


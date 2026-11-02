// rea decompile_all
// name: FUN_00104f94
// address: 0x104f94
// body: available
// range: 0x104f94-0x105197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00104f94(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined1 auStack_5c [60];
  
  iVar6 = 0;
  if (*(uint *)(param_2 + 0x10) < 5) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(*(int *)(param_2 + 0x14) + 2) & 0xc0;
  }
  FUN_001a0700(param_1 + 8);
  FUN_000efbc0(param_2);
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    if (param_1[5] == 0) {
      param_1[4] = param_2;
    }
    else {
      *(int *)(param_2 + 4) = param_1[5];
      *(int *)(param_1[5] + 8) = param_2;
    }
    param_1[5] = param_2;
    param_1[6] = param_1[6] + 1;
    iVar1 = param_2;
  }
  uVar4 = param_1[6];
  uVar2 = param_1[0x1f];
  if ((uint)param_1[0x1f] < uVar4) {
    uVar2 = uVar4;
  }
  param_1[0x1f] = uVar2;
  FUN_001a0d18(param_1 + 8);
  if ((0x100 < uVar4) && (bVar5 != 0xc0)) {
    iVar6 = FUN_00105198(param_1,1,2);
  }
  FUN_001a0700(param_1 + 0x13);
  iVar3 = FUN_0017bfc0();
  if ((4 < *(uint *)(param_2 + 0x10)) &&
     ((*(ushort *)(*(int *)(param_2 + 0x14) + 2) & 0xff00) == 0x3700)) {
    param_1[0x2a] = iVar3;
  }
  if (((iVar6 == 0) && (param_1[0x28] != 0 && bVar5 != 0xc0)) && (3 < (uint)(iVar3 - param_1[0x29]))
     ) {
    FUN_001a0d18(param_1 + 0x13);
    local_74 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_6c = 0;
    local_66 = 0;
    local_64 = 0;
    local_5e = 0;
    iVar6 = FUN_0010f718(auStack_5c);
    *(undefined4 *)(iVar6 + 0x20) = 0;
    *(undefined4 *)(iVar6 + 0x24) = 0;
    *(undefined1 *)(iVar6 + 0x35) = 1;
    FUN_000ee880(iVar6 + -0x1c);
    FUN_000ed650(&local_78,0xff);
    iVar6 = FUN_000ee95c(&local_78);
    if (iVar6 != 0) {
      param_1[0x29] = iVar3;
      (**(code **)(*param_1 + 8))(param_1,iVar6);
      FUN_000efbd8(iVar6);
      param_1[0x21] = param_1[0x21] + 1;
    }
    FUN_000ee880(&local_78);
    FUN_000e9f98(&local_64);
    FUN_000e9f98(&local_6c);
    local_74 = 0;
    local_78 = 0;
    local_70 = 0;
  }
  else {
    FUN_001a0d18(param_1 + 0x13);
  }
  if (iVar1 != 0) {
    thunk_EXT_FUN_0040010c(param_1[0x1e] + 4);
  }
  return iVar1;
}


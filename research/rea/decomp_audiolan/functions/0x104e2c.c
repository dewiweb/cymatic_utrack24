// rea decompile_all
// name: FUN_00104e2c
// address: 0x104e2c
// body: available
// range: 0x104e2c-0x104f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00104e2c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined1 auStack_5c [64];
  
  FUN_001a0700(param_1 + 8);
  iVar1 = param_1[4];
  uVar4 = 0;
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    param_1[4] = iVar3;
    if (iVar3 == 0) {
      param_1[5] = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    param_1[6] = param_1[6] + -1;
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    iVar3 = iVar1;
  }
  uVar5 = param_1[6];
  iVar1 = FUN_0017bfc0();
  if ((1000 < (uint)(iVar1 - param_1[0x2a])) && (param_1[0x28] == 0)) {
    uVar4 = 1;
  }
  FUN_001a0d18(param_1 + 8);
  if ((uVar5 < 0x20) && (uVar5 = FUN_00105198(param_1,0,2), (uVar4 & ~uVar5) != 0)) {
    local_74 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_6c = 0;
    local_66 = 0;
    local_64 = 0;
    local_5e = 0;
    iVar2 = FUN_0010f718(auStack_5c);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined1 *)(iVar2 + 0x35) = 1;
    FUN_000ee880(iVar2 + -0x1c);
    FUN_000ed650(&local_78,0);
    iVar2 = FUN_000ee95c(&local_78);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 8))(param_1,iVar2);
      FUN_000efbd8(iVar2);
      param_1[0x2a] = iVar1;
      param_1[0x23] = param_1[0x23] + 1;
    }
    FUN_000ee880(&local_78);
    FUN_000e9f98(&local_64);
    FUN_000e9f98(&local_6c);
  }
  return iVar3;
}


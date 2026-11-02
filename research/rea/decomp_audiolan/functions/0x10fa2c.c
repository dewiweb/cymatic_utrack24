// rea decompile_all
// name: FUN_0010fa2c
// address: 0x10fa2c
// body: available
// range: 0x10fa2c-0x10fb0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0010fa2c(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int local_3c;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  int local_30;
  undefined1 auStack_2c [8];
  int *piStack_24;
  int local_20;
  int iStack_1c;
  int local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  piStack_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0016d76c(param_3 << 2);
  }
  param_1[3] = param_3;
  param_1[2] = iVar1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)(param_1[2] + param_3 * 4 + -4) = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = local_18;
  if (local_20 != 0) {
    iVar1 = FUN_000034d0();
    uVar2 = FUN_0016d76c(iVar1 + 1);
    iVar1 = FUN_0000361c(uVar2,local_20,iVar1 + 1);
    param_1[6] = iVar1;
  }
  local_34 = FUN_001da3f0(auStack_38,auStack_2c);
  iVar1 = FUN_0016dda4(4,6,DAT_0010fb10,DAT_0010fb0c);
  uVar3 = param_1[1];
  if (5 < uVar3) {
    uVar3 = 6;
  }
  local_30 = uVar3 << 2;
  local_3c = iVar1;
  for (iVar4 = *param_1; *param_1 + local_30 != iVar4; iVar4 = iVar4 + 4) {
    FUN_001da4a8(local_3c,iVar4);
    local_3c = local_3c + 4;
  }
  for (; uVar3 < 6; uVar3 = uVar3 + 1) {
    FUN_001da4a8(uVar3 * 4 + iVar1,local_34);
  }
  FUN_00003c70(*param_1,DAT_0010fb0c);
  *param_1 = iVar1;
  param_1[1] = 6;
  FUN_001da44c(auStack_38);
  return param_1;
}


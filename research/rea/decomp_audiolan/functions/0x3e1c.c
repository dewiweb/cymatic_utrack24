// rea decompile_all
// name: FUN_00003e1c
// address: 0x3e1c
// body: available
// range: 0x3e1c-0x3ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00003e1c(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar1 = param_1[7];
    *param_1 = *param_1 & 0xffffffef;
  }
  else {
    uVar1 = 1;
  }
  if (param_2 < (int)uVar1) {
    iVar4 = uVar1 - param_2;
  }
  else {
    iVar4 = 0;
  }
  param_1[6] = param_1[6] - (iVar4 + param_2 + param_4);
  if (-1 < (int)(*param_1 << 0x1b)) {
    FUN_0000298c(param_1);
  }
  for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
    (*(code *)param_1[1])(*(undefined1 *)(param_3 + iVar3),param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)(*param_1 << 0x1b) < 0) {
    FUN_0000298c(param_1);
  }
  while (0 < iVar4) {
    (*(code *)param_1[1])(0x30,param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar4 = iVar4 + -1;
  }
  while (0 < param_2) {
    (*(code *)param_1[1])(*(undefined1 *)((int)param_1 + param_2 + 0x23),param_1[2]);
    param_1[8] = param_1[8] + 1;
    param_2 = param_2 + -1;
  }
  FUN_000029b8(param_1);
  if ((int)(*param_1 << 0x18) < 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


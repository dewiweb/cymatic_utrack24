// rea decompile_all
// name: FUN_000012a4
// address: 0x12a4
// body: available
// range: 0x12a4-0x135b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000012a4(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 * 2 < *(uint *)(param_2 + 0x1c)) {
    iVar6 = FUN_00000430(*(uint *)(param_2 + 0x1c) + param_1 * -2,param_1);
    iVar6 = iVar6 + 1;
  }
  else {
    iVar6 = 0;
  }
  iVar2 = FUN_00000430(*(undefined4 *)(param_2 + 0x18),param_1);
  iVar2 = iVar2 + 1;
  uVar1 = param_1 >> 1;
  uVar3 = *(int *)(param_2 + 0x14) + 7000;
  if (uVar1 < uVar3) {
    iVar4 = uVar3 - uVar1;
  }
  else {
    iVar4 = 0;
  }
  iVar4 = FUN_00000430(iVar4,param_1);
  iVar4 = iVar4 + 2;
  uVar3 = *(int *)(param_2 + 0x10) + 7000;
  if (uVar1 < uVar3) {
    iVar5 = uVar3 - uVar1;
  }
  else {
    iVar5 = 0;
  }
  iVar5 = FUN_00000430(iVar5,param_1);
  if ((uint)(iVar4 + iVar2) < iVar5 + 2U) {
    iVar4 = (iVar5 + 2U) - iVar2;
  }
  *(int *)(param_3 + 0x10) = iVar4 + iVar6;
  *(int *)(param_3 + 0x14) = iVar6;
  *(int *)(param_3 + 0xc) = iVar4 + iVar6 + iVar2 + -2;
  return;
}


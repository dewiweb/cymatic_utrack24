// rea decompile_all
// name: FUN_00100c4c
// address: 0x100c4c
// body: available
// range: 0x100c4c-0x100ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00100c4c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _DAT_00100ce4;
  param_1[1] = 0;
  *param_1 = iVar2;
  param_1[2] = 0;
  param_1[3] = iVar2 + 0x20;
  iVar2 = FUN_000fb700(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x118) = 0;
  *(undefined4 *)(iVar2 + 0x114) = 0;
  *(undefined4 *)(iVar2 + 0x11c) = 0;
  uVar1 = DAT_00100cf8;
  *(char **)(iVar2 + 0x148) = s_o__ContextListMtx_00100ce5 + 3;
  *(undefined4 *)(iVar2 + 0x120) = uVar1;
  *(undefined4 *)(iVar2 + 0x124) = 0;
  *(undefined4 *)(iVar2 + 0x128) = 0;
  *(undefined4 *)(iVar2 + 300) = 0;
  *(undefined4 *)(iVar2 + 0x130) = 0;
  *(undefined4 *)(iVar2 + 0x134) = 0;
  *(undefined4 *)(iVar2 + 0x138) = 0;
  *(undefined4 *)(iVar2 + 0x13c) = 0;
  *(undefined4 *)(iVar2 + 0x140) = 0;
  *(undefined4 *)(iVar2 + 0x144) = 0;
  FUN_001a07ac(iVar2 + 0x124);
  *(undefined4 *)(iVar2 + 0x150) = 0;
  *(undefined4 *)(iVar2 + 0x154) = 0;
  *(undefined4 *)(iVar2 + 0x158) = 0;
  *(undefined4 *)(iVar2 + 0x164) = 0;
  *(undefined4 *)(iVar2 + 0x168) = 0;
  *(undefined4 *)(iVar2 + 0x16c) = 0;
  *(undefined4 *)(iVar2 + 0x170) = 0;
  *(undefined1 *)(iVar2 + 0x174) = 0;
  return iVar2 + -0x10;
}


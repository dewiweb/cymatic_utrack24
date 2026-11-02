// rea decompile_all
// name: FUN_0015ac4c
// address: 0x15ac4c
// body: available
// range: 0x15ac4c-0x15acbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0015ac4c(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                undefined1 param_14)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0015acbc;
  param_1[2] = 0;
  param_1[4] = param_2 | 0x10004200;
  iVar2 = iVar1 + 0x1c;
  param_1[3] = 0;
  *param_1 = iVar1;
  param_1[1] = iVar2;
  iVar1 = FUN_001726d4(param_1 + 6,param_3,param_3,iVar2,param_1,param_2,param_3);
  iVar1 = FUN_001726d4(iVar1 + 0xc,param_4);
  *(undefined4 *)(iVar1 + 0xc) = param_5;
  *(undefined4 *)(iVar1 + 0x10) = param_6;
  *(undefined4 *)(iVar1 + 0x14) = param_7;
  *(undefined4 *)(iVar1 + 0x18) = param_8;
  *(undefined4 *)(iVar1 + 0x1c) = param_9;
  *(undefined4 *)(iVar1 + 0x20) = param_10;
  *(undefined4 *)(iVar1 + 0x24) = param_11;
  *(undefined4 *)(iVar1 + 0x28) = param_12;
  iVar1 = FUN_00171e20(iVar1 + 0x2c,param_13);
  *(undefined1 *)(iVar1 + 8) = param_14;
  return iVar1 + -0x50;
}


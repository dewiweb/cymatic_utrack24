// rea decompile_all
// name: FUN_00152ce0
// address: 0x152ce0
// body: available
// range: 0x152ce0-0x152d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00152ce0(int *param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  param_1[2] = 0;
  iVar2 = DAT_00152d60;
  iVar1 = DAT_00152d5c;
  param_1[3] = 0;
  param_1[4] = iVar1;
  *param_1 = iVar2;
  param_1[1] = iVar2 + 0x1c;
  *(undefined2 *)((int)param_1 + 0x16) = param_2;
  iVar1 = FUN_001726d4(param_1 + 6,param_3);
  iVar2 = DAT_00152d64 + 0x1c;
  *(int *)(iVar1 + -0x18) = DAT_00152d64;
  *(int *)(iVar1 + -0x14) = iVar2;
  iVar1 = FUN_00171e90(iVar1 + 0x10);
  *(undefined2 *)(iVar1 + -4) = param_4;
  FUN_00171828(iVar1,param_5);
  FUN_001c6cb8(iVar1 + 8,param_6);
  return iVar1 + -0x28;
}


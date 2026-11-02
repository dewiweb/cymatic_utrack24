// rea decompile_all
// name: FUN_00180900
// address: 0x180900
// body: available
// range: 0x180900-0x1809af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00180900(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = _DAT_001809b0;
  param_1[1] = param_2;
  iVar1 = FUN_0015d64c(param_1 + 2);
  *(undefined4 *)(iVar1 + 0x11c) = 0;
  *(undefined4 *)(iVar1 + 0x118) = 0;
  *(undefined4 *)(iVar1 + 0x120) = 0;
  *(undefined4 *)(iVar1 + 300) = 0;
  *(undefined4 *)(iVar1 + 0x124) = param_2;
  *(undefined4 *)(iVar1 + 0x128) = 0;
  *(undefined4 *)(iVar1 + 0x130) = 0;
  *(undefined4 *)(iVar1 + 0x134) = 0;
  *(undefined4 *)(iVar1 + 0x13c) = 0;
  *(undefined4 *)(iVar1 + 0x138) = 0;
  *(undefined4 *)(iVar1 + 0x140) = 0;
  *(undefined4 *)(iVar1 + 0x148) = 0;
  *(undefined4 *)(iVar1 + 0x150) = param_2;
  *(undefined4 *)(iVar1 + 0x14c) = 0;
  *(undefined4 *)(iVar1 + 0x144) = 0;
  *(undefined2 *)(iVar1 + 0x154) = 0x4000;
  *(undefined4 *)(iVar1 + 0x158) = 0x28;
  FUN_0015cee4(iVar1,iVar1 + -8,1,0,s_Q__Timer_Thread_001809b1 + 3,
               *(undefined4 *)(*(int *)(iVar1 + -4) + 0x3c));
  *(undefined4 *)(iVar1 + 0x20) = 0xfa;
  return iVar1 + -8;
}


// rea decompile_all
// name: FUN_00036fa0
// address: 0x36fa0
// body: available
// range: 0x36fa0-0x36fed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00036fa0(byte *param_1,byte *param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  *(undefined2 *)(param_1 + 0x20) = param_3;
  uVar1 = FUN_000358f6(*(undefined2 *)(param_2 + 0x1e));
  *(undefined2 *)(param_1 + 10) = uVar1;
  param_1[8] = param_2[0x1c];
  param_1[9] = param_2[0x1d];
  param_1[0x23] = *param_2 & 0xf;
  *param_1 = param_2[0x14];
  param_1[1] = param_2[0x15];
  param_1[2] = param_2[0x16];
  param_1[3] = param_2[0x17];
  param_1[4] = param_2[0x18];
  param_1[5] = param_2[0x19];
  param_1[6] = param_2[0x1a];
  param_1[7] = param_2[0x1b];
  return;
}


// rea decompile_all
// name: FUN_000dabbc
// address: 0xdabbc
// body: available
// range: 0xdabbc-0xdac1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_000dabbc(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)param_1 = s_0P__StreamingInterface_000dac1c._0_4_;
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  FUN_001a07ac(param_1 + 4,s_0P__StreamingInterface_000dac1c + 4);
  param_1[0x28] = '\0';
  uVar2 = DAT_000dac34;
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  uVar1 = DAT_000dac38;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  param_1[0x34] = '\0';
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = DAT_000dac3c;
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  uVar2 = FUN_000a7b84();
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  return param_1;
}


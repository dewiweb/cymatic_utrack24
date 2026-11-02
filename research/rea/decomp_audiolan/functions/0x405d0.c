// rea decompile_all
// name: FUN_000405d0
// address: 0x405d0
// body: available
// range: 0x405d0-0x40697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000405d0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_000984ec();
  *param_1 = *(undefined4 *)(iVar1 + 0x424);
  param_1[1] = *(undefined4 *)(iVar1 + 0x428);
  param_1[2] = *(undefined4 *)(iVar1 + 0x42c);
  param_1[3] = *(undefined4 *)(iVar1 + 0x430);
  param_1[4] = *(undefined4 *)(iVar1 + 0x434);
  param_1[5] = *(undefined4 *)(iVar1 + 0x438);
  param_1[6] = *(undefined4 *)(iVar1 + 0x43c);
  param_1[7] = *(undefined4 *)(iVar1 + 0x440);
  param_1[8] = *(undefined4 *)(iVar1 + 0x444);
  param_1[9] = *(undefined4 *)(iVar1 + 0x448);
  param_1[10] = *(undefined4 *)(iVar1 + 0x44c);
  param_1[0xb] = *(undefined4 *)(iVar1 + 0x450);
  param_1[0xc] = *(undefined4 *)(iVar1 + 0x454);
  param_1[0xd] = *(undefined4 *)(iVar1 + 0x458);
  param_1[0xe] = *(undefined4 *)(iVar1 + 0x45c);
  param_1[0xf] = *(undefined4 *)(iVar1 + 0x460);
  param_1[0x10] = *(undefined4 *)(iVar1 + 0x464);
  param_1[0x11] = *(undefined4 *)(iVar1 + 0x468);
  param_1[0x12] = *(undefined4 *)(iVar1 + 0x46c);
  param_1[0x13] = *(undefined4 *)(iVar1 + 0x470);
  param_1[0x14] = *(undefined4 *)(iVar1 + 0x474);
  param_1[0x15] = *(undefined4 *)(iVar1 + 0x478);
  param_1[0x16] = *(undefined4 *)(iVar1 + 0x47c);
  return;
}


// rea decompile_all
// name: FUN_00011edc
// address: 0x11edc
// body: available
// range: 0x11edc-0x11f4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00011edc(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffffc;
  *(undefined4 *)(uVar1 - 0x48) = 1;
  *(undefined4 *)(uVar1 - 0x44) = 0x13;
  *(undefined4 *)(uVar1 - 0x40) = 0;
  *(undefined4 *)(uVar1 - 0x3c) = 0;
  *(undefined4 *)(uVar1 - 0x38) = 0;
  *(undefined4 *)(uVar1 - 0x34) = 0;
  *(undefined4 *)(uVar1 - 0x30) = 0;
  *(undefined4 *)(uVar1 - 0x2c) = 0;
  *(undefined4 *)(uVar1 - 0x28) = 0;
  *(undefined4 *)(uVar1 - 0x24) = 0;
  *(undefined4 *)(uVar1 - 0x20) = 0;
  *(undefined4 *)(uVar1 - 0x1c) = 0;
  *(undefined4 *)(uVar1 - 0x18) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(uVar1 - 0x14) = 0;
  *(undefined4 *)(uVar1 - 0x10) = 0;
  *(undefined4 *)(uVar1 - 0xc) = 0;
  *(undefined4 *)(uVar1 - 8) = param_2;
  *(undefined4 *)(uVar1 - 4) = 0;
  *(undefined4 **)(param_1 + 8) = (undefined4 *)(uVar1 - 0x48);
  return;
}


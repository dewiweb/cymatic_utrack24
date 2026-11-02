// rea decompile_all
// name: FUN_000c7830
// address: 0xc7830
// body: available
// range: 0xc7830-0xc7877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c7830(ushort *param_1,byte *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0x80) {
    *param_2 = (byte)uVar1;
    return 1;
  }
  if (uVar1 < 0x800) {
    *param_2 = (byte)(uVar1 >> 6) | 0xc0;
    param_2[1] = ((byte)*param_1 & 0x3f) + 0x80;
    return 2;
  }
  *param_2 = (byte)(uVar1 >> 0xc) - 0x20;
  param_2[1] = (char)((*param_1 & 0xfff) >> 6) + 0x80;
  param_2[2] = ((byte)*param_1 & 0x3f) + 0x80;
  return 3;
}


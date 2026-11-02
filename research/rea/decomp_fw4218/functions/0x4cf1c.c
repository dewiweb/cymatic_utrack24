// rea decompile_all
// name: FUN_0004cf1c
// address: 0x4cf1c
// body: available
// range: 0x4cf1c-0x4cf39 inclusive
// range: 0x4cf42-0x4cf7b inclusive
// range: 0x4cf84-0x4cfa5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0004cf1c(uint param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 & 0xff) >> 4 != 0xf) {
    if (param_2 == 0) {
      switch(param_1 & 7) {
      case 0:
        return 32000;
      case 1:
        return DAT_0004cfc0;
      case 2:
        return DAT_0004cfc4;
      case 3:
        return DAT_0004cfc8;
      case 4:
        return DAT_0004cfcc;
      case 5:
        return DAT_0004cfd0;
      case 6:
        return DAT_0004cfd4;
      }
    }
    else {
      switch(param_1 & 7) {
      case 0:
        return 0x1f4000;
      case 1:
        return DAT_0004cfa8;
      case 2:
        return DAT_0004cfac;
      case 3:
        return DAT_0004cfb0;
      case 4:
        return DAT_0004cfb4;
      case 5:
        return DAT_0004cfb8;
      case 6:
        return DAT_0004cfbc;
      }
    }
    return 0;
  }
  uVar1 = param_1 >> 9;
  if ((int)(param_1 << 0x17) < 0) {
    uVar1 = uVar1 * 10;
  }
  return uVar1;
}


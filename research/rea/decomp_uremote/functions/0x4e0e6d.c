// rea decompile_all
// name: FUN_004e0e6d
// address: 0x4e0e6d
// body: available
// range: 0x4e0e6d-0x4e0e9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004e0e6d(void)

{
  if ((_DAT_0095dc08 & 1) == 0) {
    _DAT_0095dc08 = _DAT_0095dc08 | 1;
    DAT_0095dbf8 = 0;
    _DAT_0095dbfc = 0;
    _DAT_0095dc00 = 0;
    _atexit((_func_4879 *)&LAB_005e7053);
  }
  return &DAT_0095dbf8;
}


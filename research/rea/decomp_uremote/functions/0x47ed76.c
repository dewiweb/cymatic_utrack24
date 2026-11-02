// rea decompile_all
// name: FUN_0047ed76
// address: 0x47ed76
// body: available
// range: 0x47ed76-0x47edd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0047ed76(void)

{
  undefined4 extraout_ECX;
  undefined8 uVar1;
  
  if ((_DAT_0095dc2c & 1) == 0) {
    _DAT_0095dc2c = _DAT_0095dc2c | 1;
    FUN_0049d856();
    FUN_0048e7d2();
    uVar1 = FUN_0047f74e();
    _DAT_0095dc1c = (undefined4)((ulonglong)uVar1 >> 0x20);
    _DAT_0095dc24 = (undefined4)uVar1;
    _DAT_0095dc28 = 0;
    _DAT_0095dc20 = extraout_ECX;
    _atexit((_func_4879 *)&LAB_005e6d63);
  }
  return &DAT_0095dc1c;
}


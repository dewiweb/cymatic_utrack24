// rea decompile_all
// name: FUN_0049160a
// address: 0x49160a
// body: available
// range: 0x49160a-0x491654 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049160a(void)

{
  void *unaff_ESI;
  undefined1 local_2e0 [724];
  uint local_c;
  
  local_c = DAT_00955fd4 ^ (uint)local_2e0;
  if (unaff_ESI != (void *)0x0) {
    _memset(unaff_ESI,0,0x2d0);
    FUN_00491789(local_2e0);
  }
  __security_check_cookie(local_c ^ (uint)local_2e0);
  return;
}


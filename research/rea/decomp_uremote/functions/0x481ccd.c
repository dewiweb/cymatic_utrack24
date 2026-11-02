// rea decompile_all
// name: FUN_00481ccd
// address: 0x481ccd
// body: available
// range: 0x481ccd-0x481d5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481ccd(void)

{
  int in_EAX;
  
  FUN_00481979(0xe0);
  FUN_00481993();
  FUN_0048194e(0x4a);
  FUN_0048194e(0x46);
  FUN_0048194e(0x49);
  FUN_0048194e(0x46);
  FUN_0048194e(0);
  FUN_0048194e(*(undefined1 *)(in_EAX + 0xc5));
  FUN_0048194e(*(undefined1 *)(in_EAX + 0xc6));
  FUN_0048194e(*(undefined1 *)(in_EAX + 199));
  FUN_00481993();
  FUN_00481993();
  FUN_0048194e(0);
  FUN_0048194e(0);
  return;
}


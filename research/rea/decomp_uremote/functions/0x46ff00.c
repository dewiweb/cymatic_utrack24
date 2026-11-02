// rea decompile_all
// name: Catch_All@0046ff00
// address: 0x46ff00
// body: available
// range: 0x46ff00-0x46ff14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x46ff14 with no resolved callee; its no-return basis is unknown.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Catch_All_0046ff00(void)

{
  code *pcVar1;
  
  FID_conflict__Tidy(1,0);
  __CxxThrowException_8(0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


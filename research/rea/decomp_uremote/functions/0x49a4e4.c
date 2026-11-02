// rea decompile_all
// name: FUN_0049a4e4
// address: 0x49a4e4
// body: available
// range: 0x49a4e4-0x49a514 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49a50f to 0x499ccc FUN_00499ccc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049a4e4(void)

{
  int unaff_ESI;
  
  if ((unaff_ESI != 0) && (*(uint *)(unaff_ESI + 0xcc) < *(uint *)(unaff_ESI + 0xbc))) {
    FUN_0049b70a(0,0,2);
    *(undefined4 *)(unaff_ESI + 0x138) = 0;
    FUN_00499ccc();
    return;
  }
  return;
}


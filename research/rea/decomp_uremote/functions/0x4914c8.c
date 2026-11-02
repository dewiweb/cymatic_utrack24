// rea decompile_all
// name: FUN_004914c8
// address: 0x4914c8
// body: available
// range: 0x4914c8-0x4914f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4914e2 to 0x4914ad FUN_004914ad (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4914ee to 0x4913a9 FUN_004913a9 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4914f3 to 0x4913c4 FUN_004913c4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004914c8(int param_1)

{
  int in_EAX;
  
  if ((*(uint *)(in_EAX + 0x28) & 0x8000) == 0) {
    if (param_1 < 1) {
      FUN_004913a9();
      return;
    }
    FUN_004913c4();
    return;
  }
  if (param_1 < 2) {
    FUN_0049146c();
    return;
  }
  FUN_004914ad();
  return;
}


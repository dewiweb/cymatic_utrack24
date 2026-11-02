// rea decompile_all
// name: FUN_0048ee65
// address: 0x48ee65
// body: available
// range: 0x48ee65-0x48ee9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x48ee99 to 0x49176b FUN_0049176b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048ee65(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_2 < (uint)(0xffffffff / (ulonglong)param_3)) {
      uVar1 = FUN_0049176b();
      return uVar1;
    }
    FUN_00491216();
  }
  return 0;
}


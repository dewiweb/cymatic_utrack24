// rea decompile_all
// name: FUN_0049624b
// address: 0x49624b
// body: available
// range: 0x49624b-0x496281 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x496275 to 0x4914ad FUN_004914ad (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x49627c to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049624b(int param_1)

{
  uint uVar1;
  int unaff_ESI;
  
  uVar1 = *(uint *)(unaff_ESI + 0x28);
  if (((uVar1 & 1) != 0) && ((uVar1 & 4) != 0)) {
    *(uint *)(unaff_ESI + 0x28) = uVar1 | 0x18;
    FUN_00495a5d();
    if (param_1 != 0) {
      FUN_004914ad();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}


// rea decompile_all
// name: FUN_00491371
// address: 0x491371
// body: available
// range: 0x491371-0x4913a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4913a3 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491371(void)

{
  int in_EAX;
  
  if ((*(uint *)(in_EAX + 0x2c) & 0x100000) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if (((*(uint *)(in_EAX + 0x28) & 0x8000) != 0) && (*(int *)(in_EAX + 0xd0) != 0)) {
    FUN_0049146c();
    return;
  }
  FUN_00491216();
  return;
}


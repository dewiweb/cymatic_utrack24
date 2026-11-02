// rea decompile_all
// name: FUN_004f05e3
// address: 0x4f05e3
// body: available
// range: 0x4f05e3-0x4f0613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4f060f to 0x4c0477 FUN_004c0477 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f05e3(void)

{
  char cVar1;
  int in_ECX;
  int *piVar2;
  
  cVar1 = FUN_004f5fe9(0);
  if (cVar1 != '\0') {
    if (*(int *)(in_ECX + 0x70) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x70) + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x004f0608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x3c))();
    return;
  }
  FUN_004c0477();
  return;
}


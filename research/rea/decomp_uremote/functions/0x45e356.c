// rea decompile_all
// name: FUN_0045e356
// address: 0x45e356
// body: available
// range: 0x45e356-0x45e3bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45e36a to 0x44750e FUN_0044750e (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045e356(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  cVar1 = FUN_0045f278(unaff_EDI);
  if (cVar1 != '\0') {
    if (*(int *)(unaff_EDI + 1000) != 0) {
      FUN_0044750e();
      return;
    }
    if (*(int *)(unaff_EDI + 0x114) != 0) {
      iVar2 = (**(code **)(**(int **)(unaff_EDI + 0x114) + 0x16c))(0xd009,0,0,0);
      iVar3 = iVar2;
      if (iVar2 != 0) {
        iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0xc) + 4 + iVar2;
      }
      (**(code **)(**(int **)(unaff_EDI + 0x124) + 0x6c))(iVar3);
                    /* WARNING: Could not recover jumptable at 0x0045e3b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 8) + 4 + iVar2) + 4))();
      return;
    }
  }
  return;
}


// rea decompile_all
// name: FUN_004cfe7f
// address: 0x4cfe7f
// body: available
// range: 0x4cfe7f-0x4cfeaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4cfea6 to 0x4f684e FUN_004f684e (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004cfe7f(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = *(int *)(unaff_EDI + 8);
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) {
      return 0;
    }
    cVar1 = FUN_00465948();
  } while (cVar1 == '\0');
  uVar2 = FUN_004f684e();
  return uVar2;
}


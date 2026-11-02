// rea decompile_all
// name: FUN_004f071f
// address: 0x4f071f
// body: available
// range: 0x4f071f-0x4f076f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4f076a to 0x4c2108 FUN_004c2108 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f071f(void)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 0x28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  if (iVar1 != 0) {
    FUN_004c2119();
  }
  FUN_004f77e9();
  FUN_004a4d78();
  iVar1 = *(int *)(unaff_EBX + 0x28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  if (iVar1 != 0) {
    FUN_004c2108();
    return;
  }
  return;
}


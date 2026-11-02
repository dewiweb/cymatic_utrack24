// rea decompile_all
// name: FUN_0045330d
// address: 0x45330d
// body: available
// range: 0x45330d-0x453350 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45334b to 0x440e9b FUN_00440e9b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045330d(void)

{
  int iVar1;
  int *in_ECX;
  bool bVar2;
  
  bVar2 = *(int *)(in_ECX[0x40] + 0x2fc) != 0;
  if (bVar2) {
    FUN_004420f4();
  }
  (**(code **)(*in_ECX + 0x28))(bVar2);
  iVar1 = FUN_00456741();
  if (iVar1 == 0) {
    return;
  }
  FUN_00440e9b();
  return;
}


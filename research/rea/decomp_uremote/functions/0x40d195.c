// rea decompile_all
// name: FUN_0040d195
// address: 0x40d195
// body: available
// range: 0x40d195-0x40d210 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d1d2 to 0x40d13e FUN_0040d13e (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040d195(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint unaff_EBX;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return 0x23;
  }
  if (((*(uint *)(unaff_ESI + 0x10) <= unaff_EBX) || (unaff_EBX + 1 < unaff_EBX)) ||
     (*(uint *)(unaff_ESI + 0x10) < unaff_EBX + 1)) {
    return 0x10;
  }
  pcVar1 = *(code **)(*(int *)(*(int *)(unaff_ESI + 0x60) + 0xc) + 0x5c);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      iVar2 = FUN_0040d13e();
      return iVar2;
    }
    if (iVar2 != 7) {
      return iVar2;
    }
  }
  iVar2 = FUN_0040ddcc(unaff_EBX,0x903);
  if (iVar2 == 0) {
    *param_1 = *(int *)(*(int *)(unaff_ESI + 0x54) + 0x40) << 10;
  }
  return iVar2;
}


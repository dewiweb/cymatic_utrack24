// rea decompile_all
// name: FUN_00441d58
// address: 0x441d58
// body: available
// range: 0x441d58-0x441dbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441d58(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  
  piVar1 = (int *)(unaff_EDI + 0x9c);
  *(float *)(unaff_EDI + 0xa8) = (float)*(int *)(unaff_EDI + 0x80);
  FUN_0044bfc5();
  iVar2 = FUN_005b3fb0();
  *piVar1 = iVar2;
  if (0 < iVar2) {
    *piVar1 = 0;
  }
  if (*piVar1 < *(int *)(unaff_EDI + 0x94)) {
    *piVar1 = *(int *)(unaff_EDI + 0x94);
  }
  FUN_004419ce(1,0,0);
  return;
}


// rea decompile_all
// name: FUN_00476966
// address: 0x476966
// body: available
// range: 0x476966-0x4769d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00476966(undefined4 param_1,undefined8 param_2)

{
  double *pdVar1;
  int unaff_ESI;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_0047065b(0,0x3ff0000000000000,param_2);
  iVar2 = 0;
  if (0 < *(int *)(unaff_ESI + 0x1c)) {
    pdVar1 = *(double **)(unaff_ESI + 0x14);
    do {
      if (fVar3 < (float10)*pdVar1) break;
      iVar2 = iVar2 + 1;
      pdVar1 = pdVar1 + 2;
    } while (iVar2 < *(int *)(unaff_ESI + 0x1c));
  }
  FUN_004d076d();
  FUN_004d076d();
  FUN_004a4b75();
  return iVar2;
}


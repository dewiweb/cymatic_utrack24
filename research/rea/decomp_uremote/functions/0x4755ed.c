// rea decompile_all
// name: FUN_004755ed
// address: 0x4755ed
// body: available
// range: 0x4755ed-0x475649 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004755ed(int param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  float10 fVar4;
  
  dVar1 = *(double *)(unaff_ESI + 0xc) * (double)param_1 + *(double *)(unaff_ESI + 0x12);
  dVar2 = *(double *)(unaff_ESI + 0xe) * (double)param_1 + *(double *)(unaff_ESI + 0x10);
  dVar1 = dVar2 * dVar2 + dVar1 * dVar1;
  if (dVar1 < *(double *)(unaff_ESI + 6)) {
    fVar4 = (float10)FUN_005afec4(dVar1);
    FUN_00470221((double)(fVar4 * (float10)*(double *)(unaff_ESI + 8)));
    iVar3 = FUN_00440367(unaff_ESI[1]);
  }
  else {
    iVar3 = unaff_ESI[1];
  }
  *unaff_EDI = *(undefined4 *)(*unaff_ESI + iVar3 * 4);
  return;
}


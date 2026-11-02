// rea decompile_all
// name: FUN_0043da5a
// address: 0x43da5a
// body: available
// range: 0x43da5a-0x43dbd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_0043da5a(float param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_ECX;
  int unaff_ESI;
  
  iVar2 = FUN_004c08d2(unaff_ESI,param_1,0,in_ECX);
  iVar2 = (*(int *)(unaff_ESI + 0x70) - *(int *)(iVar2 + 4)) + *(int *)(unaff_ESI + 0x74);
  if (iVar2 < *(int *)(unaff_ESI + 0x98)) {
    param_1 = (float)(((*(int *)(unaff_ESI + 0x84) - *(int *)(unaff_ESI + 0x7c)) * iVar2) /
                      *(int *)(unaff_ESI + 0x98) + *(int *)(unaff_ESI + 0x7c));
  }
  else if (iVar2 < *(int *)(unaff_ESI + 0x9c)) {
    param_1 = (float)(((*(int *)(unaff_ESI + 0x88) - *(int *)(unaff_ESI + 0x84)) *
                      (iVar2 - *(int *)(unaff_ESI + 0x98))) /
                      (*(int *)(unaff_ESI + 0x9c) - *(int *)(unaff_ESI + 0x98)) +
                     *(int *)(unaff_ESI + 0x84));
  }
  else if (iVar2 < *(int *)(unaff_ESI + 0xa0)) {
    param_1 = (float)(((*(int *)(unaff_ESI + 0x8c) - *(int *)(unaff_ESI + 0x88)) *
                      (iVar2 - *(int *)(unaff_ESI + 0x9c))) /
                      (*(int *)(unaff_ESI + 0xa0) - *(int *)(unaff_ESI + 0x9c)) +
                     *(int *)(unaff_ESI + 0x88));
  }
  else if (iVar2 < *(int *)(unaff_ESI + 0xa4)) {
    param_1 = (float)(((*(int *)(unaff_ESI + 0x90) - *(int *)(unaff_ESI + 0x8c)) *
                      (iVar2 - *(int *)(unaff_ESI + 0xa0))) /
                      (*(int *)(unaff_ESI + 0xa4) - *(int *)(unaff_ESI + 0xa0)) +
                     *(int *)(unaff_ESI + 0x8c));
  }
  else {
    iVar1 = *(int *)(unaff_ESI + 0xa8);
    if (iVar2 < iVar1) {
      param_1 = (float)(((*(int *)(unaff_ESI + 0x94) - *(int *)(unaff_ESI + 0x90)) *
                        (iVar2 - *(int *)(unaff_ESI + 0xa4))) / (iVar1 - *(int *)(unaff_ESI + 0xa4))
                       + *(int *)(unaff_ESI + 0x90));
    }
    else {
      param_1 = (float)(*(int *)(unaff_ESI + 0x94) -
                       ((iVar2 - iVar1) * *(int *)(unaff_ESI + 0x94)) /
                       (*(int *)(unaff_ESI + 0x74) - iVar1));
    }
  }
  if ((float)*(int *)(unaff_ESI + 0x80) < param_1) {
    param_1 = (float)*(int *)(unaff_ESI + 0x80);
  }
  if (param_1 < (float)*(int *)(unaff_ESI + 0x7c)) {
    param_1 = (float)*(int *)(unaff_ESI + 0x7c);
  }
  return (float10)param_1;
}


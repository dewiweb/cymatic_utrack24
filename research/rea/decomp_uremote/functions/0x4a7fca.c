// rea decompile_all
// name: FUN_004a7fca
// address: 0x4a7fca
// body: available
// range: 0x4a7fca-0x4a807e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a7fca(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *unaff_EBX;
  int iVar5;
  
  if (param_2 == param_1 || param_2 - param_1 < 0) {
    return;
  }
  iVar5 = unaff_EBX[2];
  if (iVar5 < 1) {
    return;
  }
  if (((int *)*unaff_EBX)[iVar5 + -1] <= param_1) {
    return;
  }
  if (param_2 <= *(int *)*unaff_EBX) {
    return;
  }
  cVar1 = FUN_004a8c8e(param_1 + -1);
  iVar3 = FUN_00440367(param_2);
  cVar2 = FUN_004a8c8e(iVar3);
  iVar5 = iVar5 + -1;
  if (-1 < iVar5) {
    piVar4 = (int *)(*unaff_EBX + iVar5 * 4);
    do {
      if (*piVar4 <= iVar3) goto LAB_004a804f;
      iVar5 = iVar5 + -1;
      piVar4 = piVar4 + -1;
    } while (-1 < iVar5);
  }
  goto LAB_004a8056;
  while( true ) {
    FUN_004a8cb5();
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) break;
LAB_004a804f:
    if (*(int *)(*unaff_EBX + iVar5 * 4) < param_1) break;
  }
LAB_004a8056:
  if (cVar1 != '\0') {
    FUN_004a80fe(unaff_EBX);
  }
  if (cVar2 != '\0') {
    FUN_004a80fe(unaff_EBX);
  }
  FUN_004a807f(unaff_EBX);
  return;
}


// rea decompile_all
// name: FUN_004b763e
// address: 0x4b763e
// body: available
// range: 0x4b763e-0x4b76c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b763e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_ESI;
  int *piVar10;
  
  piVar10 = *(int **)(in_ECX + 8);
  piVar5 = piVar10 + *(int *)(in_ECX + 0x10) * 4;
  for (; piVar10 != piVar5; piVar10 = piVar10 + 4) {
    iVar1 = *piVar10;
    iVar2 = piVar10[2];
    iVar3 = piVar10[1];
    iVar9 = piVar10[3] + iVar3;
    for (; iVar3 < iVar9; iVar3 = iVar3 + 1) {
      piVar6 = (int *)*unaff_ESI;
      iVar7 = piVar6[2] * iVar3 + *piVar6;
      unaff_ESI[1] = iVar7;
      iVar4 = piVar6[3];
      piVar6 = (int *)(iVar4 * iVar1 + iVar7);
      if (*(char *)((int)unaff_ESI + 0xb) == -1) {
        iVar7 = unaff_ESI[2];
        iVar8 = iVar2;
        do {
          *piVar6 = iVar7;
          piVar6 = (int *)((int)piVar6 + iVar4);
          iVar8 = iVar8 + -1;
        } while (0 < iVar8);
      }
      else {
        FUN_004be2cb(piVar6,unaff_ESI[2],iVar2);
      }
    }
  }
  return;
}


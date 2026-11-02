// rea decompile_all
// name: FUN_004b7c49
// address: 0x4b7c49
// body: available
// range: 0x4b7c49-0x4b7cb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b7c49(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined4 *puVar7;
  int in_ECX;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EDI;
  
  puVar9 = *(undefined4 **)(in_ECX + 8);
  puVar7 = puVar9 + *(int *)(in_ECX + 0x10) * 4;
  for (; puVar9 != puVar7; puVar9 = puVar9 + 4) {
    uVar1 = *puVar9;
    uVar2 = puVar9[2];
    iVar3 = puVar9[1];
    iVar8 = puVar9[3] + iVar3;
    for (; iVar3 < iVar8; iVar3 = iVar3 + 1) {
      iVar4 = (*(int **)(unaff_EDI + 0x30))[2];
      dVar6 = (double)iVar3 - *(double *)(unaff_EDI + 0x10);
      iVar5 = **(int **)(unaff_EDI + 0x30);
      *(double *)(unaff_EDI + 0x28) = dVar6 * dVar6;
      *(int *)(unaff_EDI + 0x34) = iVar4 * iVar3 + iVar5;
      FUN_004ba233(unaff_EDI,uVar1,uVar2);
    }
  }
  return;
}


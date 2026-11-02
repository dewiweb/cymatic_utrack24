// rea decompile_all
// name: FUN_004b75b7
// address: 0x4b75b7
// body: available
// range: 0x4b75b7-0x4b763d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b75b7(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EAX;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *in_EDX;
  int iVar9;
  int iVar10;
  int local_c;
  
  piVar8 = *(int **)(in_EAX + 8);
  piVar6 = piVar8 + *(int *)(in_EAX + 0x10) * 4;
  for (; piVar8 != piVar6; piVar8 = piVar8 + 4) {
    iVar1 = *piVar8;
    iVar2 = piVar8[2];
    iVar3 = piVar8[1];
    iVar10 = piVar8[3] + iVar3;
    for (; iVar3 < iVar10; iVar3 = iVar3 + 1) {
      piVar7 = (int *)*in_EDX;
      iVar9 = piVar7[2] * iVar3 + *piVar7;
      in_EDX[1] = iVar9;
      iVar4 = piVar7[3];
      iVar5 = in_EDX[2];
      piVar7 = (int *)(iVar4 * iVar1 + iVar9);
      local_c = iVar2;
      do {
        *piVar7 = iVar5;
        piVar7 = (int *)((int)piVar7 + iVar4);
        local_c = local_c + -1;
      } while (0 < local_c);
    }
  }
  return;
}


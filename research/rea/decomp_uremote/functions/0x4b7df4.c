// rea decompile_all
// name: FUN_004b7df4
// address: 0x4b7df4
// body: available
// range: 0x4b7df4-0x4b7eba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b7df4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  double dVar6;
  int in_EAX;
  int iVar7;
  int *piVar8;
  int in_ECX;
  int iVar9;
  int *piVar10;
  byte *pbVar11;
  int local_10;
  int local_c;
  
  piVar8 = *(int **)(in_ECX + 8);
  piVar10 = piVar8 + *(int *)(in_ECX + 0x10) * 4;
  for (; piVar8 != piVar10; piVar8 = piVar8 + 4) {
    iVar1 = *piVar8;
    iVar2 = piVar8[1];
    iVar3 = piVar8[2];
    iVar9 = piVar8[3] + iVar2;
    for (; iVar2 < iVar9; iVar2 = iVar2 + 1) {
      piVar4 = *(int **)(in_EAX + 0x30);
      iVar5 = piVar4[2];
      dVar6 = (double)iVar2 - *(double *)(in_EAX + 0x10);
      iVar7 = *piVar4;
      *(double *)(in_EAX + 0x28) = dVar6 * dVar6;
      *(int *)(in_EAX + 0x34) = iVar5 * iVar2 + iVar7;
      iVar5 = piVar4[3];
      pbVar11 = (byte *)(iVar5 * iVar1 + *(int *)(in_EAX + 0x34));
      local_10 = iVar3;
      local_c = iVar1;
      do {
        iVar7 = FUN_00475582(local_c);
        local_c = local_c + 1;
        *pbVar11 = (char)((0x100 - (uint)*(byte *)(iVar7 + 3)) * (uint)*pbVar11 >> 8) +
                   *(byte *)(iVar7 + 3);
        pbVar11 = pbVar11 + iVar5;
        local_10 = local_10 + -1;
      } while (0 < local_10);
    }
  }
  return;
}


// rea decompile_all
// name: FUN_004b8f22
// address: 0x4b8f22
// body: available
// range: 0x4b8f22-0x4b8ffe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8f22(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *in_ECX;
  int in_EDX;
  int iVar9;
  int iVar10;
  int *piVar11;
  byte *pbVar12;
  int local_c;
  
  piVar11 = *(int **)(in_EDX + 8);
  piVar7 = piVar11 + *(int *)(in_EDX + 0x10) * 4;
  for (; piVar11 != piVar7; piVar11 = piVar11 + 4) {
    iVar1 = *piVar11;
    iVar2 = piVar11[1];
    iVar3 = piVar11[2];
    iVar9 = piVar11[3] + iVar2;
    for (; iVar2 < iVar9; iVar2 = iVar2 + 1) {
      piVar4 = (int *)*in_ECX;
      piVar5 = (int *)in_ECX[1];
      in_ECX[5] = piVar4[2] * iVar2 + *piVar4;
      in_ECX[6] = ((iVar2 - in_ECX[4]) % piVar5[5]) * piVar5[2] + *piVar5;
      iVar6 = piVar4[3];
      pbVar12 = (byte *)(iVar6 * iVar1 + in_ECX[5]);
      iVar10 = iVar3;
      local_c = iVar3;
      if (in_ECX[2] < 0xfe) {
        do {
          uVar8 = (in_ECX[2] + 1) * 0xff;
          *pbVar12 = (char)((0x100 - (uVar8 >> 8)) * (uint)*pbVar12 >> 8) + (char)(uVar8 >> 8);
          pbVar12 = pbVar12 + iVar6;
          local_c = local_c + -1;
        } while (0 < local_c);
      }
      else {
        do {
          *pbVar12 = 0xff;
          pbVar12 = pbVar12 + iVar6;
          iVar10 = iVar10 + -1;
        } while (0 < iVar10);
      }
    }
  }
  return;
}


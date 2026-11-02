// rea decompile_all
// name: FUN_00484439
// address: 0x484439
// body: available
// range: 0x484439-0x484586 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00484439(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  
  iVar4 = *(int *)(param_2 + 0x1c);
  FUN_00483ece(param_3 + -1,*(int *)(param_1 + 0xdc) + 2,*(undefined4 *)(param_1 + 0x1c));
  piVar1 = (int *)(param_1 + 0xb4);
  param_1 = 0;
  iVar10 = (0x80 - *piVar1) * 0x200;
  iVar6 = *piVar1 * 0x40;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      puVar5 = *(undefined1 **)(param_4 + param_1 * 4);
      pbVar7 = (byte *)param_3[1];
      uVar13 = (uint)*(byte *)*param_3;
      iVar14 = (uint)*(byte *)param_3[-1] + *pbVar7 + uVar13;
      pbVar7 = pbVar7 + 1;
      pbVar12 = (byte *)param_3[-1] + 1;
      pbVar11 = (byte *)*param_3 + 1;
      iVar8 = (uint)*pbVar7 + (uint)*pbVar12 + (uint)*pbVar11;
      *puVar5 = (char)(((iVar14 * 2 - uVar13) + iVar8) * iVar6 + 0x8000 + uVar13 * iVar10 >> 0x10);
      for (iVar2 = iVar4 * 8 + -2; puVar5 = puVar5 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
        bVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar12 + 1;
        pbVar7 = pbVar7 + 1;
        iVar9 = (uint)*pbVar7 + (uint)*pbVar12 + (uint)*pbVar11;
        *puVar5 = (char)(((iVar14 - (uint)bVar3) + iVar9 + iVar8) * iVar6 + 0x8000 +
                         (uint)bVar3 * iVar10 >> 0x10);
        iVar14 = iVar8;
        iVar8 = iVar9;
      }
      param_1 = param_1 + 1;
      *puVar5 = (char)(((iVar8 * 2 - (uint)*pbVar11) + iVar14) * iVar6 + 0x8000 +
                       (uint)*pbVar11 * iVar10 >> 0x10);
      param_3 = param_3 + 1;
    } while (param_1 < *(int *)(param_2 + 0xc));
  }
  return;
}


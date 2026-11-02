// rea decompile_all
// name: FUN_004803b1
// address: 0x4803b1
// body: available
// range: 0x4803b1-0x4804e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004803b1(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  undefined1 *puVar13;
  int local_c;
  
  param_5 = param_5 + -1;
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(*(int *)(param_1 + 0x150) + 8);
  if (-1 < param_5) {
    param_4 = param_4 << 2;
    do {
      pbVar11 = (byte *)*param_2;
      puVar13 = *(undefined1 **)(param_4 + *param_3);
      piVar1 = (int *)(param_4 + param_3[1]);
      param_2 = param_2 + 1;
      piVar2 = (int *)(param_4 + param_3[2]);
      piVar3 = (int *)(param_4 + param_3[3]);
      param_4 = param_4 + 4;
      if (iVar4 != 0) {
        iVar6 = *piVar3 - (int)puVar13;
        iVar7 = *piVar1 - (int)puVar13;
        iVar8 = *piVar2 - (int)puVar13;
        local_c = iVar4;
        do {
          iVar9 = 0xff - (uint)*pbVar11;
          iVar12 = 0xff - (uint)pbVar11[1];
          iVar10 = 0xff - (uint)pbVar11[2];
          puVar13[iVar6] = pbVar11[3];
          pbVar11 = pbVar11 + 4;
          *puVar13 = (char)((uint)(*(int *)(iVar5 + 0x800 + iVar10 * 4) +
                                   *(int *)(iVar5 + 0x400 + iVar12 * 4) +
                                  *(int *)(iVar5 + iVar9 * 4)) >> 0x10);
          puVar13[iVar7] =
               (char)((uint)(*(int *)(iVar5 + 0x1400 + iVar10 * 4) +
                             *(int *)(iVar5 + 0x1000 + iVar12 * 4) +
                            *(int *)(iVar5 + 0xc00 + iVar9 * 4)) >> 0x10);
          puVar13[iVar8] =
               (char)((uint)(*(int *)(iVar5 + 0x1c00 + iVar10 * 4) +
                             *(int *)(iVar5 + 0x1800 + iVar12 * 4) +
                            *(int *)(iVar5 + 0x1400 + iVar9 * 4)) >> 0x10);
          puVar13 = puVar13 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}


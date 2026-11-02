// rea decompile_all
// name: FUN_00480236
// address: 0x480236
// body: available
// range: 0x480236-0x48032f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480236(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  int local_8;
  
  param_5 = param_5 + -1;
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(*(int *)(param_1 + 0x150) + 8);
  if (-1 < param_5) {
    param_4 = param_4 << 2;
    do {
      piVar1 = (int *)(param_4 + *param_3);
      piVar2 = (int *)(param_4 + param_3[2]);
      pbVar5 = (byte *)*param_2;
      puVar11 = *(undefined1 **)(param_4 + param_3[1]);
      param_4 = param_4 + 4;
      if (iVar3 != 0) {
        iVar6 = *piVar1 - (int)puVar11;
        iVar7 = *piVar2 - (int)puVar11;
        local_8 = iVar3;
        do {
          uVar9 = (uint)pbVar5[2];
          uVar8 = (uint)pbVar5[1];
          uVar10 = (uint)*pbVar5;
          puVar11[iVar6] =
               (char)((uint)(*(int *)(iVar4 + 0x800 + uVar9 * 4) +
                             *(int *)(iVar4 + 0x400 + uVar8 * 4) + *(int *)(iVar4 + uVar10 * 4)) >>
                     0x10);
          pbVar5 = pbVar5 + 3;
          *puVar11 = (char)((uint)(*(int *)(iVar4 + 0x1400 + uVar9 * 4) +
                                   *(int *)(iVar4 + 0x1000 + uVar8 * 4) +
                                  *(int *)(iVar4 + 0xc00 + uVar10 * 4)) >> 0x10);
          puVar11[iVar7] =
               (char)((uint)(*(int *)(iVar4 + 0x1c00 + uVar9 * 4) +
                             *(int *)(iVar4 + 0x1800 + uVar8 * 4) +
                            *(int *)(iVar4 + 0x1400 + uVar10 * 4)) >> 0x10);
          puVar11 = puVar11 + 1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      param_5 = param_5 + -1;
      param_2 = param_2 + 1;
    } while (-1 < param_5);
  }
  return;
}


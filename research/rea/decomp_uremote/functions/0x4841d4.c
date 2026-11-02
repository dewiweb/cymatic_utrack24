// rea decompile_all
// name: FUN_004841d4
// address: 0x4841d4
// body: available
// range: 0x4841d4-0x484438 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004841d4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_10;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  FUN_00483ece((undefined4 *)(param_3 + -4),*(int *)(param_1 + 0xdc) + 2,
               *(undefined4 *)(param_1 + 0x1c));
  local_10 = 0;
  iVar10 = *(int *)(param_1 + 0xb4) * -0x50 + 0x4000;
  iVar8 = *(int *)(param_1 + 0xb4) * 0x10;
  if (0 < *(int *)(param_2 + 0xc)) {
    puVar9 = (undefined4 *)(param_3 + -4);
    do {
      pbVar3 = (byte *)puVar9[1];
      puVar4 = *(undefined1 **)(param_4 + local_10 * 4);
      pbVar5 = (byte *)puVar9[2];
      pbVar6 = (byte *)*puVar9;
      pbVar7 = (byte *)puVar9[3];
      *puVar4 = (char)(((uint)pbVar7[2] +
                       (uint)pbVar6[2] + (uint)*pbVar6 +
                       ((uint)pbVar3[2] +
                        (uint)pbVar5[2] + (uint)*pbVar3 + (uint)pbVar7[1] + (uint)pbVar6[1] +
                        (uint)*pbVar5 + (uint)*pbVar6) * 2 + (uint)*pbVar7 * 3) * iVar8 + 0x8000 +
                       ((uint)pbVar3[1] + (uint)pbVar5[1] + (uint)*pbVar3 + (uint)*pbVar5) * iVar10
                      >> 0x10);
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
      pbVar6 = pbVar6 + 2;
      pbVar5 = pbVar5 + 2;
      for (iVar1 = iVar2 * 8 + -2; puVar4 = puVar4 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = (char)(((uint)pbVar7[-1] +
                          ((uint)pbVar7[1] + (uint)pbVar6[1] + (uint)pbVar5[-1] + (uint)pbVar3[-1] +
                           (uint)*pbVar7 + (uint)pbVar5[2] + (uint)*pbVar6 + (uint)pbVar3[2]) * 2 +
                          (uint)pbVar6[-1] + (uint)pbVar6[2] + (uint)pbVar7[2]) * iVar8 + 0x8000 +
                         ((uint)pbVar5[1] + (uint)pbVar3[1] + (uint)*pbVar5 + (uint)*pbVar3) *
                         iVar10 >> 0x10);
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
        pbVar6 = pbVar6 + 2;
        pbVar5 = pbVar5 + 2;
      }
      local_10 = local_10 + 1;
      *puVar4 = (char)(((uint)pbVar6[-1] +
                       (uint)pbVar7[-1] + (uint)pbVar6[1] +
                       ((uint)*pbVar6 +
                        (uint)*pbVar7 + (uint)pbVar3[1] + (uint)pbVar5[-1] + (uint)pbVar3[-1] +
                        (uint)pbVar5[1] + (uint)pbVar6[1]) * 2 + (uint)pbVar7[1] * 3) * iVar8 +
                       0x8000 + ((uint)*pbVar3 + (uint)*pbVar5 + (uint)pbVar3[1] + (uint)pbVar5[1])
                                * iVar10 >> 0x10);
      puVar9 = puVar9 + 2;
    } while (local_10 < *(int *)(param_2 + 0xc));
  }
  return;
}


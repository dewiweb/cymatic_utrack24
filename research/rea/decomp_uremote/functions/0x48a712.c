// rea decompile_all
// name: FUN_0048a712
// address: 0x48a712
// body: available
// range: 0x48a712-0x48a819 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048a712(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int local_8;
  
  iVar1 = *param_4;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    do {
      param_4 = (int *)0x0;
      do {
        pbVar6 = (byte *)*param_3;
        if (param_4 == (int *)0x0) {
          pbVar9 = (byte *)param_3[-1];
        }
        else {
          pbVar9 = (byte *)param_3[1];
        }
        puVar2 = *(undefined1 **)(iVar1 + local_8 * 4);
        local_8 = local_8 + 1;
        iVar5 = (uint)*pbVar6 * 3 + (uint)*pbVar9;
        iVar3 = (uint)pbVar6[1] * 3 + (uint)pbVar9[1];
        *puVar2 = (char)(iVar5 * 4 + 8 >> 4);
        pbVar9 = pbVar9 + 2;
        pbVar6 = pbVar6 + 2;
        puVar2[1] = (char)(iVar5 * 3 + 7 + iVar3 >> 4);
        for (iVar7 = *(int *)(param_2 + 0x28) + -2; iVar4 = iVar3, puVar8 = puVar2 + 2, iVar7 != 0;
            iVar7 = iVar7 + -1) {
          iVar3 = (uint)*pbVar6 * 3 + (uint)*pbVar9;
          *puVar8 = (char)(iVar4 * 3 + 8 + iVar5 >> 4);
          pbVar9 = pbVar9 + 1;
          pbVar6 = pbVar6 + 1;
          puVar2[3] = (char)(iVar4 * 3 + 7 + iVar3 >> 4);
          iVar5 = iVar4;
          puVar2 = puVar8;
        }
        param_4 = (int *)((int)param_4 + 1);
        *puVar8 = (char)(iVar4 * 3 + 8 + iVar5 >> 4);
        puVar2[3] = (char)(iVar4 * 4 + 7 >> 4);
      } while ((int)param_4 < 2);
      param_3 = param_3 + 1;
    } while (local_8 < *(int *)(param_1 + 0x114));
  }
  return;
}


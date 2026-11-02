// rea decompile_all
// name: FUN_0048d0dc
// address: 0x48d0dc
// body: available
// range: 0x48d0dc-0x48d168 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048d0dc(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x1a8) + 0x18);
  iVar4 = *piVar3;
  iVar5 = piVar3[1];
  iVar6 = piVar3[2];
  iVar7 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      pbVar10 = *(byte **)(param_2 + (int)param_3);
      pcVar11 = (char *)*param_3;
      for (iVar1 = iVar7; iVar1 != 0; iVar1 = iVar1 + -1) {
        bVar2 = *pbVar10;
        pbVar8 = pbVar10 + 1;
        pbVar9 = pbVar10 + 2;
        pbVar10 = pbVar10 + 3;
        *pcVar11 = *(char *)((uint)bVar2 + iVar4) + *(char *)((uint)*pbVar8 + iVar5) +
                   *(char *)((uint)*pbVar9 + iVar6);
        pcVar11 = pcVar11 + 1;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


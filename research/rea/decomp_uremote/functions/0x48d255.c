// rea decompile_all
// name: FUN_0048d255
// address: 0x48d255
// body: available
// range: 0x48d255-0x48d353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048d255(uint param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int local_14;
  int *local_c;
  
  iVar2 = *(int *)(param_1 + 0x1a8);
  piVar3 = *(int **)(iVar2 + 0x18);
  iVar4 = *piVar3;
  iVar5 = piVar3[1];
  iVar6 = piVar3[2];
  iVar7 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    local_c = param_3;
    local_14 = param_4;
    do {
      iVar8 = *(int *)(iVar2 + 0x30);
      pbVar13 = *(byte **)((param_2 - (int)param_3) + (int)local_c);
      pcVar9 = (char *)*local_c;
      iVar10 = *(int *)(iVar2 + 0x3c);
      iVar11 = *(int *)(iVar2 + 0x34);
      param_1 = 0;
      iVar14 = iVar8 * 0x40;
      iVar12 = *(int *)(iVar2 + 0x38);
      for (iVar1 = iVar7; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pcVar9 = *(char *)(*(int *)(iVar11 + iVar14 + param_1 * 4) + (uint)*pbVar13 + iVar4) +
                  *(char *)(*(int *)(iVar12 + iVar14 + param_1 * 4) + (uint)pbVar13[1] + iVar5) +
                  *(char *)(*(int *)(iVar10 + iVar14 + param_1 * 4) + (uint)pbVar13[2] + iVar6);
        pbVar13 = pbVar13 + 3;
        pcVar9 = pcVar9 + 1;
        param_1 = param_1 + 1 & 0xf;
      }
      local_c = local_c + 1;
      local_14 = local_14 + -1;
      *(uint *)(iVar2 + 0x30) = iVar8 + 1U & 0xf;
    } while (local_14 != 0);
  }
  return;
}


// rea decompile_all
// name: FUN_0048d169
// address: 0x48d169
// body: available
// range: 0x48d169-0x48d254 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048d169(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  int local_20;
  int *local_c;
  uint local_8;
  
  iVar3 = *(int *)(param_1 + 100);
  iVar4 = *(int *)(param_1 + 0x1a8);
  iVar5 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    param_2 = param_2 - (int)param_3;
    local_20 = param_4;
    do {
      FUN_0048e721(*param_3,iVar5);
      iVar6 = *(int *)(iVar4 + 0x30);
      param_1 = 0;
      if (0 < iVar3) {
        local_c = (int *)(iVar4 + 0x34);
        do {
          local_8 = 0;
          pcVar10 = (char *)*param_3;
          pbVar9 = (byte *)(*(int *)(param_2 + (int)param_3) + param_1);
          iVar7 = *(int *)(*(int *)(iVar4 + 0x18) + param_1 * 4);
          iVar8 = *local_c;
          for (iVar1 = iVar5; iVar1 != 0; iVar1 = iVar1 + -1) {
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + iVar3;
            *pcVar10 = *pcVar10 +
                       *(char *)(*(int *)(iVar8 + iVar6 * 0x40 + local_8 * 4) + (uint)bVar2 + iVar7)
            ;
            pcVar10 = pcVar10 + 1;
            local_8 = local_8 + 1 & 0xf;
          }
          param_1 = param_1 + 1;
          local_c = local_c + 1;
        } while (param_1 < iVar3);
      }
      param_3 = param_3 + 1;
      local_20 = local_20 + -1;
      *(uint *)(iVar4 + 0x30) = iVar6 + 1U & 0xf;
    } while (local_20 != 0);
  }
  return;
}


// rea decompile_all
// name: FUN_0048d054
// address: 0x48d054
// body: available
// range: 0x48d054-0x48d0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048d054(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  int local_c;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 100);
  if (0 < param_4) {
    param_2 = param_2 - (int)param_3;
    local_c = param_4;
    do {
      pbVar7 = *(byte **)(param_2 + (int)param_3);
      pcVar6 = (char *)*param_3;
      for (iVar2 = iVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
        cVar1 = '\0';
        iVar8 = 0;
        if (0 < iVar5) {
          do {
            cVar1 = cVar1 + *(char *)(*(int *)(iVar3 + iVar8 * 4) + (uint)*pbVar7);
            pbVar7 = pbVar7 + 1;
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar5);
        }
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      }
      param_3 = param_3 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


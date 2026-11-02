// rea decompile_all
// name: FUN_0048e0e1
// address: 0x48e0e1
// body: available
// range: 0x48e0e1-0x48e189 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048e0e1(int param_1,int param_2,int *param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  int local_10;
  int *local_8;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  iVar5 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    local_8 = param_3;
    local_10 = param_4;
    do {
      pbVar8 = *(byte **)((param_2 - (int)param_3) + (int)local_8);
      pcVar6 = (char *)*local_8;
      for (iVar2 = iVar5; iVar2 != 0; iVar2 = iVar2 + -1) {
        bVar3 = *pbVar8;
        pbVar7 = pbVar8 + 2;
        psVar1 = (short *)(*(int *)(iVar4 + (uint)(bVar3 >> 3) * 4) +
                          ((uint)(pbVar8[1] >> 2) * 0x20 + (uint)(*pbVar7 >> 3)) * 2);
        pbVar8 = pbVar8 + 3;
        if (*psVar1 == 0) {
          FUN_0048dfd4(param_1,(uint)(bVar3 >> 3),(uint)(*pbVar7 >> 3));
        }
        *pcVar6 = (char)*psVar1 + -1;
        pcVar6 = pcVar6 + 1;
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}


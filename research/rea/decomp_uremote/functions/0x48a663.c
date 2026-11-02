// rea decompile_all
// name: FUN_0048a663
// address: 0x48a663
// body: available
// range: 0x48a663-0x48a711 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048a663(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int local_8;
  
  param_4 = (undefined4 *)*param_4;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    param_3 = param_3 - (int)param_4;
    do {
      pbVar4 = *(byte **)(param_3 + (int)param_4);
      bVar2 = *pbVar4;
      pbVar3 = (byte *)*param_4;
      *pbVar3 = bVar2;
      pbVar4 = pbVar4 + 1;
      pbVar3[1] = (byte)((int)((uint)bVar2 * 3 + 2 + (uint)*pbVar4) >> 2);
      for (iVar5 = *(int *)(param_2 + 0x28) + -2; pbVar3 = pbVar3 + 2, iVar5 != 0;
          iVar5 = iVar5 + -1) {
        bVar2 = *pbVar4;
        pbVar1 = pbVar4 + -1;
        pbVar4 = pbVar4 + 1;
        *pbVar3 = (byte)((int)(*pbVar1 + 1 + (uint)bVar2 * 3) >> 2);
        pbVar3[1] = (byte)((int)(*pbVar4 + 2 + (uint)bVar2 * 3) >> 2);
      }
      bVar2 = *pbVar4;
      param_4 = param_4 + 1;
      local_8 = local_8 + 1;
      *pbVar3 = (byte)((int)(pbVar4[-1] + 1 + (uint)bVar2 * 3) >> 2);
      pbVar3[1] = bVar2;
    } while (local_8 < *(int *)(param_1 + 0x114));
  }
  return;
}


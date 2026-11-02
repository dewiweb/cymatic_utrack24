// rea decompile_all
// name: FUN_00662260
// address: 0x662260
// body: available
// range: 0x662260-0x66232b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662260(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  
  puVar3 = param_4;
  param_4 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)*puVar3;
  if (0 < *(int *)(param_1 + 0x114)) {
    param_3 = param_3 - (int)puVar3;
    do {
      pbVar4 = *(byte **)(param_3 + (int)puVar3);
      pbVar2 = (byte *)*puVar3;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *pbVar2 = bVar1;
      pbVar2[1] = (byte)((int)(*pbVar4 + 2 + (uint)bVar1 * 3) >> 2);
      for (iVar5 = *(int *)(param_2 + 0x28) + -2; pbVar2 = pbVar2 + 2, iVar5 != 0;
          iVar5 = iVar5 + -1) {
        bVar1 = *pbVar4;
        *pbVar2 = (byte)((int)(pbVar4[-1] + 1 + (uint)bVar1 * 3) >> 2);
        pbVar2[1] = (byte)((int)(pbVar4[1] + 2 + (uint)bVar1 * 3) >> 2);
        pbVar4 = pbVar4 + 1;
      }
      bVar1 = *pbVar4;
      *pbVar2 = (byte)((int)((uint)bVar1 * 3 + 1 + (uint)pbVar4[-1]) >> 2);
      pbVar2[1] = bVar1;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar3 = puVar3 + 1;
    } while ((int)param_4 < *(int *)(param_1 + 0x114));
  }
  return;
}


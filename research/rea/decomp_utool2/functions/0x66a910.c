// rea decompile_all
// name: FUN_0066a910
// address: 0x66a910
// body: available
// range: 0x66a910-0x66a9a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066a910(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar3 = *(int *)(param_2 + 0x1c);
  FUN_0066ac00(*(undefined4 *)(param_1 + 0x1c),iVar3 << 4);
  param_1 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    param_4 = param_4 - (int)param_3;
    do {
      uVar8 = 0;
      pbVar4 = (byte *)*param_3;
      puVar5 = *(undefined1 **)(param_4 + (int)param_3);
      for (iVar7 = iVar3 << 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        pbVar1 = pbVar4 + 1;
        bVar2 = *pbVar4;
        pbVar4 = pbVar4 + 2;
        iVar6 = *pbVar1 + uVar8;
        uVar8 = uVar8 ^ 1;
        *puVar5 = (char)((int)((uint)bVar2 + iVar6) >> 1);
        puVar5 = puVar5 + 1;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_1 < *(int *)(param_2 + 0xc));
  }
  return;
}


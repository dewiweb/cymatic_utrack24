// rea decompile_all
// name: FUN_0066a460
// address: 0x66a460
// body: available
// range: 0x66a460-0x66a5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066a460(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int local_18;
  int local_14;
  int local_10;
  
  iVar10 = *(int *)(param_2 + 0x1c) * 8;
  FUN_0066ac00(*(undefined4 *)((int)param_1 + 0x1c),iVar10);
  iVar6 = *(int *)((int)param_1 + 0xb4) * 0x40;
  iVar4 = (0x80 - *(int *)((int)param_1 + 0xb4)) * 0x200;
  local_18 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    puVar3 = (undefined4 *)param_3;
    do {
      puVar8 = *(undefined1 **)(param_4 + local_18 * 4);
      param_1 = (byte *)puVar3[1];
      uVar7 = (uint)*(byte *)*puVar3;
      pbVar11 = (byte *)*puVar3 + 1;
      iVar5 = (uint)*(byte *)puVar3[-1] + *param_1 + uVar7;
      param_3 = (byte *)puVar3[-1] + 1;
      param_1 = param_1 + 1;
      iVar9 = (uint)*param_1 + (uint)*param_3 + (uint)*pbVar11;
      *puVar8 = (char)(((iVar5 * 2 - uVar7) + iVar9) * iVar6 + 0x8000 + uVar7 * iVar4 >> 0x10);
      puVar8 = puVar8 + 1;
      local_14 = iVar10 + -2;
      do {
        local_10 = iVar9;
        pbVar1 = pbVar11 + 1;
        puVar2 = puVar8 + 1;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        iVar9 = (uint)*param_1 + (uint)*param_3 + (uint)*pbVar1;
        local_14 = local_14 + -1;
        *puVar8 = (char)(((iVar5 - (uint)*pbVar11) + iVar9 + local_10) * iVar6 + 0x8000 +
                         (uint)*pbVar11 * iVar4 >> 0x10);
        iVar5 = local_10;
        puVar8 = puVar2;
        pbVar11 = pbVar1;
      } while (local_14 != 0);
      *puVar2 = (char)((local_10 + (iVar9 * 2 - (uint)*pbVar1)) * iVar6 + 0x8000 +
                       (uint)*pbVar1 * iVar4 >> 0x10);
      local_18 = local_18 + 1;
      puVar3 = puVar3 + 1;
    } while (local_18 < *(int *)(param_2 + 0xc));
  }
  return;
}


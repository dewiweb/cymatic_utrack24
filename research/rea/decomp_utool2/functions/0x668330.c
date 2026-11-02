// rea decompile_all
// name: FUN_00668330
// address: 0x668330
// body: available
// range: 0x668330-0x668455 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00668330(int param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  uint uVar15;
  int local_10;
  
  param_5 = param_5 + -1;
  iVar3 = *(int *)(param_1 + 0x1a4);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x120);
  iVar6 = *(int *)(iVar3 + 8);
  iVar7 = *(int *)(iVar3 + 0xc);
  iVar8 = *(int *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x14);
  if (-1 < param_5) {
    param_3 = param_3 * 4;
    do {
      iVar9 = *param_4;
      param_4 = param_4 + 1;
      iVar10 = *(int *)(param_3 + *param_2);
      pbVar11 = *(byte **)(param_3 + param_2[1]);
      iVar12 = *(int *)(param_3 + param_2[2]);
      param_3 = param_3 + 4;
      if (iVar4 != 0) {
        pbVar13 = pbVar11;
        puVar14 = (undefined1 *)(iVar9 + 2);
        local_10 = iVar4;
        do {
          bVar1 = pbVar13[iVar12 - (int)pbVar11];
          uVar15 = (uint)pbVar13[iVar10 - (int)pbVar11];
          bVar2 = *pbVar13;
          puVar14[-2] = *(undefined1 *)(*(int *)((uint)bVar1 * 4 + iVar6) + uVar15 + iVar5);
          puVar14[-1] = *(undefined1 *)
                         ((*(int *)(iVar3 + (uint)bVar2 * 4) + *(int *)((uint)bVar1 * 4 + iVar8) >>
                          0x10) + uVar15 + iVar5);
          local_10 = local_10 + -1;
          *puVar14 = *(undefined1 *)(*(int *)(iVar7 + (uint)bVar2 * 4) + uVar15 + iVar5);
          pbVar13 = pbVar13 + 1;
          puVar14 = puVar14 + 3;
        } while (local_10 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}


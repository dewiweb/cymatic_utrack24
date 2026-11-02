// rea decompile_all
// name: FUN_00663a00
// address: 0x663a00
// body: available
// range: 0x663a00-0x663b5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00663a00(int param_1,int *param_2,int param_3,undefined4 *param_4)

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
  undefined1 *puVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  
  iVar3 = *(int *)(param_1 + 0x1a0);
  iVar4 = *(int *)(param_1 + 0x120);
  iVar5 = *(int *)(iVar3 + 0x10);
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar7 = *(int *)(iVar3 + 0x18);
  iVar3 = *(int *)(iVar3 + 0x1c);
  param_3 = param_3 * 4;
  pbVar12 = *(byte **)(param_3 + *param_2);
  pbVar16 = *(byte **)(param_3 + param_2[1]);
  pbVar14 = *(byte **)(param_3 + param_2[2]);
  puVar10 = (undefined1 *)*param_4;
  for (uVar11 = *(uint *)(param_1 + 0x5c) >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
    bVar1 = *pbVar16;
    pbVar16 = pbVar16 + 1;
    bVar2 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    iVar8 = *(int *)(iVar5 + (uint)bVar2 * 4);
    iVar15 = *(int *)(iVar3 + (uint)bVar1 * 4) + *(int *)(iVar7 + (uint)bVar2 * 4) >> 0x10;
    iVar9 = *(int *)(iVar6 + (uint)bVar1 * 4);
    uVar13 = (uint)*pbVar12;
    *puVar10 = *(undefined1 *)(uVar13 + iVar8 + iVar4);
    puVar10[1] = *(undefined1 *)(uVar13 + iVar15 + iVar4);
    puVar10[2] = *(undefined1 *)(uVar13 + iVar9 + iVar4);
    uVar13 = (uint)pbVar12[1];
    pbVar12 = pbVar12 + 2;
    puVar10[3] = *(undefined1 *)(iVar8 + uVar13 + iVar4);
    puVar10[4] = *(undefined1 *)(uVar13 + iVar15 + iVar4);
    puVar10[5] = *(undefined1 *)(uVar13 + iVar9 + iVar4);
    puVar10 = puVar10 + 6;
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    uVar11 = (uint)*pbVar12;
    iVar3 = *(int *)(iVar3 + (uint)*pbVar16 * 4);
    iVar7 = *(int *)(iVar7 + (uint)*pbVar14 * 4);
    iVar6 = *(int *)(iVar6 + (uint)*pbVar16 * 4);
    *puVar10 = *(undefined1 *)(*(int *)(iVar5 + (uint)*pbVar14 * 4) + uVar11 + iVar4);
    puVar10[1] = *(undefined1 *)(uVar11 + (iVar3 + iVar7 >> 0x10) + iVar4);
    puVar10[2] = *(undefined1 *)(uVar11 + iVar6 + iVar4);
  }
  return;
}


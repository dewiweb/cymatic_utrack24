// rea decompile_all
// name: FUN_006637f0
// address: 0x6637f0
// body: available
// range: 0x6637f0-0x6639f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006637f0(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  
  iVar3 = *(int *)(param_1 + 0x1a0);
  iVar4 = *(int *)(param_1 + 0x120);
  iVar5 = *(int *)(iVar3 + 0x10);
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar15 = *(int *)(iVar3 + 0x18);
  iVar3 = *(int *)(iVar3 + 0x1c);
  pbVar10 = *(byte **)(*param_2 + param_3 * 8);
  pbVar11 = *(byte **)(*param_2 + 4 + param_3 * 8);
  pbVar17 = *(byte **)(param_2[1] + param_3 * 4);
  pbVar16 = *(byte **)(param_2[2] + param_3 * 4);
  puVar13 = (undefined1 *)*param_4;
  puVar18 = (undefined1 *)param_4[1];
  for (uVar9 = *(uint *)(param_1 + 0x5c) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
    bVar1 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    bVar2 = *pbVar16;
    pbVar16 = pbVar16 + 1;
    iVar7 = *(int *)(iVar5 + (uint)bVar2 * 4);
    iVar14 = *(int *)(iVar3 + (uint)bVar1 * 4) + *(int *)(iVar15 + (uint)bVar2 * 4) >> 0x10;
    iVar8 = *(int *)(iVar6 + (uint)bVar1 * 4);
    uVar12 = (uint)*pbVar10;
    *puVar13 = *(undefined1 *)(uVar12 + iVar7 + iVar4);
    puVar13[1] = *(undefined1 *)(uVar12 + iVar14 + iVar4);
    puVar13[2] = *(undefined1 *)(uVar12 + iVar8 + iVar4);
    uVar12 = (uint)pbVar10[1];
    pbVar10 = pbVar10 + 2;
    puVar13[3] = *(undefined1 *)(uVar12 + iVar7 + iVar4);
    puVar13[4] = *(undefined1 *)(uVar12 + iVar14 + iVar4);
    puVar13[5] = *(undefined1 *)(uVar12 + iVar8 + iVar4);
    puVar13 = puVar13 + 6;
    uVar12 = (uint)*pbVar11;
    *puVar18 = *(undefined1 *)(iVar7 + uVar12 + iVar4);
    puVar18[1] = *(undefined1 *)(uVar12 + iVar14 + iVar4);
    puVar18[2] = *(undefined1 *)(uVar12 + iVar8 + iVar4);
    uVar12 = (uint)pbVar11[1];
    pbVar11 = pbVar11 + 2;
    puVar18[3] = *(undefined1 *)(iVar7 + uVar12 + iVar4);
    puVar18[4] = *(undefined1 *)(uVar12 + iVar14 + iVar4);
    puVar18[5] = *(undefined1 *)(uVar12 + iVar8 + iVar4);
    puVar18 = puVar18 + 6;
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    iVar5 = *(int *)(iVar5 + (uint)*pbVar16 * 4);
    iVar15 = *(int *)(iVar3 + (uint)*pbVar17 * 4) + *(int *)(iVar15 + (uint)*pbVar16 * 4) >> 0x10;
    iVar3 = *(int *)(iVar6 + (uint)*pbVar17 * 4);
    uVar9 = (uint)*pbVar10;
    *puVar13 = *(undefined1 *)(uVar9 + iVar5 + iVar4);
    puVar13[1] = *(undefined1 *)(uVar9 + iVar15 + iVar4);
    puVar13[2] = *(undefined1 *)(uVar9 + iVar3 + iVar4);
    uVar9 = (uint)*pbVar11;
    *puVar18 = *(undefined1 *)(iVar5 + uVar9 + iVar4);
    puVar18[1] = *(undefined1 *)(uVar9 + iVar15 + iVar4);
    puVar18[2] = *(undefined1 *)(uVar9 + iVar3 + iVar4);
  }
  return;
}


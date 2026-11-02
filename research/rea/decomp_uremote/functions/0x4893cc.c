// rea decompile_all
// name: FUN_004893cc
// address: 0x4893cc
// body: available
// range: 0x4893cc-0x4895b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004893cc(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  
  iVar20 = *(int *)(param_1 + 0x1a0);
  iVar4 = *(int *)(iVar20 + 0x10);
  iVar5 = *(int *)(param_1 + 0x120);
  iVar6 = *(int *)(iVar20 + 0x14);
  iVar7 = *(int *)(iVar20 + 0x18);
  iVar20 = *(int *)(iVar20 + 0x1c);
  puVar1 = (undefined4 *)(*param_2 + param_3 * 8);
  pbVar8 = (byte *)*puVar1;
  pbVar9 = (byte *)puVar1[1];
  pbVar14 = *(byte **)(param_3 * 4 + param_2[1]);
  pbVar18 = *(byte **)(param_3 * 4 + param_2[2]);
  puVar13 = (undefined1 *)*param_4;
  puVar17 = (undefined1 *)param_4[1];
  for (uVar16 = *(uint *)(param_1 + 0x5c) >> 1; uVar16 != 0; uVar16 = uVar16 - 1) {
    bVar2 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    bVar3 = *pbVar18;
    pbVar18 = pbVar18 + 1;
    iVar10 = *(int *)((uint)bVar3 * 4 + iVar4);
    iVar19 = *(int *)((uint)bVar2 * 4 + iVar20);
    iVar11 = *(int *)((uint)bVar3 * 4 + iVar7);
    iVar12 = *(int *)((uint)bVar2 * 4 + iVar6);
    uVar15 = (uint)*pbVar8;
    *puVar13 = *(undefined1 *)(iVar10 + uVar15 + iVar5);
    iVar19 = iVar19 + iVar11 >> 0x10;
    puVar13[1] = *(undefined1 *)(uVar15 + iVar19 + iVar5);
    puVar13[2] = *(undefined1 *)(uVar15 + iVar12 + iVar5);
    uVar15 = (uint)pbVar8[1];
    puVar13[3] = *(undefined1 *)(iVar10 + uVar15 + iVar5);
    puVar13[4] = *(undefined1 *)(uVar15 + iVar19 + iVar5);
    puVar13[5] = *(undefined1 *)(uVar15 + iVar12 + iVar5);
    uVar15 = (uint)*pbVar9;
    pbVar8 = pbVar8 + 2;
    *puVar17 = *(undefined1 *)(iVar10 + uVar15 + iVar5);
    puVar17[1] = *(undefined1 *)(uVar15 + iVar19 + iVar5);
    puVar17[2] = *(undefined1 *)(uVar15 + iVar12 + iVar5);
    puVar13 = puVar13 + 6;
    uVar15 = (uint)pbVar9[1];
    pbVar9 = pbVar9 + 2;
    puVar17[3] = *(undefined1 *)(iVar10 + uVar15 + iVar5);
    puVar17[4] = *(undefined1 *)(iVar19 + uVar15 + iVar5);
    puVar17[5] = *(undefined1 *)(uVar15 + iVar12 + iVar5);
    puVar17 = puVar17 + 6;
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    iVar4 = *(int *)((uint)*pbVar18 * 4 + iVar4);
    iVar20 = *(int *)((uint)*pbVar14 * 4 + iVar20);
    iVar7 = *(int *)((uint)*pbVar18 * 4 + iVar7);
    iVar6 = *(int *)((uint)*pbVar14 * 4 + iVar6);
    uVar16 = (uint)*pbVar8;
    *puVar13 = *(undefined1 *)(iVar4 + uVar16 + iVar5);
    iVar20 = iVar20 + iVar7 >> 0x10;
    puVar13[1] = *(undefined1 *)(uVar16 + iVar20 + iVar5);
    puVar13[2] = *(undefined1 *)(uVar16 + iVar6 + iVar5);
    uVar16 = (uint)*pbVar9;
    *puVar17 = *(undefined1 *)(iVar4 + uVar16 + iVar5);
    puVar17[1] = *(undefined1 *)(uVar16 + iVar20 + iVar5);
    puVar17[2] = *(undefined1 *)(uVar16 + iVar6 + iVar5);
  }
  return;
}


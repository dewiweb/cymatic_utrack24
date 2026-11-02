// rea decompile_all
// name: FUN_00489276
// address: 0x489276
// body: available
// range: 0x489276-0x4893cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00489276(int param_1,int *param_2,int param_3,undefined4 *param_4)

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
  undefined1 *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  
  iVar3 = *(int *)(param_1 + 0x1a0);
  iVar4 = *(int *)(iVar3 + 0x10);
  iVar5 = *(int *)(param_1 + 0x120);
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar7 = *(int *)(iVar3 + 0x18);
  iVar3 = *(int *)(iVar3 + 0x1c);
  param_3 = param_3 * 4;
  pbVar17 = *(byte **)(param_3 + *param_2);
  pbVar12 = *(byte **)(param_3 + param_2[1]);
  pbVar15 = *(byte **)(param_3 + param_2[2]);
  puVar11 = (undefined1 *)*param_4;
  for (uVar14 = *(uint *)(param_1 + 0x5c) >> 1; uVar14 != 0; uVar14 = uVar14 - 1) {
    bVar1 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    bVar2 = *pbVar15;
    pbVar15 = pbVar15 + 1;
    iVar8 = *(int *)((uint)bVar2 * 4 + iVar4);
    iVar16 = *(int *)((uint)bVar1 * 4 + iVar3);
    iVar9 = *(int *)((uint)bVar2 * 4 + iVar7);
    iVar10 = *(int *)((uint)bVar1 * 4 + iVar6);
    uVar13 = (uint)*pbVar17;
    *puVar11 = *(undefined1 *)(iVar8 + uVar13 + iVar5);
    iVar16 = iVar16 + iVar9 >> 0x10;
    puVar11[1] = *(undefined1 *)(uVar13 + iVar16 + iVar5);
    puVar11[2] = *(undefined1 *)(uVar13 + iVar10 + iVar5);
    uVar13 = (uint)pbVar17[1];
    puVar11[3] = *(undefined1 *)(iVar8 + uVar13 + iVar5);
    puVar11[4] = *(undefined1 *)(iVar16 + uVar13 + iVar5);
    puVar11[5] = *(undefined1 *)(uVar13 + iVar10 + iVar5);
    pbVar17 = pbVar17 + 2;
    puVar11 = puVar11 + 6;
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    uVar14 = (uint)*pbVar17;
    iVar3 = *(int *)((uint)*pbVar12 * 4 + iVar3);
    iVar7 = *(int *)((uint)*pbVar15 * 4 + iVar7);
    iVar6 = *(int *)((uint)*pbVar12 * 4 + iVar6);
    *puVar11 = *(undefined1 *)(*(int *)((uint)*pbVar15 * 4 + iVar4) + uVar14 + iVar5);
    puVar11[1] = *(undefined1 *)(uVar14 + (iVar3 + iVar7 >> 0x10) + iVar5);
    puVar11[2] = *(undefined1 *)(uVar14 + iVar6 + iVar5);
  }
  return;
}


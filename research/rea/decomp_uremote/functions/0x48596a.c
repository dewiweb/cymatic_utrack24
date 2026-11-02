// rea decompile_all
// name: FUN_0048596a
// address: 0x48596a
// body: available
// range: 0x48596a-0x485a70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048596a(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int local_8;
  
  param_5 = param_5 + -1;
  iVar5 = *(int *)(param_1 + 0x1a4);
  iVar6 = *(int *)(param_1 + 0x5c);
  iVar7 = *(int *)(param_1 + 0x120);
  iVar8 = *(int *)(iVar5 + 8);
  iVar9 = *(int *)(iVar5 + 0xc);
  iVar10 = *(int *)(iVar5 + 0x10);
  iVar5 = *(int *)(iVar5 + 0x14);
  if (-1 < param_5) {
    param_3 = param_3 << 2;
    do {
      piVar1 = (int *)(param_3 + *param_2);
      pbVar12 = *(byte **)(param_3 + param_2[1]);
      piVar2 = (int *)(param_3 + param_2[2]);
      param_3 = param_3 + 4;
      if (iVar6 != 0) {
        iVar15 = *piVar1 - (int)pbVar12;
        iVar13 = *piVar2 - (int)pbVar12;
        puVar11 = (undefined1 *)*param_4;
        local_8 = iVar6;
        do {
          bVar3 = pbVar12[iVar13];
          uVar14 = (uint)pbVar12[iVar15];
          bVar4 = *pbVar12;
          *puVar11 = *(undefined1 *)(*(int *)((uint)bVar3 * 4 + iVar8) + uVar14 + iVar7);
          puVar11[1] = *(undefined1 *)
                        ((*(int *)((uint)bVar4 * 4 + iVar5) + *(int *)((uint)bVar3 * 4 + iVar10) >>
                         0x10) + uVar14 + iVar7);
          pbVar12 = pbVar12 + 1;
          local_8 = local_8 + -1;
          puVar11[2] = *(undefined1 *)(*(int *)((uint)bVar4 * 4 + iVar9) + uVar14 + iVar7);
          puVar11 = puVar11 + 3;
        } while (local_8 != 0);
      }
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (-1 < param_5);
  }
  return;
}


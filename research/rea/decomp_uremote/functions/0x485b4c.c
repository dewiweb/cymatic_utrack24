// rea decompile_all
// name: FUN_00485b4c
// address: 0x485b4c
// body: available
// range: 0x485b4c-0x485c78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00485b4c(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int local_c;
  
  param_5 = param_5 + -1;
  iVar6 = *(int *)(param_1 + 0x1a4);
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar8 = *(int *)(param_1 + 0x120);
  iVar9 = *(int *)(iVar6 + 8);
  iVar10 = *(int *)(iVar6 + 0xc);
  iVar11 = *(int *)(iVar6 + 0x10);
  iVar6 = *(int *)(iVar6 + 0x14);
  if (-1 < param_5) {
    param_3 = param_3 << 2;
    do {
      piVar1 = (int *)(param_3 + *param_2);
      pbVar13 = *(byte **)(param_3 + param_2[1]);
      piVar2 = (int *)(param_3 + param_2[2]);
      piVar3 = (int *)(param_3 + param_2[3]);
      param_3 = param_3 + 4;
      if (iVar7 != 0) {
        iVar16 = *piVar1 - (int)pbVar13;
        iVar17 = *piVar2 - (int)pbVar13;
        iVar14 = *piVar3 - (int)pbVar13;
        puVar12 = (undefined1 *)*param_4;
        local_c = iVar7;
        do {
          uVar15 = (uint)pbVar13[iVar16];
          bVar4 = *pbVar13;
          bVar5 = pbVar13[iVar17];
          *puVar12 = *(undefined1 *)(((iVar8 - *(int *)((uint)bVar5 * 4 + iVar9)) - uVar15) + 0xff);
          puVar12[1] = *(undefined1 *)
                        (((iVar8 - (*(int *)((uint)bVar4 * 4 + iVar6) +
                                    *(int *)((uint)bVar5 * 4 + iVar11) >> 0x10)) - uVar15) + 0xff);
          puVar12[2] = *(undefined1 *)
                        (((iVar8 - *(int *)((uint)bVar4 * 4 + iVar10)) - uVar15) + 0xff);
          puVar12[3] = pbVar13[iVar14];
          pbVar13 = pbVar13 + 1;
          local_c = local_c + -1;
          puVar12 = puVar12 + 4;
        } while (local_c != 0);
      }
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (-1 < param_5);
  }
  return;
}


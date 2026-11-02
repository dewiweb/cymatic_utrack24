// rea decompile_all
// name: FUN_0065a950
// address: 0x65a950
// body: available
// range: 0x65a950-0x65abf2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065a950(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 *local_10;
  byte *local_c;
  
  iVar2 = *(int *)(param_1 + 0x1a8);
  iVar3 = *(int *)(param_1 + 0x120);
  iVar4 = *(int *)(iVar2 + 0x18);
  iVar5 = *(int *)(iVar2 + 0x28);
  iVar6 = *(int *)(param_1 + 0x5c);
  piVar7 = *(int **)(param_1 + 0x74);
  iVar8 = *piVar7;
  iVar9 = piVar7[1];
  iVar10 = piVar7[2];
  if (0 < param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      local_c = *(byte **)(param_2 + (int)param_3);
      local_10 = (undefined1 *)*param_3;
      if (*(char *)(iVar2 + 0x24) == '\0') {
        psVar18 = *(short **)(iVar2 + 0x20);
        local_40 = 1;
        local_1c = 3;
        *(undefined1 *)(iVar2 + 0x24) = 1;
      }
      else {
        local_c = local_c + iVar6 * 3 + -3;
        local_40 = -1;
        local_1c = -3;
        local_10 = local_10 + iVar6 + -1;
        *(undefined1 *)(iVar2 + 0x24) = 0;
        psVar18 = (short *)(*(int *)(iVar2 + 0x20) + (iVar6 * 3 + 3) * 2);
      }
      iVar12 = 0;
      iVar19 = 0;
      local_3c = 0;
      iVar15 = 0;
      local_38 = 0;
      local_34 = 0;
      local_28 = 0;
      local_28._0_2_ = 0;
      local_24 = 0;
      local_24._0_2_ = 0;
      local_20 = 0;
      local_20._0_2_ = 0;
      for (iVar1 = iVar6; iVar1 != 0; iVar1 = iVar1 + -1) {
        psVar11 = psVar18 + local_1c;
        uVar14 = (uint)*(byte *)(*(int *)(iVar5 + (iVar12 + *psVar11 + 8 >> 4) * 4) + (uint)*local_c
                                + iVar3);
        uVar16 = (uint)*(byte *)(*(int *)(iVar5 + (psVar11[1] + 8 + iVar15 >> 4) * 4) +
                                 (uint)local_c[1] + iVar3);
        uVar20 = (uint)*(byte *)(*(int *)(iVar5 + (iVar19 + 8 + (int)psVar18[local_1c + 2] >> 4) * 4
                                         ) + (uint)local_c[2] + iVar3);
        iVar19 = (int)uVar16 >> 2;
        iVar12 = (int)uVar20 >> 3;
        iVar13 = iVar19 * 0x20 + iVar12;
        iVar15 = *(int *)(iVar4 + ((int)uVar14 >> 3) * 4);
        if (*(short *)(iVar15 + iVar13 * 2) == 0) {
          FUN_0065ae20(iVar19,iVar12);
        }
        iVar15 = *(ushort *)(iVar15 + iVar13 * 2) - 1;
        *local_10 = (char)iVar15;
        iVar13 = uVar14 - *(byte *)(iVar15 + iVar8);
        iVar17 = uVar16 - *(byte *)(iVar15 + iVar9);
        iVar21 = uVar20 - *(byte *)(iVar15 + iVar10);
        *psVar18 = (short)iVar13 * 3 + (short)local_20;
        local_20 = local_34 + iVar13 * 5;
        iVar12 = iVar13 * 7;
        psVar18[1] = (short)local_24 + (short)iVar17 * 3;
        local_24 = local_38 + iVar17 * 9;
        iVar15 = iVar17 * 0xf;
        psVar18[2] = (short)local_28 + (short)iVar21 * 3;
        local_28 = local_3c + iVar21 * 9;
        iVar19 = iVar21 * 0xf;
        local_c = local_c + local_1c;
        local_10 = local_10 + local_40;
        psVar18 = psVar11;
        local_3c = iVar21;
        local_38 = iVar17;
        local_34 = iVar13;
      }
      *psVar18 = (short)local_20;
      psVar18[1] = (short)local_24;
      psVar18[2] = (short)local_28;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


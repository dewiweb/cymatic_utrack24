// rea decompile_all
// name: FUN_005d9fe0
// address: 0x5d9fe0
// body: available
// range: 0x5d9fe0-0x5da312 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005d9fe0(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 (*pauVar7) [16];
  int *piVar8;
  int *piVar9;
  int iVar10;
  void *_Dst;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar19;
  int iVar20;
  undefined1 auVar18 [16];
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int local_28;
  int local_24;
  int local_20;
  
  iVar13 = 0;
  if (0 < param_5) {
    piVar9 = param_3;
    do {
      if (*(int *)((param_4 - (int)param_3) + (int)piVar9) != 0) {
        param_3[iVar13] = *piVar9;
        iVar13 = iVar13 + 1;
      }
      piVar9 = piVar9 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    if (iVar13 != 0) {
      uVar14 = iVar13 * 4 + 7U & 0xfffffff8;
      piVar9 = (int *)*param_2;
      iVar1 = piVar9[3];
      uVar2 = piVar9[2];
      iVar3 = (piVar9[1] - *piVar9) / (int)uVar2;
      if (*(int *)(param_1 + 0x4c) < (int)(*(int *)(param_1 + 0x48) + uVar14)) {
        if (*(int *)(param_1 + 0x44) != 0) {
          puVar4 = (undefined4 *)FUN_004c554b(8);
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x48);
          puVar4[1] = *(undefined4 *)(param_1 + 0x54);
          *puVar4 = *(undefined4 *)(param_1 + 0x44);
          *(undefined4 **)(param_1 + 0x54) = puVar4;
        }
        *(uint *)(param_1 + 0x4c) = uVar14;
        uVar5 = FUN_004c554b(uVar14);
        *(undefined4 *)(param_1 + 0x44) = uVar5;
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      iVar10 = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48);
      iVar15 = 0;
      *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + uVar14;
      if (0 < iVar13) {
        uVar14 = iVar3 * 4 + 7U & 0xfffffff8;
        do {
          if (*(int *)(param_1 + 0x4c) < (int)(*(int *)(param_1 + 0x48) + uVar14)) {
            if (*(int *)(param_1 + 0x44) != 0) {
              puVar4 = (undefined4 *)FUN_004c554b(8);
              *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x48);
              puVar4[1] = *(undefined4 *)(param_1 + 0x54);
              *puVar4 = *(undefined4 *)(param_1 + 0x44);
              *(undefined4 **)(param_1 + 0x54) = puVar4;
            }
            *(uint *)(param_1 + 0x4c) = uVar14;
            uVar5 = FUN_004c554b(uVar14);
            *(undefined4 *)(param_1 + 0x44) = uVar5;
            *(undefined4 *)(param_1 + 0x48) = 0;
          }
          _Dst = (void *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48));
          *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + uVar14;
          *(void **)(iVar10 + iVar15 * 4) = _Dst;
          _memset(_Dst,0,iVar3 * 4);
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar13);
      }
      local_24 = 0;
      if (0 < iVar3) {
        local_28 = 0;
        do {
          iVar15 = *piVar9;
          if (0 < iVar13) {
            piVar6 = param_3;
            local_20 = iVar13;
            do {
              uVar14 = 0;
              iVar16 = 0;
              iVar12 = 0;
              if (0 < (int)uVar2) {
                if ((7 < uVar2) && (1 < DAT_00c89e14)) {
                  uVar14 = uVar2 & 0x80000007;
                  if ((int)uVar14 < 0) {
                    uVar14 = (uVar14 - 1 | 0xfffffff8) + 1;
                  }
                  uVar22 = 0;
                  uVar23 = 0;
                  uVar24 = 0;
                  uVar25 = 0;
                  iVar33 = 0;
                  iVar34 = 0;
                  iVar35 = 0;
                  iVar36 = 0;
                  uVar26 = 0;
                  uVar27 = 0;
                  uVar28 = 0;
                  uVar29 = 0;
                  iVar16 = 0;
                  iVar30 = 0;
                  iVar31 = 0;
                  iVar32 = 0;
                  pauVar7 = (undefined1 (*) [16])(*piVar6 + (iVar15 + local_28 + 4) * 4);
                  do {
                    iVar12 = iVar12 + 8;
                    auVar18 = pabsd(pauVar7[-1],pauVar7[-1]);
                    iVar17 = auVar18._0_4_;
                    iVar33 = iVar33 + iVar17;
                    iVar19 = auVar18._4_4_;
                    iVar34 = iVar34 + iVar19;
                    iVar20 = auVar18._8_4_;
                    iVar35 = iVar35 + iVar20;
                    iVar21 = auVar18._12_4_;
                    iVar36 = iVar36 + iVar21;
                    uVar22 = (uint)((int)uVar22 < iVar17) * iVar17 |
                             ((int)uVar22 >= iVar17) * uVar22;
                    uVar23 = (uint)((int)uVar23 < iVar19) * iVar19 |
                             ((int)uVar23 >= iVar19) * uVar23;
                    uVar24 = (uint)((int)uVar24 < iVar20) * iVar20 |
                             ((int)uVar24 >= iVar20) * uVar24;
                    uVar25 = (uint)((int)uVar25 < iVar21) * iVar21 |
                             ((int)uVar25 >= iVar21) * uVar25;
                    auVar18 = pabsd(*pauVar7,*pauVar7);
                    iVar17 = auVar18._0_4_;
                    iVar16 = iVar16 + iVar17;
                    iVar19 = auVar18._4_4_;
                    iVar30 = iVar30 + iVar19;
                    iVar20 = auVar18._8_4_;
                    iVar31 = iVar31 + iVar20;
                    iVar21 = auVar18._12_4_;
                    iVar32 = iVar32 + iVar21;
                    uVar26 = (uint)((int)uVar26 < iVar17) * iVar17 |
                             ((int)uVar26 >= iVar17) * uVar26;
                    uVar27 = (uint)((int)uVar27 < iVar19) * iVar19 |
                             ((int)uVar27 >= iVar19) * uVar27;
                    uVar28 = (uint)((int)uVar28 < iVar20) * iVar20 |
                             ((int)uVar28 >= iVar20) * uVar28;
                    uVar29 = (uint)((int)uVar29 < iVar21) * iVar21 |
                             ((int)uVar29 >= iVar21) * uVar29;
                    pauVar7 = pauVar7 + 2;
                  } while (iVar12 < (int)(uVar2 - uVar14));
                  iVar16 = iVar16 + iVar33 + iVar31 + iVar35 + iVar30 + iVar34 + iVar32 + iVar36;
                  uVar14 = ((int)uVar22 < (int)uVar26) * uVar26 |
                           ((int)uVar22 >= (int)uVar26) * uVar22;
                  uVar22 = ((int)uVar23 < (int)uVar27) * uVar27 |
                           ((int)uVar23 >= (int)uVar27) * uVar23;
                  uVar23 = ((int)uVar24 < (int)uVar28) * uVar28 |
                           ((int)uVar24 >= (int)uVar28) * uVar24;
                  uVar24 = ((int)uVar25 < (int)uVar29) * uVar29 |
                           ((int)uVar25 >= (int)uVar29) * uVar25;
                  uVar14 = ((int)uVar14 < (int)uVar23) * uVar23 |
                           ((int)uVar14 >= (int)uVar23) * uVar14;
                  uVar22 = ((int)uVar22 < (int)uVar24) * uVar24 |
                           ((int)uVar22 >= (int)uVar24) * uVar22;
                  uVar14 = ((int)uVar14 < (int)uVar22) * uVar22 |
                           ((int)uVar14 >= (int)uVar22) * uVar14;
                }
                if (iVar12 < (int)uVar2) {
                  iVar30 = uVar2 - iVar12;
                  puVar11 = (uint *)(*piVar6 + (iVar15 + local_28 + iVar12) * 4);
                  do {
                    uVar22 = *puVar11;
                    puVar11 = puVar11 + 1;
                    uVar23 = (int)uVar22 >> 0x1f;
                    uVar23 = (uVar22 ^ uVar23) - uVar23;
                    if ((int)uVar14 < (int)uVar23) {
                      uVar14 = uVar23;
                    }
                    iVar16 = iVar16 + uVar23;
                    iVar30 = iVar30 + -1;
                  } while (iVar30 != 0);
                }
              }
              iVar12 = 0;
              if (0 < iVar1 + -1) {
                piVar8 = piVar9 + 0x286;
                do {
                  if (((int)uVar14 <= piVar8[-0x40]) &&
                     ((*piVar8 < 0 || ((int)((float)iVar16 * (100.0 / (float)(int)uVar2)) < *piVar8)
                      ))) break;
                  iVar12 = iVar12 + 1;
                  piVar8 = piVar8 + 1;
                } while (iVar12 < iVar1 + -1);
              }
              *(int *)(*(int *)((iVar10 - (int)param_3) + (int)piVar6) + local_24 * 4) = iVar12;
              piVar6 = piVar6 + 1;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          local_24 = local_24 + 1;
          local_28 = local_28 + uVar2;
        } while (local_24 < iVar3);
      }
      param_2[10] = param_2[10] + 1;
      return iVar10;
    }
  }
  return 0;
}


// rea decompile_all
// name: FUN_005daae0
// address: 0x5daae0
// body: available
// range: 0x5daae0-0x5dad7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005daae0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 (*pauVar9) [16];
  int *piVar10;
  int in_ECX;
  void *_Dst;
  uint *puVar11;
  int *in_EDX;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar18;
  int iVar19;
  undefined1 auVar17 [16];
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int local_28;
  int local_24;
  int local_18;
  
  piVar1 = (int *)*in_EDX;
  iVar2 = piVar1[3];
  uVar3 = piVar1[2];
  iVar4 = (piVar1[1] - *piVar1) / (int)uVar3;
  iVar5 = FUN_005e9360();
  iVar13 = 0;
  if (0 < param_2) {
    uVar15 = iVar4 * 4 + 7U & 0xfffffff8;
    do {
      if (*(int *)(in_ECX + 0x4c) < (int)(*(int *)(in_ECX + 0x48) + uVar15)) {
        if (*(int *)(in_ECX + 0x44) != 0) {
          puVar6 = (undefined4 *)FUN_004c554b(8);
          *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + *(int *)(in_ECX + 0x48);
          puVar6[1] = *(undefined4 *)(in_ECX + 0x54);
          *puVar6 = *(undefined4 *)(in_ECX + 0x44);
          *(undefined4 **)(in_ECX + 0x54) = puVar6;
        }
        *(uint *)(in_ECX + 0x4c) = uVar15;
        uVar7 = FUN_004c554b(uVar15);
        *(undefined4 *)(in_ECX + 0x44) = uVar7;
        *(undefined4 *)(in_ECX + 0x48) = 0;
      }
      _Dst = (void *)(*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x48));
      *(uint *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + uVar15;
      *(void **)(iVar5 + iVar13 * 4) = _Dst;
      _memset(_Dst,0,iVar4 * 4);
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_2);
  }
  local_18 = 0;
  if (0 < iVar4) {
    local_28 = 0;
    do {
      iVar13 = *piVar1;
      if (0 < param_2) {
        local_24 = param_2;
        piVar8 = param_1;
        do {
          uVar15 = 0;
          iVar14 = 0;
          iVar12 = 0;
          if (0 < (int)uVar3) {
            if ((7 < uVar3) && (1 < DAT_00c89e14)) {
              uVar15 = uVar3 & 0x80000007;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
              }
              uVar21 = 0;
              uVar22 = 0;
              uVar23 = 0;
              uVar24 = 0;
              iVar32 = 0;
              iVar33 = 0;
              iVar34 = 0;
              iVar35 = 0;
              uVar25 = 0;
              uVar26 = 0;
              uVar27 = 0;
              uVar28 = 0;
              iVar14 = 0;
              iVar29 = 0;
              iVar30 = 0;
              iVar31 = 0;
              pauVar9 = (undefined1 (*) [16])(*piVar8 + (iVar13 + local_28 + 4) * 4);
              do {
                iVar12 = iVar12 + 8;
                auVar17 = pabsd(pauVar9[-1],pauVar9[-1]);
                iVar16 = auVar17._0_4_;
                iVar32 = iVar32 + iVar16;
                iVar18 = auVar17._4_4_;
                iVar33 = iVar33 + iVar18;
                iVar19 = auVar17._8_4_;
                iVar34 = iVar34 + iVar19;
                iVar20 = auVar17._12_4_;
                iVar35 = iVar35 + iVar20;
                uVar21 = (uint)((int)uVar21 < iVar16) * iVar16 | ((int)uVar21 >= iVar16) * uVar21;
                uVar22 = (uint)((int)uVar22 < iVar18) * iVar18 | ((int)uVar22 >= iVar18) * uVar22;
                uVar23 = (uint)((int)uVar23 < iVar19) * iVar19 | ((int)uVar23 >= iVar19) * uVar23;
                uVar24 = (uint)((int)uVar24 < iVar20) * iVar20 | ((int)uVar24 >= iVar20) * uVar24;
                auVar17 = pabsd(*pauVar9,*pauVar9);
                iVar16 = auVar17._0_4_;
                iVar14 = iVar14 + iVar16;
                iVar18 = auVar17._4_4_;
                iVar29 = iVar29 + iVar18;
                iVar19 = auVar17._8_4_;
                iVar30 = iVar30 + iVar19;
                iVar20 = auVar17._12_4_;
                iVar31 = iVar31 + iVar20;
                uVar25 = (uint)((int)uVar25 < iVar16) * iVar16 | ((int)uVar25 >= iVar16) * uVar25;
                uVar26 = (uint)((int)uVar26 < iVar18) * iVar18 | ((int)uVar26 >= iVar18) * uVar26;
                uVar27 = (uint)((int)uVar27 < iVar19) * iVar19 | ((int)uVar27 >= iVar19) * uVar27;
                uVar28 = (uint)((int)uVar28 < iVar20) * iVar20 | ((int)uVar28 >= iVar20) * uVar28;
                pauVar9 = pauVar9 + 2;
              } while (iVar12 < (int)(uVar3 - uVar15));
              iVar14 = iVar14 + iVar32 + iVar30 + iVar34 + iVar29 + iVar33 + iVar31 + iVar35;
              uVar15 = ((int)uVar21 < (int)uVar25) * uVar25 | ((int)uVar21 >= (int)uVar25) * uVar21;
              uVar21 = ((int)uVar22 < (int)uVar26) * uVar26 | ((int)uVar22 >= (int)uVar26) * uVar22;
              uVar22 = ((int)uVar23 < (int)uVar27) * uVar27 | ((int)uVar23 >= (int)uVar27) * uVar23;
              uVar23 = ((int)uVar24 < (int)uVar28) * uVar28 | ((int)uVar24 >= (int)uVar28) * uVar24;
              uVar15 = ((int)uVar15 < (int)uVar22) * uVar22 | ((int)uVar15 >= (int)uVar22) * uVar15;
              uVar21 = ((int)uVar21 < (int)uVar23) * uVar23 | ((int)uVar21 >= (int)uVar23) * uVar21;
              uVar15 = ((int)uVar15 < (int)uVar21) * uVar21 | ((int)uVar15 >= (int)uVar21) * uVar15;
            }
            if (iVar12 < (int)uVar3) {
              iVar29 = uVar3 - iVar12;
              puVar11 = (uint *)(*piVar8 + (iVar13 + local_28 + iVar12) * 4);
              do {
                uVar21 = *puVar11;
                puVar11 = puVar11 + 1;
                uVar22 = (int)uVar21 >> 0x1f;
                uVar22 = (uVar21 ^ uVar22) - uVar22;
                if ((int)uVar15 < (int)uVar22) {
                  uVar15 = uVar22;
                }
                iVar14 = iVar14 + uVar22;
                iVar29 = iVar29 + -1;
              } while (iVar29 != 0);
            }
          }
          iVar12 = 0;
          if (0 < iVar2 + -1) {
            piVar10 = piVar1 + 0x286;
            do {
              if (((int)uVar15 <= piVar10[-0x40]) &&
                 ((*piVar10 < 0 || ((int)((float)iVar14 * (100.0 / (float)(int)uVar3)) < *piVar10)))
                 ) break;
              iVar12 = iVar12 + 1;
              piVar10 = piVar10 + 1;
            } while (iVar12 < iVar2 + -1);
          }
          *(int *)(*(int *)((iVar5 - (int)param_1) + (int)piVar8) + local_18 * 4) = iVar12;
          piVar8 = piVar8 + 1;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
      }
      local_18 = local_18 + 1;
      local_28 = local_28 + uVar3;
    } while (local_18 < iVar4);
  }
  in_EDX[10] = in_EDX[10] + 1;
  return iVar5;
}


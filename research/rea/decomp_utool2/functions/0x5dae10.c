// rea decompile_all
// name: FUN_005dae10
// address: 0x5dae10
// body: available
// range: 0x5dae10-0x5db211 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_005dae10(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *in_ECX;
  uint *in_EDX;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int local_74;
  uint local_68;
  int local_60;
  int local_5c;
  int local_54;
  int *local_50;
  uint local_4c [9];
  int local_28 [9];
  
  local_28[8] = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar12 = in_ECX[0xd];
  uVar3 = *in_ECX;
  uVar4 = in_ECX[0xc];
  uVar10 = in_ECX[0xb];
  iVar6 = (int)uVar10 >> 1;
  iVar13 = 0;
  local_4c[0] = uVar4;
  local_74 = 0;
  local_4c[1] = 0;
  local_4c[2] = 0;
  local_4c[3] = 0;
  local_4c[4] = 0;
  local_4c[5] = 0;
  local_4c[6] = 0;
  local_4c[7] = 0;
  local_4c[8] = 0;
  local_50 = (int *)uVar3;
  if (uVar12 == 1) {
    if (0 < (int)uVar3) {
      piVar7 = (int *)(local_4c + uVar3 + 1);
      do {
        piVar2 = (int *)((int)piVar7 + (int)in_EDX + (-4 - (int)(local_4c + 1)));
        piVar7 = piVar7 + -1;
        iVar8 = *piVar2 - uVar4;
        if (iVar8 < iVar6) {
          iVar9 = (iVar6 - iVar8) * 2 + -1;
        }
        else {
          iVar9 = (iVar8 - iVar6) * 2;
        }
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        else if ((int)uVar10 <= iVar9) {
          iVar9 = uVar10 - 1;
        }
        iVar13 = iVar13 * uVar10 + iVar9;
        local_50 = (int *)((int)local_50 - 1);
        *piVar7 = uVar4 + iVar8;
        local_74 = iVar13;
      } while (local_50 != (int *)0x0);
    }
  }
  else if (0 < (int)uVar3) {
    piVar7 = (int *)(local_4c + uVar3 + 1);
    do {
      piVar7 = piVar7 + -1;
      iVar8 = (int)((*(int *)(((int)in_EDX - (int)(local_4c + 1)) + (int)piVar7) - local_4c[0]) +
                   ((int)uVar12 >> 1)) / (int)uVar12;
      if (iVar8 < iVar6) {
        iVar9 = (iVar6 - iVar8) * 2 + -1;
      }
      else {
        iVar9 = (iVar8 - iVar6) * 2;
      }
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if ((int)uVar10 <= iVar9) {
        iVar9 = uVar10 - 1;
      }
      iVar13 = iVar13 * uVar10 + iVar9;
      local_50 = (int *)((int)local_50 - 1);
      *piVar7 = iVar8 * uVar12 + local_4c[0];
      local_74 = iVar13;
    } while (local_50 != (int *)0x0);
  }
  local_50 = *(int **)(in_ECX[3] + 8);
  iVar6 = local_74;
  if (local_50[local_74] < 1) {
    local_68 = 0xffffffff;
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_60 = 0;
    local_28[4] = 0;
    local_28[5] = 0;
    local_28[6] = 0;
    local_28[7] = 0;
    iVar13 = (uVar10 - 1) * uVar12 + local_4c[0];
    uVar4 = in_ECX[1];
    if (0 < (int)uVar4) {
      do {
        if (0 < *local_50) {
          iVar6 = 0;
          local_4c[0] = 0;
          if ((((0 < (int)uVar3) && (7 < uVar3)) && (1 < DAT_00c89e14)) &&
             ((in_EDX + (uVar3 - 1) < local_4c + 9 || (local_4c + uVar3 + 8 < in_EDX)))) {
            uVar10 = uVar3 & 0x80000007;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
            }
            iVar18 = 0;
            iVar19 = 0;
            iVar20 = 0;
            iVar21 = 0;
            iVar8 = 0;
            iVar9 = 0;
            iVar16 = 0;
            iVar17 = 0;
            puVar11 = in_EDX;
            do {
              iVar6 = iVar6 + 8;
              puVar1 = puVar11 + 8;
              piVar7 = (int *)((int)local_4c + (4U - (int)in_EDX) + (int)puVar1);
              auVar14._0_4_ = *piVar7 - *puVar11;
              auVar14._4_4_ = piVar7[1] - puVar11[1];
              auVar14._8_4_ = piVar7[2] - puVar11[2];
              auVar14._12_4_ = piVar7[3] - puVar11[3];
              auVar14 = pmulld(auVar14,auVar14);
              iVar18 = iVar18 + auVar14._0_4_;
              iVar19 = iVar19 + auVar14._4_4_;
              iVar20 = iVar20 + auVar14._8_4_;
              iVar21 = iVar21 + auVar14._12_4_;
              piVar7 = (int *)((int)local_4c + (0x14U - (int)in_EDX) + (int)puVar1);
              auVar15._0_4_ = *piVar7 - puVar11[4];
              auVar15._4_4_ = piVar7[1] - puVar11[5];
              auVar15._8_4_ = piVar7[2] - puVar11[6];
              auVar15._12_4_ = piVar7[3] - puVar11[7];
              auVar14 = pmulld(auVar15,auVar15);
              iVar8 = iVar8 + auVar14._0_4_;
              iVar9 = iVar9 + auVar14._4_4_;
              iVar16 = iVar16 + auVar14._8_4_;
              iVar17 = iVar17 + auVar14._12_4_;
              puVar11 = puVar1;
            } while (iVar6 < (int)(uVar3 - uVar10));
            local_4c[0] = iVar8 + iVar18 + iVar16 + iVar20 + iVar9 + iVar19 + iVar17 + iVar21;
          }
          local_54 = 0;
          local_5c = 0;
          uVar10 = local_4c[0];
          if (iVar6 < (int)uVar3) {
            if (1 < (int)(uVar3 - iVar6)) {
              puVar11 = in_EDX + iVar6;
              iVar8 = ((uVar3 - iVar6) - 2 >> 1) + 1;
              iVar6 = iVar6 + iVar8 * 2;
              do {
                iVar9 = *(int *)((int)puVar11 + (int)local_4c + (0x24U - (int)in_EDX)) - *puVar11;
                local_54 = local_54 + iVar9 * iVar9;
                iVar9 = *(int *)((int)local_4c + (0x20U - (int)in_EDX) + (int)(puVar11 + 2)) -
                        puVar11[1];
                local_5c = local_5c + iVar9 * iVar9;
                iVar8 = iVar8 + -1;
                puVar11 = puVar11 + 2;
              } while (iVar8 != 0);
            }
            if (iVar6 < (int)uVar3) {
              uVar10 = local_4c[0] +
                       (local_4c[iVar6 + 9] - in_EDX[iVar6]) * (local_4c[iVar6 + 9] - in_EDX[iVar6])
              ;
            }
            uVar10 = uVar10 + local_5c + local_54;
          }
          if ((local_68 == 0xffffffff) || (iVar6 = local_74, (int)uVar10 < (int)local_68)) {
            local_4c[1] = local_28[0];
            local_4c[2] = local_28[1];
            local_4c[3] = local_28[2];
            local_4c[4] = local_28[3];
            local_4c[5] = local_28[4];
            local_4c[6] = local_28[5];
            local_4c[7] = local_28[6];
            local_4c[8] = local_28[7];
            local_74 = local_60;
            iVar6 = local_60;
            local_68 = uVar10;
          }
        }
        iVar8 = 0;
        if (iVar13 <= local_28[0]) {
          puVar11 = local_4c + 9;
          iVar9 = iVar8;
          do {
            iVar8 = iVar9 + 1;
            *puVar11 = 0;
            uVar5 = iVar9 + 10;
            puVar11 = local_4c + iVar9 + 10;
            iVar9 = iVar8;
          } while (iVar13 <= (int)local_4c[uVar5]);
        }
        piVar7 = (int *)(local_4c + iVar8 + 9);
        if (-1 < *piVar7) {
          *piVar7 = *piVar7 + uVar12;
        }
        local_50 = local_50 + 1;
        *piVar7 = -*piVar7;
        local_60 = local_60 + 1;
      } while (local_60 < (int)uVar4);
    }
  }
  if ((-1 < iVar6) && (iVar6 = 0, 0 < (int)uVar3)) {
    if ((7 < uVar3) && ((local_4c + uVar3 < in_EDX || (in_EDX + (uVar3 - 1) < local_4c + 1)))) {
      uVar12 = uVar3 & 0x80000007;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
      }
      do {
        uVar5 = iVar6 + 1;
        iVar13 = local_4c[iVar6 + 2];
        iVar8 = local_4c[iVar6 + 3];
        iVar9 = local_4c[iVar6 + 4];
        iVar16 = local_4c[iVar6 + 5];
        iVar17 = local_4c[iVar6 + 6];
        iVar18 = local_4c[iVar6 + 7];
        iVar19 = local_4c[iVar6 + 8];
        iVar6 = iVar6 + 8;
        *in_EDX = *in_EDX - local_4c[uVar5];
        in_EDX[1] = in_EDX[1] - iVar13;
        in_EDX[2] = in_EDX[2] - iVar8;
        in_EDX[3] = in_EDX[3] - iVar9;
        in_EDX[4] = in_EDX[4] - iVar16;
        in_EDX[5] = in_EDX[5] - iVar17;
        in_EDX[6] = in_EDX[6] - iVar18;
        in_EDX[7] = in_EDX[7] - iVar19;
        in_EDX = in_EDX + 8;
      } while (iVar6 < (int)(uVar3 - uVar12));
    }
    for (; iVar6 < (int)uVar3; iVar6 = iVar6 + 1) {
      *in_EDX = *in_EDX - local_4c[iVar6 + 1];
      in_EDX = in_EDX + 1;
    }
  }
  __security_check_cookie(local_28[8] ^ (uint)&stack0xfffffffc);
  return;
}


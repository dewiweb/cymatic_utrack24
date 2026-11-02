// rea decompile_all
// name: FUN_00482fb0
// address: 0x482fb0
// body: available
// range: 0x482fb0-0x483abd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00482fb0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *in_ECX;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_00464890(in_ECX[1]);
  piVar18 = (int *)*in_ECX;
  iVar1 = piVar18[2];
  iVar2 = *piVar18;
  for (piVar18 = (int *)*piVar18; piVar18 != (int *)(iVar1 * 0x10 + iVar2); piVar18 = piVar18 + 4) {
    iVar7 = piVar18[1];
    iVar6 = *piVar18;
    iVar9 = piVar18[2] + iVar6;
    iVar15 = piVar18[3] + iVar7;
    if ((((iVar7 < local_20) && (local_28 < iVar15)) && (iVar6 < local_1c)) && (local_24 < iVar9)) {
      if ((local_30 - local_38 == 1) && (local_c + local_14 == 0)) {
        if ((local_18 != 0) && (iVar7 <= local_28)) {
          piVar10 = (int *)*param_1;
          iVar6 = *piVar10 + piVar10[2] * local_28;
          param_1[1] = iVar6;
          puVar12 = (uint *)(piVar10[3] * local_38 + iVar6);
          uVar16 = ((uint)param_1[2] >> 8 & 0xff00ff) * local_18;
          iVar6 = 0x100 - (uVar16 >> 0x18);
          uVar14 = *puVar12;
          uVar16 = (uVar16 >> 8 & 0xff00ff) + ((uVar14 >> 8 & 0xff00ff) * iVar6 >> 8 & 0xff00ff);
          uVar14 = ((uVar14 & 0xff00ff) * iVar6 >> 8 & 0xff00ff) +
                   ((param_1[2] & 0xff00ffU) * local_18 >> 8 & 0xff00ff);
          *puVar12 = (((0x100 - (uVar16 >> 8 & 0xff00ff)) * 0x100 | uVar16 * 0x100) ^
                     (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14)) & 0xff00ff ^
                     (0x100 - (uVar16 >> 8 & 0xff00ff) | uVar16) << 8;
        }
        iVar6 = local_2c;
        if (iVar15 < local_2c) {
          iVar6 = iVar15;
        }
        if (iVar7 < local_34) {
          iVar7 = local_34;
        }
        for (; iVar7 < iVar6; iVar7 = iVar7 + 1) {
          piVar10 = (int *)*param_1;
          iVar9 = *piVar10 + piVar10[2] * iVar7;
          param_1[1] = iVar9;
          uVar14 = param_1[2];
          puVar12 = (uint *)(piVar10[3] * local_38 + iVar9);
          iVar9 = 0x100 - (uVar14 >> 0x18);
          uVar16 = *puVar12;
          uVar17 = (uVar14 >> 8 & 0xff00ff) + ((uVar16 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
          uVar14 = ((uVar16 & 0xff00ff) * iVar9 >> 8 & 0xff00ff) + (uVar14 & 0xff00ff);
          *puVar12 = (((0x100 - (uVar17 >> 8 & 0xff00ff)) * 0x100 | uVar17 * 0x100) ^
                     (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14)) & 0xff00ff ^
                     (0x100 - (uVar17 >> 8 & 0xff00ff) | uVar17) << 8;
        }
        if ((local_10 != 0) && (local_2c < iVar15)) {
          piVar10 = (int *)*param_1;
          iVar7 = *piVar10 + piVar10[2] * local_2c;
          param_1[1] = iVar7;
          puVar12 = (uint *)(piVar10[3] * local_38 + iVar7);
          uVar16 = ((uint)param_1[2] >> 8 & 0xff00ff) * local_10;
          iVar7 = 0x100 - (uVar16 >> 0x18);
          uVar14 = *puVar12;
          uVar16 = (uVar16 >> 8 & 0xff00ff) + ((uVar14 >> 8 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
          uVar14 = ((uVar14 & 0xff00ff) * iVar7 >> 8 & 0xff00ff) +
                   ((param_1[2] & 0xff00ffU) * local_10 >> 8 & 0xff00ff);
          *puVar12 = (((0x100 - (uVar16 >> 8 & 0xff00ff)) * 0x100 | uVar16 * 0x100) ^
                     (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14)) & 0xff00ff ^
                     (0x100 - (uVar16 >> 8 & 0xff00ff) | uVar16) << 8;
        }
      }
      else {
        iVar8 = local_38;
        if (local_38 < iVar6) {
          iVar8 = iVar6;
        }
        iVar13 = local_30;
        if (iVar9 < local_30) {
          iVar13 = iVar9;
        }
        iVar13 = iVar13 - iVar8;
        if ((local_14 == 0) || (bVar4 = true, local_24 < iVar6)) {
          bVar4 = false;
        }
        if ((local_c == 0) || (bVar5 = true, iVar9 <= local_30)) {
          bVar5 = false;
        }
        if ((local_18 != 0) && (iVar7 <= local_28)) {
          piVar10 = (int *)*param_1;
          iVar6 = *piVar10 + piVar10[2] * local_28;
          param_1[1] = iVar6;
          if (bVar4) {
            iVar9 = local_14 * local_18 >> 8;
            puVar12 = (uint *)(piVar10[3] * local_24 + iVar6);
            uVar16 = ((uint)param_1[2] >> 8 & 0xff00ff) * iVar9;
            uVar14 = *puVar12;
            iVar6 = 0x100 - (uVar16 >> 0x18);
            uVar17 = ((param_1[2] & 0xff00ffU) * iVar9 >> 8 & 0xff00ff) +
                     ((uVar14 & 0xff00ff) * iVar6 >> 8 & 0xff00ff);
            uVar14 = (uVar16 >> 8 & 0xff00ff) + ((uVar14 >> 8 & 0xff00ff) * iVar6 >> 8 & 0xff00ff);
            *puVar12 = (((0x100 - (uVar14 >> 8 & 0xff00ff)) * 0x100 | uVar14 * 0x100) ^
                       (0x100 - (uVar17 >> 8 & 0xff00ff) | uVar17)) & 0xff00ff ^
                       (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14) << 8;
          }
          if (0 < iVar13) {
            uVar14 = param_1[2];
            iVar6 = local_18 + 1;
            uVar16 = (uVar14 >> 8 & 0xff00ff) * iVar6;
            uVar14 = ((uVar14 & 0xff00ff) * iVar6 >> 8 ^ (uVar14 >> 8 & 0xffff00ff) * iVar6) &
                     0xff00ff ^ uVar16;
            iVar6 = *(int *)(*param_1 + 0xc);
            puVar12 = (uint *)(iVar6 * iVar8 + param_1[1]);
            iVar9 = iVar13;
            if ((char)(uVar16 >> 0x18) == -1) {
              do {
                *puVar12 = uVar14;
                iVar9 = iVar9 + -1;
                puVar12 = (uint *)((int)puVar12 + iVar6);
              } while (0 < iVar9);
            }
            else {
              FUN_0048b4d0(puVar12,uVar14,iVar13);
            }
          }
          if (bVar5) {
            iVar9 = local_c * local_18 >> 8;
            uVar16 = ((uint)param_1[2] >> 8 & 0xff00ff) * iVar9;
            puVar12 = (uint *)(*(int *)(*param_1 + 0xc) * local_30 + param_1[1]);
            iVar6 = 0x100 - (uVar16 >> 0x18);
            uVar14 = *puVar12;
            uVar16 = (uVar16 >> 8 & 0xff00ff) + ((uVar14 >> 8 & 0xff00ff) * iVar6 >> 8 & 0xff00ff);
            uVar14 = ((uVar14 & 0xff00ff) * iVar6 >> 8 & 0xff00ff) +
                     ((param_1[2] & 0xff00ffU) * iVar9 >> 8 & 0xff00ff);
            *puVar12 = (((0x100 - (uVar16 >> 8 & 0xff00ff)) * 0x100 | uVar16 * 0x100) ^
                       (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14)) & 0xff00ff ^
                       (0x100 - (uVar16 >> 8 & 0xff00ff) | uVar16) << 8;
          }
        }
        iVar6 = local_2c;
        if (iVar15 < local_2c) {
          iVar6 = iVar15;
        }
        if (iVar7 < local_34) {
          iVar7 = local_34;
        }
        for (; iVar7 < iVar6; iVar7 = iVar7 + 1) {
          piVar10 = (int *)*param_1;
          iVar9 = *piVar10 + piVar10[2] * iVar7;
          param_1[1] = iVar9;
          if (bVar4) {
            puVar12 = (uint *)(piVar10[3] * local_24 + iVar9);
            uVar17 = ((uint)param_1[2] >> 8 & 0xff00ff) * local_14;
            uVar14 = *puVar12;
            iVar9 = 0x100 - (uVar17 >> 0x18);
            uVar16 = ((param_1[2] & 0xff00ffU) * local_14 >> 8 & 0xff00ff) +
                     ((uVar14 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
            uVar14 = (uVar17 >> 8 & 0xff00ff) + ((uVar14 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
            *puVar12 = (((0x100 - (uVar14 >> 8 & 0xff00ff)) * 0x100 | uVar14 * 0x100) ^
                       (0x100 - (uVar16 >> 8 & 0xff00ff) | uVar16)) & 0xff00ff ^
                       (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14) << 8;
          }
          if (0 < iVar13) {
            iVar9 = *(int *)(*param_1 + 0xc);
            piVar10 = (int *)(iVar9 * iVar8 + param_1[1]);
            if (*(char *)((int)param_1 + 0xb) == -1) {
              iVar3 = param_1[2];
              iVar11 = iVar13;
              do {
                *piVar10 = iVar3;
                iVar11 = iVar11 + -1;
                piVar10 = (int *)((int)piVar10 + iVar9);
              } while (0 < iVar11);
            }
            else {
              FUN_0048b4d0(piVar10,param_1[2],iVar13);
            }
          }
          if (bVar5) {
            puVar12 = (uint *)(*(int *)(*param_1 + 0xc) * local_30 + param_1[1]);
            uVar17 = ((uint)param_1[2] >> 8 & 0xff00ff) * local_c;
            uVar14 = *puVar12;
            iVar9 = 0x100 - (uVar17 >> 0x18);
            uVar16 = ((param_1[2] & 0xff00ffU) * local_c >> 8 & 0xff00ff) +
                     ((uVar14 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
            uVar14 = (uVar17 >> 8 & 0xff00ff) + ((uVar14 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
            *puVar12 = (((0x100 - (uVar14 >> 8 & 0xff00ff)) * 0x100 | uVar14 * 0x100) ^
                       (0x100 - (uVar16 >> 8 & 0xff00ff) | uVar16)) & 0xff00ff ^
                       (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14) << 8;
          }
        }
        if ((local_10 != 0) && (local_2c < iVar15)) {
          piVar10 = (int *)*param_1;
          iVar7 = *piVar10 + piVar10[2] * local_2c;
          param_1[1] = iVar7;
          if (bVar4) {
            puVar12 = (uint *)(piVar10[3] * local_24 + iVar7);
            iVar6 = local_14 * local_10 >> 8;
            uVar16 = ((uint)param_1[2] >> 8 & 0xff00ff) * iVar6;
            iVar7 = 0x100 - (uVar16 >> 0x18);
            uVar14 = *puVar12;
            uVar16 = (uVar16 >> 8 & 0xff00ff) + ((uVar14 >> 8 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
            uVar14 = ((uVar14 & 0xff00ff) * iVar7 >> 8 & 0xff00ff) +
                     ((param_1[2] & 0xff00ffU) * iVar6 >> 8 & 0xff00ff);
            *puVar12 = (((0x100 - (uVar16 >> 8 & 0xff00ff)) * 0x100 | uVar16 * 0x100) ^
                       (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14)) & 0xff00ff ^
                       (0x100 - (uVar16 >> 8 & 0xff00ff) | uVar16) << 8;
          }
          if (0 < iVar13) {
            uVar14 = param_1[2];
            iVar7 = local_10 + 1;
            uVar16 = (uVar14 >> 8 & 0xff00ff) * iVar7;
            uVar14 = ((uVar14 & 0xff00ff) * iVar7 >> 8 ^ (uVar14 >> 8 & 0xffff00ff) * iVar7) &
                     0xff00ff ^ uVar16;
            iVar7 = *(int *)(*param_1 + 0xc);
            puVar12 = (uint *)(iVar7 * iVar8 + param_1[1]);
            if ((char)(uVar16 >> 0x18) == -1) {
              do {
                *puVar12 = uVar14;
                iVar13 = iVar13 + -1;
                puVar12 = (uint *)((int)puVar12 + iVar7);
              } while (0 < iVar13);
            }
            else {
              FUN_0048b4d0(puVar12,uVar14,iVar13);
            }
          }
          if (bVar5) {
            iVar6 = local_c * local_10 >> 8;
            puVar12 = (uint *)(*(int *)(*param_1 + 0xc) * local_30 + param_1[1]);
            uVar16 = ((uint)param_1[2] >> 8 & 0xff00ff) * iVar6;
            uVar14 = *puVar12;
            iVar7 = 0x100 - (uVar16 >> 0x18);
            uVar17 = ((param_1[2] & 0xff00ffU) * iVar6 >> 8 & 0xff00ff) +
                     ((uVar14 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
            uVar14 = (uVar16 >> 8 & 0xff00ff) + ((uVar14 >> 8 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
            *puVar12 = (((0x100 - (uVar14 >> 8 & 0xff00ff)) * 0x100 | uVar14 * 0x100) ^
                       (0x100 - (uVar17 >> 8 & 0xff00ff) | uVar17)) & 0xff00ff ^
                       (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14) << 8;
          }
        }
      }
    }
  }
  return;
}


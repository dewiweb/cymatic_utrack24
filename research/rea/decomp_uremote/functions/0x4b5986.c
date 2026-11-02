// rea decompile_all
// name: FUN_004b5986
// address: 0x4b5986
// body: available
// range: 0x4b5986-0x4b6411 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b5986(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *in_EAX;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  int *unaff_EBX;
  int local_54;
  int local_38;
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
  
  FUN_00475194();
  piVar12 = *(int **)*in_EAX;
  piVar16 = piVar12 + ((int *)*in_EAX)[2] * 4;
  do {
    if (piVar12 == piVar16) {
      return;
    }
    iVar14 = *piVar12;
    iVar8 = piVar12[2];
    iVar17 = piVar12[1];
    iVar13 = piVar12[3] + iVar17;
    if ((((iVar17 < local_20) && (local_28 < iVar13)) && (*piVar12 < local_1c)) &&
       (local_24 < iVar8 + iVar14)) {
      cVar4 = FUN_004752d2();
      if (cVar4 == '\0') {
        iVar9 = FUN_00439b5a(local_38);
        iVar10 = FUN_00440367(local_30);
        iVar10 = iVar10 - iVar9;
        if ((local_14 == 0) || (bVar2 = true, local_24 < *piVar12)) {
          bVar2 = false;
        }
        if ((local_c == 0) || (bVar3 = true, iVar8 + iVar14 <= local_30)) {
          bVar3 = false;
        }
        if ((local_18 != 0) && (iVar17 <= local_28)) {
          piVar11 = (int *)*unaff_EBX;
          iVar14 = piVar11[2] * local_28 + *piVar11;
          unaff_EBX[1] = iVar14;
          if (bVar2) {
            puVar5 = (uint *)(piVar11[3] * local_24 + iVar14);
            iVar14 = local_14 * local_18 >> 8;
            uVar6 = ((uint)unaff_EBX[2] >> 8 & 0xff00ff) * iVar14;
            iVar8 = 0x100 - (uVar6 >> 0x18);
            uVar7 = *puVar5;
            uVar15 = ((uVar7 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) +
                     ((unaff_EBX[2] & 0xff00ffU) * iVar14 >> 8 & 0xff00ff);
            uVar7 = (uVar6 >> 8 & 0xff00ff) + ((uVar7 >> 8 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
            *puVar5 = ((0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) << 8 ^
                      (0x100 - (uVar15 >> 8 & 0xff00ff) | uVar15)) & 0xff00ff ^
                      ((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100);
          }
          if (0 < iVar10) {
            uVar7 = unaff_EBX[2];
            iVar14 = local_18 + 1;
            uVar6 = (uVar7 >> 8 & 0xff00ff) * iVar14;
            uVar7 = ((uVar7 & 0xff00ff) * iVar14 >> 8 ^ (uVar7 >> 8 & 0xffff00ff) * iVar14) &
                    0xff00ff ^ uVar6;
            iVar14 = *(int *)(*unaff_EBX + 0xc);
            puVar5 = (uint *)(iVar14 * iVar9 + unaff_EBX[1]);
            local_54 = iVar10;
            if ((char)(uVar6 >> 0x18) == -1) {
              do {
                *puVar5 = uVar7;
                puVar5 = (uint *)((int)puVar5 + iVar14);
                local_54 = local_54 + -1;
              } while (0 < local_54);
            }
            else {
              FUN_004be2cb(puVar5,uVar7,iVar10);
            }
          }
          if (bVar3) {
            puVar5 = (uint *)(*(int *)(*unaff_EBX + 0xc) * local_30 + unaff_EBX[1]);
            iVar14 = local_c * local_18 >> 8;
            uVar6 = ((uint)unaff_EBX[2] >> 8 & 0xff00ff) * iVar14;
            iVar8 = 0x100 - (uVar6 >> 0x18);
            uVar7 = *puVar5;
            uVar15 = ((uVar7 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) +
                     ((unaff_EBX[2] & 0xff00ffU) * iVar14 >> 8 & 0xff00ff);
            uVar7 = (uVar6 >> 8 & 0xff00ff) + ((uVar7 >> 8 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
            *puVar5 = ((0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) << 8 ^
                      (0x100 - (uVar15 >> 8 & 0xff00ff) | uVar15)) & 0xff00ff ^
                      ((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100);
          }
        }
        iVar8 = FUN_00440367(local_2c);
        for (iVar14 = FUN_00439b5a(iVar17); iVar14 < iVar8; iVar14 = iVar14 + 1) {
          piVar11 = (int *)*unaff_EBX;
          iVar17 = piVar11[2] * iVar14 + *piVar11;
          unaff_EBX[1] = iVar17;
          if (bVar2) {
            puVar5 = (uint *)(piVar11[3] * local_24 + iVar17);
            uVar6 = ((uint)unaff_EBX[2] >> 8 & 0xff00ff) * local_14;
            iVar17 = 0x100 - (uVar6 >> 0x18);
            uVar7 = *puVar5;
            uVar15 = ((uVar7 & 0xff00ff) * iVar17 >> 8 & 0xff00ff) +
                     ((unaff_EBX[2] & 0xff00ffU) * local_14 >> 8 & 0xff00ff);
            uVar7 = (uVar6 >> 8 & 0xff00ff) + ((uVar7 >> 8 & 0xff00ff) * iVar17 >> 8 & 0xff00ff);
            *puVar5 = ((0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) << 8 ^
                      (0x100 - (uVar15 >> 8 & 0xff00ff) | uVar15)) & 0xff00ff ^
                      ((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100);
          }
          if (0 < iVar10) {
            iVar17 = *(int *)(*unaff_EBX + 0xc);
            piVar11 = (int *)(iVar17 * iVar9 + unaff_EBX[1]);
            if (*(char *)((int)unaff_EBX + 0xb) == -1) {
              iVar1 = unaff_EBX[2];
              local_54 = iVar10;
              do {
                *piVar11 = iVar1;
                piVar11 = (int *)((int)piVar11 + iVar17);
                local_54 = local_54 + -1;
              } while (0 < local_54);
            }
            else {
              FUN_004be2cb(piVar11,unaff_EBX[2],iVar10);
            }
          }
          if (bVar3) {
            puVar5 = (uint *)(*(int *)(*unaff_EBX + 0xc) * local_30 + unaff_EBX[1]);
            uVar6 = ((uint)unaff_EBX[2] >> 8 & 0xff00ff) * local_c;
            iVar17 = 0x100 - (uVar6 >> 0x18);
            uVar7 = *puVar5;
            uVar15 = ((unaff_EBX[2] & 0xff00ffU) * local_c >> 8 & 0xff00ff) +
                     ((uVar7 & 0xff00ff) * iVar17 >> 8 & 0xff00ff);
            uVar7 = (uVar6 >> 8 & 0xff00ff) + ((uVar7 >> 8 & 0xff00ff) * iVar17 >> 8 & 0xff00ff);
            *puVar5 = ((0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) << 8 ^
                      (0x100 - (uVar15 >> 8 & 0xff00ff) | uVar15)) & 0xff00ff ^
                      ((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100);
          }
        }
        if ((local_10 != 0) && (local_2c < iVar13)) {
          piVar11 = (int *)*unaff_EBX;
          iVar14 = piVar11[2] * local_2c + *piVar11;
          unaff_EBX[1] = iVar14;
          if (bVar2) {
            puVar5 = (uint *)(piVar11[3] * local_24 + iVar14);
            iVar14 = local_14 * local_10 >> 8;
            uVar7 = ((uint)unaff_EBX[2] >> 8 & 0xff00ff) * iVar14;
            iVar8 = 0x100 - (uVar7 >> 0x18);
            uVar6 = *puVar5;
            uVar7 = (uVar7 >> 8 & 0xff00ff) + ((uVar6 >> 8 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
            uVar6 = ((uVar6 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) +
                    ((unaff_EBX[2] & 0xff00ffU) * iVar14 >> 8 & 0xff00ff);
            *puVar5 = (((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100) ^
                      (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6)) & 0xff00ff ^
                      ((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100);
          }
          if (0 < iVar10) {
            uVar7 = unaff_EBX[2];
            iVar14 = local_10 + 1;
            uVar6 = (uVar7 >> 8 & 0xff00ff) * iVar14;
            uVar7 = ((uVar7 & 0xff00ff) * iVar14 >> 8 ^ (uVar7 >> 8 & 0xffff00ff) * iVar14) &
                    0xff00ff ^ uVar6;
            iVar14 = *(int *)(*unaff_EBX + 0xc);
            puVar5 = (uint *)(iVar14 * iVar9 + unaff_EBX[1]);
            local_54 = iVar10;
            if ((char)(uVar6 >> 0x18) == -1) {
              do {
                *puVar5 = uVar7;
                puVar5 = (uint *)((int)puVar5 + iVar14);
                local_54 = local_54 + -1;
              } while (0 < local_54);
            }
            else {
              FUN_004be2cb(puVar5,uVar7,iVar10);
            }
          }
          if (bVar3) {
            puVar5 = (uint *)(*(int *)(*unaff_EBX + 0xc) * local_30 + unaff_EBX[1]);
            iVar14 = local_c * local_10 >> 8;
            uVar7 = ((uint)unaff_EBX[2] >> 8 & 0xff00ff) * iVar14;
            iVar8 = 0x100 - (uVar7 >> 0x18);
            uVar6 = ((*puVar5 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) +
                    ((unaff_EBX[2] & 0xff00ffU) * iVar14 >> 8 & 0xff00ff);
            uVar7 = (uVar7 >> 8 & 0xff00ff) + ((*puVar5 >> 8 & 0xff00ff) * iVar8 >> 8 & 0xff00ff);
            uVar6 = (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) << 8 ^
                    (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6);
            uVar7 = (0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100;
            goto LAB_004b63f1;
          }
        }
      }
      else {
        if ((local_18 != 0) && (iVar17 <= local_28)) {
          piVar11 = (int *)*unaff_EBX;
          iVar14 = *piVar11 + piVar11[2] * local_28;
          unaff_EBX[1] = iVar14;
          puVar5 = (uint *)(piVar11[3] * local_38 + iVar14);
          uVar6 = ((uint)unaff_EBX[2] >> 8 & 0xff00ff) * local_18;
          iVar14 = 0x100 - (uVar6 >> 0x18);
          uVar7 = *puVar5;
          uVar15 = ((uVar7 & 0xff00ff) * iVar14 >> 8 & 0xff00ff) +
                   ((unaff_EBX[2] & 0xff00ffU) * local_18 >> 8 & 0xff00ff);
          uVar7 = (uVar6 >> 8 & 0xff00ff) + ((uVar7 >> 8 & 0xff00ff) * iVar14 >> 8 & 0xff00ff);
          *puVar5 = ((0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) << 8 ^
                    (0x100 - (uVar15 >> 8 & 0xff00ff) | uVar15)) & 0xff00ff ^
                    ((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100);
        }
        iVar14 = FUN_00440367(local_2c);
        for (iVar8 = FUN_00439b5a(iVar17); iVar8 < iVar14; iVar8 = iVar8 + 1) {
          piVar11 = (int *)*unaff_EBX;
          iVar17 = piVar11[2] * iVar8 + *piVar11;
          unaff_EBX[1] = iVar17;
          puVar5 = (uint *)(piVar11[3] * local_38 + iVar17);
          uVar6 = *puVar5;
          iVar17 = 0x100 - ((uint)unaff_EBX[2] >> 0x18);
          uVar7 = ((uint)unaff_EBX[2] >> 8 & 0xff00ff) +
                  ((uVar6 >> 8 & 0xff00ff) * iVar17 >> 8 & 0xff00ff);
          uVar6 = ((uVar6 & 0xff00ff) * iVar17 >> 8 & 0xff00ff) + (unaff_EBX[2] & 0xff00ffU);
          *puVar5 = (((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100) ^
                    (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6)) & 0xff00ff ^
                    ((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100);
        }
        if ((local_10 != 0) && (local_2c < iVar13)) {
          piVar11 = (int *)*unaff_EBX;
          iVar14 = *piVar11 + piVar11[2] * local_2c;
          unaff_EBX[1] = iVar14;
          puVar5 = (uint *)(piVar11[3] * local_38 + iVar14);
          uVar7 = ((uint)unaff_EBX[2] >> 8 & 0xff00ff) * local_10;
          iVar14 = 0x100 - (uVar7 >> 0x18);
          uVar6 = ((*puVar5 & 0xff00ff) * iVar14 >> 8 & 0xff00ff) +
                  ((unaff_EBX[2] & 0xff00ffU) * local_10 >> 8 & 0xff00ff);
          uVar7 = (uVar7 >> 8 & 0xff00ff) + ((*puVar5 >> 8 & 0xff00ff) * iVar14 >> 8 & 0xff00ff);
          uVar6 = (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) << 8 ^
                  (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6);
          uVar7 = (0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100;
LAB_004b63f1:
          *puVar5 = uVar6 & 0xff00ff ^ uVar7;
        }
      }
    }
    piVar12 = piVar12 + 4;
  } while( true );
}


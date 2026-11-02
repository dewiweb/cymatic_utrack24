// rea decompile_all
// name: FUN_004b6412
// address: 0x4b6412
// body: available
// range: 0x4b6412-0x4b7024 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b6412(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar11;
  int *in_EAX;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int *unaff_EDI;
  uint local_60;
  int *local_5c;
  int local_58;
  byte local_50;
  undefined1 uStack_4e;
  undefined1 uStack_4a;
  byte local_48;
  undefined1 uStack_46;
  int local_44;
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
  piVar1 = *(int **)*in_EAX;
  piVar12 = piVar1 + ((int *)*in_EAX)[2] * 4;
  do {
    if (piVar1 == piVar12) {
      return;
    }
    iVar13 = *piVar1;
    iVar17 = piVar1[2];
    iVar18 = piVar1[1];
    iVar6 = piVar1[3] + iVar18;
    if ((((iVar18 < local_20) && (local_28 < iVar6)) && (*piVar1 < local_1c)) &&
       (local_24 < iVar17 + iVar13)) {
      cVar4 = FUN_004752d2();
      if (cVar4 == '\0') {
        iVar8 = FUN_00439b5a(local_38);
        iVar9 = FUN_00440367(local_30);
        uVar14 = iVar9 - iVar8;
        if ((local_14 == 0) || (bVar2 = true, local_24 < *piVar1)) {
          bVar2 = false;
        }
        if ((local_c == 0) || (bVar3 = true, iVar17 + iVar13 <= local_30)) {
          bVar3 = false;
        }
        local_60 = uVar14;
        if ((local_18 != 0) && (iVar18 <= local_28)) {
          piVar10 = (int *)*unaff_EDI;
          iVar13 = *piVar10 + piVar10[2] * local_28;
          unaff_EDI[1] = iVar13;
          if (bVar2) {
            pbVar7 = (byte *)(piVar10[3] * local_24 + iVar13);
            iVar17 = local_14 * local_18 >> 8;
            uVar15 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) * iVar17;
            iVar9 = 0x100 - (uVar15 >> 0x18);
            iVar13 = ((uint)pbVar7[1] * iVar9 >> 8) + (uVar15 >> 8 & 0xff00ff);
            uVar15 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar9 >> 8 & 0xff00ff) +
                     ((unaff_EDI[2] & 0xff00ffU) * iVar17 >> 8 & 0xff00ff);
            uVar15 = (0x100 - (uVar15 >> 8 & 0xff00ff) | uVar15) & 0xff00ff;
            local_50 = (byte)iVar13;
            pbVar7[1] = -(char)((uint)iVar13 >> 8) | local_50;
            pbVar7[2] = (byte)(uVar15 >> 0x10);
            *pbVar7 = (byte)uVar15;
          }
          if (0 < (int)uVar14) {
            uVar15 = unaff_EDI[2];
            iVar13 = local_18 + 1;
            uVar16 = (uVar15 >> 8 & 0xff00ff) * iVar13;
            uVar15 = ((uVar15 & 0xff00ff) * iVar13 >> 8 ^ (uVar15 >> 8 & 0xffff00ff) * iVar13) &
                     0xff00ff ^ uVar16;
            iVar13 = *(int *)(*unaff_EDI + 0xc);
            local_5c = (int *)(iVar13 * iVar8 + unaff_EDI[1]);
            if ((char)(uVar16 >> 0x18) == -1) {
              uVar5 = (undefined1)uVar15;
              uVar11 = (undefined1)(uVar16 >> 8);
              uStack_4e = (undefined1)(uVar15 >> 0x10);
              if (iVar13 == 3) {
                if ((char)unaff_EDI[6] == '\0') {
                  if ((uVar14 & 0xffffffe0) != 0) {
                    for (; (8 < (int)local_60 && (((uint)local_5c & 7) != 0));
                        local_5c = (int *)((int)local_5c + 3)) {
                      *(undefined1 *)local_5c = uVar5;
                      *(undefined1 *)((int)local_5c + 1) = uVar11;
                      *(undefined1 *)((int)local_5c + 2) = uStack_4e;
                      local_60 = local_60 - 1;
                    }
                    if (4 < (int)local_60) {
                      local_58 = (local_60 - 5 >> 2) + 1;
                      local_60 = local_60 + local_58 * -4;
                      do {
                        *local_5c = unaff_EDI[3];
                        local_5c[1] = unaff_EDI[4];
                        local_5c[2] = unaff_EDI[5];
                        local_5c = local_5c + 3;
                        local_58 = local_58 + -1;
                      } while (local_58 != 0);
                    }
                  }
                  while (local_60 = local_60 - 1, -1 < (int)local_60) {
                    *(undefined1 *)local_5c = uVar5;
                    *(undefined1 *)((int)local_5c + 1) = uVar11;
                    *(undefined1 *)((int)local_5c + 2) = uStack_4e;
                    local_5c = (int *)((int)local_5c + 3);
                  }
                }
                else {
                  _memset(local_5c,uVar15 >> 0x10 & 0xff,uVar14 * 3);
                }
              }
              else {
                do {
                  *(undefined1 *)local_5c = uVar5;
                  *(undefined1 *)((int)local_5c + 1) = uVar11;
                  *(undefined1 *)((int)local_5c + 2) = uStack_4e;
                  local_5c = (int *)((int)local_5c + iVar13);
                  local_60 = local_60 - 1;
                } while (0 < (int)local_60);
              }
            }
            else {
              FUN_004be37c(uVar15,uVar14);
            }
          }
          if (bVar3) {
            pbVar7 = (byte *)(*(int *)(*unaff_EDI + 0xc) * local_30 + unaff_EDI[1]);
            iVar17 = local_c * local_18 >> 8;
            uVar15 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) * iVar17;
            iVar9 = 0x100 - (uVar15 >> 0x18);
            iVar13 = ((uint)pbVar7[1] * iVar9 >> 8) + (uVar15 >> 8 & 0xff00ff);
            uVar15 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar9 >> 8 & 0xff00ff) +
                     ((unaff_EDI[2] & 0xff00ffU) * iVar17 >> 8 & 0xff00ff);
            uVar15 = (0x100 - (uVar15 >> 8 & 0xff00ff) | uVar15) & 0xff00ff;
            local_50 = (byte)iVar13;
            pbVar7[1] = -(char)((uint)iVar13 >> 8) | local_50;
            pbVar7[2] = (byte)(uVar15 >> 0x10);
            *pbVar7 = (byte)uVar15;
          }
        }
        iVar17 = FUN_00440367(local_2c);
        for (iVar13 = FUN_00439b5a(iVar18); iVar13 < iVar17; iVar13 = iVar13 + 1) {
          piVar10 = (int *)*unaff_EDI;
          iVar18 = piVar10[2] * iVar13 + *piVar10;
          unaff_EDI[1] = iVar18;
          if (bVar2) {
            pbVar7 = (byte *)(piVar10[3] * local_24 + iVar18);
            uVar15 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) * local_14;
            iVar9 = 0x100 - (uVar15 >> 0x18);
            iVar18 = ((uint)pbVar7[1] * iVar9 >> 8) + (uVar15 >> 8 & 0xff00ff);
            uVar15 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar9 >> 8 & 0xff00ff) +
                     ((unaff_EDI[2] & 0xff00ffU) * local_14 >> 8 & 0xff00ff);
            uVar15 = (0x100 - (uVar15 >> 8 & 0xff00ff) | uVar15) & 0xff00ff;
            local_48 = (byte)iVar18;
            pbVar7[1] = -(char)((uint)iVar18 >> 8) | local_48;
            pbVar7[2] = (byte)(uVar15 >> 0x10);
            *pbVar7 = (byte)uVar15;
          }
          if (0 < (int)uVar14) {
            iVar18 = *(int *)(*unaff_EDI + 0xc);
            piVar10 = (int *)(iVar18 * iVar8 + unaff_EDI[1]);
            if (*(char *)((int)unaff_EDI + 0xb) == -1) {
              uVar15 = unaff_EDI[2];
              uVar5 = (undefined1)uVar15;
              uVar11 = (undefined1)(uVar15 >> 8);
              uStack_46 = (undefined1)(uVar15 >> 0x10);
              local_60 = uVar14;
              if (iVar18 == 3) {
                if ((char)unaff_EDI[6] == '\0') {
                  if ((uVar14 & 0xffffffe0) != 0) {
                    for (; (8 < (int)local_60 && (((uint)piVar10 & 7) != 0));
                        piVar10 = (int *)((int)piVar10 + 3)) {
                      *(undefined1 *)piVar10 = uVar5;
                      *(undefined1 *)((int)piVar10 + 1) = uVar11;
                      *(undefined1 *)((int)piVar10 + 2) = uStack_46;
                      local_60 = local_60 - 1;
                    }
                    if (4 < (int)local_60) {
                      local_58 = (local_60 - 5 >> 2) + 1;
                      local_60 = local_60 + local_58 * -4;
                      do {
                        *piVar10 = unaff_EDI[3];
                        piVar10[1] = unaff_EDI[4];
                        piVar10[2] = unaff_EDI[5];
                        piVar10 = piVar10 + 3;
                        local_58 = local_58 + -1;
                      } while (local_58 != 0);
                    }
                  }
                  while (local_60 = local_60 - 1, -1 < (int)local_60) {
                    *(undefined1 *)piVar10 = uVar5;
                    *(undefined1 *)((int)piVar10 + 1) = uVar11;
                    *(undefined1 *)((int)piVar10 + 2) = uStack_46;
                    piVar10 = (int *)((int)piVar10 + 3);
                  }
                }
                else {
                  _memset(piVar10,uVar15 >> 0x10 & 0xff,uVar14 * 3);
                }
              }
              else {
                do {
                  *(undefined1 *)piVar10 = uVar5;
                  *(undefined1 *)((int)piVar10 + 1) = uVar11;
                  *(undefined1 *)((int)piVar10 + 2) = uStack_46;
                  piVar10 = (int *)((int)piVar10 + iVar18);
                  local_60 = local_60 - 1;
                } while (0 < (int)local_60);
              }
            }
            else {
              FUN_004be37c(unaff_EDI[2],uVar14);
            }
          }
          if (bVar3) {
            uVar15 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) * local_c;
            pbVar7 = (byte *)(*(int *)(*unaff_EDI + 0xc) * local_30 + unaff_EDI[1]);
            iVar9 = 0x100 - (uVar15 >> 0x18);
            iVar18 = ((uint)pbVar7[1] * iVar9 >> 8) + (uVar15 >> 8 & 0xff00ff);
            uVar15 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar9 >> 8 & 0xff00ff) +
                     ((unaff_EDI[2] & 0xff00ffU) * local_c >> 8 & 0xff00ff);
            uVar15 = (0x100 - (uVar15 >> 8 & 0xff00ff) | uVar15) & 0xff00ff;
            local_48 = (byte)iVar18;
            pbVar7[1] = -(char)((uint)iVar18 >> 8) | local_48;
            pbVar7[2] = (byte)(uVar15 >> 0x10);
            *pbVar7 = (byte)uVar15;
          }
        }
        if ((local_10 != 0) && (local_2c < iVar6)) {
          piVar10 = (int *)*unaff_EDI;
          iVar13 = *piVar10 + piVar10[2] * local_2c;
          unaff_EDI[1] = iVar13;
          if (bVar2) {
            pbVar7 = (byte *)(piVar10[3] * local_24 + iVar13);
            iVar17 = local_14 * local_10 >> 8;
            uVar15 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) * iVar17;
            iVar18 = 0x100 - (uVar15 >> 0x18);
            iVar13 = ((uint)pbVar7[1] * iVar18 >> 8) + (uVar15 >> 8 & 0xff00ff);
            uVar15 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar18 >> 8 & 0xff00ff) +
                     ((unaff_EDI[2] & 0xff00ffU) * iVar17 >> 8 & 0xff00ff);
            uVar15 = (0x100 - (uVar15 >> 8 & 0xff00ff) | uVar15) & 0xff00ff;
            local_48 = (byte)iVar13;
            pbVar7[1] = -(char)((uint)iVar13 >> 8) | local_48;
            pbVar7[2] = (byte)(uVar15 >> 0x10);
            *pbVar7 = (byte)uVar15;
          }
          if (0 < (int)uVar14) {
            uVar15 = unaff_EDI[2];
            iVar13 = local_10 + 1;
            uVar16 = (uVar15 >> 8 & 0xff00ff) * iVar13;
            uVar15 = ((uVar15 & 0xff00ff) * iVar13 >> 8 ^ (uVar15 >> 8 & 0xffff00ff) * iVar13) &
                     0xff00ff ^ uVar16;
            iVar13 = *(int *)(*unaff_EDI + 0xc);
            local_5c = (int *)(iVar13 * iVar8 + unaff_EDI[1]);
            if ((char)(uVar16 >> 0x18) == -1) {
              uVar5 = (undefined1)uVar15;
              uVar11 = (undefined1)(uVar16 >> 8);
              uStack_4a = (undefined1)(uVar15 >> 0x10);
              local_60 = uVar14;
              if (iVar13 == 3) {
                if ((char)unaff_EDI[6] == '\0') {
                  if ((uVar14 & 0xffffffe0) != 0) {
                    for (; (8 < (int)local_60 && (((uint)local_5c & 7) != 0));
                        local_5c = (int *)((int)local_5c + 3)) {
                      *(undefined1 *)local_5c = uVar5;
                      *(undefined1 *)((int)local_5c + 1) = uVar11;
                      *(undefined1 *)((int)local_5c + 2) = uStack_4a;
                      local_60 = local_60 - 1;
                    }
                    if (4 < (int)local_60) {
                      local_44 = (local_60 - 5 >> 2) + 1;
                      local_60 = local_60 + local_44 * -4;
                      do {
                        *local_5c = unaff_EDI[3];
                        local_5c[1] = unaff_EDI[4];
                        local_5c[2] = unaff_EDI[5];
                        local_5c = local_5c + 3;
                        local_44 = local_44 + -1;
                      } while (local_44 != 0);
                    }
                  }
                  while (local_60 = local_60 - 1, -1 < (int)local_60) {
                    *(undefined1 *)local_5c = uVar5;
                    *(undefined1 *)((int)local_5c + 1) = uVar11;
                    *(undefined1 *)((int)local_5c + 2) = uStack_4a;
                    local_5c = (int *)((int)local_5c + 3);
                  }
                }
                else {
                  _memset(local_5c,uVar15 >> 0x10 & 0xff,uVar14 * 3);
                }
              }
              else {
                do {
                  *(undefined1 *)local_5c = uVar5;
                  *(undefined1 *)((int)local_5c + 1) = uVar11;
                  *(undefined1 *)((int)local_5c + 2) = uStack_4a;
                  local_5c = (int *)((int)local_5c + iVar13);
                  local_60 = local_60 - 1;
                } while (0 < (int)local_60);
              }
            }
            else {
              FUN_004be37c(uVar15,uVar14);
            }
          }
          if (bVar3) {
            pbVar7 = (byte *)(*(int *)(*unaff_EDI + 0xc) * local_30 + unaff_EDI[1]);
            iVar17 = local_c * local_10 >> 8;
            uVar14 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) * iVar17;
            iVar18 = 0x100 - (uVar14 >> 0x18);
            iVar13 = ((uint)pbVar7[1] * iVar18 >> 8) + (uVar14 >> 8 & 0xff00ff);
            uVar14 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar18 >> 8 & 0xff00ff) +
                     ((unaff_EDI[2] & 0xff00ffU) * iVar17 >> 8 & 0xff00ff);
            uVar14 = 0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14;
            local_44._0_1_ = (byte)iVar13;
            pbVar7[1] = -(char)((uint)iVar13 >> 8) | (byte)local_44;
            goto LAB_004b7002;
          }
        }
      }
      else {
        if ((local_18 != 0) && (iVar18 <= local_28)) {
          piVar10 = (int *)*unaff_EDI;
          iVar13 = *piVar10 + piVar10[2] * local_28;
          unaff_EDI[1] = iVar13;
          pbVar7 = (byte *)(piVar10[3] * local_38 + iVar13);
          uVar14 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) * local_18;
          iVar17 = 0x100 - (uVar14 >> 0x18);
          iVar13 = ((uint)pbVar7[1] * iVar17 >> 8) + (uVar14 >> 8 & 0xff00ff);
          uVar14 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar17 >> 8 & 0xff00ff) +
                   ((unaff_EDI[2] & 0xff00ffU) * local_18 >> 8 & 0xff00ff);
          uVar14 = (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14) & 0xff00ff;
          local_44._0_1_ = (byte)iVar13;
          pbVar7[1] = -(char)((uint)iVar13 >> 8) | (byte)local_44;
          pbVar7[2] = (byte)(uVar14 >> 0x10);
          *pbVar7 = (byte)uVar14;
        }
        iVar17 = FUN_00440367(local_2c);
        for (iVar13 = FUN_00439b5a(iVar18); iVar13 < iVar17; iVar13 = iVar13 + 1) {
          piVar10 = (int *)*unaff_EDI;
          iVar18 = *piVar10 + piVar10[2] * iVar13;
          unaff_EDI[1] = iVar18;
          pbVar7 = (byte *)(piVar10[3] * local_38 + iVar18);
          iVar18 = 0x100 - (uint)*(byte *)((int)unaff_EDI + 0xb);
          uVar14 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar18 >> 8 & 0xff00ff) +
                   (unaff_EDI[2] & 0xff00ffU);
          uVar14 = (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14) & 0xff00ff;
          iVar18 = ((uint)pbVar7[1] * iVar18 >> 8) + ((uint)unaff_EDI[2] >> 8 & 0xff00ff);
          pbVar7[1] = -(char)((uint)iVar18 >> 8) | (byte)iVar18;
          *pbVar7 = (byte)uVar14;
          pbVar7[2] = (byte)(uVar14 >> 0x10);
        }
        if ((local_10 != 0) && (local_2c < iVar6)) {
          piVar10 = (int *)*unaff_EDI;
          iVar13 = piVar10[2] * local_2c + *piVar10;
          unaff_EDI[1] = iVar13;
          pbVar7 = (byte *)(piVar10[3] * local_38 + iVar13);
          uVar14 = ((uint)unaff_EDI[2] >> 8 & 0xff00ff) * local_10;
          iVar17 = 0x100 - (uVar14 >> 0x18);
          iVar13 = ((uint)pbVar7[1] * iVar17 >> 8) + (uVar14 >> 8 & 0xff00ff);
          uVar14 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar17 >> 8 & 0xff00ff) +
                   ((unaff_EDI[2] & 0xff00ffU) * local_10 >> 8 & 0xff00ff);
          uVar14 = 0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14;
          local_44._0_1_ = (byte)iVar13;
          pbVar7[1] = -(char)((uint)iVar13 >> 8) | (byte)local_44;
LAB_004b7002:
          *pbVar7 = (byte)(uVar14 & 0xff00ff);
          pbVar7[2] = (byte)((uVar14 & 0xff00ff) >> 0x10);
        }
      }
    }
    piVar1 = piVar1 + 4;
  } while( true );
}


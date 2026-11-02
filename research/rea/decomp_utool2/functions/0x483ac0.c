// rea decompile_all
// name: FUN_00483ac0
// address: 0x483ac0
// body: available
// range: 0x483ac0-0x484697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00483ac0(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined1 uVar13;
  int *in_ECX;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  byte *pbVar18;
  int iVar19;
  undefined1 uStack_4e;
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
  piVar17 = (int *)*in_ECX;
  iVar1 = piVar17[2];
  iVar2 = *piVar17;
  for (piVar17 = (int *)*piVar17; piVar17 != (int *)(iVar1 * 0x10 + iVar2); piVar17 = piVar17 + 4) {
    iVar6 = piVar17[1];
    iVar5 = *piVar17;
    iVar10 = piVar17[2] + iVar5;
    iVar16 = piVar17[3] + iVar6;
    if ((((iVar6 < local_20) && (local_28 < iVar16)) && (iVar5 < local_1c)) && (local_24 < iVar10))
    {
      if ((local_30 - local_38 == 1) && (local_c + local_14 == 0)) {
        if ((local_18 != 0) && (iVar6 <= local_28)) {
          piVar15 = (int *)*param_1;
          iVar5 = *piVar15 + piVar15[2] * local_28;
          param_1[1] = iVar5;
          pbVar18 = (byte *)(piVar15[3] * local_38 + iVar5);
          uVar14 = ((uint)param_1[2] >> 8 & 0xff00ff) * local_18;
          iVar5 = 0x100 - (uVar14 >> 0x18);
          iVar10 = ((uint)pbVar18[1] * iVar5 >> 8) + (uVar14 >> 8 & 0xff00ff);
          uVar14 = (((uint)pbVar18[2] << 0x10 | (uint)*pbVar18) * iVar5 >> 8 & 0xff00ff) +
                   ((param_1[2] & 0xff00ffU) * local_18 >> 8 & 0xff00ff);
          uVar14 = (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14) & 0xff00ff;
          *pbVar18 = (byte)uVar14;
          pbVar18[1] = -(char)((uint)iVar10 >> 8) | (byte)iVar10;
          pbVar18[2] = (byte)(uVar14 >> 0x10);
        }
        iVar5 = local_2c;
        if (iVar16 < local_2c) {
          iVar5 = iVar16;
        }
        if (iVar6 < local_34) {
          iVar6 = local_34;
        }
        for (; iVar6 < iVar5; iVar6 = iVar6 + 1) {
          piVar15 = (int *)*param_1;
          iVar10 = *piVar15 + piVar15[2] * iVar6;
          param_1[1] = iVar10;
          pbVar18 = (byte *)(piVar15[3] * local_38 + iVar10);
          uVar14 = param_1[2];
          iVar10 = 0x100 - (uint)*(byte *)((int)param_1 + 0xb);
          uVar11 = (((uint)pbVar18[2] << 0x10 | (uint)*pbVar18) * iVar10 >> 8 & 0xff00ff) +
                   (uVar14 & 0xff00ff);
          uVar11 = (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11) & 0xff00ff;
          *pbVar18 = (byte)uVar11;
          iVar10 = ((uint)pbVar18[1] * iVar10 >> 8) + (uVar14 >> 8 & 0xff00ff);
          pbVar18[1] = -(char)((uint)iVar10 >> 8) | (byte)iVar10;
          pbVar18[2] = (byte)(uVar11 >> 0x10);
        }
        if ((local_10 != 0) && (local_2c < iVar16)) {
          piVar15 = (int *)*param_1;
          iVar6 = *piVar15 + piVar15[2] * local_2c;
          param_1[1] = iVar6;
          pbVar18 = (byte *)(piVar15[3] * local_38 + iVar6);
          uVar14 = ((uint)param_1[2] >> 8 & 0xff00ff) * local_10;
          iVar6 = 0x100 - (uVar14 >> 0x18);
          iVar5 = ((uint)pbVar18[1] * iVar6 >> 8) + (uVar14 >> 8 & 0xff00ff);
          uVar14 = (((uint)pbVar18[2] << 0x10 | (uint)*pbVar18) * iVar6 >> 8 & 0xff00ff) +
                   ((param_1[2] & 0xff00ffU) * local_10 >> 8 & 0xff00ff);
          uVar14 = (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14) & 0xff00ff;
          *pbVar18 = (byte)uVar14;
          pbVar18[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
          pbVar18[2] = (byte)(uVar14 >> 0x10);
        }
      }
      else {
        iVar7 = local_38;
        if (local_38 < iVar5) {
          iVar7 = iVar5;
        }
        iVar19 = local_30;
        if (iVar10 < local_30) {
          iVar19 = iVar10;
        }
        uVar14 = iVar19 - iVar7;
        if ((local_14 == 0) || (local_24 < iVar5)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((local_c == 0) || (bVar3 = true, iVar10 <= local_30)) {
          bVar3 = false;
        }
        if ((local_18 != 0) && (iVar6 <= local_28)) {
          piVar15 = (int *)*param_1;
          iVar5 = *piVar15 + piVar15[2] * local_28;
          param_1[1] = iVar5;
          if (bVar4) {
            iVar19 = local_14 * local_18 >> 8;
            uVar11 = ((uint)param_1[2] >> 8 & 0xff00ff) * iVar19;
            pbVar18 = (byte *)(piVar15[3] * local_24 + iVar5);
            iVar5 = 0x100 - (uVar11 >> 0x18);
            iVar10 = ((uint)pbVar18[1] * iVar5 >> 8) + (uVar11 >> 8 & 0xff00ff);
            uVar11 = (((uint)pbVar18[2] << 0x10 | (uint)*pbVar18) * iVar5 >> 8 & 0xff00ff) +
                     ((param_1[2] & 0xff00ffU) * iVar19 >> 8 & 0xff00ff);
            uVar11 = (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11) & 0xff00ff;
            pbVar18[1] = -(char)((uint)iVar10 >> 8) | (byte)iVar10;
            pbVar18[2] = (byte)(uVar11 >> 0x10);
            *pbVar18 = (byte)uVar11;
          }
          if (0 < (int)uVar14) {
            uVar11 = param_1[2];
            iVar5 = local_18 + 1;
            uVar8 = (uVar11 >> 8 & 0xff00ff) * iVar5;
            uVar11 = ((uVar11 & 0xff00ff) * iVar5 >> 8 ^ (uVar11 >> 8 & 0xffff00ff) * iVar5) &
                     0xff00ff ^ uVar8;
            iVar5 = *(int *)(*param_1 + 0xc);
            piVar15 = (int *)(iVar5 * iVar7 + param_1[1]);
            if ((char)(uVar8 >> 0x18) == -1) {
              uVar9 = (undefined1)uVar11;
              uVar13 = (undefined1)(uVar8 >> 8);
              uStack_4e = (undefined1)(uVar11 >> 0x10);
              uVar8 = uVar14;
              if (iVar5 == 3) {
                if ((char)param_1[6] == '\0') {
                  uVar11 = uVar14;
                  if ((uVar14 & 0xffffffe0) != 0) {
                    for (; (8 < (int)uVar11 && (((uint)piVar15 & 7) != 0));
                        piVar15 = (int *)((int)piVar15 + 3)) {
                      *(undefined1 *)piVar15 = uVar9;
                      *(undefined1 *)((int)piVar15 + 1) = uVar13;
                      *(undefined1 *)((int)piVar15 + 2) = uStack_4e;
                      uVar11 = uVar11 - 1;
                    }
                    if (4 < (int)uVar11) {
                      iVar5 = (uVar11 - 5 >> 2) + 1;
                      uVar11 = uVar11 + iVar5 * -4;
                      do {
                        *piVar15 = param_1[3];
                        piVar15[1] = param_1[4];
                        piVar15[2] = param_1[5];
                        piVar15 = piVar15 + 3;
                        iVar5 = iVar5 + -1;
                      } while (iVar5 != 0);
                    }
                  }
                  iVar5 = uVar11 - 1;
                  if (-1 < iVar5) {
                    puVar12 = (undefined1 *)((int)piVar15 + 2);
                    do {
                      iVar5 = iVar5 + -1;
                      puVar12[-2] = uVar9;
                      puVar12[-1] = uVar13;
                      *puVar12 = uStack_4e;
                      puVar12 = puVar12 + 3;
                    } while (-1 < iVar5);
                  }
                }
                else {
                  _memset(piVar15,uVar11 >> 0x10 & 0xff,uVar14 * 3);
                }
              }
              else {
                do {
                  uVar8 = uVar8 - 1;
                  *(undefined1 *)piVar15 = uVar9;
                  *(undefined1 *)((int)piVar15 + 1) = uVar13;
                  *(undefined1 *)((int)piVar15 + 2) = uStack_4e;
                  piVar15 = (int *)((int)piVar15 + iVar5);
                } while (0 < (int)uVar8);
              }
            }
            else {
              FUN_0048b420(piVar15,uVar11,uVar14);
            }
          }
          if (bVar3) {
            iVar19 = local_c * local_18 >> 8;
            pbVar18 = (byte *)(*(int *)(*param_1 + 0xc) * local_30 + param_1[1]);
            uVar11 = ((uint)param_1[2] >> 8 & 0xff00ff) * iVar19;
            iVar5 = 0x100 - (uVar11 >> 0x18);
            iVar10 = ((uint)pbVar18[1] * iVar5 >> 8) + (uVar11 >> 8 & 0xff00ff);
            uVar11 = (((uint)pbVar18[2] << 0x10 | (uint)*pbVar18) * iVar5 >> 8 & 0xff00ff) +
                     ((param_1[2] & 0xff00ffU) * iVar19 >> 8 & 0xff00ff);
            uVar11 = (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11) & 0xff00ff;
            pbVar18[1] = -(char)((uint)iVar10 >> 8) | (byte)iVar10;
            pbVar18[2] = (byte)(uVar11 >> 0x10);
            *pbVar18 = (byte)uVar11;
          }
        }
        iVar5 = local_2c;
        if (iVar16 < local_2c) {
          iVar5 = iVar16;
        }
        if (iVar6 < local_34) {
          iVar6 = local_34;
        }
        for (; iVar6 < iVar5; iVar6 = iVar6 + 1) {
          piVar15 = (int *)*param_1;
          iVar10 = *piVar15 + piVar15[2] * iVar6;
          param_1[1] = iVar10;
          if (bVar4) {
            pbVar18 = (byte *)(piVar15[3] * local_24 + iVar10);
            uVar11 = ((uint)param_1[2] >> 8 & 0xff00ff) * local_14;
            iVar10 = 0x100 - (uVar11 >> 0x18);
            iVar19 = ((uint)pbVar18[1] * iVar10 >> 8) + (uVar11 >> 8 & 0xff00ff);
            uVar11 = (((uint)pbVar18[2] << 0x10 | (uint)*pbVar18) * iVar10 >> 8 & 0xff00ff) +
                     ((param_1[2] & 0xff00ffU) * local_14 >> 8 & 0xff00ff);
            uVar11 = (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11) & 0xff00ff;
            *pbVar18 = (byte)uVar11;
            pbVar18[1] = -(char)((uint)iVar19 >> 8) | (byte)iVar19;
            pbVar18[2] = (byte)(uVar11 >> 0x10);
          }
          if (0 < (int)uVar14) {
            iVar10 = *(int *)(*param_1 + 0xc);
            piVar15 = (int *)(iVar10 * iVar7 + param_1[1]);
            if (*(char *)((int)param_1 + 0xb) == -1) {
              uVar11 = param_1[2];
              uVar9 = (undefined1)uVar11;
              uVar13 = (undefined1)(uVar11 >> 8);
              uStack_4e = (undefined1)(uVar11 >> 0x10);
              uVar8 = uVar14;
              if (iVar10 == 3) {
                if ((char)param_1[6] == '\0') {
                  uVar11 = uVar14;
                  if ((uVar14 & 0xffffffe0) != 0) {
                    for (; (8 < (int)uVar11 && (((uint)piVar15 & 7) != 0));
                        piVar15 = (int *)((int)piVar15 + 3)) {
                      *(undefined1 *)piVar15 = uVar9;
                      *(undefined1 *)((int)piVar15 + 1) = uVar13;
                      *(undefined1 *)((int)piVar15 + 2) = uStack_4e;
                      uVar11 = uVar11 - 1;
                    }
                    if (4 < (int)uVar11) {
                      iVar10 = (uVar11 - 5 >> 2) + 1;
                      uVar11 = uVar11 + iVar10 * -4;
                      do {
                        *piVar15 = param_1[3];
                        piVar15[1] = param_1[4];
                        piVar15[2] = param_1[5];
                        piVar15 = piVar15 + 3;
                        iVar10 = iVar10 + -1;
                      } while (iVar10 != 0);
                    }
                  }
                  iVar10 = uVar11 - 1;
                  if (-1 < iVar10) {
                    puVar12 = (undefined1 *)((int)piVar15 + 2);
                    do {
                      iVar10 = iVar10 + -1;
                      puVar12[-2] = uVar9;
                      puVar12[-1] = uVar13;
                      *puVar12 = uStack_4e;
                      puVar12 = puVar12 + 3;
                    } while (-1 < iVar10);
                  }
                }
                else {
                  _memset(piVar15,uVar11 >> 0x10 & 0xff,uVar14 * 3);
                }
              }
              else {
                do {
                  *(undefined1 *)piVar15 = uVar9;
                  uVar8 = uVar8 - 1;
                  *(undefined1 *)((int)piVar15 + 1) = uVar13;
                  *(undefined1 *)((int)piVar15 + 2) = uStack_4e;
                  piVar15 = (int *)((int)piVar15 + iVar10);
                } while (0 < (int)uVar8);
              }
            }
            else {
              FUN_0048b420(piVar15,param_1[2],uVar14);
            }
          }
          if (bVar3) {
            uVar11 = ((uint)param_1[2] >> 8 & 0xff00ff) * local_c;
            pbVar18 = (byte *)(*(int *)(*param_1 + 0xc) * local_30 + param_1[1]);
            iVar10 = 0x100 - (uVar11 >> 0x18);
            iVar19 = ((uint)pbVar18[1] * iVar10 >> 8) + (uVar11 >> 8 & 0xff00ff);
            uVar11 = (((uint)pbVar18[2] << 0x10 | (uint)*pbVar18) * iVar10 >> 8 & 0xff00ff) +
                     ((param_1[2] & 0xff00ffU) * local_c >> 8 & 0xff00ff);
            uVar11 = (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11) & 0xff00ff;
            *pbVar18 = (byte)uVar11;
            pbVar18[1] = -(char)((uint)iVar19 >> 8) | (byte)iVar19;
            pbVar18[2] = (byte)(uVar11 >> 0x10);
          }
        }
        if ((local_10 != 0) && (local_2c < iVar16)) {
          piVar15 = (int *)*param_1;
          iVar6 = *piVar15 + piVar15[2] * local_2c;
          param_1[1] = iVar6;
          if (bVar4) {
            pbVar18 = (byte *)(piVar15[3] * local_24 + iVar6);
            iVar10 = local_14 * local_10 >> 8;
            uVar11 = ((uint)param_1[2] >> 8 & 0xff00ff) * iVar10;
            iVar6 = 0x100 - (uVar11 >> 0x18);
            iVar5 = ((uint)pbVar18[1] * iVar6 >> 8) + (uVar11 >> 8 & 0xff00ff);
            uVar11 = (((uint)pbVar18[2] << 0x10 | (uint)*pbVar18) * iVar6 >> 8 & 0xff00ff) +
                     ((param_1[2] & 0xff00ffU) * iVar10 >> 8 & 0xff00ff);
            uVar11 = (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11) & 0xff00ff;
            pbVar18[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
            pbVar18[2] = (byte)(uVar11 >> 0x10);
            *pbVar18 = (byte)uVar11;
          }
          if (0 < (int)uVar14) {
            uVar11 = param_1[2];
            iVar6 = local_10 + 1;
            uVar8 = (uVar11 >> 8 & 0xff00ff) * iVar6;
            uVar11 = ((uVar11 & 0xff00ff) * iVar6 >> 8 ^ (uVar11 >> 8 & 0xffff00ff) * iVar6) &
                     0xff00ff ^ uVar8;
            iVar6 = *(int *)(*param_1 + 0xc);
            piVar15 = (int *)(iVar6 * iVar7 + param_1[1]);
            if ((char)(uVar8 >> 0x18) == -1) {
              uVar9 = (undefined1)uVar11;
              uVar13 = (undefined1)(uVar8 >> 8);
              uStack_4e = (undefined1)(uVar11 >> 0x10);
              if (iVar6 == 3) {
                if ((char)param_1[6] == '\0') {
                  if ((uVar14 & 0xffffffe0) != 0) {
                    for (; (8 < (int)uVar14 && (((uint)piVar15 & 7) != 0));
                        piVar15 = (int *)((int)piVar15 + 3)) {
                      *(undefined1 *)piVar15 = uVar9;
                      uVar14 = uVar14 - 1;
                      *(undefined1 *)((int)piVar15 + 1) = uVar13;
                      *(undefined1 *)((int)piVar15 + 2) = uStack_4e;
                    }
                    if (4 < (int)uVar14) {
                      iVar6 = (uVar14 - 5 >> 2) + 1;
                      uVar14 = uVar14 + iVar6 * -4;
                      do {
                        *piVar15 = param_1[3];
                        piVar15[1] = param_1[4];
                        piVar15[2] = param_1[5];
                        piVar15 = piVar15 + 3;
                        iVar6 = iVar6 + -1;
                      } while (iVar6 != 0);
                    }
                  }
                  iVar6 = uVar14 - 1;
                  if (-1 < iVar6) {
                    puVar12 = (undefined1 *)((int)piVar15 + 2);
                    do {
                      iVar6 = iVar6 + -1;
                      puVar12[-2] = uVar9;
                      puVar12[-1] = uVar13;
                      *puVar12 = uStack_4e;
                      puVar12 = puVar12 + 3;
                    } while (-1 < iVar6);
                  }
                }
                else {
                  _memset(piVar15,uVar11 >> 0x10 & 0xff,uVar14 * 3);
                }
              }
              else {
                do {
                  *(undefined1 *)piVar15 = uVar9;
                  uVar14 = uVar14 - 1;
                  *(undefined1 *)((int)piVar15 + 1) = uVar13;
                  *(undefined1 *)((int)piVar15 + 2) = uStack_4e;
                  piVar15 = (int *)((int)piVar15 + iVar6);
                } while (0 < (int)uVar14);
              }
            }
            else {
              FUN_0048b420(piVar15,uVar11,uVar14);
            }
          }
          if (bVar3) {
            iVar10 = local_c * local_10 >> 8;
            pbVar18 = (byte *)(*(int *)(*param_1 + 0xc) * local_30 + param_1[1]);
            uVar14 = ((uint)param_1[2] >> 8 & 0xff00ff) * iVar10;
            iVar6 = 0x100 - (uVar14 >> 0x18);
            iVar5 = ((uint)pbVar18[1] * iVar6 >> 8) + (uVar14 >> 8 & 0xff00ff);
            uVar14 = (((uint)pbVar18[2] << 0x10 | (uint)*pbVar18) * iVar6 >> 8 & 0xff00ff) +
                     ((param_1[2] & 0xff00ffU) * iVar10 >> 8 & 0xff00ff);
            uVar14 = (0x100 - (uVar14 >> 8 & 0xff00ff) | uVar14) & 0xff00ff;
            pbVar18[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
            pbVar18[2] = (byte)(uVar14 >> 0x10);
            *pbVar18 = (byte)uVar14;
          }
        }
      }
    }
  }
  return;
}


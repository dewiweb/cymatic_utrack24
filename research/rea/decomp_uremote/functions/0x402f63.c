// rea decompile_all
// name: FUN_00402f63
// address: 0x402f63
// body: available
// range: 0x402f63-0x403401 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00402f63(int param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  int local_1c;
  int local_18;
  int local_14;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_1c = 0;
  param_1 = param_2 * 0x1c + 0x2c + param_1;
  pbVar3 = *(byte **)(param_1 + 0x14);
  pbVar11 = pbVar3 + *(int *)(param_1 + 0xc) * 0x30;
  if (param_2 == 1) {
    pbVar9 = pbVar3;
    if (pbVar3 < pbVar11) {
      do {
        if ((pbVar9[0xc] & 4) == 0) {
          iVar7 = *(int *)(pbVar9 + 0x14);
          pbVar8 = *(byte **)(pbVar9 + 0x18);
          pbVar10 = pbVar8;
          pbVar17 = pbVar9;
          if (((iVar7 != 0) ||
              ((pbVar8 != (byte *)0x0 &&
               (iVar7 = *(int *)(pbVar8 + 0x14), pbVar10 = pbVar9, pbVar17 = pbVar8, iVar7 != 0))))
             && (pbVar17 != (byte *)0x0)) {
            uVar4 = *(undefined4 *)(iVar7 + 8);
            pbVar17[0xc] = pbVar17[0xc] | 4;
            *(undefined4 *)(pbVar17 + 8) = uVar4;
            if ((pbVar10 != (byte *)0x0) && (*(int *)(pbVar10 + 0x14) == 0)) {
              FUN_00402f40(1);
              pbVar10[0xc] = pbVar10[0xc] | 4;
            }
            if (local_8 == (byte *)0x0) {
              local_8 = pbVar9;
            }
          }
        }
        pbVar9 = pbVar9 + 0x30;
      } while (pbVar9 < pbVar11);
      goto LAB_00403008;
    }
  }
  else {
LAB_00403008:
    if (pbVar3 < pbVar11) {
      pbVar9 = pbVar3 + 0xc;
      do {
        if ((*pbVar9 & 4) == 0) {
          iVar7 = *(int *)(pbVar9 + 0xc);
          if (iVar7 == 0) {
            local_1c = local_1c + 1;
          }
          else if (*(int *)(iVar7 + 0x14) == 0) {
            if (local_8 == (byte *)0x0) {
              iVar16 = *(int *)(pbVar9 + -8);
              iVar12 = *(int *)(iVar7 + 4);
              iVar5 = FUN_00402ded(param_2,*pbVar9,*(undefined1 *)(iVar7 + 0xc));
              if (iVar5 < 0x41) {
                iVar14 = 0x20;
                local_8 = (byte *)0x20;
              }
              else {
                iVar14 = 0x26;
                local_8 = (byte *)0x1a;
              }
              if (iVar5 < 0x60) {
                iVar12 = (iVar12 - iVar16 >> 1) + *(int *)(pbVar9 + -8);
                uVar13 = iVar12 + 0x20U & 0xffffffc0;
                iVar12 = iVar12 - uVar13;
                iVar16 = iVar12 + iVar14;
                if (iVar16 < 0) {
                  iVar16 = -iVar16;
                }
                iVar12 = iVar12 - (int)local_8;
                if (iVar12 < 0) {
                  iVar12 = -iVar12;
                }
                if (iVar16 < iVar12) {
                  local_8 = (byte *)-iVar14;
                }
                iVar16 = (uVar13 + (int)local_8) - iVar5 / 2;
                *(int *)(pbVar9 + -4) = iVar16;
                *(int *)(iVar7 + 8) = iVar16 + iVar5;
              }
              else {
                *(uint *)(pbVar9 + -4) = *(int *)(pbVar9 + -8) + 0x20U & 0xffffffc0;
              }
              *pbVar9 = *pbVar9 | 4;
              local_8 = pbVar9 + -0xc;
              FUN_00402f40(param_2);
            }
            else {
              bVar2 = *pbVar9;
              iVar16 = *(int *)(iVar7 + 4) - *(int *)(pbVar9 + -8);
              iVar5 = *(int *)(pbVar9 + -8) + (*(int *)(local_8 + 8) - *(int *)(local_8 + 4));
              iVar14 = iVar16 >> 1;
              iVar15 = iVar14 + iVar5;
              iVar12 = FUN_00402ded(param_2,bVar2,*(undefined1 *)(iVar7 + 0xc));
              if ((*(byte *)(iVar7 + 0xc) & 4) == 0) {
                if (iVar12 < 0x60) {
                  uVar13 = iVar15 + 0x20U & 0xffffffc0;
                  if (iVar12 < 0x41) {
                    local_14 = 0x20;
                    local_18 = 0x20;
                  }
                  else {
                    local_14 = 0x26;
                    local_18 = 0x1a;
                  }
                  iVar16 = (local_14 - uVar13) + iVar15;
                  if (iVar16 < 0) {
                    iVar16 = -iVar16;
                  }
                  iVar5 = (iVar15 - local_18) - uVar13;
                  if (iVar5 < 0) {
                    iVar5 = -iVar5;
                  }
                  if (iVar16 < iVar5) {
                    local_18 = -local_14;
                  }
                  *(uint *)(pbVar9 + -4) = (uVar13 + local_18) - iVar12 / 2;
                  *(uint *)(iVar7 + 8) = iVar12 / 2 + uVar13 + local_18;
                }
                else {
                  iVar12 = FUN_00402ded(param_2,bVar2,*(undefined1 *)(iVar7 + 0xc));
                  uVar13 = iVar5 + 0x20U & 0xffffffc0;
                  iVar14 = (iVar12 >> 1) - (iVar14 + iVar5);
                  local_14 = iVar14 + uVar13;
                  if (local_14 < 0) {
                    local_14 = -local_14;
                  }
                  uVar6 = (iVar16 + 0x20 + iVar5 & 0xffffffc0U) - iVar12;
                  iVar14 = iVar14 + uVar6;
                  if (iVar14 < 0) {
                    iVar14 = -iVar14;
                  }
                  if (iVar14 <= local_14) {
                    uVar13 = uVar6;
                  }
                  *(uint *)(pbVar9 + -4) = uVar13;
                  *(uint *)(iVar7 + 8) = uVar13 + iVar12;
                }
              }
              else {
                *(int *)(pbVar9 + -4) = *(int *)(iVar7 + 8) - iVar12;
              }
              *pbVar9 = *pbVar9 | 4;
              *(byte *)(iVar7 + 0xc) = *(byte *)(iVar7 + 0xc) | 4;
              if ((pbVar3 < pbVar9 + -0xc) && (*(int *)(pbVar9 + -4) < *(int *)(pbVar9 + -0x34))) {
                *(int *)(pbVar9 + -4) = *(int *)(pbVar9 + -0x34);
              }
            }
          }
          else {
            FUN_00402f40(param_2);
            *pbVar9 = *pbVar9 | 4;
          }
        }
        pbVar8 = pbVar9 + 0x24;
        pbVar9 = pbVar9 + 0x30;
      } while (pbVar8 < pbVar11);
    }
  }
  iVar7 = ((int)pbVar11 - (int)pbVar3) / 0x30;
  if (param_2 == 0) {
    if (iVar7 == 6) {
      pbVar9 = pbVar3 + 0x60;
      pbVar8 = pbVar3 + 0xc0;
      pbVar10 = pbVar3;
    }
    else {
      if (iVar7 != 0xc) goto LAB_004032c4;
      pbVar9 = pbVar3 + 0xf0;
      pbVar8 = pbVar3 + 0x1b0;
      pbVar10 = pbVar3 + 0x30;
    }
    iVar16 = (*(int *)(pbVar9 + 4) * 2 - *(int *)(pbVar8 + 4)) - *(int *)(pbVar10 + 4);
    if (iVar16 < 0) {
      iVar16 = -iVar16;
    }
    if (iVar16 < 8) {
      iVar16 = *(int *)(pbVar10 + 8) + *(int *)(pbVar9 + 8) * -2 + *(int *)(pbVar8 + 8);
      *(int *)(pbVar8 + 8) = *(int *)(pbVar8 + 8) - iVar16;
      if (*(int *)(pbVar8 + 0x18) != 0) {
        piVar1 = (int *)(*(int *)(pbVar8 + 0x18) + 8);
        *piVar1 = *piVar1 - iVar16;
      }
      if (iVar7 == 0xc) {
        *(int *)(pbVar3 + 0x188) = *(int *)(pbVar3 + 0x188) - iVar16;
        *(int *)(pbVar3 + 0x218) = *(int *)(pbVar3 + 0x218) - iVar16;
      }
      pbVar8[0xc] = pbVar8[0xc] | 4;
      if (*(int *)(pbVar8 + 0x18) != 0) {
        pbVar9 = (byte *)(*(int *)(pbVar8 + 0x18) + 0xc);
        *pbVar9 = *pbVar9 | 4;
      }
    }
  }
LAB_004032c4:
  if (((local_1c != 0) || (local_8 == (byte *)0x0)) && (pbVar3 < pbVar11)) {
    pbVar9 = pbVar3 + 0x1c;
    do {
      if ((pbVar9[-0x10] & 4) == 0) {
        if (*(int *)pbVar9 == 0) {
LAB_0040331c:
          if (local_8 == (byte *)0x0) {
            *(uint *)(pbVar9 + -0x14) = *(int *)(pbVar9 + -0x18) + 0x20U & 0xffffffc0;
            local_8 = pbVar9 + -0x1c;
          }
          else {
            for (pbVar8 = pbVar9 + -0x4c; (pbVar3 <= pbVar8 && ((pbVar8[0xc] & 4) == 0));
                pbVar8 = pbVar8 + -0x30) {
            }
            for (pbVar10 = pbVar9 + 0x14; (pbVar10 < pbVar11 && ((pbVar10[0xc] & 4) == 0));
                pbVar10 = pbVar10 + 0x30) {
            }
            if ((((pbVar8 < pbVar3) || (pbVar9 + -0x1c <= pbVar8)) || (pbVar11 <= pbVar10)) ||
               (pbVar10 <= pbVar9 + -0x1c)) {
              *(uint *)(pbVar9 + -0x14) =
                   ((*(int *)(pbVar9 + -0x18) - *(int *)(local_8 + 4)) + 0x10U & 0xffffffe0) +
                   *(int *)(local_8 + 8);
            }
            else if (*(int *)(pbVar10 + 4) == *(int *)(pbVar8 + 4)) {
              *(undefined4 *)(pbVar9 + -0x14) = *(undefined4 *)(pbVar8 + 8);
            }
            else {
              iVar7 = *(int *)(pbVar8 + 8);
              iVar16 = FUN_0040d230(*(int *)(pbVar10 + 8) - iVar7);
              *(int *)(pbVar9 + -0x14) = iVar16 + iVar7;
            }
          }
        }
        else {
          iVar7 = *(int *)(*(int *)pbVar9 + 4) - *(int *)(pbVar9 + -0x18);
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          if (0x4f < iVar7) goto LAB_0040331c;
          FUN_004043c5();
        }
        pbVar9[-0x10] = pbVar9[-0x10] | 4;
        if ((pbVar3 < pbVar9 + -0x1c) && (*(int *)(pbVar9 + -0x14) < *(int *)(pbVar9 + -0x44))) {
          *(int *)(pbVar9 + -0x14) = *(int *)(pbVar9 + -0x44);
        }
        if (((pbVar9 + 0x14 < pbVar11) && ((pbVar9[0x20] & 4) != 0)) &&
           (*(int *)(pbVar9 + 0x1c) < *(int *)(pbVar9 + -0x14))) {
          *(int *)(pbVar9 + -0x14) = *(int *)(pbVar9 + 0x1c);
        }
      }
      pbVar8 = pbVar9 + 0x14;
      pbVar9 = pbVar9 + 0x30;
    } while (pbVar8 < pbVar11);
  }
  return;
}


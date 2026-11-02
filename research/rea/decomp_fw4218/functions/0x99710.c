// rea decompile_all
// name: FUN_00099710
// address: 0x99710
// body: available
// range: 0x99710-0x99dbf inclusive
// range: 0x99e0c-0x99eff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00099710(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  undefined2 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined4 uStack_38;
  int *piStack_34;
  byte abStack_30 [4];
  int **ppiStack_2c;
  
  puVar6 = *(undefined4 **)(param_1 + 0x958);
  bVar3 = false;
  if (puVar6 == (undefined4 *)0x0) {
    return;
  }
  if (*(short *)(param_1 + 0xba) != 0) {
    uVar7 = (**(code **)*puVar6)(puVar6,param_1 + (uint)*(ushort *)(param_1 + 0xbc) * 2 + 0xb4);
    if (uVar7 == 0xffffffff) {
      uVar7 = 0;
    }
    if (*(ushort *)(param_1 + 0xba) != uVar7) {
      *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) - (short)uVar7;
      *(short *)(param_1 + 0xbc) = (short)uVar7 + *(short *)(param_1 + 0xbc);
      return;
    }
  }
  piVar4 = _DAT_00099dc0;
  uVar7 = param_2 - *(int *)(param_1 + 0x220);
  if ((int)uVar7 < 1) {
    uVar7 = 0;
  }
  if ((char)_DAT_00099dc0[8] != '\0') {
    puVar15 = (uint *)(_DAT_00099dc0 + 2);
    FUN_0009adfc(param_1);
    iVar8 = *(int *)(*piVar4 + 4);
    bVar18 = iVar8 == 0;
    if (bVar18) {
      iVar8 = piVar4[5];
    }
    if (bVar18 && iVar8 == 0) {
      uStack_38 = 0;
      piStack_34 = (int *)0x0;
      FUN_0005f0c0(param_1,1,*(undefined4 *)(param_1 + 0x210),0);
      FUN_0009b6fc(param_1);
      FUN_0009ac58(param_1);
      return;
    }
    if (*puVar15 < uVar7) {
      cVar2 = (char)piVar4[6];
      if ((cVar2 == -0x10 || cVar2 == -9) || cVar2 == -1) {
        iVar8 = piVar4[5];
        if (iVar8 != 0x3fffffff) {
          if (*(char *)(param_1 + 0x948) == '\x01') {
            if (*(char *)(param_1 + 0x949) == '\0') {
              if (*(int *)(param_1 + 0xa0) != 0) {
LAB_00099c40:
                if (*(int *)(param_1 + 0xa0) != 0) {
                  puVar12 = *(undefined1 **)(param_1 + 0xac) + 1;
                  uStack_38 = CONCAT31(uStack_38._1_3_,**(undefined1 **)(param_1 + 0xac));
                  if (*(undefined1 **)(param_1 + 0xa8) <= puVar12) {
                    puVar12 = *(undefined1 **)(param_1 + 0xa4);
                  }
                  *(undefined1 **)(param_1 + 0xac) = puVar12;
                  FUN_00029894(param_1 + 0xa0);
                }
                iVar8 = (**(code **)**(undefined4 **)(param_1 + 0x958))
                                  (*(undefined4 **)(param_1 + 0x958),&uStack_38,1);
                if (iVar8 == 0) {
                  *(ushort *)(param_1 + 0xb4) = (ushort)(byte)uStack_38;
                  *(undefined2 *)(param_1 + 0xba) = 1;
                  *(undefined2 *)(param_1 + 0xbc) = 0;
                }
                else {
                  iVar8 = piVar4[5];
                  piVar4[5] = iVar8 + -1;
                  if (iVar8 + -1 != 0) goto code_r0x00099ca8;
                  *(undefined1 *)(param_1 + 0x948) = 0;
                  uVar10 = 0;
                  uVar7 = *(uint *)(param_1 + 0xac);
                  if (*(int *)(param_1 + 0xa0) != 0) {
                    do {
                      uVar7 = uVar7 + 1;
                      if (*(uint *)(param_1 + 0xa8) <= uVar7) {
                        uVar7 = uVar7 - *(int *)(param_1 + 0x9c);
                      }
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < *(uint *)(param_1 + 0xa0));
                  }
                  *(undefined4 *)(param_1 + 0xa0) = 0;
                  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xa4);
                  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xa4);
                }
              }
            }
            else {
              while (iVar8 != 0) {
                iVar8 = piVar4[1];
                if (*(int *)(iVar8 + 4) != 0) {
                  pbVar13 = *(byte **)(iVar8 + 0x10) + 1;
                  abStack_30[0] = **(byte **)(iVar8 + 0x10);
                  if (*(byte **)(iVar8 + 0xc) <= pbVar13) {
                    pbVar13 = *(byte **)(iVar8 + 8);
                  }
                  *(byte **)(iVar8 + 0x10) = pbVar13;
                  FUN_00029894(iVar8 + 4);
                }
                iVar8 = (**(code **)**(undefined4 **)(param_1 + 0x958))
                                  (*(undefined4 **)(param_1 + 0x958),abStack_30,1);
                if (iVar8 == 0) {
                  *(ushort *)(param_1 + 0xb4) = (ushort)abStack_30[0];
                  *(undefined2 *)(param_1 + 0xba) = 1;
                  *(undefined2 *)(param_1 + 0xbc) = 0;
                  if (piVar4[5] != 0) goto LAB_00099d1c;
                  break;
                }
                iVar8 = piVar4[5] + -1;
                piVar4[5] = iVar8;
              }
              *(undefined1 *)(param_1 + 0x948) = 0;
              *(undefined1 *)(param_1 + 0x949) = 0;
LAB_00099c08:
              piVar4[7] = -1;
            }
          }
          else {
            iVar8 = (**(code **)**(undefined4 **)(param_1 + 0x958))
                              (*(undefined4 **)(param_1 + 0x958),piVar4 + 6,1);
            if (iVar8 == 0) {
              *(ushort *)(param_1 + 0xb4) = (ushort)*(byte *)(piVar4 + 6);
              *(undefined2 *)(param_1 + 0xba) = 1;
              *(undefined2 *)(param_1 + 0xbc) = 0;
            }
            else if (piVar4[7] == *puVar15) {
              uVar7 = 0;
              if (3 < *(uint *)(piVar4[1] + 4)) {
                uVar17 = 0;
                uVar7 = 0;
                uVar10 = 0;
                do {
                  iVar8 = piVar4[1];
                  if (*(int *)(iVar8 + 4) != 0) {
                    pbVar13 = *(byte **)(iVar8 + 0x10) + 1;
                    uVar17 = (uint)**(byte **)(iVar8 + 0x10);
                    if (*(byte **)(iVar8 + 0xc) <= pbVar13) {
                      pbVar13 = *(byte **)(iVar8 + 8);
                    }
                    *(byte **)(iVar8 + 0x10) = pbVar13;
                    FUN_00029894(iVar8 + 4);
                  }
                  uVar16 = uVar10 + 1;
                  uVar7 = uVar7 | uVar17 << ((uVar10 & 0x1f) << 3);
                  uVar10 = uVar16;
                } while ((int)uVar16 < 4);
              }
              uVar10 = piVar4[5];
              if (uVar10 == uVar7) {
                while (uVar10 != 0) {
                  iVar8 = piVar4[1];
                  if (*(int *)(iVar8 + 4) != 0) {
                    pbVar13 = *(byte **)(iVar8 + 0x10) + 1;
                    abStack_30[0] = **(byte **)(iVar8 + 0x10);
                    if (*(byte **)(iVar8 + 0xc) <= pbVar13) {
                      pbVar13 = *(byte **)(iVar8 + 8);
                    }
                    *(byte **)(iVar8 + 0x10) = pbVar13;
                    FUN_00029894(iVar8 + 4);
                  }
                  iVar8 = (**(code **)**(undefined4 **)(param_1 + 0x958))
                                    (*(undefined4 **)(param_1 + 0x958),abStack_30,1);
                  if (iVar8 == 0) {
                    *(ushort *)(param_1 + 0xb4) = (ushort)abStack_30[0];
                    *(undefined2 *)(param_1 + 0xbc) = 0;
                    *(undefined2 *)(param_1 + 0xba) = 1;
                    if (piVar4[5] != 0) {
                      *(undefined1 *)(param_1 + 0x948) = 1;
                      *(undefined1 *)(param_1 + 0x949) = 1;
                      goto LAB_00099d1c;
                    }
                    break;
                  }
                  uVar10 = piVar4[5] - 1;
                  piVar4[5] = uVar10;
                }
                goto LAB_00099c08;
              }
              FUN_00002898(s__A_ERROR__Sysex_Length_mismatch_i_00099dc1 + 3);
            }
            else {
              FUN_00002898(DAT_00099dfc);
              ppiStack_2c = &piStack_34;
              piStack_34 = *(int **)(param_1 + 0x204);
              piVar11 = piStack_34 + -3;
              if (*piVar11 == -1) {
                uVar7 = piStack_34[-1];
                if (0xfffffff1 < uVar7) {
                  uStack_38 = 0xfffffff1;
                  FUN_00173800(8,DAT_00099e04,DAT_00099e04,uVar7);
                }
                piStack_34 = DAT_00099e00;
                if (uVar7 != 0) {
                  piStack_34 = (int *)FUN_00173860((uVar7 + 8) * 2,0);
                  if (piStack_34 != (int *)0x0) {
                    *piStack_34 = 0;
                    piStack_34[1] = 0;
                    piStack_34[2] = 0;
                  }
                  piStack_34[1] = uVar7;
                  piStack_34[2] = uVar7;
                  puVar14 = (undefined2 *)((int)piStack_34 + uVar7 * 2 + 0xc);
                  *piStack_34 = 0;
                  if (puVar14 != (undefined2 *)0x0) {
                    *puVar14 = 0;
                  }
                }
                piStack_34 = piStack_34 + 3;
                FUN_000039e0(piStack_34,*(undefined4 *)(param_1 + 0x204),uVar7 << 1);
              }
              else if (piVar11 != DAT_00099e00) {
                *piVar11 = *piVar11 + 1;
              }
              iVar9 = piVar4[4];
              iVar8 = piVar4[5];
              FUN_0023223c(param_1 + 0x1f8,ppiStack_2c);
              *(int *)(param_1 + 0x1fc) = iVar9;
              *(int *)(param_1 + 0x200) = iVar8;
              if (piStack_34 != DAT_00099e08) {
                piVar11 = piStack_34 + -3;
                iVar8 = *piVar11;
                if ((iVar8 == -1) ||
                   ((piVar11 != DAT_00099e00 && (*piVar11 = iVar8 + -1, iVar8 == 0)))) {
                  FUN_00173a54(piStack_34 + -3,piStack_34[-2] + 8,0);
                }
              }
              FUN_001cf828(*(int *)(param_1 + 0x1f0) + 0xc4);
              *(undefined1 *)(param_1 + 0x948) = 1;
              *(undefined1 *)(param_1 + 0x949) = 0;
            }
          }
          goto LAB_00099d1c;
        }
      }
      else {
        iVar8 = (**(code **)**(undefined4 **)(param_1 + 0x958))
                          (*(undefined4 **)(param_1 + 0x958),piVar4 + 6,piVar4[5]);
        if (iVar8 == -1) {
          iVar8 = 0;
        }
        if (piVar4[5] != iVar8) {
          uVar7 = piVar4[5] - iVar8;
          *(undefined2 *)(param_1 + 0xbc) = 0;
          iVar9 = 0;
          *(short *)(param_1 + 0xba) = (short)(uVar7 * 0x10000 >> 0x10);
          if ((uVar7 & 0xffff) != 0) {
            do {
              iVar1 = iVar9 * 2;
              iVar9 = iVar9 + 1;
              *(ushort *)(param_1 + iVar1 + 0xb4) = (ushort)*(byte *)((int)puVar15 + iVar8 + 0x10);
              iVar8 = iVar8 + 1;
            } while (iVar9 < (int)(uint)*(ushort *)(param_1 + 0xba));
          }
        }
      }
      piVar4[5] = 0;
      FUN_0009adfc(param_1);
      bVar3 = true;
    }
LAB_00099d1c:
    if ((char)piVar4[8] != '\0') goto LAB_00099d88;
  }
  if (((*(char *)(param_1 + 0x94b) == '\0') &&
      (*(uint *)(param_1 + 0x950) < *(uint *)(param_1 + 0x210))) &&
     (*(char *)(param_1 + 0x1e4) != *(char *)(param_1 + 0x1e5))) {
    if (*(int *)(*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x1e4) * 0x20 + 0xe4) + -4) != 0) {
      FUN_0023223c(param_1 + 0x208);
      FUN_001cf828(*(int *)(param_1 + 0x1e8) + 0xc4);
    }
    *(undefined1 *)(param_1 + 0x94b) = 1;
  }
LAB_00099d88:
  if (*(uint *)(param_1 + 0x94c) < *(uint *)(param_1 + 0x210)) {
    uVar7 = (uint)*(byte *)(param_1 + 0x1e4);
    *(undefined4 *)(param_1 + 0x210) = 0;
    if (*(byte *)(param_1 + 0x1e5) == uVar7) {
      piStack_34 = (int *)0xffffffff;
      uStack_38 = 0;
      FUN_0005f0c0(param_1,1,0);
      return;
    }
    iVar8 = param_1 + uVar7 * 0x20;
    bVar18 = *(int *)(*(int *)(iVar8 + 0xe4) + -4) != 0;
    cVar2 = '\0';
    if (bVar18) {
      cVar2 = *(char *)(param_1 + 0x94b);
    }
    if (bVar18 && cVar2 != '\0') {
      *(undefined1 *)(piVar4 + 8) = 1;
    }
    *(undefined1 *)(param_1 + 0x94b) = 0;
    FUN_0023223c(param_1 + 0x204,param_1 + 0x208);
    *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(iVar8 + 0xec);
    *(undefined4 *)(param_1 + 0x950) = *(undefined4 *)(iVar8 + 0xf8);
    if (*(int *)(iVar8 + 0xfc) != -1) {
      FUN_0005f140(param_1);
    }
    if (*(int *)(*(int *)(param_1 + 0x204) + -4) != 0) {
      piStack_34 = (int *)0xffffffff;
      uStack_38 = 0;
      FUN_0005f0c0(param_1,0,0);
    }
    uVar5 = (undefined1)(uVar7 + 1);
    if (7 < (uVar7 + 1 & 0xff)) {
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x1e4) = uVar5;
    if (*(char *)(param_1 + 0x94a) != '\0') {
      *(undefined1 *)(param_1 + 0x94a) = 0;
      FUN_0005f148(param_1);
    }
  }
  if (!bVar3) {
    return;
  }
  if (*(char *)((int)piVar4 + 0x21) != '\0') {
    return;
  }
  FUN_001cf828(*(int *)(param_1 + 0x1ec) + 0xc4);
  return;
code_r0x00099ca8:
  if (*(int *)(param_1 + 0xa0) == 0) goto LAB_00099d1c;
  goto LAB_00099c40;
}


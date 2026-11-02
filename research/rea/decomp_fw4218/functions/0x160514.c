// rea decompile_all
// name: FUN_00160514
// address: 0x160514
// body: available
// range: 0x160514-0x160f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00160514(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined8 uVar18;
  uint auStack_b4 [5];
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined1 auStack_94 [100];
  uint uStack_30;
  uint uStack_2c;
  
  uVar15 = DAT_00160f04;
  if (*param_1 == 0) {
    return;
  }
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    for (uVar2 = *(uint *)(uVar9 + 0x2c); uVar2 != 0; uVar2 = *(uint *)(uVar2 + 0x2c)) {
      uVar9 = uVar2;
    }
    while (uVar9 != 0) {
      if (uVar9 == 0) {
        uVar10 = param_1[1];
        if (uVar10 != 0) {
          uVar2 = *(uint *)(uVar10 + 0x2c);
        }
        if (uVar10 != 0 && uVar2 != 0) {
          do {
            uVar10 = uVar2;
            uVar2 = *(uint *)(uVar10 + 0x2c);
          } while (*(uint *)(uVar10 + 0x2c) != 0);
        }
      }
      else {
        uVar2 = (uint)*(byte *)(uVar9 + 0x34);
        uVar10 = *(uint *)(uVar9 + 0x30);
        uVar11 = uVar10;
        if ((*(byte *)(uVar9 + 0x34) & 0x80) == 0) {
          do {
            uVar10 = uVar11;
            if (uVar10 != 0) {
              uVar2 = *(uint *)(uVar10 + 0x2c);
            }
            uVar11 = uVar2;
          } while (uVar10 != 0 && uVar2 != 0);
        }
      }
      cVar1 = *(char *)(uVar9 + 0x1c);
      uVar11 = param_2 - *(int *)(uVar9 + 0x24);
      if (cVar1 == '\x03' || cVar1 == '\x04') {
        puVar3 = (undefined4 *)param_1[6];
        if ((puVar3 != (undefined4 *)0x0) && (cVar1 == '\x03')) {
          (**(code **)*puVar3)(puVar3,uVar9,0x14);
        }
        if (param_1[4] == uVar9) {
          param_1[4] = uVar10;
        }
        iVar7 = FUN_0020610c(param_1,uVar9);
joined_r0x00160774:
        uVar2 = 0;
        uVar9 = uVar10;
        if (iVar7 != 0) {
          uVar2 = FUN_001c6a78();
        }
      }
      else {
        if (cVar1 == '\0') {
          if (*(int *)(uVar9 + 0x18) != 0) {
LAB_00160658:
            iVar7 = FUN_001d06b8();
            if (uVar15 < (uint)(iVar7 - *(int *)(uVar9 + 0x20))) {
              if (param_1[4] == uVar9) {
                param_1[4] = uVar10;
              }
              iVar7 = FUN_0020610c(param_1,uVar9);
              goto joined_r0x00160774;
            }
            goto LAB_0016077c;
          }
          *(undefined1 *)(uVar9 + 0x1c) = 1;
          *(int *)(uVar9 + 0x24) = param_2;
          *(undefined4 *)(uVar9 + 0x20) = 0;
          auStack_b4[2] = 0;
          auStack_b4[1] = 0;
          auStack_b4[3] = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          auStack_b4[4] = 0;
          uStack_9e = 0;
          uStack_9c = 0;
          uStack_96 = 0;
          iVar7 = FUN_001727f0(auStack_94);
          *(undefined4 *)(iVar7 + 0x20) = 0;
          *(undefined4 *)(iVar7 + 0x24) = 0;
          *(undefined1 *)(iVar7 + 0x35) = 1;
          FUN_0015111c(iVar7 + -0x1c);
          FUN_00150ab0(auStack_b4 + 1,0,uVar9);
          (**(code **)(*(int *)param_1[5] + 0xc))((int *)param_1[5],auStack_b4 + 1);
          FUN_0015111c(auStack_b4 + 1);
          FUN_0014ca10(&uStack_9c);
          uVar2 = FUN_0014ca10(auStack_b4 + 4);
          auStack_b4[2] = 0;
          auStack_b4[1] = 0;
          auStack_b4[3] = 0;
        }
        else if (cVar1 == '\x01') {
          uVar2 = 1;
          if (2000 < uVar11) {
            puVar3 = (undefined4 *)param_1[6];
            if (puVar3 != (undefined4 *)0x0) {
              (**(code **)*puVar3)(puVar3,uVar9,0x13);
            }
            if (param_1[4] == uVar9) {
              param_1[4] = uVar10;
            }
            iVar7 = FUN_0020610c(param_1,uVar9);
            goto joined_r0x00160774;
          }
        }
        else {
          if (cVar1 == '\0') goto LAB_00160658;
LAB_0016077c:
          uVar2 = (uint)*(byte *)(uVar9 + 0x1c);
          if (uVar2 == 2) {
            uVar2 = (uint)*(byte *)(uVar9 + 0x28);
            if (uVar2 == 0) {
              uVar2 = 0;
              if (*(int *)(uVar9 + 0x18) != 0) {
                *(int *)(uVar9 + 0x24) = param_2;
                *(undefined1 *)(uVar9 + 0x28) = 1;
                auStack_b4[2] = 0;
                auStack_b4[1] = 0;
                auStack_b4[3] = 0;
                uStack_a0 = 0;
                uStack_98 = 0;
                auStack_b4[4] = 0;
                uStack_9e = 0;
                uStack_9c = 0;
                uStack_96 = 0;
                iVar7 = FUN_001727f0(auStack_94);
                *(undefined4 *)(iVar7 + 0x20) = 0;
                *(undefined4 *)(iVar7 + 0x24) = 0;
                *(undefined1 *)(iVar7 + 0x35) = 1;
                FUN_0015111c(iVar7 + -0x1c);
                FUN_00150770(auStack_b4 + 1,uVar9);
                (**(code **)(*(int *)param_1[5] + 0x10))
                          ((int *)param_1[5],auStack_b4 + 1,*(undefined4 *)(uVar9 + 0x18));
                FUN_0015111c(auStack_b4 + 1);
                FUN_0014ca10(&uStack_9c);
                uVar2 = FUN_0014ca10(auStack_b4 + 4);
                auStack_b4[2] = 0;
                auStack_b4[1] = 0;
                auStack_b4[3] = 0;
              }
            }
            else if (500 < uVar11) {
              *(undefined4 *)(uVar9 + 0x24) = 0;
              *(undefined1 *)(uVar9 + 0x1c) = 0;
              *(undefined1 *)(uVar9 + 0x28) = 0;
            }
          }
        }
        bVar17 = uVar9 != 0;
        if (bVar17) {
          uVar2 = *(uint *)(uVar9 + 0x18);
        }
        uVar9 = uVar10;
        if (bVar17 && uVar2 != 0) {
          *(int *)(uVar2 + 0xc) = *(int *)(uVar2 + 0xc) + 1;
        }
      }
    }
  }
  if (param_1[4] == 0) {
    iVar4 = param_1[1];
    iVar7 = 0;
    if (iVar4 != 0) {
      iVar7 = *(int *)(iVar4 + 0x2c);
    }
    if (iVar4 != 0 && iVar7 != 0) {
      do {
        iVar4 = iVar7;
        iVar7 = *(int *)(iVar4 + 0x2c);
      } while (*(int *)(iVar4 + 0x2c) != 0);
    }
    param_1[4] = iVar4;
  }
  else {
    if (*(char *)(param_1[4] + 0x1c) == '\x02') goto LAB_001608f4;
    iVar4 = FUN_0022c010(param_1);
    param_1[4] = iVar4;
  }
  if (((iVar4 != 0) && (*(char *)(iVar4 + 0x1c) == '\0')) && (*(int *)(iVar4 + 0x18) != 0)) {
    *(undefined1 *)(iVar4 + 0x28) = 0;
    *(undefined1 *)(param_1[4] + 0x1c) = 2;
  }
LAB_001608f4:
  uVar15 = param_1[3];
  if (uVar15 == 0) {
    return;
  }
  for (uVar9 = *(uint *)(uVar15 + 0x10); uVar9 != 0; uVar9 = *(uint *)(uVar9 + 0x10)) {
    uVar15 = uVar9;
  }
  if (uVar15 == 0) {
    return;
  }
  do {
    if (uVar15 == 0) {
      uVar2 = param_1[3];
      if (uVar2 != 0) {
        uVar9 = *(uint *)(uVar2 + 0x10);
      }
      if (uVar2 != 0 && uVar9 != 0) {
        do {
          uVar2 = uVar9;
          uVar9 = *(uint *)(uVar2 + 0x10);
        } while (*(uint *)(uVar2 + 0x10) != 0);
      }
    }
    else {
      uVar9 = (uint)*(byte *)(uVar15 + 0x18);
      uVar2 = *(uint *)(uVar15 + 0x14);
      uVar10 = uVar2;
      if ((*(byte *)(uVar15 + 0x18) & 0x80) == 0) {
        do {
          uVar2 = uVar10;
          if (uVar2 != 0) {
            uVar9 = *(uint *)(uVar2 + 0x10);
          }
          uVar10 = uVar9;
        } while (uVar2 != 0 && uVar9 != 0);
      }
    }
    uVar9 = *(uint *)(uVar15 + 0xc);
    if ((uVar9 & 0x3fffffff) == 0) {
      if (param_1[3] != 0) {
        iVar4 = 0;
        iVar7 = iVar4;
        uVar10 = param_1[3];
        while( true ) {
          auStack_b4[iVar7 + 1] = uVar10;
          iVar13 = iVar7 + 1;
          uVar18 = FUN_0014cc60(uVar15,uVar10);
          uVar11 = (uint)((ulonglong)uVar18 >> 0x20);
          iVar5 = (int)uVar18;
          if (0 < iVar5) {
            iVar4 = 1;
          }
          if (iVar5 < 0) {
            iVar4 = 0;
          }
          if (iVar5 == 0) break;
          uVar9 = *(uint *)(uVar10 + iVar4 * 4 + 0x10);
          if (uVar9 == 0) goto LAB_0016099c;
          if (iVar4 != 0) {
            uVar11 = (uint)*(byte *)(uVar10 + 0x18);
          }
          iVar7 = iVar13;
          uVar10 = uVar9;
          if (iVar4 != 0 && (uVar11 & 0x80) != 0) goto LAB_0016099c;
        }
        param_1[2] = param_1[2] + -1;
        iVar5 = *(int *)(uVar10 + 0x10);
        if (iVar5 != 0) {
          if ((*(byte *)(iVar5 + 0x18) & 0x80) == 0) {
            do {
              iVar8 = iVar5;
              auStack_b4[iVar13 + 1] = iVar8;
              iVar5 = *(int *)(iVar8 + 0x14);
              iVar13 = iVar13 + 1;
            } while ((*(byte *)(iVar5 + 0x18) & 0x80) == 0);
            if (*(int *)(iVar5 + 0x10) == 0) {
              *(byte *)(iVar8 + 0x18) = *(byte *)(iVar8 + 0x18) | 0x80;
            }
            else {
              *(int *)(iVar8 + 0x14) = *(int *)(iVar5 + 0x10);
            }
            *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(uVar10 + 0x10);
            *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(uVar10 + 0x14);
            *(undefined1 *)(iVar5 + 0x18) = *(undefined1 *)(uVar10 + 0x18);
            if (iVar7 == 0) {
              param_1[3] = iVar5;
              auStack_b4[1] = iVar5;
              iVar7 = iVar13;
            }
            else {
              *(int *)(auStack_b4[iVar7] + iVar4 * 4 + 0x10) = iVar5;
              auStack_b4[iVar7 + 1] = iVar5;
              iVar7 = iVar13;
            }
          }
          else {
            *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(uVar10 + 0x14);
            *(undefined1 *)(iVar5 + 0x18) = *(undefined1 *)(uVar10 + 0x18);
            if (iVar7 == 0) {
              param_1[3] = iVar5;
            }
            else {
              *(int *)(auStack_b4[iVar7] + iVar4 * 4 + 0x10) = iVar5;
              auStack_b4[iVar7 + 1] = iVar5;
              iVar7 = iVar13;
            }
          }
          goto LAB_00160b6c;
        }
        if ((*(byte *)(uVar10 + 0x18) & 0x80) == 0) {
          if (iVar7 != 0) {
            *(undefined4 *)(auStack_b4[iVar7] + iVar4 * 4 + 0x10) = *(undefined4 *)(uVar10 + 0x14);
            goto LAB_00160b6c;
          }
LAB_00160ae8:
          param_1[3] = *(int *)(uVar10 + 0x14);
          goto LAB_00160b6c;
        }
        if (iVar7 == 0) goto LAB_00160ae8;
        iVar5 = auStack_b4[iVar7];
        *(undefined4 *)(iVar5 + iVar4 * 4 + 0x10) = *(undefined4 *)(uVar10 + iVar4 * 4 + 0x10);
        if (iVar4 == 1) {
          *(byte *)(iVar5 + 0x18) = *(byte *)(iVar5 + 0x18) | 0x80;
        }
LAB_00160b6c:
        iVar13 = 1;
        uStack_30 = uVar10;
        iVar5 = iVar7;
        if (1 < iVar7 + 1) {
          do {
            iVar8 = iVar5 + -1;
            iVar5 = auStack_b4[iVar5];
            if (iVar8 != 0) {
              if (*(int *)(auStack_b4[iVar8] + 0x14) == iVar5) {
                iVar4 = 1;
              }
              else {
                iVar4 = 0;
              }
            }
            if (*(int *)(iVar5 + 0x10) == 0) {
              if ((*(byte *)(iVar5 + 0x18) & 0x7f) < 2) goto LAB_00160bd0;
LAB_00160c18:
              iVar6 = *(int *)(iVar5 + 0x14);
              bVar12 = *(char *)(iVar5 + 0x18) - 1;
              *(byte *)(iVar5 + 0x18) = bVar12;
              if ((iVar6 != 0) && ((bVar12 & 0x80) == 0)) {
                if ((bVar12 & 0x7f) < (*(byte *)(iVar6 + 0x18) & 0x7f)) {
                  *(byte *)(iVar6 + 0x18) = bVar12 & 0x7f | *(byte *)(iVar6 + 0x18) & 0x80;
                }
              }
              if (iVar5 != 0) {
                iVar6 = *(int *)(iVar5 + 0x10);
              }
              if (iVar5 != 0 && iVar6 != 0) {
                if (((byte)(*(byte *)(iVar6 + 0x18) * '\x02') ==
                     (byte)(*(byte *)(iVar5 + 0x18) * '\x02')) &&
                   ((*(byte *)(iVar5 + 0x18) & 0x7f) != 0)) {
                  if ((*(byte *)(iVar6 + 0x18) & 0x80) == 0) {
                    uVar14 = *(undefined4 *)(iVar6 + 0x14);
                  }
                  else {
                    uVar14 = 0;
                  }
                  *(undefined4 *)(iVar5 + 0x10) = uVar14;
                  *(int *)(iVar6 + 0x14) = iVar5;
                  *(byte *)(iVar6 + 0x18) = *(byte *)(iVar6 + 0x18) & 0x7f;
                  iVar5 = iVar6;
                }
              }
              uVar15 = *(uint *)(iVar5 + 0x14);
              if (uVar15 != 0) {
                if ((*(byte *)(iVar5 + 0x18) & 0x80) == 0) {
                  uVar9 = *(uint *)(uVar15 + 0x10);
                  if (uVar9 != 0) {
                    bVar12 = *(byte *)(uVar9 + 0x18);
                    uStack_2c = (uint)bVar12;
                    if (((uint)bVar12 * 0x2000000 == (uint)*(byte *)(uVar15 + 0x18) * 0x2000000) &&
                       ((*(byte *)(uVar15 + 0x18) & 0x7f) != 0)) {
                      if ((bVar12 & 0x80) == 0) {
                        uVar14 = *(undefined4 *)(uVar9 + 0x14);
                      }
                      else {
                        uVar14 = 0;
                      }
                      *(undefined4 *)(uVar15 + 0x10) = uVar14;
                      *(uint *)(uVar9 + 0x14) = uVar15;
                      *(byte *)(uVar9 + 0x18) = *(byte *)(uVar9 + 0x18) & 0x7f;
                      uVar15 = uVar9;
                    }
                  }
                  *(uint *)(iVar5 + 0x14) = uVar15;
                }
                uVar9 = *(uint *)(uVar15 + 0x14);
                if (uVar9 != 0) {
                  bVar17 = (*(byte *)(iVar5 + 0x18) & 0x80) == 0;
                  if (bVar17) {
                    uVar15 = (uint)*(byte *)(uVar15 + 0x18);
                  }
                  if (bVar17 && (uVar15 & 0x80) == 0) {
                    uStack_2c = *(uint *)(uVar9 + 0x10);
                    if (uStack_2c != 0) {
                      if (((byte)(*(byte *)(uStack_2c + 0x18) * '\x02') ==
                           (byte)(*(byte *)(uVar9 + 0x18) * '\x02')) &&
                         ((*(byte *)(uVar9 + 0x18) & 0x7f) != 0)) {
                        if ((*(byte *)(uStack_2c + 0x18) & 0x80) == 0) {
                          uVar14 = *(undefined4 *)(uStack_2c + 0x14);
                        }
                        else {
                          uVar14 = 0;
                        }
                        *(undefined4 *)(uVar9 + 0x10) = uVar14;
                        *(uint *)(uStack_2c + 0x14) = uVar9;
                        *(byte *)(uStack_2c + 0x18) = *(byte *)(uStack_2c + 0x18) & 0x7f;
                        uVar9 = uStack_2c;
                      }
                    }
                    *(uint *)(*(int *)(iVar5 + 0x14) + 0x14) = uVar9;
                  }
                }
              }
              if (((((iVar5 != 0) && (bVar12 = *(byte *)(iVar5 + 0x18), (bVar12 & 0x80) == 0)) &&
                   (iVar6 = *(int *)(iVar5 + 0x14), iVar6 != 0)) &&
                  (((*(byte *)(iVar6 + 0x18) & 0x80) == 0 && (*(int *)(iVar6 + 0x14) != 0)))) &&
                 (((*(byte *)(*(int *)(iVar6 + 0x14) + 0x18) & 0x7f) == (bVar12 & 0x7f) &&
                  ((bVar12 & 0x7f) != 0)))) {
                if (*(int *)(iVar6 + 0x10) == 0) {
                  *(byte *)(iVar5 + 0x18) = bVar12 | 0x80;
                }
                else {
                  *(int *)(iVar5 + 0x14) = *(int *)(iVar6 + 0x10);
                }
                *(int *)(iVar6 + 0x10) = iVar5;
                *(char *)(iVar6 + 0x18) = *(char *)(iVar6 + 0x18) + '\x01';
                iVar5 = iVar6;
              }
              iVar6 = *(int *)(iVar5 + 0x14);
              if ((iVar6 != 0) && ((*(byte *)(iVar5 + 0x18) & 0x80) == 0)) {
                bVar12 = *(byte *)(iVar6 + 0x18);
                if ((((bVar12 & 0x80) == 0) &&
                    (((iVar16 = *(int *)(iVar6 + 0x14), iVar16 != 0 &&
                      ((*(byte *)(iVar16 + 0x18) & 0x80) == 0)) && (*(int *)(iVar16 + 0x14) != 0))))
                   && (((*(byte *)(*(int *)(iVar16 + 0x14) + 0x18) & 0x7f) == (bVar12 & 0x7f) &&
                       ((bVar12 & 0x7f) != 0)))) {
                  if (*(int *)(iVar16 + 0x10) == 0) {
                    *(byte *)(iVar6 + 0x18) = bVar12 | 0x80;
                  }
                  else {
                    *(int *)(iVar6 + 0x14) = *(int *)(iVar16 + 0x10);
                  }
                  *(int *)(iVar16 + 0x10) = iVar6;
                  *(char *)(iVar16 + 0x18) = *(char *)(iVar16 + 0x18) + '\x01';
                  iVar6 = iVar16;
                }
                *(int *)(iVar5 + 0x14) = iVar6;
              }
            }
            else {
              if ((int)(*(byte *)(*(int *)(iVar5 + 0x10) + 0x18) & 0x7f) <
                  (int)((*(byte *)(iVar5 + 0x18) & 0x7f) - 1)) goto LAB_00160c18;
LAB_00160bd0:
              bVar12 = *(byte *)(iVar5 + 0x18);
              if ((bVar12 & 0x80) == 0) {
                if (*(int *)(iVar5 + 0x14) == 0) {
                  if ((bVar12 & 0x7f) != 0 && (bVar12 & 0x7f) != 1) goto LAB_00160c18;
                }
                else if ((int)(*(byte *)(*(int *)(iVar5 + 0x14) + 0x18) & 0x7f) <
                         (int)((bVar12 & 0x7f) - 1)) goto LAB_00160c18;
              }
            }
            if (iVar8 == 0) {
              param_1[3] = iVar5;
            }
            else {
              *(int *)(auStack_b4[iVar8] + iVar4 * 4 + 0x10) = iVar5;
            }
            iVar13 = iVar13 + 1;
            iVar5 = iVar8;
          } while (iVar13 < iVar7 + 1);
        }
        uVar9 = 0;
        if (uVar10 != 0) {
          FUN_0014cd8c();
          uVar9 = FUN_001c6a78();
        }
      }
    }
    else {
      uVar9 = uVar9 & 0x40000000;
      *(uint *)(uVar15 + 0xc) = uVar9;
    }
LAB_0016099c:
    uVar15 = uVar2;
    if (uVar2 == 0) {
      return;
    }
  } while( true );
}


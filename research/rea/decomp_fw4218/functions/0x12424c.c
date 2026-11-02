// rea decompile_all
// name: FUN_0012424c
// address: 0x12424c
// body: available
// range: 0x12424c-0x1251a3 inclusive
// range: 0x1251fc-0x126027 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0012451c) */
/* WARNING: Removing unreachable block (ram,0x001249d0) */
/* WARNING: Removing unreachable block (ram,0x00125544) */
/* WARNING: Removing unreachable block (ram,0x001255d0) */
/* WARNING: Removing unreachable block (ram,0x00125b58) */
/* WARNING: Removing unreachable block (ram,0x00125e40) */
/* WARNING: Removing unreachable block (ram,0x00125100) */
/* WARNING: Removing unreachable block (ram,0x00124ce8) */
/* WARNING: Removing unreachable block (ram,0x00124ba8) */
/* WARNING: Removing unreachable block (ram,0x00124cdc) */
/* WARNING: Removing unreachable block (ram,0x00124da4) */
/* WARNING: Removing unreachable block (ram,0x00124de8) */
/* WARNING: Removing unreachable block (ram,0x00124fa4) */
/* WARNING: Removing unreachable block (ram,0x00125f30) */
/* WARNING: Removing unreachable block (ram,0x00125e10) */
/* WARNING: Removing unreachable block (ram,0x00125e4c) */
/* WARNING: Removing unreachable block (ram,0x00125934) */
/* WARNING: Removing unreachable block (ram,0x00125764) */
/* WARNING: Removing unreachable block (ram,0x001257a4) */
/* WARNING: Removing unreachable block (ram,0x00125514) */
/* WARNING: Removing unreachable block (ram,0x00125550) */
/* WARNING: Removing unreachable block (ram,0x00124a64) */
/* WARNING: Removing unreachable block (ram,0x001247a8) */
/* WARNING: Removing unreachable block (ram,0x00124440) */
/* WARNING: Removing unreachable block (ram,0x00124b08) */
/* WARNING: Removing unreachable block (ram,0x001245cc) */
/* WARNING: Removing unreachable block (ram,0x001245d8) */
/* WARNING: Removing unreachable block (ram,0x00124338) */

int FUN_0012424c(int *param_1,undefined4 param_2,code *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  code **ppcVar9;
  int **ppiVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  code *pcStack_88;
  int *piStack_84;
  code *pcStack_80;
  uint uStack_7c;
  code *pcStack_78;
  code *pcStack_74;
  int *piStack_70;
  uint uStack_6c;
  int *piStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  code *pcStack_4c;
  uint uStack_48;
  int iStack_3c;
  code *pcStack_34;
  uint uStack_2c;
  
  ppcVar9 = &pcStack_88;
  iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_001300cc(param_1,param_2,param_3);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251a4,0xffffffff);
  if (iVar3 == 0) {
    iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251ac,0xffffffff);
    if (iVar3 != 0) {
      if (*(char *)(iVar3 + 5) == '\0') {
        piVar11 = param_1 + 0x1f;
        FUN_001f00bc(piVar11);
        if (*(char *)(iVar3 + 7) != '\0') {
          uVar4 = FUN_001cfb1c();
          FUN_001cfbe0(uVar4,0,&piStack_84);
          piVar12 = (int *)param_1[0x18];
          if ((int *)param_1[0x19] != piVar12) {
            do {
              if (*piVar12 != 0) {
                FUN_0005f148();
              }
              piVar12 = piVar12 + 1;
            } while ((int *)param_1[0x19] != piVar12);
          }
          uVar4 = FUN_001cfb1c();
          FUN_001cfbe0(uVar4,piStack_84,&pcStack_80);
        }
        if (*(char *)(iVar3 + 6) != '\0') {
          uVar4 = FUN_001cfb1c();
          FUN_001cfbe0(uVar4,0,&piStack_84);
          piVar12 = (int *)param_1[0x1b];
          if ((int *)param_1[0x1c] != piVar12) {
            do {
              if (*piVar12 != 0) {
                FUN_0005f6a0();
              }
              piVar12 = piVar12 + 1;
            } while ((int *)param_1[0x1c] != piVar12);
          }
          uVar4 = FUN_001cfb1c();
          FUN_001cfbe0(uVar4,piStack_84,&pcStack_88);
        }
      }
      else {
        piVar11 = param_1 + 1;
        FUN_001f00bc(piVar11);
        if (*(char *)(iVar3 + 7) != '\0') {
          uVar4 = FUN_001cfb1c();
          FUN_001cfbe0(uVar4,0,&pcStack_80);
          piVar12 = (int *)param_1[0x18];
          if ((int *)param_1[0x19] != piVar12) {
            do {
              if (*piVar12 != 0) {
                FUN_0005f154();
              }
              piVar12 = piVar12 + 1;
            } while ((int *)param_1[0x19] != piVar12);
          }
          uVar4 = FUN_001cfb1c();
          FUN_001cfbe0(uVar4,pcStack_80,&piStack_84);
        }
        if (*(char *)(iVar3 + 6) != '\0') {
          uVar4 = FUN_001cfb1c();
          FUN_001cfbe0(uVar4,0,&piStack_84);
          piVar12 = (int *)param_1[0x1b];
          if ((int *)param_1[0x1c] != piVar12) {
            do {
              if (*piVar12 != 0) {
                FUN_0005f6b0();
              }
              piVar12 = piVar12 + 1;
            } while ((int *)param_1[0x1c] != piVar12);
          }
          uVar4 = FUN_001cfb1c();
          FUN_001cfbe0(uVar4,piStack_84,&pcStack_88);
        }
      }
      goto LAB_00125bf0;
    }
    iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251b0,0xffffffff);
    if (iVar3 == 0) {
      iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251bc,0xffffffff);
      if (iVar3 == 0) {
        iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251c0,0xffffffff);
        if (iVar3 == 0) {
          iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251c4,0xffffffff);
          if (iVar3 == 0) {
            iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251c8,0xffffffff);
            if (iVar3 != 0) {
              piVar11 = param_1 + 1;
              FUN_001f00bc(piVar11);
              uVar4 = FUN_001cfb1c();
              FUN_001cfbe0(uVar4,0,&pcStack_80);
              piVar12 = (int *)param_1[0x1b];
              if ((int *)param_1[0x1c] != piVar12) {
                do {
                  piVar6 = (int *)*piVar12;
                  if (piVar6 != (int *)0x0) {
                    (**(code **)(*piVar6 + 0x1c))(piVar6,*(undefined1 *)(iVar3 + 5));
                  }
                  piVar12 = piVar12 + 1;
                } while ((int *)param_1[0x1c] != piVar12);
              }
              uVar4 = FUN_001cfb1c();
              FUN_001cfbe0(uVar4,pcStack_80,&pcStack_88);
              goto LAB_00125bf0;
            }
            iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251cc,0xffffffff);
            if (iVar3 != 0) {
              uVar14 = (uint)*(byte *)(iVar3 + 5);
              if ((uint)(param_1[0x1c] - param_1[0x1b] >> 2) <= uVar14) goto LAB_00125f88;
              FUN_001f00bc(param_1 + 1);
              piVar11 = *(int **)(param_1[0x1b] + uVar14 * 4);
              if (piVar11 != (int *)0x0) {
                iVar3 = (**(code **)(*piVar11 + 0x18))(piVar11,iVar3 + 8);
                goto LAB_00124c78;
              }
              FUN_00002898(DAT_001251d0,uVar14);
              goto LAB_00125d14;
            }
            iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251d4,0xffffffff);
            if (iVar3 != 0) {
              bVar1 = *(byte *)(iVar3 + 5);
              if ((uint)(param_1[0x19] - param_1[0x18] >> 2) <= (uint)bVar1) goto LAB_00125e98;
              FUN_001f00bc(param_1 + 1);
              iVar5 = *(int *)(param_1[0x18] + (uint)bVar1 * 4);
              if (iVar5 != 0) {
                iVar7 = FUN_001c7218(iVar5,DAT_001251b8,DAT_001251b4,0xffffffff);
                if (iVar7 == 0) {
                  iVar5 = FUN_001c7218(iVar5,DAT_001251b8,DAT_001251d8,0xffffffff);
                  if (iVar5 == 0) goto LAB_00125d14;
                  pcStack_88 = *(code **)(iVar3 + 0x14);
                  pcStack_78 = *(code **)(iVar3 + 0x20);
                  uStack_7c = (uint)*(byte *)(iVar3 + 0x24);
                  pcStack_80 = *(code **)(iVar3 + 0x1c);
                  piStack_84 = *(int **)(iVar3 + 0x18);
                  iVar3 = FUN_0009a318(iVar5,iVar3 + 8,*(undefined4 *)(iVar3 + 0xc),
                                       *(undefined4 *)(iVar3 + 0x10));
                }
                else {
                  pcStack_88 = *(code **)(iVar3 + 0x14);
                  uStack_7c = *(uint *)(iVar3 + 0x20);
                  pcStack_80 = (code *)(uint)*(byte *)(iVar3 + 0x24);
                  piStack_84 = *(int **)(iVar3 + 0x18);
                  if (*(char *)(iVar3 + 0x25) == '\0') {
                    pcStack_78 = entry;
                  }
                  else {
                    pcStack_78 = (code *)(iVar3 + 0x26);
                  }
                  iVar3 = FUN_000a2534(iVar7,iVar3 + 8,*(undefined4 *)(iVar3 + 0xc),
                                       *(undefined4 *)(iVar3 + 0x10));
                }
LAB_00124c78:
                FUN_001f06d4(param_1 + 1);
                return iVar3;
              }
              goto LAB_00125d14;
            }
            iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251dc,0xffffffff);
            if (iVar3 != 0) {
              bVar1 = *(byte *)(iVar3 + 5);
              if ((uint)(param_1[0x19] - param_1[0x18] >> 2) <= (uint)bVar1) goto LAB_00125e98;
              FUN_001f00bc(param_1 + 1);
              iVar3 = *(int *)(param_1[0x18] + (uint)bVar1 * 4);
              if (iVar3 != 0) {
                iVar5 = FUN_001c7218(iVar3,DAT_001251b8,DAT_001251b4,0xffffffff);
                if (iVar5 != 0) {
                  uVar4 = FUN_001cfb1c();
                  FUN_001cfbe0(uVar4,0,&uStack_7c);
                  iVar3 = FUN_000a1e34(iVar5);
                  uVar4 = FUN_001cfb1c();
                  FUN_001cfbe0(uVar4,uStack_7c,&pcStack_78);
                  goto LAB_00124c78;
                }
                iVar3 = FUN_001c7218(iVar3,DAT_001251b8,DAT_001251d8,0xffffffff);
                if (iVar3 != 0) {
                  iVar3 = FUN_000996d0();
                  goto LAB_00124dd4;
                }
              }
              goto LAB_00125d14;
            }
            iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251e0,0xffffffff);
            if (iVar3 != 0) {
              bVar1 = *(byte *)(iVar3 + 5);
              if ((uint)(param_1[0x19] - param_1[0x18] >> 2) <= (uint)bVar1) goto LAB_00125e98;
              FUN_001f00bc(param_1 + 1);
              iVar5 = *(int *)(param_1[0x18] + (uint)bVar1 * 4);
              if (iVar5 != 0) {
                iVar7 = FUN_001c7218(iVar5,DAT_001251b8,DAT_001251b4,0xffffffff);
                if (iVar7 == 0) {
                  iVar5 = FUN_001c7218(iVar5,DAT_001251b8,DAT_001251d8,0xffffffff);
                  if (iVar5 == 0) goto LAB_00125d14;
                  iVar3 = FUN_0009ad2c(iVar5,*(undefined4 *)(iVar3 + 8));
                }
                else {
                  iVar3 = FUN_000a2d08(iVar7,*(undefined4 *)(iVar3 + 8));
                }
LAB_00124dd4:
                FUN_001f06d4(param_1 + 1);
                return iVar3;
              }
              goto LAB_00125d14;
            }
            iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251e4,0xffffffff);
            if (iVar3 != 0) {
              bVar1 = *(byte *)(iVar3 + 5);
              if ((uint)bVar1 < (uint)(param_1[0x19] - param_1[0x18] >> 2)) {
                FUN_001f00bc(param_1 + 1);
                iVar5 = *(int *)(param_1[0x18] + (uint)bVar1 * 4);
                if (iVar5 != 0) {
                  iVar7 = FUN_001c7218(iVar5,DAT_001251b8,DAT_001251b4,0xffffffff);
                  if (iVar7 == 0) {
                    iVar5 = FUN_001c7218(iVar5,DAT_001251b8,DAT_001251d8,0xffffffff);
                    if (iVar5 == 0) goto LAB_00125d14;
                    iVar3 = FUN_0009ad38(iVar5,*(undefined1 *)(iVar3 + 6));
                  }
                  else {
                    iVar3 = FUN_000a2f20(iVar7,*(undefined1 *)(iVar3 + 6));
                  }
                  goto LAB_00124dd4;
                }
                goto LAB_00125d14;
              }
LAB_00125e98:
              FUN_00002898(DAT_00126094);
              return 0;
            }
            iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251e8,0xffffffff);
            pcVar8 = DAT_001251ec;
            if (iVar3 != 0) {
              bVar1 = *(byte *)(iVar3 + 5);
              if ((uint)bVar1 < (uint)(param_1[0x19] - param_1[0x18] >> 2)) {
                piVar11 = param_1 + 1;
                FUN_001f00bc(piVar11);
                iVar5 = *(int *)(param_1[0x18] + (uint)bVar1 * 4);
                if ((iVar5 != 0) &&
                   (iVar5 = FUN_001c7218(iVar5,DAT_001251b8,DAT_001251f0,0xffffffff), iVar5 != 0)) {
                  FUN_00131b94();
                  pcStack_74 = pcVar8;
                  uVar14 = 0;
                  do {
                    if ((uint)(*(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 8) >> 2) <= uVar14) {
                      FUN_00232190(&pcStack_74);
                      goto LAB_00125bf0;
                    }
                    FUN_0023223c(&pcStack_74,*(int *)(iVar3 + 8) + uVar14 * 4);
                    iVar7 = FUN_00131a2c(iVar5,&pcStack_74,
                                         *(undefined1 *)(*(int *)(iVar3 + 0x14) + uVar14));
                    uVar14 = uVar14 + 1;
                  } while (iVar7 != 0);
                  if (pcStack_74 != pcVar8) {
                    pcVar8 = pcStack_74 + -0xc;
                    iVar3 = *(int *)pcVar8;
                    if ((iVar3 == -1) ||
                       ((pcVar8 != DAT_001251f4 && (*(int *)pcVar8 = iVar3 + -1, iVar3 == 0)))) {
                      FUN_00173a54(pcStack_74 + -0xc,*(int *)(pcStack_74 + -8) + 8,0);
                    }
                  }
                }
                goto LAB_00125d14;
              }
              goto LAB_00125e98;
            }
            iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_001251f8,0xffffffff);
            if (iVar3 != 0) {
              FUN_001f00bc(param_1 + 1);
              piVar11 = (int *)param_1[0x18];
              iVar3 = 1;
              if ((int *)param_1[0x19] != piVar11) {
                do {
                  if ((int *)*piVar11 != (int *)0x0) {
                    if ((iVar3 == 0) ||
                       (iVar3 = (**(code **)(*(int *)*piVar11 + 0x18))(), iVar3 == 0)) {
                      iVar3 = 0;
                    }
                    else {
                      iVar3 = 1;
                    }
                  }
                  piVar11 = piVar11 + 1;
                } while ((int *)param_1[0x19] != piVar11);
              }
LAB_00125198:
              FUN_001f06d4(param_1 + 1);
              return iVar3;
            }
            iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_00126028,0xffffffff);
            if (iVar3 != 0) {
              FUN_001f00bc(param_1 + 1);
              piVar11 = (int *)param_1[0x18];
              iVar3 = 1;
              if ((int *)param_1[0x19] != piVar11) {
                do {
                  if ((int *)*piVar11 != (int *)0x0) {
                    if ((iVar3 == 0) ||
                       (iVar3 = (**(code **)(*(int *)*piVar11 + 0x1c))(), iVar3 == 0)) {
                      iVar3 = 0;
                    }
                    else {
                      iVar3 = 1;
                    }
                  }
                  piVar11 = piVar11 + 1;
                } while ((int *)param_1[0x19] != piVar11);
              }
              goto LAB_00125198;
            }
            piVar11 = (int *)FUN_001c7218(param_2,DAT_001251a8,DAT_0012602c,0xffffffff);
            if (piVar11 == (int *)0x0) {
              piVar11 = (int *)FUN_001c7218(param_2,DAT_001251a8,DAT_00126048,0xffffffff);
              if (piVar11 == (int *)0x0) {
                iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_00126054,0xffffffff);
                if (iVar3 == 0) {
                  piVar12 = (int *)FUN_001c7218(param_2,DAT_001251a8,DAT_00126070,0xffffffff);
                  if (piVar12 == (int *)0x0) {
                    iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_00126090,0xffffffff);
                    if (iVar3 == 0) {
                      iVar3 = FUN_001c7218(param_2,DAT_001251a8,DAT_0012609c,0xffffffff);
                      if (iVar3 == 0) {
                        return 0;
                      }
                      if (*(char *)(iVar3 + 4) == '\0') {
                        return 0;
                      }
                      uVar14 = (uint)*(byte *)(iVar3 + 5);
                      if ((uint)(param_1[0x12] - param_1[0x11] >> 5) <= uVar14) goto LAB_00125f88;
                      FUN_001f00bc(param_1 + 1);
                      iVar5 = param_1[0x11] + uVar14 * 0x20;
                      if (*(char *)(iVar5 + 4) != '\0') {
                        if (*(int *)(iVar5 + 0x10) != *(int *)(iVar3 + 8)) {
                          iVar7 = *(int *)(param_1[0x1b] + uVar14 * 4);
                          if (iVar7 == 0) goto LAB_00125f34;
                          *(int *)(iVar5 + 0x10) = *(int *)(iVar3 + 8);
                          FUN_0005f68c(iVar7);
                        }
LAB_00125f14:
                        FUN_001f06d4(param_1 + 1);
                        return 1;
                      }
                      FUN_00002898(DAT_001260a4);
LAB_00125f34:
                      FUN_001f06d4(param_1 + 1);
                      return 0;
                    }
                    if (*(char *)(iVar3 + 4) == '\0') {
                      return 0;
                    }
                    uVar14 = (uint)*(byte *)(iVar3 + 5);
                    if ((uint)(param_1[0x15] - param_1[0x14] >> 2) <= uVar14) goto LAB_00125e98;
                    piVar11 = param_1 + 1;
                    FUN_001f00bc(piVar11);
                    iVar5 = *(int *)(param_1[0x14] + uVar14 * 4);
                    if (*(char *)(iVar5 + 4) == '\0') {
                      FUN_00002898(DAT_00126098);
                      goto LAB_00125d14;
                    }
                    if (*(int *)(iVar5 + 8) != *(int *)(iVar3 + 8)) {
                      iVar7 = *(int *)(param_1[0x18] + uVar14 * 4);
                      if (iVar7 != 0) {
                        *(int *)(iVar5 + 8) = *(int *)(iVar3 + 8);
                        FUN_0005f140(iVar7);
                        goto LAB_00125f14;
                      }
                      goto LAB_00125f34;
                    }
                  }
                  else {
                    uVar14 = (uint)*(byte *)((int)piVar12 + 5);
                    if ((uint)(param_1[0x15] - param_1[0x14] >> 2) <= uVar14) {
                      FUN_00002898(DAT_00126074);
                      return 0;
                    }
                    piVar11 = param_1 + 1;
                    FUN_001f00bc(piVar11);
                    piVar6 = *(int **)(param_1[0x14] + uVar14 * 4);
                    iVar3 = (**(code **)(*piVar6 + 0xc))(piVar6,piVar12);
                    if (iVar3 == 0) {
                      piVar6 = *(int **)(param_1[0x14] + uVar14 * 4);
                      if (piVar6 != (int *)0x0) {
                        (**(code **)(*piVar6 + 4))();
                      }
                      uVar4 = (**(code **)(*piVar12 + 8))(piVar12);
                      *(undefined4 *)(param_1[0x14] + uVar14 * 4) = uVar4;
                      piVar6 = *(int **)(param_1[0x18] + uVar14 * 4);
                      if (piVar6 != (int *)0x0) {
                        FUN_00002898(DAT_00126030,uVar14);
                        piStack_84 = (int *)((uint)param_1 & 0xffffff00);
                        pcStack_80 = (code *)(param_1 + 0x1f);
                        FUN_001f00bc();
                        piStack_84 = (int *)((uint)piStack_84 & 0xffffff00 | 1);
                        FUN_0005f148(piVar6);
                        *(undefined4 *)(param_1[0x18] + uVar14 * 4) = 0;
                        FUN_001d0130(1);
                        (**(code **)(*piVar6 + 0xc))(piVar6);
                        (**(code **)(*piVar6 + 4))(piVar6);
                        if (((uint)piStack_84 & 0xff) != 0) {
                          FUN_001f06d4(pcStack_80);
                        }
                      }
                      if ((char)piVar12[1] != '\0') {
                        FUN_00002898(DAT_00126078,uVar14);
                        if (piVar12[8] - piVar12[7] >> 2 == 0) {
                          FUN_00002898(DAT_00126080);
                        }
                        else {
                          if ((char)piVar12[3] == '\x01') {
                            iStack_5c = FUN_001f01c4(DAT_00126084,1);
                            piVar6 = (int *)0x0;
                            if (iStack_5c != 0) {
                              piStack_68 = (int *)(uint)*(byte *)((int)piVar12 + 0x16);
                              pcStack_74 = (code *)piVar12[4];
                              pcStack_78 = (code *)(uint)*(byte *)(piVar12 + 5);
                              uStack_7c = piVar12[2];
                              piStack_84 = (int *)piVar12[6];
                              piStack_70 = (int *)param_1[0x17];
                              pcStack_88 = (code *)0x1;
                              pcStack_80 = param_3;
                              piVar6 = (int *)FUN_00132a80(iStack_5c,uVar14,
                                                           *(undefined1 *)((int)piVar12 + 0x15),
                                                           piStack_68);
                            }
                            pcStack_4c = pcVar8;
                            uVar13 = 0;
                            while( true ) {
                              if ((uint)(piVar12[8] - piVar12[7] >> 2) <= uVar13) break;
                              FUN_0023223c(&pcStack_4c,piVar12[7] + uVar13 * 4);
                              FUN_00131238(piVar6,&pcStack_4c,*(undefined1 *)(piVar12[10] + uVar13))
                              ;
                              uVar13 = uVar13 + 1;
                            }
                            FUN_00232190(&pcStack_4c);
                            if (piVar6 != (int *)0x0) {
                              iVar3 = (**(code **)(*piVar6 + 8))(piVar6);
                              if (iVar3 != 0) {
                                *(int **)(param_1[0x18] + uVar14 * 4) = piVar6;
                                goto LAB_00125bf0;
                              }
                              FUN_00002898(DAT_00126088);
                              (**(code **)(*piVar6 + 4))(piVar6);
                              goto LAB_00125d14;
                            }
                          }
                          else {
                            FUN_00002898(DAT_0012607c);
                          }
                          FUN_00002898(DAT_0012608c);
                        }
                        goto LAB_00125d14;
                      }
                    }
                  }
                  goto LAB_00125bf0;
                }
                uVar14 = (uint)*(byte *)(iVar3 + 5);
                if ((uint)(param_1[0x12] - param_1[0x11] >> 5) <= uVar14) {
LAB_00125f88:
                  FUN_00002898(DAT_001260a0);
                  return 0;
                }
                FUN_001f00bc(param_1 + 1);
                iVar5 = param_1[0x11] + uVar14 * 0x20;
                if ((((*(char *)(iVar5 + 4) == *(char *)(iVar3 + 4)) &&
                     (*(char *)(iVar5 + 5) == *(char *)(iVar3 + 5))) &&
                    (*(char *)(iVar5 + 6) == *(char *)(iVar3 + 6))) &&
                   ((((*(char *)(iVar5 + 7) == *(char *)(iVar3 + 7) &&
                      (*(char *)(iVar5 + 8) == *(char *)(iVar3 + 8))) &&
                     ((*(char *)(iVar5 + 9) == *(char *)(iVar3 + 9) &&
                      ((*(char *)(iVar5 + 10) == *(char *)(iVar3 + 10) &&
                       (*(int *)(iVar5 + 0xc) == *(int *)(iVar3 + 0xc))))))) &&
                    (*(int *)(iVar5 + 0x10) == *(int *)(iVar3 + 0x10))))) {
                  piVar11 = *(int **)(*(int *)(iVar5 + 0x14) + -4);
                  if (piVar11 == *(int **)(*(int *)(iVar3 + 0x14) + -4)) {
                    piStack_84 = piVar11;
                    piStack_68 = *(int **)(*(int *)(iVar3 + 0x14) + -4);
                    ppiVar10 = &piStack_68;
                    if (piVar11 <= piStack_68) {
                      ppiVar10 = &piStack_84;
                    }
                    iVar7 = FUN_0000383e(*(int *)(iVar5 + 0x14),*(int *)(iVar3 + 0x14),*ppiVar10);
                    if ((((iVar7 == 0) &&
                         (*(int *)(*(int *)(iVar5 + 0x14) + -4) ==
                          *(int *)(*(int *)(iVar3 + 0x14) + -4))) &&
                        (*(char *)(iVar5 + 0x18) == *(char *)(iVar3 + 0x18))) &&
                       ((*(char *)(iVar5 + 0x19) == *(char *)(iVar3 + 0x19) &&
                        (*(int *)(iVar5 + 0x1c) == *(int *)(iVar3 + 0x1c))))) goto LAB_00125b14;
                  }
                }
                iVar5 = param_1[0x11] + uVar14 * 0x20;
                if (iVar5 != iVar3) {
                  *(undefined1 *)(iVar5 + 4) = *(undefined1 *)(iVar3 + 4);
                  *(undefined1 *)(iVar5 + 5) = *(undefined1 *)(iVar3 + 5);
                  *(undefined1 *)(iVar5 + 6) = *(undefined1 *)(iVar3 + 6);
                  *(undefined1 *)(iVar5 + 7) = *(undefined1 *)(iVar3 + 7);
                  *(undefined1 *)(iVar5 + 8) = *(undefined1 *)(iVar3 + 8);
                  *(undefined1 *)(iVar5 + 9) = *(undefined1 *)(iVar3 + 9);
                  *(undefined1 *)(iVar5 + 10) = *(undefined1 *)(iVar3 + 10);
                  *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
                  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
                  FUN_0023223c(iVar5 + 0x14,iVar3 + 0x14);
                  *(undefined1 *)(iVar5 + 0x18) = *(undefined1 *)(iVar3 + 0x18);
                  *(undefined1 *)(iVar5 + 0x19) = *(undefined1 *)(iVar3 + 0x19);
                  *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar3 + 0x1c);
                }
                piVar11 = *(int **)(param_1[0x1b] + uVar14 * 4);
                if (piVar11 != (int *)0x0) {
                  FUN_00002898(DAT_00126058,uVar14);
                  FUN_001f00bc(param_1 + 0x1f);
                  FUN_0005f6a0(piVar11);
                  *(undefined4 *)(param_1[0x1b] + uVar14 * 4) = 0;
                  FUN_001d0130(1);
                  (**(code **)(*piVar11 + 0xc))(piVar11);
                  (**(code **)(*piVar11 + 4))(piVar11);
                  FUN_001f06d4(param_1 + 0x1f);
                }
                iVar3 = param_1[0x11] + uVar14 * 0x20;
                if (*(char *)(iVar3 + 4) != '\0') {
                  FUN_00002898(DAT_0012605c,uVar14);
                  if (*(char *)(iVar3 + 0x18) == '\x01') {
                    uStack_54 = FUN_001f01c4(DAT_00126064,1);
                    if (uStack_54 != 0) {
                      pcStack_88 = (code *)(uint)*(byte *)(iVar3 + 8);
                      piStack_68 = (int *)(uint)*(byte *)(iVar3 + 0x19);
                      pcStack_74 = *(code **)(iVar3 + 0x10);
                      uStack_7c = *(uint *)(iVar3 + 0xc);
                      piStack_70 = *(int **)(iVar3 + 0x1c);
                      pcStack_80 = (code *)(uint)*(byte *)(iVar3 + 10);
                      piStack_84 = (int *)(uint)*(byte *)(iVar3 + 9);
                      uStack_6c = iVar3 + 0x14;
                      pcStack_78 = param_3;
                      pcStack_4c = pcStack_88;
                      piVar11 = (int *)FUN_000a55b8(uStack_54,uVar14,*(undefined1 *)(iVar3 + 6),
                                                    *(undefined1 *)(iVar3 + 7));
                      if (piVar11 != (int *)0x0) {
                        iVar3 = (**(code **)(*piVar11 + 8))(piVar11);
                        if (iVar3 == 0) {
                          FUN_00002898(DAT_00126068);
                          (**(code **)(*piVar11 + 4))(piVar11);
                          goto LAB_00125d14;
                        }
                        *(int **)(param_1[0x1b] + uVar14 * 4) = piVar11;
                        goto LAB_00125b14;
                      }
                    }
                  }
                  else {
                    FUN_00002898(DAT_00126060);
                  }
                  FUN_00002898(DAT_0012606c);
                  goto LAB_00125d14;
                }
                goto LAB_00125b14;
              }
              uVar14 = (uint)*(byte *)((int)piVar11 + 5);
              if ((uint)(param_1[0x15] - param_1[0x14] >> 2) <= uVar14) goto LAB_00125e98;
              FUN_001f00bc(param_1 + 1);
              piVar12 = *(int **)(param_1[0x14] + uVar14 * 4);
              iVar3 = (**(code **)(*piVar12 + 0xc))(piVar12,piVar11);
              if (iVar3 == 0) {
                piVar12 = *(int **)(param_1[0x14] + uVar14 * 4);
                if (piVar12 != (int *)0x0) {
                  (**(code **)(*piVar12 + 4))();
                }
                uVar4 = (**(code **)(*piVar11 + 8))(piVar11);
                *(undefined4 *)(param_1[0x14] + uVar14 * 4) = uVar4;
                piVar12 = *(int **)(param_1[0x18] + uVar14 * 4);
                if (piVar12 != (int *)0x0) {
                  FUN_00002898(DAT_00126030,uVar14);
                  pcStack_80 = (code *)((uint)param_1 & 0xffffff00);
                  FUN_001f00bc(param_1 + 0x1f);
                  pcStack_80 = (code *)((uint)pcStack_80 & 0xffffff00 | 1);
                  FUN_0005f148(piVar12);
                  *(undefined4 *)(param_1[0x18] + uVar14 * 4) = 0;
                  FUN_001d0130(1);
                  (**(code **)(*piVar12 + 0xc))(piVar12);
                  (**(code **)(*piVar12 + 4))(piVar12);
                  if (((uint)pcStack_80 & 0xff) != 0) {
                    FUN_001f06d4(param_1 + 0x1f);
                  }
                }
                if ((char)piVar11[1] != '\0') {
                  FUN_00002898(DAT_0012604c,uVar14);
                  if ((char)piVar11[3] == '\x02') {
                    iStack_60 = FUN_001f01c4(DAT_00126050,1);
                    if (iStack_60 != 0) {
                      piStack_68 = (int *)(uint)*(byte *)((int)piVar11 + 0x15);
                      pcStack_74 = (code *)piVar11[0xc];
                      piStack_70 = (int *)piVar11[6];
                      uStack_6c = piVar11[7];
                      uStack_7c = piVar11[10];
                      pcStack_80 = (code *)(uint)*(byte *)(piVar11 + 5);
                      pcStack_88 = (code *)piVar11[2];
                      piStack_84 = piVar11 + 9;
                      pcStack_78 = (code *)param_1[0x17];
                      piVar11 = (int *)FUN_0009baec(iStack_60,uVar14,param_3,piVar11[8]);
                      if (piVar11 != (int *)0x0) {
                        iVar3 = (**(code **)(*piVar11 + 8))(piVar11);
                        if (iVar3 == 0) {
                          FUN_00002898(DAT_00126040);
                          (**(code **)(*piVar11 + 4))(piVar11);
                          goto LAB_00125d14;
                        }
                        *(int **)(param_1[0x18] + uVar14 * 4) = piVar11;
                        goto LAB_00125318;
                      }
                    }
                  }
                  else {
                    FUN_00002898(DAT_00126038);
                  }
                  FUN_00002898(DAT_00126044);
                  goto LAB_00125d14;
                }
              }
            }
            else {
              uVar14 = (uint)*(byte *)((int)piVar11 + 5);
              if ((uint)(param_1[0x15] - param_1[0x14] >> 2) <= uVar14) goto LAB_00125e98;
              FUN_001f00bc(param_1 + 1);
              piVar12 = *(int **)(param_1[0x14] + uVar14 * 4);
              iVar3 = (**(code **)(*piVar12 + 0xc))(piVar12,piVar11);
              if (iVar3 == 0) {
                piVar12 = *(int **)(param_1[0x14] + uVar14 * 4);
                if (piVar12 != (int *)0x0) {
                  (**(code **)(*piVar12 + 4))();
                }
                uVar4 = (**(code **)(*piVar11 + 8))(piVar11);
                *(undefined4 *)(param_1[0x14] + uVar14 * 4) = uVar4;
                piVar12 = *(int **)(param_1[0x18] + uVar14 * 4);
                if (piVar12 != (int *)0x0) {
                  FUN_00002898(DAT_00126030,uVar14);
                  pcStack_80 = (code *)((uint)param_1 & 0xffffff00);
                  FUN_001f00bc(param_1 + 0x1f);
                  pcStack_80 = (code *)((uint)pcStack_80 & 0xffffff00 | 1);
                  FUN_0005f148(piVar12);
                  *(undefined4 *)(param_1[0x18] + uVar14 * 4) = 0;
                  FUN_001d0130(1);
                  (**(code **)(*piVar12 + 0xc))(piVar12);
                  (**(code **)(*piVar12 + 4))(piVar12);
                  if (((uint)pcStack_80 & 0xff) != 0) {
                    FUN_001f06d4(param_1 + 0x1f);
                  }
                }
                if ((char)piVar11[1] != '\0') {
                  FUN_00002898(DAT_00126034,uVar14);
                  if ((char)piVar11[3] == '\x01') {
                    iStack_3c = FUN_001f01c4(DAT_0012603c,1);
                    if (iStack_3c != 0) {
                      iStack_5c = piVar11[10];
                      uStack_50 = (uint)*(byte *)((int)piVar11 + 0x31);
                      uStack_54 = (uint)*(byte *)(piVar11 + 0xc);
                      iStack_58 = piVar11[0xb];
                      piStack_68 = (int *)piVar11[4];
                      iStack_60 = (int)piVar11 + 0x32;
                      uStack_6c = (uint)*(byte *)(piVar11 + 5);
                      pcStack_74 = (code *)piVar11[2];
                      piStack_70 = piVar11 + 9;
                      uStack_7c = piVar11[8];
                      pcStack_80 = (code *)piVar11[7];
                      uStack_48 = (uint)*(byte *)((int)piVar11 + 0x16);
                      piStack_84 = (int *)(uint)*(byte *)(piVar11 + 6);
                      pcStack_88 = (code *)(uint)*(byte *)((int)piVar11 + 0x17);
                      iStack_64 = param_1[0x17];
                      pcStack_78 = param_3;
                      pcStack_34 = pcStack_80;
                      uStack_2c = uStack_7c;
                      piVar11 = (int *)FUN_000a3940(iStack_3c,uVar14,
                                                    *(undefined1 *)((int)piVar11 + 0x15),uStack_48);
                      if (piVar11 != (int *)0x0) {
                        iVar3 = (**(code **)(*piVar11 + 8))(piVar11);
                        if (iVar3 == 0) {
                          FUN_00002898(DAT_00126040);
                          (**(code **)(*piVar11 + 4))(piVar11);
                          goto LAB_00125d14;
                        }
                        *(int **)(param_1[0x18] + uVar14 * 4) = piVar11;
                        goto LAB_00125318;
                      }
                    }
                  }
                  else {
                    FUN_00002898(DAT_00126038);
                  }
                  FUN_00002898(DAT_00126044);
LAB_00125d14:
                  FUN_001f06d4(param_1 + 1);
                  return 0;
                }
              }
            }
LAB_00125318:
            piVar11 = param_1 + 1;
            goto LAB_00125bf0;
          }
          FUN_001f00bc(param_1 + 1);
          uVar4 = FUN_001cfb1c();
          FUN_001cfbe0(uVar4,0,&pcStack_88);
          piVar11 = (int *)param_1[0x1b];
          if ((int *)param_1[0x1c] != piVar11) {
            do {
              if (*piVar11 != 0) {
                FUN_0005f60c();
              }
              piVar11 = piVar11 + 1;
            } while ((int *)param_1[0x1c] != piVar11);
          }
          uVar4 = FUN_001cfb1c();
          FUN_001cfbe0(uVar4,pcStack_88,&piStack_84);
        }
        else {
          uVar14 = *(uint *)(iVar3 + 0xc);
          FUN_001f00bc(param_1 + 1);
          if ((int)uVar14 < 0) {
            uVar4 = FUN_001cfb1c();
            FUN_001cfbe0(uVar4,0,&piStack_84);
            cVar2 = *(char *)(iVar3 + 5);
            if (cVar2 == '\0') {
              piVar11 = (int *)param_1[0x1b];
              if ((int *)param_1[0x1c] != piVar11) {
                do {
                  iVar3 = *piVar11;
                  piVar11 = piVar11 + 1;
                  if (iVar3 != 0) {
                    *(undefined1 *)(iVar3 + 0x2a) = 0;
                    *(undefined1 *)(iVar3 + 0x2b) = 0;
                  }
                } while ((int *)param_1[0x1c] != piVar11);
              }
            }
            else if (cVar2 == '\x01') {
              piVar11 = (int *)param_1[0x1b];
              if ((int *)param_1[0x1c] != piVar11) {
                do {
                  if (*piVar11 != 0) {
                    FUN_0005f618(*piVar11,*(undefined4 *)(iVar3 + 8));
                  }
                  piVar11 = piVar11 + 1;
                } while ((int *)param_1[0x1c] != piVar11);
              }
            }
            else if (cVar2 == '\x02') {
              piVar11 = (int *)param_1[0x1b];
              if ((int *)param_1[0x1c] != piVar11) {
                do {
                  if (*piVar11 != 0) {
                    FUN_0005f694(*piVar11,1,*(undefined4 *)(iVar3 + 8));
                  }
                  piVar11 = piVar11 + 1;
                } while ((int *)param_1[0x1c] != piVar11);
              }
            }
            else if ((cVar2 == '\x03') &&
                    (piVar11 = (int *)param_1[0x1b], (int *)param_1[0x1c] != piVar11)) {
              do {
                if (*piVar11 != 0) {
                  FUN_0005f694(*piVar11,2,*(undefined4 *)(iVar3 + 8));
                }
                piVar11 = piVar11 + 1;
              } while ((int *)param_1[0x1c] != piVar11);
            }
            uVar4 = FUN_001cfb1c();
            FUN_001cfbe0(uVar4,piStack_84,&pcStack_88);
          }
          else if (uVar14 < (uint)(param_1[0x1c] - param_1[0x1b] >> 2)) {
            iVar5 = *(int *)(param_1[0x1b] + uVar14 * 4);
            if (iVar5 == 0) goto LAB_00125d14;
            uVar4 = FUN_001cfb1c();
            FUN_001cfbe0(uVar4,0,&pcStack_78);
            cVar2 = *(char *)(iVar3 + 5);
            if (cVar2 == '\0') {
              *(undefined1 *)(iVar5 + 0x2a) = 0;
              *(undefined1 *)(iVar5 + 0x2b) = 0;
            }
            else if (cVar2 == '\x01') {
              FUN_0005f618(iVar5,*(undefined4 *)(iVar3 + 8));
            }
            else if (cVar2 == '\x02') {
              FUN_0005f694(iVar5,1,*(undefined4 *)(iVar3 + 8));
            }
            else if (cVar2 == '\x03') {
              FUN_0005f694(iVar5,2,*(undefined4 *)(iVar3 + 8));
            }
            uVar4 = FUN_001cfb1c();
            FUN_001cfbe0(uVar4,pcStack_78,&pcStack_88);
          }
        }
      }
      else {
        uVar14 = *(uint *)(iVar3 + 0xc);
        FUN_001f00bc(param_1 + 1);
        if ((int)uVar14 < 0) {
          uVar4 = FUN_001cfb1c();
          FUN_001cfbe0(uVar4,0,&pcStack_88);
          cVar2 = *(char *)(iVar3 + 5);
          if (cVar2 == '\0') {
            piVar11 = (int *)param_1[0x18];
            if ((int *)param_1[0x19] != piVar11) {
              do {
                iVar3 = *piVar11;
                if (iVar3 != 0) {
                  FUN_0005f134(iVar3);
                  FUN_0005f128(iVar3);
                }
                piVar11 = piVar11 + 1;
              } while ((int *)param_1[0x19] != piVar11);
            }
          }
          else if (cVar2 == '\x01') {
            piVar11 = (int *)param_1[0x18];
            if ((int *)param_1[0x19] != piVar11) {
              do {
                if (*piVar11 != 0) {
                  FUN_0005f0b0(*piVar11,*(undefined4 *)(iVar3 + 8));
                }
                piVar11 = piVar11 + 1;
              } while ((int *)param_1[0x19] != piVar11);
            }
          }
          else if ((cVar2 == '\x02') &&
                  (piVar11 = (int *)param_1[0x18], (int *)param_1[0x19] != piVar11)) {
            do {
              if (*piVar11 != 0) {
                FUN_0005f0a0(*piVar11,*(undefined4 *)(iVar3 + 8));
              }
              piVar11 = piVar11 + 1;
            } while ((int *)param_1[0x19] != piVar11);
          }
          uVar4 = FUN_001cfb1c();
          ppcVar9 = (code **)&piStack_84;
          pcVar8 = pcStack_88;
        }
        else {
          if ((uint)(param_1[0x19] - param_1[0x18] >> 2) <= uVar14) goto LAB_00125b14;
          iVar5 = *(int *)(param_1[0x18] + uVar14 * 4);
          if (iVar5 == 0) goto LAB_00125d14;
          uVar4 = FUN_001cfb1c();
          FUN_001cfbe0(uVar4,0,&pcStack_78);
          cVar2 = *(char *)(iVar3 + 5);
          if (cVar2 == '\0') {
            FUN_0005f134(iVar5);
            FUN_0005f128(iVar5);
          }
          else if (cVar2 == '\x01') {
            FUN_0005f0b0(iVar5,*(undefined4 *)(iVar3 + 8));
          }
          else if (cVar2 == '\x02') {
            FUN_0005f0a0(iVar5,*(undefined4 *)(iVar3 + 8));
          }
          uVar4 = FUN_001cfb1c();
          pcVar8 = pcStack_78;
        }
        FUN_001cfbe0(uVar4,pcVar8,ppcVar9);
      }
    }
    else {
      bVar1 = *(byte *)(iVar3 + 5);
      if ((uint)(param_1[0x19] - param_1[0x18] >> 2) <= (uint)bVar1) goto LAB_00125e98;
      FUN_001f00bc(param_1 + 1);
      piVar11 = *(int **)(param_1[0x18] + (uint)bVar1 * 4);
      if ((piVar11 == (int *)0x0) ||
         (iVar5 = (**(code **)(*piVar11 + 0x10))
                            (piVar11,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc)),
         iVar5 == 0)) goto LAB_00125d14;
      iVar5 = FUN_001c7218(piVar11,DAT_001251b8,DAT_001251b4,0xffffffff);
      if (iVar5 != 0) {
        FUN_000a2f20(iVar5,*(undefined1 *)(iVar3 + 0x10));
      }
    }
  }
  else {
    FUN_001f00bc(param_1 + 1);
    uVar4 = FUN_001cfb1c();
    FUN_001cfbe0(uVar4,0,&piStack_84);
    piVar11 = (int *)param_1[0x1b];
    if ((int *)param_1[0x1c] != piVar11) {
      do {
        if ((int *)*piVar11 != (int *)0x0) {
          (**(code **)(*(int *)*piVar11 + 0x14))();
        }
        piVar11 = piVar11 + 1;
      } while ((int *)param_1[0x1c] != piVar11);
    }
    uVar4 = FUN_001cfb1c();
    FUN_001cfbe0(uVar4,piStack_84,&pcStack_88);
  }
LAB_00125b14:
  piVar11 = param_1 + 1;
LAB_00125bf0:
  FUN_001f06d4(piVar11);
  return 1;
}


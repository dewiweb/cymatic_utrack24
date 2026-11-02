// rea decompile_all
// name: FUN_0016e04c
// address: 0x16e04c
// body: available
// range: 0x16e04c-0x16e803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016e04c(int *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  int local_150;
  int local_14c;
  int *local_148;
  undefined1 *local_144;
  undefined4 local_140;
  undefined1 auStack_13c [2];
  undefined2 local_13a;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [2];
  byte local_12e;
  char local_12c [4];
  undefined1 auStack_128 [4];
  undefined4 local_124;
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [12];
  undefined1 auStack_f8 [60];
  undefined1 auStack_bc [28];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 auStack_94 [8];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [20];
  undefined1 auStack_74 [44];
  int *local_48;
  int local_44;
  int local_40;
  int *piStack_30;
  undefined4 uStack_2c;
  int local_28;
  
  piStack_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  FUN_001bd96c(auStack_bc);
  iVar4 = FUN_001bda20(auStack_bc);
  if (iVar4 != 0) {
    iVar15 = DAT_0016e804 + 8;
    iVar4 = DAT_0016e804 + 0x24;
    local_40 = DAT_0016e808 + 8;
    local_48 = param_1 + 0x12f;
    local_44 = DAT_0016e808 + 0x24;
    do {
      puVar5 = (uint *)FUN_001bd9f4(auStack_bc);
      if (puVar5 != (uint *)0x0) {
        uVar6 = *puVar5;
        uVar10 = uVar6 & 0xff;
        if (uVar10 == 0x14) {
          FUN_00155340(&local_150);
          iVar9 = FUN_0014ce34(&local_150,puVar5);
          if (iVar9 == 0) {
            param_1[0x1e8] = param_1[0x1e8] + 1;
          }
          else {
            FUN_001726d4(auStack_128,auStack_138);
            FUN_001687ac(param_1 + 0x128,auStack_128);
          }
          FUN_00155380(&local_150);
        }
        else if (uVar10 < 0x15) {
          if (uVar10 == 3) {
            FUN_00153b30(&local_144);
            iVar9 = FUN_0014ce34(&local_144,puVar5);
            if (iVar9 == 0) {
              param_1[0x1e8] = param_1[0x1e8] + 1;
            }
            else {
              FUN_0014cd1c(auStack_120,local_12c);
              uVar6 = (uint)local_12e;
              if (*(char *)((int)param_1 + 0x71b) == '\0') {
                *(byte *)(param_1 + 0x1c7) = (byte)((uVar6 << 0x1e) >> 0x1f);
                *(undefined1 *)((int)param_1 + 0x71b) = 1;
                *(byte *)((int)param_1 + 0x71d) = (byte)((uVar6 << 0x1d) >> 0x1f);
              }
              else {
                uVar10 = (uint)*(byte *)(param_1 + 0x1c7) | (uVar6 & 3) >> 1;
                uVar12 = (undefined1)uVar10;
                if (uVar10 != 0) {
                  uVar12 = 1;
                }
                *(undefined1 *)(param_1 + 0x1c7) = uVar12;
                *(bool *)((int)param_1 + 0x71d) =
                     (uVar6 & 7) >> 2 != 0 || *(char *)((int)param_1 + 0x71d) != '\0';
              }
              iVar9 = FUN_001d06b8();
              iVar7 = FUN_0015ce1c(0x32);
              param_1[0x1c2] = iVar7 + iVar9 + 0x5dc;
              FUN_0014cd8c(auStack_120);
            }
            FUN_00153b98(&local_144);
          }
          else if (uVar10 < 4) {
            if (uVar10 == 1) {
              if ((uVar6 & 0x40000) == 0) {
                if ((uVar6 & 0x20000) != 0) {
                  FUN_00158f80(auStack_138);
                  iVar9 = FUN_0014ce34(auStack_138,puVar5);
                  if (iVar9 == 0) {
                    param_1[0x1e8] = param_1[0x1e8] + 1;
                  }
                  else {
                    FUN_001726d4(auStack_104,auStack_120);
                    FUN_001726d4(&local_a0,auStack_114);
                    iVar9 = FUN_00161200(local_48,auStack_104,&local_a0,local_28);
                    if (iVar9 != 0) {
                      local_144 = auStack_104;
                      local_150 = local_28;
                      if ((int *)param_1[0x1bf] != (int *)0x0) {
                        local_148 = param_1 + 0x1b3;
                        piVar13 = (int *)param_1[0x1bf];
                        do {
                          if (piVar13 == (int *)0x0) {
                            piVar14 = (int *)param_1[0x1bf];
                          }
                          else {
                            piVar14 = (int *)piVar13[2];
                          }
                          iVar9 = FUN_001bed7c(piVar13 + 3,local_144);
                          if (iVar9 != 0) {
                            FUN_00161d78(local_148,piVar13[6],local_150);
                            FUN_0015223c(piVar13[6]);
                            piVar8 = (int *)param_1[0x1bf];
                            if (piVar8 != (int *)0x0 && piVar13 != (int *)0x0) {
                              if (piVar8 == piVar13) {
                                param_1[0x1bf] = piVar8[2];
                              }
                              if ((int *)param_1[0x1c0] == piVar13) {
                                param_1[0x1c0] = ((int *)param_1[0x1c0])[1];
                              }
                              if (piVar13[1] != 0) {
                                *(int *)(piVar13[1] + 8) = piVar13[2];
                              }
                              if (piVar13[2] != 0) {
                                *(int *)(piVar13[2] + 4) = piVar13[1];
                              }
                              piVar13[1] = 0;
                              piVar13[2] = 0;
                              param_1[0x1c1] = param_1[0x1c1] + -1;
                              (**(code **)(*piVar13 + 4))(piVar13);
                            }
                          }
                          piVar13 = piVar14;
                        } while (piVar14 != (int *)0x0);
                      }
                    }
                  }
                  FUN_00158fe0(auStack_138);
                }
              }
              else {
                FUN_00159bfc(&local_150);
                iVar9 = FUN_0014ce34(&local_150,puVar5);
                if (iVar9 == 0) {
                  param_1[0x1e8] = param_1[0x1e8] + 1;
                }
                else {
                  FUN_001726d4(auStack_120,auStack_138);
                  iVar9 = param_1[0x129];
                  if (param_1[0x129] != 0) {
                    do {
                      uVar18 = FUN_00172670(auStack_120,iVar9);
                      iVar11 = (int)((ulonglong)uVar18 >> 0x20);
                      iVar7 = (int)uVar18;
                      if (0 < iVar7) {
                        iVar11 = 1;
                      }
                      if (iVar7 < 0) {
                        iVar11 = 0;
                      }
                      if (iVar7 == 0) {
                        if (iVar9 != 0) {
                          FUN_001512cc(&local_a0);
                          iVar7 = *(int *)(iVar9 + 0x10);
                          if (*(int *)(iVar9 + 0x10) == 0) {
                            iVar7 = DAT_0016e80c;
                          }
                          FUN_0015047c(&local_a0,local_13a,auStack_120,iVar7);
                          (**(code **)(*param_1 + 0x24))(param_1,&local_a0,local_28);
                          FUN_0015111c(&local_a0);
                          FUN_0014ca10(auStack_8c);
                          FUN_0014ca10(auStack_94);
                          local_9c = 0;
                          local_a0 = 0;
                          local_98 = 0;
                        }
                        break;
                      }
                      iVar7 = *(int *)(iVar9 + iVar11 * 4 + 0x5c);
                      if (iVar7 == 0) break;
                      bVar1 = 0;
                      if (iVar11 != 0) {
                        bVar1 = *(byte *)(iVar9 + 100);
                      }
                      iVar9 = iVar7;
                    } while (iVar11 == 0 || (bVar1 & 0x80) == 0);
                  }
                }
                FUN_00159c50(&local_150);
              }
            }
            else if (uVar10 == 2) {
              FUN_00151534(auStack_f8);
              iVar9 = FUN_0014ce34(auStack_f8,puVar5);
              if (iVar9 == 0) {
                param_1[0x1e8] = param_1[0x1e8] + 1;
              }
              else {
                FUN_0015f69c(param_1 + 0xfa,auStack_f8);
              }
              FUN_00151598(auStack_f8);
            }
          }
          else if (uVar10 == 0x12) {
            FUN_0015c0e0(&local_150);
            iVar9 = FUN_0014ce34(&local_150,puVar5);
            if (iVar9 == 0) {
              param_1[0x1e8] = param_1[0x1e8] + 1;
            }
            else {
              FUN_001726d4(&local_124,auStack_138);
              FUN_00168814(param_1 + 0x128,&local_124,local_12c[0] != '\0');
            }
            FUN_0015c120(&local_150);
          }
          else if (uVar10 == 0x13) {
            FUN_00159b64(&local_148);
            iVar9 = FUN_0014ce34(&local_148,puVar5);
            uVar3 = local_124;
            if (iVar9 == 0) {
              param_1[0x1e8] = param_1[0x1e8] + 1;
            }
            else {
              FUN_001726d4(auStack_120,auStack_130);
              FUN_00167e70(param_1 + 0x128,auStack_120,uVar3);
            }
            FUN_00159ba4(&local_148);
          }
        }
        else if (uVar10 == 0x21) {
          FUN_001580bc(&local_150);
          iVar9 = FUN_0014ce34(&local_150,puVar5);
          cVar2 = local_12c[0];
          if (iVar9 == 0) {
            param_1[0x1e8] = param_1[0x1e8] + 1;
          }
          else {
            FUN_001726d4(auStack_120,auStack_138);
            FUN_00160ff8(local_48,auStack_120,cVar2,local_28);
          }
          FUN_001580fc(&local_150);
        }
        else if (uVar10 < 0x22) {
          if (uVar10 == 0x15) {
            FUN_0015ae40(&local_150);
            iVar9 = FUN_0014ce34(&local_150,puVar5);
            if (iVar9 == 0) {
              param_1[0x1e8] = param_1[0x1e8] + 1;
            }
            else {
              FUN_001726d4(auStack_128,auStack_138);
              FUN_001693e0(param_1 + 0x128,auStack_128);
            }
            FUN_0015ae80(&local_150);
          }
          else if (uVar10 == 0x20) {
            FUN_0015923c(&local_a0);
            iVar9 = FUN_0014ce34(&local_a0,puVar5);
            if (iVar9 == 0) {
              param_1[0x1e8] = param_1[0x1e8] + 1;
            }
            else {
              FUN_001726d4(auStack_74,auStack_88);
              iVar9 = param_1[0x129];
              if (param_1[0x129] == 0) {
LAB_0016e670:
                FUN_001512cc(&local_150);
              }
              else {
                do {
                  iVar7 = FUN_00172670(auStack_74,iVar9);
                  bVar16 = iVar7 < 0;
                  bVar17 = iVar7 == 0;
                  if (0 < iVar7) {
                    iVar7 = 1;
                  }
                  if (bVar16) {
                    iVar7 = 0;
                  }
                  if (bVar17) goto LAB_0016e670;
                  iVar11 = *(int *)(iVar9 + iVar7 * 4 + 0x5c);
                  if (iVar11 == 0) break;
                  bVar1 = 0;
                  if (iVar7 != 0) {
                    bVar1 = *(byte *)(iVar9 + 100);
                  }
                  iVar9 = iVar11;
                } while (iVar7 == 0 || (bVar1 & 0x80) == 0);
                FUN_001512cc(&local_150);
              }
              FUN_00150134(&local_150,auStack_74);
              (**(code **)(*param_1 + 0x24))(param_1,&local_150,local_28);
              FUN_0015111c(&local_150);
              FUN_0014ca10(auStack_13c);
              FUN_0014ca10(&local_144);
              local_14c = 0;
              local_150 = 0;
              local_148 = (int *)0x0;
            }
            FUN_0015927c(&local_a0);
          }
        }
        else if (uVar10 == 0x30) {
          local_140 = DAT_0016e810;
          local_148 = (int *)0x0;
          local_144 = (undefined1 *)0x0;
          local_150 = iVar15;
          local_14c = iVar4;
          iVar9 = FUN_0014ce34(&local_150,puVar5);
          if (iVar9 == 0) {
LAB_0016e7d0:
            param_1[0x1e8] = param_1[0x1e8] + 1;
          }
          else {
            FUN_00160154(param_1 + 0xfa,&local_150,local_28);
          }
        }
        else if (uVar10 == 0x31) {
          local_144 = (undefined1 *)0x0;
          local_140 = DAT_0016e814;
          local_148 = (int *)0x0;
          local_150 = local_40;
          local_14c = local_44;
          iVar9 = FUN_0014ce34(&local_150,puVar5);
          if (iVar9 == 0) goto LAB_0016e7d0;
          FUN_00160080(param_1 + 0xfa,&local_150);
        }
      }
      FUN_001525d8(auStack_bc);
      iVar9 = FUN_001bda20(auStack_bc);
    } while (iVar9 != 0);
  }
  FUN_00152644(auStack_bc);
  return;
}


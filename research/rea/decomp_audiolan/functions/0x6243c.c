// rea decompile_all
// name: FUN_0006243c
// address: 0x6243c
// body: available
// range: 0x6243c-0x62bef inclusive
// range: 0x62ce0-0x6314b inclusive
// range: 0x6315c-0x6399b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006243c(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int ******ppppppiVar6;
  int *******pppppppiVar7;
  undefined4 *puVar8;
  int *****pppppiVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int *******pppppppiVar16;
  int *****pppppiVar17;
  int *****extraout_r1;
  int *****pppppiVar18;
  int *****extraout_r1_00;
  int *******pppppppiVar19;
  int *******pppppppiVar20;
  byte *pbVar21;
  int ******ppppppiVar22;
  int ******ppppppiVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  int *******pppppppiVar27;
  int ******ppppppiVar28;
  int *******pppppppiVar29;
  int *piVar30;
  int ******extraout_r12;
  bool bVar31;
  undefined8 uVar32;
  int ******local_160;
  int ****local_15c;
  int ******local_158;
  int ******local_154;
  undefined4 *local_150;
  int *local_14c;
  int *local_148;
  int *local_144;
  int *local_140;
  int local_13c;
  int *******local_138 [2];
  int *******local_130;
  int *******local_12c;
  int ******local_128;
  int *******local_124;
  uint local_120 [3];
  int local_114;
  int *local_110;
  undefined1 auStack_10c [4];
  int local_108;
  int *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int *local_f8;
  int local_f4;
  undefined8 local_f0;
  undefined1 auStack_e8 [56];
  int *******local_b0;
  undefined *local_ac;
  undefined1 auStack_a8 [4];
  int ******local_a4;
  int ******local_a0;
  int local_9c;
  int *******local_98;
  undefined1 local_94;
  undefined1 auStack_90 [56];
  uint local_58;
  int *******local_54;
  int *******local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int *local_30;
  int ******local_2c [2];
  
  local_a4 = (int ******)FUN_0017bfc0();
  if ((char)param_1[0x34] == '\0') {
    local_50 = DAT_00062bf0;
    do {
      *(undefined1 *)((int)param_1 + 0xd1) = 0;
      local_4c = param_1[0x32];
      iVar3 = FUN_0019dc00(0x40,0x11,0);
      if (iVar3 == 0) {
        FUN_000028a4(DAT_00062bf8);
LAB_000624cc:
        (**(code **)(*param_1 + 0x1c))(param_1,1000);
      }
      else {
        *(undefined4 *)(iVar3 + 0xb0) = 1000;
        iVar4 = FUN_0019d4b4(iVar3,&local_4c,0);
        if (iVar4 != 0) {
          FUN_000028a4(DAT_00062bf4);
          FUN_0019d660(iVar3);
          goto LAB_000624cc;
        }
        iVar4 = FUN_0019dc00(0x20,0);
        if (iVar4 == 0) {
          FUN_000028a4(DAT_00062c00);
        }
        else {
          iVar5 = FUN_0019daa8(iVar4,&local_4c,0);
          if (iVar5 != 0) {
            thunk_FUN_000028a4(DAT_00062bfc);
          }
          FUN_0019d660(iVar4);
        }
        local_58 = (uint)*(ushort *)((int)param_1 + 0xce) * 1000;
        local_40 = iVar3;
        while( true ) {
          iVar3 = local_40;
          cVar1 = *(char *)((int)param_1 + 0xd1);
          bVar31 = cVar1 == '\0';
          if (bVar31) {
            cVar1 = (char)param_1[0x34];
          }
          if (!bVar31 || cVar1 != '\0') break;
          local_114 = FUN_0019dd64(local_40,&local_44);
          ppppppiVar6 = (int ******)FUN_0017bfc0();
          if (local_58 >> 2 <= (uint)((int)ppppppiVar6 - (int)local_a4)) {
            pppppppiVar27 = (int *******)0x0;
            local_124 = (int *******)0x0;
            local_a4 = ppppppiVar6;
            puVar12 = (undefined4 *)FUN_0010f82c(0xc,0);
            pppppppiVar7 = (int *******)FUN_0010f82c(0xc,0);
            uVar24 = local_48;
            puVar12[2] = pppppppiVar7;
            puVar12[1] = 1;
            pppppppiVar29 = pppppppiVar7 + 3;
            *puVar12 = 0;
            *pppppppiVar7 = (int ******)pppppppiVar7;
            pppppppiVar7[1] = (int ******)pppppppiVar7;
            local_110 = param_1 + 0x36;
            local_12c = pppppppiVar29;
            FUN_001a0700();
            local_48 = uVar24 & 0xffffff00 | 1;
            iVar3 = *(int *)(param_1[0x43] + 8);
            if (iVar3 != param_1[0x43]) {
              do {
                if ((uint)((int)ppppppiVar6 - *(int *)(iVar3 + 0x18)) < local_58) {
                  iVar4 = *(int *)(iVar3 + 0xc);
                  if (*(int *)(iVar3 + 0xc) == 0) {
                    iVar4 = *(int *)(iVar3 + 4);
                    while (iVar5 = iVar4, iVar3 == *(int *)(iVar5 + 0xc)) {
                      iVar3 = iVar5;
                      iVar4 = *(int *)(iVar5 + 4);
                    }
                    if (*(int *)(iVar3 + 0xc) != iVar5) {
                      iVar3 = iVar5;
                    }
                  }
                  else {
                    do {
                      iVar3 = iVar4;
                      iVar4 = *(int *)(iVar3 + 8);
                    } while (*(int *)(iVar3 + 8) != 0);
                  }
                }
                else {
                  local_120[0] = iVar3 + 0x1c;
                  puVar8 = puVar12;
                  if (pppppppiVar27 == (int *******)0x0) {
                    if (pppppppiVar29 == local_12c) {
                      uVar24 = 1;
                      if (puVar12 != (undefined4 *)0x0) {
                        uVar14 = puVar12[1];
                        uVar24 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
                        if (uVar24 < uVar14 + 1) {
                          uVar24 = uVar14 + 1;
                        }
                      }
                      puVar8 = (undefined4 *)FUN_0010f82c(0xc,0);
                      uVar13 = FUN_0010f82c(uVar24 * 0xc,0);
                      puVar8[2] = uVar13;
                      *puVar8 = puVar12;
                      puVar8[1] = uVar24;
                      pppppppiVar29 = (int *******)puVar8[2];
                      local_12c = pppppppiVar29 + uVar24 * 3;
                    }
                    pppppppiVar19 = pppppppiVar29 + 3;
                  }
                  else {
                    pppppppiVar19 = pppppppiVar29;
                    pppppppiVar29 = pppppppiVar27;
                    pppppppiVar27 = (int *******)*pppppppiVar27;
                  }
                  if (pppppppiVar29 + 2 != (int *******)0x0) {
                    thunk_FUN_001da408(pppppppiVar29 + 2,local_120[0]);
                  }
                  *pppppppiVar29 = (int ******)pppppppiVar7;
                  local_124 = (int *******)((int)local_124 + 1);
                  pppppppiVar29[1] = pppppppiVar7[1];
                  *pppppppiVar7[1] = (int *****)pppppppiVar29;
                  pppppppiVar7[1] = (int ******)pppppppiVar29;
                  iVar4 = *(int *)(iVar3 + 0xc);
                  if (*(int *)(iVar3 + 0xc) == 0) {
                    iVar4 = *(int *)(iVar3 + 4);
                    iVar5 = iVar3;
                    while (iVar15 = iVar4, iVar5 == *(int *)(iVar15 + 0xc)) {
                      iVar5 = iVar15;
                      iVar4 = *(int *)(iVar15 + 4);
                    }
                    if (*(int *)(iVar5 + 0xc) != iVar15) {
                      iVar5 = iVar15;
                    }
                  }
                  else {
                    do {
                      iVar5 = iVar4;
                      iVar4 = *(int *)(iVar5 + 8);
                    } while (*(int *)(iVar5 + 8) != 0);
                  }
                  local_9c = iVar3;
                  FUN_001d2e38(auStack_a8,param_1 + 0x3f,&local_9c);
                  iVar3 = iVar5;
                  puVar12 = puVar8;
                  pppppppiVar29 = pppppppiVar19;
                }
              } while (iVar3 != param_1[0x43]);
            }
            if ((local_48 & 0xff) != 0) {
              local_48 = local_48 & 0xffffff00;
              FUN_001a0d18(local_110);
            }
            if (local_124 != (int *******)0x0) {
              for (pppppppiVar29 = (int *******)*pppppppiVar7; pppppppiVar29 != pppppppiVar7;
                  pppppppiVar29 = (int *******)*pppppppiVar29) {
                (*(code *)**(undefined4 **)param_1[0x30])
                          ((undefined4 *)param_1[0x30],pppppppiVar29 + 2);
              }
              (**(code **)(*(int *)param_1[0x30] + 4))();
            }
            pppppppiVar29 = _DAT_00062c04;
            if (pppppppiVar7 != (int *******)0x0) {
              pppppppiVar19 = (int *******)*pppppppiVar7;
              while (pppppppiVar20 = pppppppiVar19, pppppppiVar20 != pppppppiVar7) {
                pppppppiVar19 = pppppppiVar7;
                if (pppppppiVar20 != pppppppiVar7) {
                  pppppppiVar19 = (int *******)*pppppppiVar20;
                  *pppppppiVar20[1] = (int *****)pppppppiVar19;
                  (*pppppppiVar20)[1] = (int *****)pppppppiVar20[1];
                  if ((int *******)pppppppiVar20[2] != local_50) {
                    pppppppiVar16 = (int *******)(pppppppiVar20[2] + -3);
                    ppppppiVar28 = *pppppppiVar16;
                    if ((ppppppiVar28 == (int ******)0xffffffff) ||
                       ((pppppppiVar16 != pppppppiVar29 &&
                        (*pppppppiVar16 = (int ******)((int)ppppppiVar28 + -1),
                        ppppppiVar28 == (int ******)0x0)))) {
                      FUN_0010fa20(pppppppiVar20[2] + -3,(int)pppppppiVar20[2][-2] + 0xe,0);
                    }
                  }
                  *pppppppiVar20 = (int ******)pppppppiVar27;
                  pppppppiVar27 = pppppppiVar20;
                }
              }
              *pppppppiVar7 = (int ******)pppppppiVar27;
              while (puVar12 != (undefined4 *)0x0) {
                puVar8 = (undefined4 *)*puVar12;
                FUN_0010fa20(puVar12[2],puVar12[1],0);
                FUN_0010fa20(puVar12,1,0);
                puVar12 = puVar8;
              }
            }
          }
          if (local_114 == 0) {
            ppppppiVar28 = (int ******)(uint)*(ushort *)(*local_44 + 8);
            FUN_001a0700(param_1 + 0x36);
            param_1[0x35] = param_1[0x35] + (int)ppppppiVar28;
            FUN_001a0d18(param_1 + 0x36);
            pbVar21 = *(byte **)(*local_44 + 4);
            iVar3 = (*pbVar21 & 0xf) * 4;
            if (*(ushort *)(param_1 + 0x33) ==
                (ushort)(*(ushort *)(pbVar21 + iVar3 + 2) >> 8 |
                        *(ushort *)(pbVar21 + iVar3 + 2) << 8)) {
              uVar24 = *(uint *)(pbVar21 + iVar3 + 8);
              uVar14 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8;
              if ((uVar24 & 0xff) >> 5 == 1) {
                if (((uVar24 << 0x18 & 0x13000000) == 0) && (uVar14 != 0)) {
                  local_3c = (uint)pbVar21[iVar3 + 0xe] << 0x10 | (uint)pbVar21[iVar3 + 0xd] << 8 |
                             (uint)pbVar21[iVar3 + 0xc] | (uint)pbVar21[iVar3 + 0xf] << 0x18;
                  local_34 = uVar14;
                  if ((uVar24 << 0x18 & 0x4000000) != 0) {
                    uVar32 = FUN_0007e210(&local_3c,uVar14);
                    pppppiVar17 = (int *****)((ulonglong)uVar32 >> 0x20);
                    pppppiVar9 = (int *****)uVar32;
                    local_12c = local_50;
                    FUN_001a0700(param_1 + 0x36);
                    pppppppiVar27 = _DAT_00062c04;
                    ppppppiVar22 = (int ******)param_1[0x43];
                    ppppppiVar6 = ppppppiVar22;
                    ppppppiVar28 = (int ******)ppppppiVar22[1];
                    pppppiVar18 = extraout_r1;
                    while (ppppppiVar28 != (int ******)0x0) {
                      pppppiVar18 = pppppiVar17;
                      if (pppppiVar17 < ppppppiVar28[5] ||
                          (uint)((int)ppppppiVar28[5] - (int)pppppiVar17) <
                          (uint)(pppppiVar9 <= ppppppiVar28[4])) {
                        ppppppiVar6 = ppppppiVar28;
                        ppppppiVar28 = (int ******)ppppppiVar28[2];
                      }
                      else {
                        ppppppiVar28 = (int ******)ppppppiVar28[3];
                      }
                    }
                    if ((ppppppiVar6 == ppppppiVar22) ||
                       (pppppiVar18 = (int *****)((int)pppppiVar9 - (int)ppppppiVar6[4]),
                       pppppiVar17 <= ppppppiVar6[5] &&
                       (uint)(ppppppiVar6[4] <= pppppiVar9) <=
                       (uint)((int)pppppiVar17 - (int)ppppppiVar6[5]))) {
                      ppppppiVar6 = ppppppiVar22;
                    }
                    if (ppppppiVar6 != (int ******)param_1[0x43]) {
                      pppppppiVar29 = (int *******)(ppppppiVar6[7] + -3);
                      if (*pppppppiVar29 == (int ******)0xffffffff) {
                        if (&local_12c != (int ********)(ppppppiVar6 + 7)) {
                          local_160 = (int ******)ppppppiVar6[7][-1];
                          local_15c = (int ****)0x0;
                          local_158 = local_160;
                          FUN_001da110(&local_12c,0,local_12c[-1]);
                        }
                      }
                      else {
                        if (pppppppiVar29 != _DAT_00062c04) {
                          *pppppppiVar29 = (int ******)((int)*pppppppiVar29 + 1);
                        }
                        if (local_12c != local_50) {
                          pppppppiVar29 = local_12c + -3;
                          ppppppiVar28 = *pppppppiVar29;
                          if ((ppppppiVar28 == (int ******)0xffffffff) ||
                             ((pppppppiVar29 != pppppppiVar27 &&
                              (*pppppppiVar29 = (int ******)((int)ppppppiVar28 + -1),
                              ppppppiVar28 == (int ******)0x0)))) {
                            FUN_0010fa20(local_12c + -3,(int)local_12c[-2] + 0xe,0);
                          }
                        }
                        local_12c = (int *******)ppppppiVar6[7];
                      }
                      local_160 = ppppppiVar6;
                      FUN_001d2e38(&local_154,param_1 + 0x3f,&local_160);
                      pppppiVar18 = extraout_r1_00;
                    }
                    FUN_001a0d18(param_1 + 0x36,pppppiVar18);
                    if (local_12c[-1] != (int ******)0x0) {
                      (*(code *)**(undefined4 **)param_1[0x30])
                                ((undefined4 *)param_1[0x30],&local_12c);
                      (**(code **)(*(int *)param_1[0x30] + 4))();
                    }
                    if (local_12c != local_50) {
                      pppppppiVar27 = local_12c + -3;
                      ppppppiVar6 = *pppppppiVar27;
                      if ((ppppppiVar6 == (int ******)0xffffffff) ||
                         ((pppppppiVar27 != _DAT_00062c04 &&
                          (*pppppppiVar27 = (int ******)((int)ppppppiVar6 + -1),
                          ppppppiVar6 == (int ******)0x0)))) {
                        FUN_0010fa20(local_12c + -3,(int)local_12c[-2] + 0xe,0);
                      }
                    }
                    goto LAB_000636c0;
                  }
                  if ((int ******)(iVar3 + 0x10U) < ppppppiVar28) {
                    iVar4 = FUN_00003960(pbVar21 + (int)(iVar3 + 0x10U),
                                         s__S__ERROR__SAPReceiver__process__00062c74._0_4_);
                    if (iVar4 == 0) {
                      ppppppiVar22 = (int ******)(iVar3 + 0x20);
                      if (ppppppiVar22 < ppppppiVar28) {
                        ppppppiVar23 = (int ******)((int)ppppppiVar28 - (int)ppppppiVar22);
                        if ((int ******)0xfffffff1 < ppppppiVar23) {
                          local_160 = (int ******)0xfffffff1;
                          FUN_0010f7cc(8,DAT_00062cdc,DAT_00062cdc,ppppppiVar23);
                        }
                        pppppppiVar27 = local_50;
                        if (ppppppiVar23 != (int ******)0x0) {
                          pppppppiVar27 = (int *******)&local_12c;
                          if ((int ******)0x80 < ppppppiVar23) {
                            pppppppiVar27 = &local_128;
                          }
                          local_128 = ppppppiVar23;
                          local_12c = (int *******)0x80;
                          ppppppiVar28 = *pppppppiVar27;
                          if ((int ******)0xfffffff1 < ppppppiVar28) {
                            local_160 = (int ******)0xfffffff1;
                            FUN_0010f7cc(8,DAT_00062cdc,DAT_00062cdc,ppppppiVar28);
                          }
                          if (ppppppiVar28 < ppppppiVar23) {
                            local_160 = ppppppiVar28;
                            FUN_0010f7cc(8,DAT_00062cdc,DAT_00062cdc,ppppppiVar23);
                          }
                          pppppppiVar27 = _DAT_00062c04;
                          if (ppppppiVar28 != (int ******)0x0) {
                            pppppppiVar27 = (int *******)FUN_0010f82c((int)ppppppiVar28 + 0xe,0);
                            if (pppppppiVar27 != (int *******)0x0) {
                              *pppppppiVar27 = (int ******)0x0;
                              pppppppiVar27[1] = (int ******)0x0;
                              pppppppiVar27[2] = (int ******)0x0;
                            }
                            pppppppiVar27[2] = ppppppiVar23;
                            *pppppppiVar27 = (int ******)0x0;
                            pppppppiVar27[1] = ppppppiVar28;
                            if ((char *)((int)pppppppiVar27 + (int)ppppppiVar23) + 0xc !=
                                (char *)0x0) {
                              ((char *)((int)pppppppiVar27 + (int)ppppppiVar23))[0xc] = '\0';
                            }
                          }
                          pppppppiVar27 = pppppppiVar27 + 3;
                          ppppppiVar28 = ppppppiVar23;
                        }
                        local_138[0] = pppppppiVar27;
                        if (pbVar21 + (int)ppppppiVar22 != (byte *)0x0) {
                          FUN_00003628();
                        }
                        FUN_00056158(local_120,local_138);
                        if ((local_120[0] & 0xff) != 0) {
                          uVar32 = FUN_0007e210(&local_3c,local_34);
                          uVar14 = (uint)((ulonglong)uVar32 >> 0x20);
                          uVar24 = (uint)uVar32;
                          local_30 = param_1 + 0x36;
                          FUN_001a0700();
                          local_38 = (uint)ppppppiVar28 & 0xffffff00 | 1;
                          iVar5 = param_1[0x43];
                          iVar3 = iVar5;
                          iVar4 = *(int *)(iVar5 + 4);
                          while (iVar4 != 0) {
                            if (uVar14 < *(uint *)(iVar4 + 0x14) ||
                                *(uint *)(iVar4 + 0x14) - uVar14 <
                                (uint)(uVar24 <= *(uint *)(iVar4 + 0x10))) {
                              iVar3 = iVar4;
                              iVar4 = *(int *)(iVar4 + 8);
                            }
                            else {
                              iVar4 = *(int *)(iVar4 + 0xc);
                            }
                          }
                          if ((iVar3 == iVar5) ||
                             (uVar14 <= *(uint *)(iVar3 + 0x14) &&
                              (uint)(*(uint *)(iVar3 + 0x10) <= uVar24) <=
                              uVar14 - *(uint *)(iVar3 + 0x14))) {
                            iVar3 = iVar5;
                          }
                          if (iVar3 == param_1[0x43]) {
                            iVar3 = FUN_00003374(local_138[0]);
                            if (((iVar3 != 0) && (iVar3 - (int)local_138[0] != -1)) &&
                               (ppppppiVar28 = (int ******)((iVar3 - (int)local_138[0]) + 2),
                               ppppppiVar28 <= local_138[0][-1])) {
                              iVar3 = FUN_0000332e((char *)((int)local_138[0] + (int)ppppppiVar28),
                                                   &DAT_00063150);
                              ppppppiVar22 = (int ******)(iVar3 + (int)ppppppiVar28);
                              if ((ppppppiVar22 < local_138[0][-1]) &&
                                 (local_a0 = ppppppiVar22, ppppppiVar22 != (int ******)0xffffffff))
                              {
                                local_ac = &DAT_00063154;
                                ppppppiVar22 = (int ******)FUN_000034d0();
                                local_b0 = (int *******)ppppppiVar22;
                                pppppppiVar27 = local_50;
                                if (ppppppiVar22 != (int ******)0x0) {
                                  local_2c[0] = ppppppiVar22;
                                  local_12c = (int *******)0x80;
                                  pppppppiVar27 = (int *******)&local_12c;
                                  if ((int ******)0x80 < ppppppiVar22) {
                                    pppppppiVar27 = local_2c;
                                  }
                                  ppppppiVar23 = *pppppppiVar27;
                                  if ((int ******)0xfffffff1 < ppppppiVar23) {
                                    local_160 = (int ******)0xfffffff1;
                                    FUN_0010f7cc(8,DAT_00062cdc,DAT_00062cdc,ppppppiVar23);
                                  }
                                  if (ppppppiVar23 < ppppppiVar22) {
                                    local_160 = ppppppiVar23;
                                    FUN_0010f7cc(8,DAT_00062cdc,DAT_00062cdc,ppppppiVar22);
                                  }
                                  pppppppiVar27 = _DAT_00062c04;
                                  if (ppppppiVar23 != (int ******)0x0) {
                                    pppppppiVar27 =
                                         (int *******)FUN_0010f82c((int)ppppppiVar23 + 0xe,0);
                                    if (pppppppiVar27 != (int *******)0x0) {
                                      *pppppppiVar27 = (int ******)0x0;
                                      pppppppiVar27[1] = (int ******)0x0;
                                      pppppppiVar27[2] = (int ******)0x0;
                                    }
                                    *pppppppiVar27 = (int ******)0x0;
                                    pppppppiVar27[1] = ppppppiVar23;
                                    pppppppiVar27[2] = ppppppiVar22;
                                    if ((char *)((int)pppppppiVar27 + (int)ppppppiVar22) + 0xc !=
                                        (char *)0x0) {
                                      ((char *)((int)pppppppiVar27 + (int)ppppppiVar22))[0xc] = '\0'
                                      ;
                                    }
                                  }
                                  pppppppiVar27 = pppppppiVar27 + 3;
                                }
                                local_130 = pppppppiVar27;
                                FUN_00003628(pppppppiVar27,local_ac,local_b0);
                                local_b0 = (int *******)&local_130;
                                uVar26 = (int)local_a0 - (int)ppppppiVar28;
                                if (local_138[0][-1] < ppppppiVar28) {
                                  local_160 = local_138[0][-1];
                                  FUN_0010f7cc(9,&DAT_00063158,&DAT_00063158,ppppppiVar28);
                                }
                                if ((uint)((int)local_138[0][-1] - (int)ppppppiVar28) <= uVar26) {
                                  uVar26 = (int)local_138[0][-1] - (int)ppppppiVar28;
                                }
                                FUN_001da390(&local_54,
                                             (char *)((int)local_138[0] + (int)ppppppiVar28),uVar26,
                                             &local_ac);
                                pppppppiVar27 = local_b0;
                                ppppppiVar22 = local_130[-1];
                                ppppppiVar28 = local_54[-1];
                                if ((local_130[-2] <
                                     (int ******)((int)ppppppiVar22 + (int)ppppppiVar28)) ||
                                   (1 < (int)local_130[-3] + 1U)) {
                                  local_160 = (int ******)(-(int)ppppppiVar28 - 0xf);
                                  if (local_160 < ppppppiVar22) {
                                    FUN_0010f7cc(8,&DAT_00063158,&DAT_00063158);
                                  }
                                  local_160 = local_54[-1];
                                  local_15c = (int ****)0x0;
                                  local_158 = ppppppiVar28;
                                  FUN_001da110(pppppppiVar27,local_130[-1],0);
                                }
                                else {
                                  FUN_00003628((char *)((int)local_130 + (int)ppppppiVar22),local_54
                                               ,(int)ppppppiVar28 + 1);
                                  local_130[-1] =
                                       (int ******)((int)ppppppiVar22 + (int)ppppppiVar28);
                                }
                                if (local_54 != local_50) {
                                  pppppppiVar27 = local_54 + -3;
                                  ppppppiVar28 = *pppppppiVar27;
                                  if ((ppppppiVar28 == (int ******)0xffffffff) ||
                                     ((pppppppiVar27 != _DAT_00062c04 &&
                                      (*pppppppiVar27 = (int ******)((int)ppppppiVar28 + -1),
                                      ppppppiVar28 == (int ******)0x0)))) {
                                    FUN_0010fa20(local_54 + -3,(int)local_54[-2] + 0xe,0);
                                  }
                                }
                                pppppiVar18 = (int *****)((int *****)param_1[0x43])[2];
                                if (pppppiVar18 != (int *****)param_1[0x43]) {
                                  do {
                                    ppppppiVar28 = (int ******)pppppiVar18[7][-1];
                                    if (ppppppiVar28 == local_130[-1]) {
                                      local_154 = ppppppiVar28;
                                      local_2c[0] = local_130[-1];
                                      ppppppiVar22 = (int ******)local_2c;
                                      if (ppppppiVar28 <= local_130[-1]) {
                                        ppppppiVar22 = (int ******)&local_154;
                                      }
                                      iVar3 = FUN_0000339c(pppppiVar18[7],local_130,*ppppppiVar22);
                                      if ((iVar3 == 0) &&
                                         ((int ******)pppppiVar18[7][-1] == local_130[-1])) {
                                        local_160 = (int ******)pppppiVar18;
                                        FUN_001d2e38(&local_154,param_1 + 0x3f,&local_160);
                                        break;
                                      }
                                    }
                                    pppppiVar9 = (int *****)pppppiVar18[3];
                                    if ((int *****)pppppiVar18[3] == (int *****)0x0) {
                                      pppppiVar9 = (int *****)pppppiVar18[1];
                                      while (pppppiVar17 = pppppiVar9,
                                            pppppiVar18 == (int *****)pppppiVar17[3]) {
                                        pppppiVar18 = pppppiVar17;
                                        pppppiVar9 = (int *****)pppppiVar17[1];
                                      }
                                      if ((int *****)pppppiVar18[3] != pppppiVar17) {
                                        pppppiVar18 = pppppiVar17;
                                      }
                                    }
                                    else {
                                      do {
                                        pppppiVar18 = pppppiVar9;
                                        pppppiVar9 = (int *****)pppppiVar18[2];
                                      } while ((int *****)pppppiVar18[2] != (int *****)0x0);
                                    }
                                  } while (pppppiVar18 != (int *****)param_1[0x43]);
                                }
                                local_158 = (int ******)(param_1 + 0x3f);
                                local_160 = ppppppiVar6;
                                uVar13 = FUN_0007e354(auStack_90,&local_130,&local_3c,local_34);
                                local_f0 = uVar32;
                                uVar32 = FUN_0007e2ac(auStack_e8,uVar13);
                                ppppppiVar6 = (int ******)((ulonglong)uVar32 >> 0x20);
                                iVar3 = (int)uVar32;
                                ppppppiVar22 = (int ******)(iVar3 - 8);
                                pppppppiVar27 = (int *******)local_158[4];
                                bVar31 = (int *******)pppppppiVar27[1] != (int *******)0x0;
                                ppppppiVar28 = extraout_r12;
                                if (bVar31) {
                                  ppppppiVar6 = *(int *******)(iVar3 + -4);
                                  ppppppiVar28 = (int ******)*ppppppiVar22;
                                }
                                bVar2 = true;
                                pppppppiVar29 = pppppppiVar27;
                                pppppppiVar7 = (int *******)pppppppiVar27[1];
                                while (bVar31) {
                                  bVar2 = ppppppiVar6 <= pppppppiVar7[5] &&
                                          (uint)(pppppppiVar7[4] <= ppppppiVar28) <=
                                          (uint)((int)ppppppiVar6 - (int)pppppppiVar7[5]);
                                  if (bVar2) {
                                    pppppppiVar19 = (int *******)pppppppiVar7[2];
                                  }
                                  else {
                                    pppppppiVar19 = (int *******)pppppppiVar7[3];
                                  }
                                  bVar31 = pppppppiVar19 != (int *******)0x0;
                                  pppppppiVar29 = pppppppiVar7;
                                  pppppppiVar7 = pppppppiVar19;
                                }
                                if (*(char *)(local_158 + 6) == '\0') {
                                  if (bVar2) {
                                    if (pppppppiVar29 == (int *******)pppppppiVar27[2]) {
                                      local_160 = ppppppiVar22;
                                      FUN_001d3604(&local_124,local_158);
                                      local_98 = local_124;
                                      local_94 = 1;
                                      goto LAB_00063368;
                                    }
                                    if ((*(char *)pppppppiVar29 == '\0') &&
                                       ((int *******)pppppppiVar29[1][1] == pppppppiVar29)) {
                                      pppppppiVar29 = (int *******)pppppppiVar29[3];
                                    }
                                    else {
                                      pppppppiVar27 = (int *******)pppppppiVar29[2];
                                      if ((int *******)pppppppiVar29[2] == (int *******)0x0) {
                                        pppppppiVar27 = (int *******)pppppppiVar29[1];
                                        pppppppiVar7 = pppppppiVar29;
                                        while (pppppppiVar29 = pppppppiVar27,
                                              pppppppiVar7 == (int *******)pppppppiVar29[2]) {
                                          pppppppiVar7 = pppppppiVar29;
                                          pppppppiVar27 = (int *******)pppppppiVar29[1];
                                        }
                                      }
                                      else {
                                        do {
                                          pppppppiVar29 = pppppppiVar27;
                                          pppppppiVar27 = (int *******)pppppppiVar29[3];
                                        } while ((int *******)pppppppiVar29[3] != (int *******)0x0);
                                      }
                                    }
                                  }
                                  if (*(int *******)(iVar3 + -4) < pppppppiVar29[5] ||
                                      (uint)((int)pppppppiVar29[5] - (int)*(int *******)(iVar3 + -4)
                                            ) < (uint)(*ppppppiVar22 <= pppppppiVar29[4])) {
                                    local_94 = 0;
                                    local_98 = pppppppiVar29;
                                  }
                                  else {
                                    local_160 = ppppppiVar22;
                                    FUN_001d3604(&local_b0,local_158);
                                    local_98 = local_b0;
                                    local_94 = 1;
                                  }
                                }
                                else {
                                  local_160 = ppppppiVar22;
                                  FUN_001d3604(&local_12c,local_158);
                                  local_98 = local_12c;
                                  local_94 = 1;
                                }
LAB_00063368:
                                FUN_0007e430(auStack_e8);
                                FUN_0007e430(auStack_90);
                                iVar5 = param_1[0x43];
                                iVar3 = iVar5;
                                iVar4 = *(int *)(iVar5 + 4);
                                while (iVar4 != 0) {
                                  if (uVar14 < *(uint *)(iVar4 + 0x14) ||
                                      *(uint *)(iVar4 + 0x14) - uVar14 <
                                      (uint)(uVar24 <= *(uint *)(iVar4 + 0x10))) {
                                    iVar3 = iVar4;
                                    iVar4 = *(int *)(iVar4 + 8);
                                  }
                                  else {
                                    iVar4 = *(int *)(iVar4 + 0xc);
                                  }
                                }
                                if ((iVar3 == iVar5) ||
                                   (uVar14 <= *(uint *)(iVar3 + 0x14) &&
                                    (uint)(*(uint *)(iVar3 + 0x10) <= uVar24) <=
                                    uVar14 - *(uint *)(iVar3 + 0x14))) {
                                  iVar3 = iVar5;
                                }
                                if (iVar3 != param_1[0x43]) {
                                  FUN_0007e220(iVar3 + 0x18,local_120);
                                  (*(code *)**(undefined4 **)param_1[0x30])
                                            ((undefined4 *)param_1[0x30],iVar3 + 0x1c);
                                  (**(code **)(*(int *)param_1[0x30] + 4))();
                                }
                                if (local_130 != local_50) {
                                  pppppppiVar27 = local_130 + -3;
                                  ppppppiVar6 = *pppppppiVar27;
                                  if ((ppppppiVar6 == (int ******)0xffffffff) ||
                                     ((pppppppiVar27 != _DAT_00062c04 &&
                                      (*pppppppiVar27 = (int ******)((int)ppppppiVar6 + -1),
                                      ppppppiVar6 == (int ******)0x0)))) {
                                    FUN_0010fa20(local_130 + -3,(int)local_130[-2] + 0xe,0);
                                  }
                                }
                              }
                            }
                          }
                          else {
                            *(int *******)(iVar3 + 0x18) = ppppppiVar6;
                            iVar4 = FUN_0007e02c(iVar3 + 0x18,local_120);
                            if (iVar4 == 0) {
                              iVar4 = FUN_0007e220(iVar3 + 0x18,local_120);
                              if (iVar4 != 0) {
                                (*(code *)**(undefined4 **)param_1[0x30])
                                          ((undefined4 *)param_1[0x30],iVar3 + 0x1c);
                                (**(code **)(*(int *)param_1[0x30] + 4))();
                              }
                            }
                          }
                          if ((local_38 & 0xff) != 0) {
                            FUN_001a0d18();
                          }
                        }
                        piVar25 = local_f8;
                        if (local_f8 != (int *)0x0) {
                          piVar30 = (int *)*local_f8;
                          while (piVar11 = piVar30, piVar11 != piVar25) {
                            piVar30 = local_f8;
                            if (piVar11 != local_f8) {
                              piVar30 = (int *)*piVar11;
                              *(int *)piVar11[1] = *piVar11;
                              *(int *)(*piVar11 + 4) = piVar11[1];
                              local_f4 = local_f4 + -1;
                              FUN_001da44c(piVar11 + 2);
                              *piVar11 = (int)local_104;
                              local_104 = piVar11;
                            }
                          }
                          *local_f8 = (int)local_104;
                          piVar25 = (int *)local_108;
                          while (piVar25 != (int *)0x0) {
                            local_108 = *piVar25;
                            FUN_0010fa20(piVar25[2],piVar25[1],0);
                            FUN_0010fa20(piVar25,1,0);
                            piVar25 = (int *)local_108;
                          }
                          local_104 = (int *)0x0;
                          local_100 = 0;
                          local_fc = 0;
                          local_108 = (int)piVar25;
                        }
                        iVar3 = FUN_001da44c(auStack_10c);
                        FUN_001da44c(iVar3 + -4);
                        if (local_138[0] != local_50) {
                          pppppppiVar27 = local_138[0] + -3;
                          ppppppiVar6 = *pppppppiVar27;
                          if ((ppppppiVar6 == (int ******)0xffffffff) ||
                             ((pppppppiVar27 != _DAT_00062c04 &&
                              (*pppppppiVar27 = (int ******)((int)ppppppiVar6 + -1),
                              ppppppiVar6 == (int ******)0x0)))) {
                            FUN_0010fa20(local_138[0] + -3,(int)local_138[0][-2] + 0xe,0);
                          }
                        }
                        goto LAB_000636c0;
                      }
                      pcVar10 = s_ERROR__SAPReceiver__process__No_S_00062cac;
                    }
                    else {
                      pcVar10 = s__S__ERROR__SAPReceiver__process__00062c74 + 4;
                    }
                  }
                  else {
                    pcVar10 = s_ERROR__SAPReceiver__process__No_S_00062c44;
                  }
                }
                else {
                  pcVar10 = s_ERROR__SAPReceiver__process__Uns_0006399c;
                }
                FUN_000028a4(pcVar10);
              }
              else {
                FUN_000028a4(s_ERROR__SAPReceiver__process__Inv_000639d4,(uVar24 & 0xff) >> 5);
              }
            }
            else {
              FUN_000028a4(DAT_00063a0c);
            }
LAB_000636c0:
            FUN_0019d1bc(local_44);
          }
          else if (local_114 != -4) {
            FUN_000028a4(s_I_ERROR__SAPReceiver__process__n_00062c06 + 2,local_114);
          }
        }
        iVar4 = FUN_0019dc00(0x20,0);
        if (iVar4 == 0) {
          FUN_000028a4(DAT_00063a14);
        }
        else {
          iVar5 = FUN_0019daa8(iVar4,&local_4c,0,1);
          if (iVar5 != 0) {
            thunk_FUN_000028a4(DAT_00063a10);
          }
          FUN_0019d660(iVar4);
        }
        iVar3 = FUN_0019d660(iVar3);
        if (iVar3 != 0) {
          thunk_FUN_000028a4(DAT_00063a18);
        }
      }
    } while ((char)param_1[0x34] == '\0');
  }
  local_150 = (undefined4 *)0x0;
  local_14c = (int *)0x0;
  local_148 = (int *)0x0;
  local_144 = (int *)0x0;
  local_140 = (int *)0x0;
  local_13c = 0;
  puVar12 = (undefined4 *)FUN_0010f82c(0xc,0);
  uVar13 = FUN_0010f82c(0xc,0);
  puVar12[2] = uVar13;
  *puVar12 = local_150;
  puVar12[1] = 1;
  local_140 = (int *)puVar12[2];
  local_148 = local_140 + 3;
  *local_140 = (int)local_140;
  local_140[1] = (int)local_140;
  local_150 = puVar12;
  local_144 = local_148;
  FUN_001a0700(param_1 + 0x36);
  iVar3 = *(int *)(param_1[0x43] + 8);
  if (iVar3 != param_1[0x43]) {
    do {
      piVar25 = local_140;
      if (local_14c == (int *)0x0) {
        if (local_148 == local_144) {
          uVar24 = 1;
          if (local_150 != (undefined4 *)0x0) {
            uVar14 = local_150[1];
            uVar24 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
            if (uVar24 < uVar14 + 1) {
              uVar24 = uVar14 + 1;
            }
          }
          puVar12 = (undefined4 *)FUN_0010f82c(0xc,0);
          uVar13 = FUN_0010f82c(uVar24 * 0xc,0);
          puVar12[2] = uVar13;
          *puVar12 = local_150;
          puVar12[1] = uVar24;
          local_148 = (int *)puVar12[2];
          local_144 = local_148 + uVar24 * 3;
          local_150 = puVar12;
        }
        piVar30 = local_148;
        local_148 = local_148 + 3;
      }
      else {
        piVar30 = local_14c;
        local_14c = (int *)*local_14c;
      }
      if (piVar30 + 2 != (int *)0x0) {
        thunk_FUN_001da408(piVar30 + 2,iVar3 + 0x1c);
      }
      *piVar30 = (int)piVar25;
      piVar30[1] = piVar25[1];
      *(int **)piVar25[1] = piVar30;
      piVar25[1] = (int)piVar30;
      local_13c = local_13c + 1;
      iVar4 = *(int *)(iVar3 + 0xc);
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar4 = *(int *)(iVar3 + 4);
        while (iVar5 = iVar4, iVar3 == *(int *)(iVar5 + 0xc)) {
          iVar3 = iVar5;
          iVar4 = *(int *)(iVar5 + 4);
        }
        if (*(int *)(iVar3 + 0xc) != iVar5) {
          iVar3 = iVar5;
        }
      }
      else {
        do {
          iVar3 = iVar4;
          iVar4 = *(int *)(iVar3 + 8);
        } while (*(int *)(iVar3 + 8) != 0);
      }
    } while (iVar3 != param_1[0x43]);
  }
  local_158 = (int ******)param_1[0x43];
  local_15c = (int ****)local_158[2];
  FUN_001d3474(local_138,param_1 + 0x3f,&local_15c,&local_158);
  FUN_001a0d18(param_1 + 0x36);
  piVar25 = (int *)*local_140;
  if (piVar25 != local_140) {
    do {
      (*(code *)**(undefined4 **)param_1[0x30])((undefined4 *)param_1[0x30],piVar25 + 2);
      piVar25 = (int *)*piVar25;
    } while (piVar25 != local_140);
  }
  (**(code **)(*(int *)param_1[0x30] + 4))();
  FUN_001dce16(&local_150);
  return;
}


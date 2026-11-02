// rea decompile_all
// name: FUN_00115d40
// address: 0x115d40
// body: available
// range: 0x115d40-0x1162ff inclusive
// range: 0x11634c-0x1169f3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1163c0 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00115d40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  int iVar5;
  undefined4 uVar6;
  int ***pppiVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *extraout_r1;
  int *extraout_r1_00;
  int *extraout_r1_01;
  undefined1 *puVar14;
  int *extraout_r1_02;
  int *extraout_r1_03;
  uint uVar15;
  code *pcVar16;
  char *pcVar17;
  int **ppiVar18;
  undefined4 *puVar19;
  uint uVar20;
  char *pcVar21;
  int *piVar22;
  uint uVar23;
  bool bVar24;
  undefined8 uVar25;
  int *local_214;
  int *local_210;
  int *local_20c;
  int *local_208;
  int iStack_204;
  int iStack_200;
  int local_1fc;
  int *local_1f8;
  int *local_1f4;
  int *local_1f0;
  int *local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  undefined4 local_1dc;
  int **local_1d8;
  int **local_1d4;
  int *local_1d0;
  int *local_1cc;
  int **local_1c8;
  uint local_1c4;
  int *local_1c0;
  int *local_1b8 [2];
  int **local_1b0 [2];
  int **local_1a8;
  int *local_1a4;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_1f8 = (int *)0x0;
  local_1fc = 0;
  local_1e4 = 0x400;
  local_1f4 = (int *)0x0;
  local_1f0 = (int *)0x0;
  local_1ec = (int *)0x0;
  local_1e8 = 0;
  local_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  piVar1 = (int *)FUN_001f01c4(0x14,1);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = 0;
    piVar1[1] = 0x10000;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    iVar2 = FUN_001f01c4(1);
    piVar1[3] = iVar2;
    piVar1[4] = iVar2;
    iVar2 = piVar1[1];
    piVar3 = (int *)FUN_001eb840(iVar2 + 0xc);
    piVar3[1] = 0;
    *piVar3 = iVar2;
    piVar3[2] = *piVar1;
    *piVar1 = (int)piVar3;
  }
  local_1f8 = piVar1;
  local_1f4 = piVar1;
  local_1f0 = (int *)FUN_00228618(piVar1,local_1e4);
  local_1dc = 0;
  local_1e8 = (int)local_1f0 + local_1e4;
  local_1e0 = 0;
  local_1fc = 0;
  local_1d8 = (int **)0x0;
  local_1d4 = (int **)0x0;
  local_1c4 = 0x100;
  local_1d0 = (int *)0x0;
  local_1cc = (int *)0x0;
  local_1c8 = (int **)0x0;
  local_1ec = local_1f0;
  local_38 = param_2;
  local_34 = param_2;
  ppiVar4 = (int **)FUN_001f01c4(0x14,1);
  if (ppiVar4 != (int **)0x0) {
    *ppiVar4 = (int *)0x0;
    ppiVar4[1] = (int *)0x10000;
    ppiVar4[2] = (int *)0x0;
    ppiVar4[3] = (int *)0x0;
    ppiVar4[4] = (int *)0x0;
    piVar1 = (int *)FUN_001f01c4(1);
    ppiVar4[3] = piVar1;
    ppiVar4[4] = piVar1;
    piVar3 = ppiVar4[1];
    piVar1 = (int *)FUN_001eb840(piVar3 + 3);
    piVar1[1] = 0;
    *piVar1 = (int)piVar3;
    piVar1[2] = (int)*ppiVar4;
    *ppiVar4 = piVar1;
  }
  local_1d8 = ppiVar4;
  local_1d4 = ppiVar4;
  local_1d0 = (int *)FUN_00228618(ppiVar4,local_1c4);
  local_1c8 = (int **)((int)local_1d0 + local_1c4);
  local_40 = 0;
  local_3c = 0;
  local_1cc = local_1d0;
  uVar25 = FUN_002281bc(&local_1d8,&local_38,&local_208);
  ppiVar4 = local_1d4;
  piVar1 = (int *)((ulonglong)uVar25 >> 0x20);
  if ((int)uVar25 == 0) {
    local_1e0 = local_40;
    local_1dc = local_3c;
    local_1ec = local_1f0;
  }
  else {
    if ((int)local_1ec - (int)local_1f0 != 0x10) goto LAB_001163c0;
    piVar1 = (int *)local_1ec[-4];
    iStack_204 = local_1ec[-3];
    iStack_200 = local_1ec[-2];
    local_1fc = local_1ec[-1];
    local_1ec[-1] = 0;
    local_1e0 = 0;
    local_1dc = 0;
    local_208 = piVar1;
    local_1ec = local_1ec + -4;
  }
  if (local_1d4 != (int **)0x0) {
    while( true ) {
      piVar3 = *ppiVar4;
      if (piVar3 != (int *)0x0) {
        piVar1 = ppiVar4[2];
      }
      if (piVar3 == (int *)0x0 || piVar3 == piVar1) break;
      piVar1 = (int *)piVar3[2];
      FUN_001dae24();
      *ppiVar4 = piVar1;
      piVar1 = extraout_r1;
    }
    FUN_001eecc8(ppiVar4[4]);
    FUN_001eecc8(ppiVar4);
  }
  iVar2 = 4;
  if (((local_1e0 == 0) && (iVar5 = FUN_0022cc8c(&local_208,s_ArchwaveBCD_00116300), iVar5 != 0)) &&
     (iVar5 = FUN_00226214(&local_208,s_ArchwaveBCD_00116300), *(int *)(iVar5 + 0xc) == 3)) {
    uVar6 = FUN_00226214(&local_208,s_ArchwaveBCD_00116300);
    iVar5 = FUN_0022cc8c(uVar6,s_<1*_version_0011630c + 4);
    uVar6 = _DAT_00116318;
    if (iVar5 != 0) {
      uVar6 = FUN_00226214(&local_208,s_ArchwaveBCD_00116300);
      iVar5 = FUN_00226214(uVar6,s_<1*_version_0011630c + 4);
      uVar6 = _DAT_00116318;
      if ((*(uint *)(iVar5 + 0xc) & 0x800) != 0) {
        uVar6 = FUN_00226214(&local_208,s_ArchwaveBCD_00116300);
        piVar1 = (int *)FUN_00226214(uVar6,s_<1*_version_0011630c + 4);
        if ((piVar1[3] & 0x800U) == 0) {
LAB_001163c0:
                    /* WARNING: Subroutine does not return */
          FUN_00003538();
        }
        uVar6 = _DAT_00116318;
        if (*piVar1 == 1) {
          uVar6 = FUN_00226214(&local_208,s_ArchwaveBCD_00116300);
          iVar5 = FUN_0022cc8c(uVar6,s_0__commands_00116319 + 3);
          uVar6 = DAT_00116328;
          if (iVar5 != 0) {
            uVar6 = FUN_00226214(&local_208,s_ArchwaveBCD_00116300);
            iVar5 = FUN_00226214(uVar6,s_0__commands_00116319 + 3);
            uVar6 = DAT_00116328;
            if (*(int *)(iVar5 + 0xc) == 4) {
              iVar2 = 1;
              uVar6 = FUN_00226214(&local_208,s_ArchwaveBCD_00116300);
              uVar25 = FUN_00226214(uVar6,s_0__commands_00116319 + 3);
              piVar3 = (int *)uVar25;
              if (piVar3[3] == 4) {
                local_1c0 = (int *)piVar3[1];
                local_1cc = (int *)0x0;
                piVar1 = (int *)((ulonglong)uVar25 >> 0x20);
                if (local_1c0 != (int *)0x0) {
                  local_1a4 = DAT_0011632c;
                  do {
                    if (((piVar3[3] != 4) || ((int *)piVar3[1] <= local_1cc)) ||
                       (piVar1 = (int *)(*piVar3 + (int)local_1cc * 0x10), piVar1[3] != 3))
                    goto LAB_001163c0;
                    pcVar17 = &DAT_00116330;
                    do {
                      pcVar21 = pcVar17;
                      pcVar17 = pcVar21 + 1;
                    } while (*pcVar17 != '\0');
                    puVar19 = (undefined4 *)*piVar1;
                    pcVar21 = pcVar21 + -0x11632f;
                    if ((piVar1[1] & 0x7ffffffU) != 0) {
LAB_00116134:
                      if (((char *)puVar19[1] != pcVar21) ||
                         (iVar5 = FUN_00003658(*puVar19,&DAT_00116330,pcVar21), iVar5 != 0))
                      goto LAB_00116158;
                      if ((puVar19 == (undefined4 *)0x0) ||
                         (iVar5 = FUN_00226214(piVar1,&DAT_00116330),
                         (*(uint *)(iVar5 + 0xc) & 0x100000) == 0)) goto LAB_0011699c;
                      puVar19 = (undefined4 *)FUN_00226214(piVar1,&DAT_00116330);
                      if ((puVar19[3] & 0x100000) == 0) goto LAB_001163c0;
                      uVar6 = *puVar19;
                      ppiVar4 = (int **)FUN_00003738(uVar6);
                      piVar13 = local_1a4;
                      if (ppiVar4 != (int **)0x0) {
                        pppiVar7 = &local_1d4;
                        if ((int **)0x80 < ppiVar4) {
                          pppiVar7 = &local_1c8;
                        }
                        local_1c8 = ppiVar4;
                        local_1d4 = (int **)0x80;
                        ppiVar18 = *pppiVar7;
                        if ((int **)0xfffffff1 < ppiVar18) {
                          FUN_00173800(8,DAT_00116338,DAT_00116338,ppiVar18,0xfffffff1);
                        }
                        if (ppiVar18 < ppiVar4) {
                          FUN_00173800(8,DAT_00116338,DAT_00116338,ppiVar4,ppiVar18);
                        }
                        piVar13 = _DAT_0011633c;
                        if (ppiVar18 != (int **)0x0) {
                          piVar13 = (int *)FUN_00173860((int)ppiVar18 + 0xe,0);
                          if (piVar13 != (int *)0x0) {
                            *piVar13 = 0;
                            piVar13[1] = 0;
                            piVar13[2] = 0;
                          }
                          *piVar13 = 0;
                          piVar13[1] = (int)ppiVar18;
                          piVar13[2] = (int)ppiVar4;
                          if ((undefined1 *)((int)piVar13 + (int)(ppiVar4 + 3)) != (undefined1 *)0x0
                             ) {
                            *(undefined1 *)((int)piVar13 + (int)(ppiVar4 + 3)) = 0;
                          }
                        }
                        piVar13 = piVar13 + 3;
                      }
                      FUN_000039e0(piVar13,uVar6,ppiVar4);
                      if (piVar1[3] != 3) goto LAB_001163c0;
                      pcVar17 = s_iI_parameters_0011633d + 3;
                      do {
                        pcVar21 = pcVar17;
                        pcVar17 = pcVar21 + 1;
                      } while (*pcVar17 != '\0');
                      puVar19 = (undefined4 *)*piVar1;
                      pcVar21 = pcVar21 + -0x11633f;
                      if ((piVar1[1] & 0x7ffffffU) == 0) {
LAB_00116954:
                        if (piVar13 != local_1a4) {
                          iVar5 = piVar13[-3];
                          if ((iVar5 == -1) ||
                             ((piVar13 + -3 != _DAT_0011633c &&
                              (piVar13[-3] = iVar5 + -1, iVar5 == 0)))) {
                            FUN_00173a54(piVar13 + -3,piVar13[-2] + 0xe,0);
                          }
                        }
                        goto LAB_0011699c;
                      }
                      while (((char *)puVar19[1] != pcVar21 ||
                             (iVar5 = FUN_00003658(*puVar19,s_iI_parameters_0011633d + 3,pcVar21),
                             iVar5 != 0))) {
                        puVar19 = puVar19 + 8;
                        if ((undefined4 *)(*piVar1 + piVar1[1] * 0x20) == puVar19)
                        goto LAB_00116954;
                      }
                      if ((puVar19 == (undefined4 *)0x0) ||
                         (iVar5 = FUN_00226214(piVar1,s_iI_parameters_0011633d + 3),
                         *(int *)(iVar5 + 0xc) != 4)) goto LAB_00116954;
                      piVar1 = (int *)FUN_00226214(piVar1,s_iI_parameters_0011633d + 3);
                      if (piVar1[3] != 4) goto LAB_001163c0;
                      uVar23 = piVar1[1];
                      uVar20 = 0;
                      local_214 = (int *)0x0;
                      local_210 = (int *)0x0;
                      local_20c = (int *)0x0;
                      if (uVar23 != 0) {
                        do {
                          if ((piVar1[3] != 4) || ((uint)piVar1[1] <= uVar20)) goto LAB_001163c0;
                          if ((*(uint *)(*piVar1 + uVar20 * 0x10 + 0xc) & 0x100000) != 0) {
                            local_1c4 = *(uint *)(*piVar1 + uVar20 * 0x10);
                            ppiVar4 = (int **)FUN_00003738();
                            piVar8 = local_1a4;
                            if (ppiVar4 != (int **)0x0) {
                              pppiVar7 = local_1b0;
                              local_1b0[0] = (int **)0x80;
                              if ((int **)0x80 < ppiVar4) {
                                pppiVar7 = &local_1a8;
                              }
                              local_1a8 = ppiVar4;
                              ppiVar18 = *pppiVar7;
                              local_1d8 = ppiVar4;
                              if ((int **)0xfffffff1 < ppiVar18) {
                                FUN_00173800(8,DAT_00116338,DAT_00116338,ppiVar18,0xfffffff1);
                              }
                              if (ppiVar18 < local_1d8) {
                                FUN_00173800(8,DAT_00116338,DAT_00116338,local_1d8,ppiVar18);
                              }
                              piVar8 = _DAT_0011633c;
                              if (ppiVar18 != (int **)0x0) {
                                piVar8 = (int *)FUN_00173860((int)ppiVar18 + 0xe,0);
                                if (piVar8 != (int *)0x0) {
                                  *piVar8 = 0;
                                  piVar8[1] = 0;
                                  piVar8[2] = 0;
                                }
                                piVar8[1] = (int)ppiVar18;
                                piVar8[2] = (int)local_1d8;
                                *piVar8 = 0;
                                puVar14 = (undefined1 *)((int)local_1d8 + (int)piVar8 + 0xc);
                                if (puVar14 != (undefined1 *)0x0) {
                                  *puVar14 = 0;
                                }
                              }
                              piVar8 = piVar8 + 3;
                            }
                            local_1b8[0] = piVar8;
                            FUN_000039e0(piVar8,local_1c4,ppiVar4);
                            piVar8 = local_210;
                            if (local_210 == local_20c) {
                              uVar11 = (int)local_210 - (int)local_214 >> 2;
                              local_1d8 = local_1b8;
                              if (uVar11 < (uint)((int)local_20c - (int)local_214 >> 2)) {
                                piVar9 = local_210 + 1;
                                if (local_210 != (int *)0x0) {
                                  piVar9 = local_210 + -1;
                                  local_210 = local_210 + 1;
                                  thunk_FUN_002329b4(piVar8,piVar9);
                                  piVar9 = local_210;
                                }
                                local_210 = piVar9;
                                piVar9 = piVar8 + -1;
                                piVar22 = piVar8;
                                while (piVar8 != piVar9) {
                                  piVar22 = piVar22 + -1;
                                  piVar9 = piVar9 + -1;
                                  FUN_00232a4c(piVar22,piVar9);
                                }
                                FUN_00232a4c(piVar8,local_1d8);
                              }
                              else {
                                local_1c4 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
                                if (local_1c4 < uVar11 + 1) {
                                  local_1c4 = uVar11 + 1;
                                }
                                piVar9 = (int *)FUN_00173860(local_1c4 << 2,0);
                                local_1d0 = piVar9;
                                for (piVar22 = local_214; piVar22 != piVar8; piVar22 = piVar22 + 1)
                                {
                                  if (piVar9 != (int *)0x0) {
                                    thunk_FUN_002329b4(piVar9,piVar22);
                                  }
                                  piVar9 = piVar9 + 1;
                                }
                                iVar2 = (int)local_1d0 +
                                        ((int)piVar8 - (int)local_214 & 0xfffffffcU);
                                if (iVar2 != 0) {
                                  thunk_FUN_002329b4(iVar2,local_1d8);
                                }
                                piVar22 = local_210;
                                iVar2 = (int)local_1d0 +
                                        ((int)piVar8 - (int)local_214 & 0xfffffffcU);
                                piVar9 = local_210;
                                for (; local_210 = piVar9, piVar8 != piVar22; piVar8 = piVar8 + 1) {
                                  iVar2 = iVar2 + 4;
                                  if (iVar2 != 0) {
                                    FUN_002329b4(iVar2,piVar8);
                                  }
                                  piVar9 = local_210;
                                }
                                bVar24 = local_214 != piVar9;
                                if (bVar24) {
                                  piVar22 = _DAT_0011633c;
                                }
                                local_1b0[0] = (int **)((int)piVar9 - (int)local_214 >> 2);
                                piVar8 = local_214;
                                while (bVar24) {
                                  if ((int *)*piVar8 != piVar22 + 3) {
                                    piVar10 = (int *)*piVar8 + -3;
                                    iVar2 = *piVar10;
                                    if ((iVar2 == -1) ||
                                       ((piVar10 != piVar22 && (*piVar10 = iVar2 + -1, iVar2 == 0)))
                                       ) {
                                      FUN_00173a54(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 0xe,0);
                                    }
                                  }
                                  piVar8 = piVar8 + 1;
                                  bVar24 = piVar8 != piVar9;
                                }
                                FUN_00173a54(local_214,(int)local_20c - (int)local_214 >> 2,0);
                                local_20c = local_1d0 + local_1c4;
                                local_214 = local_1d0;
                                local_210 = local_1d0 + (int)local_1b0[0] + 1;
                              }
                            }
                            else {
                              piVar9 = local_210 + 1;
                              bVar24 = local_210 != (int *)0x0;
                              local_210 = piVar9;
                              if (bVar24) {
                                thunk_FUN_002329b4(piVar8,local_1b8);
                              }
                            }
                            if (local_1b8[0] != local_1a4) {
                              piVar8 = local_1b8[0] + -3;
                              iVar2 = *piVar8;
                              if ((iVar2 == -1) ||
                                 ((piVar8 != _DAT_0011633c && (*piVar8 = iVar2 + -1, iVar2 == 0))))
                              {
                                FUN_00173a54(local_1b8[0] + -3,local_1b8[0][-2] + 0xe,0);
                              }
                            }
                          }
                          uVar20 = uVar20 + 1;
                        } while (uVar20 < uVar23);
                      }
                      iVar5 = local_30;
                      iVar2 = DAT_001169f4;
                      local_1d8 = &local_214;
                      uVar20 = 0;
                      while( true ) {
                        uVar6 = *(undefined4 *)(iVar2 + uVar20 * 0xc);
                        uVar23 = piVar13[-1];
                        uVar11 = FUN_00003738();
                        if ((uint)piVar13[-1] < uVar23) {
                          uVar23 = piVar13[-1];
                        }
                        uVar15 = uVar23;
                        if (uVar11 <= uVar23) {
                          uVar15 = uVar11;
                        }
                        iVar12 = FUN_00003658(piVar13,uVar6,uVar15);
                        if ((iVar12 == 0) && (uVar23 == uVar11)) break;
                        uVar20 = uVar20 + 1;
                        if (3 < uVar20) {
                          FUN_00002898(DAT_001169f8,piVar13);
                          iVar2 = 4;
                          goto LAB_001167fc;
                        }
                      }
                      iVar2 = iVar2 + uVar20 * 0xc;
                      pcVar16 = *(code **)(iVar2 + 4);
                      uVar20 = *(uint *)(iVar2 + 8);
                      piVar1 = (int *)(iVar5 + ((int)uVar20 >> 1));
                      if ((uVar20 & 1) != 0) {
                        pcVar16 = *(code **)(pcVar16 + *piVar1);
                      }
                      iVar2 = (*pcVar16)(piVar1,local_1d8);
                      piVar9 = local_210;
                      piVar8 = _DAT_0011633c;
                      piVar1 = local_214;
                      if (iVar2 == 1) {
                        for (; piVar1 != piVar9; piVar1 = piVar1 + 1) {
                          if ((int *)*piVar1 != piVar8 + 3) {
                            piVar22 = (int *)*piVar1 + -3;
                            iVar5 = *piVar22;
                            if ((iVar5 == -1) ||
                               ((piVar22 != piVar8 && (*piVar22 = iVar5 + -1, iVar5 == 0)))) {
                              FUN_00173a54(*piVar1 + -0xc,*(int *)(*piVar1 + -8) + 0xe,0);
                            }
                          }
                        }
                        FUN_00173a54(local_214,(int)local_20c - (int)local_214 >> 2,0);
                        goto LAB_00116954;
                      }
LAB_001167fc:
                      FUN_00002898(DAT_001169fc,piVar13);
                      piVar8 = local_210;
                      piVar3 = _DAT_0011633c;
                      for (piVar1 = local_214; piVar1 != piVar8; piVar1 = piVar1 + 1) {
                        if ((int *)*piVar1 != piVar3 + 3) {
                          piVar9 = (int *)*piVar1 + -3;
                          iVar5 = *piVar9;
                          if ((iVar5 == -1) ||
                             ((piVar9 != piVar3 && (*piVar9 = iVar5 + -1, iVar5 == 0)))) {
                            FUN_00173a54(*piVar1 + -0xc,*(int *)(*piVar1 + -8) + 0xe,0);
                          }
                        }
                      }
                      FUN_00173a54(local_214,(int)local_20c - (int)local_214 >> 2,0);
                      piVar1 = local_1a4;
                      if (piVar13 == local_1a4) break;
                      piVar1 = (int *)piVar13[-3];
                      if (piVar1 != (int *)0xffffffff) {
                        if (piVar13 + -3 == _DAT_0011633c) break;
                        bVar24 = piVar1 != (int *)0x0;
                        piVar1 = (int *)((int)piVar1 + -1);
                        piVar13[-3] = (int)piVar1;
                        if (bVar24) break;
                      }
                      FUN_00173a54(piVar13 + -3,piVar13[-2] + 0xe,0);
                      piVar1 = extraout_r1_02;
                      break;
                    }
LAB_0011699c:
                    local_1cc = (int *)((int)local_1cc + 1);
                    piVar1 = local_1c0;
                  } while (local_1cc < local_1c0);
                }
                goto LAB_00115fc0;
              }
              goto LAB_001163c0;
            }
          }
        }
      }
    }
    FUN_00002898(uVar6);
    piVar1 = extraout_r1_01;
  }
  else {
    FUN_00002898(s_<1*_version_0011630c._0_4_);
    piVar1 = extraout_r1_00;
  }
LAB_00115fc0:
  piVar3 = local_1f4;
  if (local_1f4 != (int *)0x0) {
    while( true ) {
      piVar13 = (int *)*piVar3;
      if (piVar13 != (int *)0x0) {
        piVar1 = (int *)piVar3[2];
      }
      if (piVar13 == (int *)0x0 || piVar13 == piVar1) break;
      iVar5 = piVar13[2];
      FUN_001dae24();
      *piVar3 = iVar5;
      piVar1 = extraout_r1_03;
    }
    FUN_001eecc8(piVar3[4]);
    FUN_001eecc8(piVar3);
  }
  return iVar2;
LAB_00116158:
  puVar19 = puVar19 + 8;
  if ((undefined4 *)(*piVar1 + piVar1[1] * 0x20) == puVar19) goto LAB_0011699c;
  goto LAB_00116134;
}


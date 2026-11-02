// rea decompile_all
// name: FUN_000cdca4
// address: 0xcdca4
// body: available
// range: 0xcdca4-0xce0e3 inclusive
// range: 0xce100-0xce84b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000cddac) */

void FUN_000cdca4(int param_1,undefined4 param_2)

{
  short sVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int **ppiVar9;
  int **ppiVar10;
  uint uVar11;
  int ****ppppiVar12;
  int ***pppiVar13;
  int ***pppiVar14;
  int iVar15;
  char cVar16;
  int ****ppppiVar17;
  uint uVar18;
  uint uVar19;
  int **ppiVar20;
  uint uVar21;
  short sVar22;
  uint extraout_r12;
  uint uVar23;
  code *pcVar24;
  bool bVar25;
  bool bVar26;
  int ***local_fc;
  undefined4 **local_f8;
  int *local_f4;
  int ***local_f0;
  int ***local_ec;
  int ***local_e8;
  int ***local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d8 [5];
  undefined1 auStack_c4 [12];
  byte local_b8;
  undefined4 local_9c;
  undefined4 **local_90;
  int local_8c;
  int **local_88;
  int ***local_84;
  undefined1 auStack_80 [4];
  int ***local_7c;
  byte local_78;
  undefined1 auStack_74 [12];
  undefined4 local_68;
  uint local_64;
  uint local_60;
  undefined4 local_58;
  undefined4 local_50;
  int ***local_48 [2];
  undefined4 local_40 [2];
  int ***local_38;
  int ***local_34 [2];
  int iStack_2c;
  undefined4 local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  if (*(char *)(param_1 + 0x482) != '\0') {
    FUN_000028a4(DAT_000ce0e4);
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),local_28,1);
    return;
  }
  puVar4 = (undefined4 *)FUN_0009b63c();
  uVar5 = (**(code **)*puVar4)();
  FUN_000a5f28(local_d8,param_1 + 0x14c,uVar5,param_1 + 0x340);
  piVar6 = (int *)FUN_0009b63c();
  iVar7 = (**(code **)(*piVar6 + 8))(piVar6,local_d8,0xffffffff);
  local_68 = DAT_000ce0e8;
  if (iVar7 != 0) {
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),local_28,3);
    local_d8[0] = local_68;
    FUN_0019f30c(local_9c);
    goto LAB_000ce840;
  }
  if ((local_b8 & 0x10) == 0) {
    local_f8 = *(undefined4 ***)(param_1 + 0x460);
    local_fc = (int ***)local_f8[2];
    FUN_001c8580(&local_ec,param_1 + 0x450,&local_fc,&local_f8);
    *(undefined4 *)(param_1 + 0x34c) = 0;
    local_fc = *(int ****)(param_1 + 0x338);
    local_f8 = *(undefined4 ***)(param_1 + 0x348);
    local_f4 = (int *)(param_1 + 0x340);
    local_f0 = (int ***)0x1;
    iVar7 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x34))
                      (*(int **)(param_1 + 0x11c),0,*(undefined1 *)(param_1 + 0x344),
                       *(undefined1 *)(param_1 + 0x33c),*(undefined1 *)(param_1 + 0x1a9));
    if (iVar7 != 0) {
      *(undefined1 *)(param_1 + 0x481) = 1;
      *(undefined1 *)(param_1 + 0x350) = 2;
      *(undefined4 *)(param_1 + 0x354) = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),local_28);
  }
  else {
    piVar6 = (int *)(param_1 + 0x340);
    iVar7 = *(int *)(*(int *)(param_1 + 0x340) + -4);
    if (1 < *(int *)(*(int *)(param_1 + 0x340) + -0xc) + 1U) {
      iVar8 = FUN_001d9a60(piVar6,iVar7,iVar7);
      FUN_00003628(iVar8 + 0xc,*piVar6,*(int *)(*piVar6 + -4) << 1);
      FUN_001d9b00(piVar6);
      *piVar6 = iVar8 + 0xc;
    }
    if ((int ***)(*piVar6 + -0xc) != DAT_000ce0ec) {
      *(int ***)(*piVar6 + -0xc) = (int **)0xffffffff;
    }
    if (*(short *)(*piVar6 + (iVar7 + -1) * 2) != 0x2f) {
      uVar5 = *(undefined4 *)(*piVar6 + -4);
      local_f8 = (undefined4 **)FUN_00003544(&DAT_000ce0f0);
      local_fc = (int ***)0x0;
      FUN_001d982c(param_1 + 0x340,uVar5,0,&DAT_000ce0f0,local_f8);
    }
    local_f8 = *(undefined4 ***)(param_1 + 0x460);
    local_fc = (int ***)local_f8[2];
    FUN_001c8580(&local_ec,param_1 + 0x450,&local_fc,&local_f8);
    local_8c = FUN_000cf1ac(param_1,param_1 + 0x340,param_1 + 0x450);
    if (local_8c == 0) {
      ppiVar20 = (int **)0x0;
      local_90 = (int **)0x0;
      uVar21 = 0;
      uVar19 = 0;
      ppiVar9 = (int **)(**(code **)(**(int **)(param_1 + 0x11c) + 0x60))();
      iVar7 = *(int *)(*(int *)(param_1 + 0x460) + 8);
      uVar23 = extraout_r12;
      if (iVar7 != *(int *)(param_1 + 0x460)) {
        do {
          bVar25 = uVar19 != 0;
          ppiVar10 = (int **)(uint)*(byte *)(iVar7 + 0x10);
          if (bVar25) {
            uVar23 = *(uint *)(iVar7 + 0x18);
          }
          else {
            uVar19 = *(uint *)(iVar7 + 0x18);
          }
          if (bVar25 && uVar23 != uVar19) {
            FUN_000028a4(DAT_000ce0f4,uVar19,uVar23);
            local_8c = 4;
            goto LAB_000ce758;
          }
          if (ppiVar10 < ppiVar20) {
            FUN_000028a4(DAT_000ce0f8);
            local_8c = 4;
            goto LAB_000ce758;
          }
          uVar23 = (uint)*(ushort *)(iVar7 + 0x1c);
          ppiVar20 = (int **)(uVar23 + (int)ppiVar10);
          if (ppiVar9 < ppiVar20) {
            FUN_000028a4(DAT_000ce0fc,ppiVar20);
            local_8c = 4;
            goto LAB_000ce758;
          }
          uVar18 = *(uint *)(iVar7 + 0x14);
          if (uVar21 < uVar18) {
            local_90 = ppiVar10;
          }
          if (uVar21 < uVar18) {
            uVar21 = uVar18;
          }
          iVar8 = *(int *)(iVar7 + 0xc);
          if (*(int *)(iVar7 + 0xc) == 0) {
            iVar8 = *(int *)(iVar7 + 4);
            while (iVar15 = iVar8, iVar7 == *(int *)(iVar15 + 0xc)) {
              iVar7 = iVar15;
              iVar8 = *(int *)(iVar15 + 4);
            }
            if (*(int *)(iVar7 + 0xc) != iVar15) {
              iVar7 = iVar15;
            }
          }
          else {
            do {
              iVar7 = iVar8;
              iVar8 = *(int *)(iVar7 + 8);
            } while (*(int *)(iVar7 + 8) != 0);
          }
        } while (iVar7 != *(int *)(param_1 + 0x460));
        if (local_8c != 0) goto LAB_000ce758;
      }
      local_64 = 0;
      local_60 = 0;
      cVar16 = '\0';
      uVar19 = 0;
      *(undefined4 *)(param_1 + 0x34c) = 0;
      iVar7 = *(int *)(*(int *)(param_1 + 0x460) + 8);
      if (iVar7 != *(int *)(param_1 + 0x460)) {
        do {
          ppiVar9 = (int **)(uint)*(byte *)(iVar7 + 0x10);
          if (*(ushort *)(iVar7 + 0x1c) < 2) {
            cVar16 = cVar16 + '\x01';
            uVar23 = local_60;
            if (*(ushort *)(iVar7 + 0x1e) < 0x11) {
              uVar23 = local_64;
            }
            uVar23 = uVar23 + 1 & 0xff;
            if (*(ushort *)(iVar7 + 0x1e) < 0x11) {
              local_64 = uVar23;
              uVar23 = local_60;
            }
          }
          else {
            local_f8 = local_90;
            if (ppiVar9 == local_90) {
              local_f8 = *(undefined4 ***)(param_1 + 0x348);
            }
            local_fc = *(int ****)(param_1 + 0x338);
            if (ppiVar9 != local_90) {
              local_f8 = (int **)0x0;
            }
            local_f4 = (int *)(iVar7 + 0x20);
            local_f0 = (int ***)0x1;
            iVar8 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x34))
                              (*(int **)(param_1 + 0x11c),uVar19,ppiVar9,
                               *(undefined1 *)(param_1 + 0x33c),*(undefined1 *)(param_1 + 0x1a9));
            if (iVar8 == 0) {
              local_8c = 1;
              break;
            }
            uVar18 = (uint)*(ushort *)(iVar7 + 0x1c);
            uVar23 = 1 << (int)ppiVar9;
            uVar21 = 0;
            if (uVar18 < 0x80000000) {
              if (uVar18 < 2) {
                uVar18 = 1;
              }
              uVar11 = uVar23;
              if ((uVar18 & 1) != 0) {
                uVar11 = uVar23 << 1;
                uVar21 = uVar23;
              }
              for (iVar8 = (int)uVar18 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
                uVar21 = uVar21 | uVar11 | uVar11 << 1;
                uVar11 = uVar11 << 2;
              }
            }
            else {
              do {
                uVar21 = uVar21 | uVar23;
                uVar18 = uVar18 - 1;
                uVar23 = uVar23 << 1;
              } while (uVar18 != 0);
            }
            iVar8 = param_1 + uVar19 * 8;
            *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) | uVar21;
            *(undefined1 *)(iVar8 + 0x350) = 2;
            uVar19 = uVar19 + 1 & 0xff;
            *(uint *)(iVar8 + 0x354) = uVar21;
            uVar23 = local_60;
          }
          local_60 = uVar23;
          iVar8 = *(int *)(iVar7 + 0xc);
          if (*(int *)(iVar7 + 0xc) == 0) {
            iVar8 = *(int *)(iVar7 + 4);
            while (iVar15 = iVar8, iVar7 == *(int *)(iVar15 + 0xc)) {
              iVar7 = iVar15;
              iVar8 = *(int *)(iVar15 + 4);
            }
            if (*(int *)(iVar7 + 0xc) != iVar15) {
              iVar7 = iVar15;
            }
          }
          else {
            do {
              iVar7 = iVar8;
              iVar8 = *(int *)(iVar7 + 8);
            } while (*(int *)(iVar7 + 8) != 0);
          }
        } while (iVar7 != *(int *)(param_1 + 0x460));
        if (cVar16 != '\0') {
          uVar23 = 1;
          if (local_64 != 1) {
            uVar23 = local_60;
          }
          if ((local_64 != 1 && uVar23 != 1) ||
             (iVar7 = *(int *)(*(int *)(param_1 + 0x460) + 8), iVar7 == *(int *)(param_1 + 0x460)))
          {
LAB_000ce2b8:
            uVar23 = 0;
            local_58 = DAT_000ce84c;
LAB_000ce44c:
            if (local_64 == 0) {
              uVar23 = 1;
              goto LAB_000ce2c8;
            }
            sVar22 = 0x10;
            do {
              local_50 = 0;
              local_f4 = (int *)0x0;
              local_dc = 0;
              uVar21 = 0;
              local_e4 = (int ***)0x0;
              local_e0 = 0;
              local_e8 = (int ***)0x0;
              local_ec = (int ***)0x0;
              local_f0 = (int ***)0x0;
              piVar6 = (int *)FUN_0010f82c(0xc,0);
              iVar7 = FUN_0010f82c(0x18,0);
              piVar6[2] = iVar7;
              *piVar6 = (int)local_f4;
              piVar6[1] = 1;
              local_e4 = (int ***)piVar6[2];
              local_ec = local_e4 + 6;
              local_e4[2] = (int **)0x0;
              local_e4[3] = (int **)0x0;
              *(code *)local_e4 = (code)0x0;
              local_e4[1] = (int **)0x0;
              local_e4[2] = (int **)local_e4;
              local_e4[3] = (int **)local_e4;
              iVar7 = *(int *)(*(int *)(param_1 + 0x460) + 8);
              local_f4 = piVar6;
              local_e8 = local_ec;
              if (iVar7 != *(int *)(param_1 + 0x460)) {
                do {
                  sVar1 = *(short *)(iVar7 + 0x1c);
                  bVar25 = sVar1 == 1;
                  if (bVar25) {
                    sVar1 = *(short *)(iVar7 + 0x1e);
                  }
                  if (bVar25 && sVar1 == sVar22) {
                    local_78 = *(byte *)(iVar7 + 0x10);
                    ppiVar9 = (int **)(uint)local_78;
                    local_84 = (int ***)&local_f4;
                    local_fc = (int ***)local_48;
                    local_40[0] = local_58;
                    iVar8 = FUN_001d9c54(auStack_74,local_40);
                    pcVar24 = (code *)(iVar8 + -4);
                    local_38 = local_fc;
                    bVar25 = (int ****)local_e4[1] != (int ****)0x0;
                    ppppiVar12 = (int ****)local_e4;
                    if (bVar25) {
                      ppppiVar12 = (int ****)(uint)(byte)*pcVar24;
                    }
                    bVar26 = true;
                    ppppiVar17 = (int ****)local_e4[1];
                    ppppiVar3 = (int ****)local_e4;
                    while (ppppiVar2 = ppppiVar17, bVar25) {
                      bVar26 = ppppiVar12 < (int ****)(uint)(byte)*(code *)(ppppiVar2 + 4);
                      if (bVar26) {
                        ppppiVar17 = (int ****)ppppiVar2[2];
                      }
                      else {
                        ppppiVar17 = (int ****)ppppiVar2[3];
                      }
                      bVar25 = ppppiVar17 != (int ****)0x0;
                      ppppiVar3 = ppppiVar2;
                    }
                    if (*(char *)(local_84 + 6) == '\0') {
                      ppppiVar12 = ppppiVar3;
                      if (bVar26) {
                        if (ppppiVar3 != (int ****)local_e4[2]) {
                          if ((*(code *)ppppiVar3 == (code)0x0) &&
                             ((int ****)ppppiVar3[1][1] == ppppiVar3)) {
                            ppppiVar12 = (int ****)ppppiVar3[3];
                          }
                          else {
                            ppppiVar17 = (int ****)ppppiVar3[2];
                            if ((int ****)ppppiVar3[2] == (int ****)0x0) {
                              ppppiVar17 = ppppiVar3;
                              for (ppppiVar12 = (int ****)ppppiVar3[1];
                                  ppppiVar17 == (int ****)ppppiVar12[2];
                                  ppppiVar12 = (int ****)ppppiVar12[1]) {
                                ppppiVar17 = ppppiVar12;
                              }
                            }
                            else {
                              do {
                                ppppiVar12 = ppppiVar17;
                                ppppiVar17 = (int ****)ppppiVar12[3];
                              } while ((int ****)ppppiVar12[3] != (int ****)0x0);
                            }
                          }
                          goto LAB_000ce518;
                        }
                        FUN_001c98a4(&local_7c,local_84,ppppiVar2,ppppiVar3,pcVar24);
                        local_48[0] = local_7c;
                        *(code *)(local_fc + 1) = (code)0x1;
                      }
                      else {
LAB_000ce518:
                        if ((byte)*(code *)(ppppiVar12 + 4) < (byte)*pcVar24) {
                          FUN_001c98a4(local_34,local_84,ppppiVar2,ppppiVar3,pcVar24);
                          local_48[0] = local_34[0];
                          ppppiVar12 = (int ****)local_fc;
                          goto LAB_000ce550;
                        }
                        local_48[0] = (int ***)ppppiVar12;
                        *(code *)(local_fc + 1) = (code)0x0;
                      }
                    }
                    else {
                      local_7c = local_fc;
                      FUN_001c98a4(&local_fc,local_84,ppppiVar2,ppppiVar3,pcVar24);
                      local_48[0] = local_fc;
                      ppppiVar12 = (int ****)local_7c;
LAB_000ce550:
                      *(code *)(ppppiVar12 + 1) = (code)0x1;
                    }
                    ppppiVar12 = (int ****)local_48[0];
                    FUN_001d9b00(auStack_74);
                    FUN_001d9b00(local_40);
                    local_84 = (int ***)(ppppiVar12 + 5);
                    ppppiVar12 = (int ****)(iVar7 + 0x20);
                    pppiVar13 = *ppppiVar12;
                    pppiVar14 = pppiVar13 + -3;
                    if (*pppiVar14 == (int **)0xffffffff) {
                      if ((int ****)local_84 != ppppiVar12) {
                        local_f8 = pppiVar13[-1];
                        local_fc = (int ***)0x0;
                        FUN_001d982c(local_84,0,(*local_84)[-1],pppiVar13,local_f8);
                      }
                    }
                    else {
                      if (pppiVar14 != DAT_000ce0ec) {
                        *pppiVar14 = (int **)((int)*pppiVar14 + 1);
                      }
                      FUN_001d9b00(local_84);
                      *local_84 = (int **)*ppppiVar12;
                    }
                    uVar21 = uVar21 | 1 << (int)ppiVar9;
                    if (ppiVar9 == local_90) {
                      local_50 = *(undefined4 *)(param_1 + 0x348);
                    }
                  }
                  iVar8 = *(int *)(iVar7 + 0xc);
                  if (*(int *)(iVar7 + 0xc) == 0) {
                    iVar8 = *(int *)(iVar7 + 4);
                    while (iVar15 = iVar8, iVar7 == *(int *)(iVar15 + 0xc)) {
                      iVar7 = iVar15;
                      iVar8 = *(int *)(iVar15 + 4);
                    }
                    if (*(int *)(iVar7 + 0xc) != iVar15) {
                      iVar7 = iVar15;
                    }
                  }
                  else {
                    do {
                      iVar7 = iVar8;
                      iVar8 = *(int *)(iVar7 + 8);
                    } while (*(int *)(iVar7 + 8) != 0);
                  }
                } while (iVar7 != *(int *)(param_1 + 0x460));
              }
              local_f8 = &local_f4;
              local_fc = (int ***)0x1;
              iVar7 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x38))
                                (*(int **)(param_1 + 0x11c),uVar19,*(undefined1 *)(param_1 + 0x33c),
                                 *(undefined4 *)(param_1 + 0x338),local_50);
              if (iVar7 == 0) {
                local_8c = 1;
              }
              iVar7 = param_1 + uVar19 * 8;
              *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) | uVar21;
              *(uint *)(iVar7 + 0x354) = uVar21;
              *(undefined1 *)(iVar7 + 0x350) = 1;
              uVar19 = uVar19 + 1 & 0xff;
              if ((int ****)local_e4 != (int ****)0x0) {
                local_84 = local_e4;
                local_88 = local_e4[2];
                FUN_001c9104(auStack_80,&local_f4,&local_88,&local_84);
                local_e4[3] = (int **)local_f0;
                local_f0 = local_e4;
                piVar6 = local_f4;
                while (local_f4 = piVar6, piVar6 != (int *)0x0) {
                  local_f4 = (int *)*piVar6;
                  FUN_0010fa20(piVar6[2],piVar6[1],0);
                  FUN_0010fa20(piVar6,1,0);
                  piVar6 = local_f4;
                }
              }
              do {
                uVar23 = uVar23 + 1;
                if (1 < uVar23) goto LAB_000ce74c;
LAB_000ce2c8:
                if (uVar23 == 0) goto LAB_000ce44c;
              } while (local_60 == 0);
              sVar22 = 0x18;
            } while( true );
          }
          do {
            if (*(short *)(iVar7 + 0x1c) == 1) {
              if (*(ushort *)(iVar7 + 0x1e) < 0x11) {
                if (local_64 == 1) {
                  local_64 = 0;
LAB_000ce1d4:
                  ppiVar9 = (int **)(uint)*(byte *)(iVar7 + 0x10);
                  cVar16 = cVar16 + -1;
                  local_f8 = local_90;
                  if (local_90 == ppiVar9) {
                    local_f8 = *(undefined4 ***)(param_1 + 0x348);
                  }
                  local_fc = *(int ****)(param_1 + 0x338);
                  if (local_90 != ppiVar9) {
                    local_f8 = (int **)0x0;
                  }
                  local_f4 = (int *)(iVar7 + 0x20);
                  local_f0 = (int ***)0x1;
                  iVar8 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x34))
                                    (*(int **)(param_1 + 0x11c),uVar19,ppiVar9,
                                     *(undefined1 *)(param_1 + 0x33c),
                                     *(undefined1 *)(param_1 + 0x1a9));
                  if (iVar8 == 0) {
                    local_8c = 1;
                  }
                  iVar8 = param_1 + uVar19 * 8;
                  *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) | 1 << (int)ppiVar9;
                  *(int *)(iVar8 + 0x354) = 1 << (int)ppiVar9;
                  uVar19 = uVar19 + 1 & 0xff;
                  *(undefined1 *)(iVar8 + 0x350) = 2;
                }
              }
              else if (local_60 == 1) {
                local_60 = 0;
                goto LAB_000ce1d4;
              }
            }
            iVar8 = *(int *)(iVar7 + 0xc);
            if (*(int *)(iVar7 + 0xc) == 0) {
              iVar8 = *(int *)(iVar7 + 4);
              while (iVar15 = iVar8, iVar7 == *(int *)(iVar15 + 0xc)) {
                iVar7 = iVar15;
                iVar8 = *(int *)(iVar15 + 4);
              }
              if (*(int *)(iVar7 + 0xc) != iVar15) {
                iVar7 = iVar15;
              }
            }
            else {
              do {
                iVar7 = iVar8;
                iVar8 = *(int *)(iVar7 + 8);
              } while (*(int *)(iVar7 + 8) != 0);
            }
          } while (iVar7 != *(int *)(param_1 + 0x460));
          if (cVar16 != '\0') goto LAB_000ce2b8;
        }
LAB_000ce74c:
        if (local_8c != 0) goto LAB_000ce758;
      }
      *(undefined1 *)(param_1 + 0x481) = 1;
      (**(code **)(**(int **)(param_1 + 0x118) + 0x2c))
                (*(int **)(param_1 + 0x118),local_28,*(undefined4 *)(param_1 + 0x34c));
    }
    else {
LAB_000ce758:
      (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),local_28,local_8c);
    }
  }
  local_d8[0] = local_68;
  FUN_0019f30c(local_9c);
LAB_000ce840:
  FUN_001d9b00(auStack_c4);
  return;
}


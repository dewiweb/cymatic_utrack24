// rea decompile_all
// name: FUN_000c2c4c
// address: 0xc2c4c
// body: available
// range: 0xc2c4c-0xc2f8f inclusive
// range: 0xc3070-0xc362b inclusive
// range: 0xc368c-0xc38eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_000c2c4c(undefined4 *param_1,int *param_2,int *param_3,int *param_4,uint *param_5,uint *param_6,
            int *param_7,undefined4 *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  code *pcVar22;
  bool bVar23;
  uint auStack_190 [2];
  int iStack_188;
  uint uStack_184;
  uint uStack_180;
  int iStack_17c;
  uint uStack_178;
  uint uStack_174;
  int iStack_170;
  uint uStack_16c;
  uint uStack_168;
  int iStack_164;
  uint uStack_160;
  uint uStack_15c;
  int iStack_158;
  uint uStack_154;
  uint uStack_150;
  int iStack_14c;
  uint uStack_148;
  undefined1 auStack_140 [84];
  int *local_ec;
  undefined4 uStack_e8;
  uint uStack_dc;
  undefined4 auStack_d8 [5];
  int *piStack_c4;
  undefined4 uStack_bc;
  int aiStack_b8 [2];
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined1 auStack_a4 [4];
  uint uStack_a0;
  int iStack_98;
  uint uStack_94;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined1 auStack_70 [32];
  int aiStack_50 [7];
  undefined4 *puStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  puStack_34 = param_1;
  piStack_30 = param_2;
  piStack_2c = param_3;
  piStack_28 = param_4;
  local_ec = (int *)FUN_0009b63c();
  if (local_ec == (int *)0x0) {
    return 0;
  }
  uVar2 = FUN_0014fc10(auStack_140);
  FUN_0014fb80(uVar2,1,1,1);
  uStack_e8 = (**(code **)*local_ec)(local_ec);
  FUN_000cbc54(auStack_d8,auStack_140,uStack_e8,param_1);
  iVar3 = (**(code **)(*local_ec + 8))(local_ec,auStack_d8,0xffffffff);
  auStack_d8[0] = DAT_000c2f9c;
  piVar4 = DAT_000c2f98;
  piVar17 = DAT_000c2f98 + 3;
  if (iVar3 == 0) {
    if (piStack_c4 != piVar17) {
      piVar4 = piStack_c4 + -3;
      iVar3 = *piVar4;
      if ((iVar3 == -1) || ((piVar4 != DAT_000c2f98 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
        FUN_0010fa20(piStack_c4 + -3,piStack_c4[-2] + 8,0);
      }
    }
    FUN_000ddfbc(aiStack_b8,auStack_140,uStack_e8,uStack_bc);
    iVar3 = (**(code **)(*local_ec + 8))(local_ec,aiStack_b8,0xffffffff);
    if (iVar3 == 0) {
      if (uStack_a0 < 0x2d) {
        FUN_000028a4(s_U___V__ERROR__WaveFileHeaderPars_000c2fa1 + 7);
        FUN_000d7e18(aiStack_b8,auStack_140,uStack_e8,uStack_bc);
        piVar4 = (int *)FUN_0009b63c();
        pcVar22 = *(code **)(*piVar4 + 8);
        piVar17 = aiStack_b8;
      }
      else {
        auStack_190[0] = 0;
        FUN_000cbca8(aiStack_b8,auStack_140,uStack_e8,uStack_bc);
        iVar3 = (**(code **)(*local_ec + 8))(local_ec,aiStack_b8,0xffffffff);
        if (iVar3 == 0) {
          if (uStack_94 < 0x2c) {
            FUN_000028a4(s_ERROR__WaveFileHeaderParser__get_000c3024);
            FUN_000d7e18(&iStack_88,auStack_140,uStack_e8,uStack_bc);
            piVar4 = (int *)FUN_0009b63c();
            pcVar22 = *(code **)(*piVar4 + 8);
            piVar17 = &iStack_88;
          }
          else if ((iStack_188 == DAT_000c3064) && (uStack_180 == DAT_000c3068)) {
            uVar12 = uStack_184 + 8;
            *param_6 = uVar12;
            if (uVar12 != uStack_a0) {
              FUN_000028a4(DAT_000c362c,uVar12,uStack_a0);
              *param_6 = uStack_a0;
            }
            iVar3 = DAT_000c3630;
            *piStack_30 = 0;
            piStack_30[1] = 0;
            piStack_30[2] = 0;
            piStack_30[3] = 0;
            piStack_30[4] = 0;
            piStack_30[5] = 0;
            piStack_30[6] = 0;
            piStack_30[7] = 0;
            piStack_30[8] = 0;
            piStack_30[9] = 0;
            piStack_30[10] = 0;
            piStack_30[0xb] = 0;
            if (param_7 == (int *)0x0) {
              iVar7 = iStack_17c;
              if (iStack_17c == iVar3) {
                iVar7 = iStack_164;
              }
              if (iStack_17c == iVar3 && iVar7 == DAT_000c3634) {
                *piStack_30 = iStack_17c;
                piStack_30[1] = uStack_178;
                piStack_30[2] = uStack_174;
                piStack_30[3] = iStack_170;
                piStack_30[4] = uStack_16c;
                piStack_30[5] = uStack_168;
                *piStack_2c = iStack_164;
                piStack_2c[1] = uStack_160;
                *piStack_28 = 0x2c;
                uVar19 = *param_6;
                uVar21 = piStack_2c[1];
                uVar12 = uVar19 - 0x2c;
                if (uVar12 < uVar21) {
                  FUN_000028a4(DAT_000c3638,uVar21,uVar12);
                  uVar21 = uVar19 - 0x2c;
                }
                *param_5 = uVar21;
                goto joined_r0x000c37bc;
              }
              uStack_ac = 3;
            }
            else {
              uStack_ac = 7;
            }
            uVar12 = 0;
            iStack_188 = iStack_17c;
            uStack_184 = uStack_178;
            uStack_180 = uStack_174;
            iStack_17c = iStack_170;
            uStack_178 = uStack_16c;
            uStack_174 = uStack_168;
            iStack_170 = iStack_164;
            uStack_16c = uStack_160;
            uStack_168 = uStack_15c;
            iStack_164 = iStack_158;
            uStack_160 = uStack_154;
            uStack_15c = uStack_150;
            iStack_158 = iStack_14c;
            uStack_154 = uStack_148;
            uVar21 = 0xc;
            do {
              uVar19 = uStack_184;
              if (iStack_188 == DAT_000c3630) {
                if (uStack_184 < 0x29) {
                  FUN_000037d0(piStack_30,&iStack_188,uStack_184 + 8);
                  uVar12 = uVar12 | 1;
                  if (uVar12 == uStack_ac) goto joined_r0x000c37bc;
                }
              }
              else if (iStack_188 == DAT_000c3634) {
                *piStack_2c = iStack_188;
                piStack_2c[1] = uStack_184;
                *piStack_28 = uVar21 + 8;
                uVar20 = *param_6 - (uVar21 + 8);
                uVar13 = piStack_2c[1];
                if (uVar20 < uVar13) {
                  FUN_000028a4(DAT_000c3638,uVar13,uVar20);
                  uVar13 = uVar20;
                }
                uVar12 = uVar12 | 2;
                *param_5 = uVar13;
                if (uVar12 == uStack_ac) goto joined_r0x000c37bc;
              }
              else if ((iStack_188 == DAT_000c363c) && (param_7 != (int *)0x0)) {
                if ((DAT_000c3640 < uStack_184) || (99 < uStack_180)) {
                  FUN_000028a4(DAT_000c38f0);
                }
                else {
                  auStack_190[0] = uStack_180;
                  if (0x3fffffff < uStack_180) {
                    FUN_0010f7cc(8,&DAT_000c3644,&DAT_000c3644,uStack_180);
                  }
                  if ((uint)(param_7[2] - *param_7 >> 2) < auStack_190[0]) {
                    uVar13 = param_7[1] - *param_7 >> 2;
                    uStack_a8 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
                    if (uStack_a8 < uVar13 + 1) {
                      uStack_a8 = uVar13 + 1;
                    }
                    puVar9 = &uStack_a8;
                    if (uStack_a8 <= auStack_190[0]) {
                      puVar9 = auStack_190;
                    }
                    uVar13 = *puVar9;
                    puVar5 = (undefined4 *)FUN_0010f82c(uVar13 << 2,0);
                    puVar18 = (undefined4 *)param_7[1];
                    puVar6 = puVar5;
                    for (puVar14 = (undefined4 *)*param_7; puVar14 != puVar18; puVar14 = puVar14 + 1
                        ) {
                      if (puVar6 != (undefined4 *)0x0) {
                        *puVar6 = *puVar14;
                      }
                      puVar6 = puVar6 + 1;
                    }
                    FUN_0010fa20(*param_7,param_7[2] - *param_7 >> 2,0);
                    iVar3 = *param_7;
                    *param_7 = (int)puVar5;
                    param_7[1] = (param_7[1] - iVar3 & 0xfffffffcU) + (int)puVar5;
                    param_7[2] = (int)(puVar5 + uVar13);
                  }
                  iVar3 = FUN_001a0808((uStack_184 & 0xfffffffc) + 4,1);
                  if (iVar3 != 0) {
                    FUN_000cbd04(auStack_70,auStack_140,uStack_e8,uStack_bc);
                    iVar7 = (**(code **)(*local_ec + 8))(local_ec,auStack_70,0xffffffff);
                    if (iVar7 != 0) {
                      FUN_000028a4(s_ERROR__WaveFileHeaderParser__get_000c3648);
                      FUN_000d7e18(aiStack_50,auStack_140,uStack_e8,uStack_bc);
                      piVar4 = (int *)FUN_0009b63c();
                      pcVar22 = *(code **)(*piVar4 + 8);
                      piVar17 = aiStack_50;
                      goto LAB_000c38e4;
                    }
                    auStack_190[0] = 0;
                    FUN_000cbca8(auStack_a4,auStack_140,uStack_e8,uStack_bc);
                    iVar7 = (**(code **)(*local_ec + 8))(local_ec,auStack_a4,0xffffffff);
                    if (iVar7 != 0) {
                      FUN_000028a4(DAT_000c3688);
                      FUN_000d7e18(aiStack_50,auStack_140,uStack_e8,uStack_bc);
                      piVar4 = (int *)FUN_0009b63c();
                      pcVar22 = *(code **)(*piVar4 + 8);
                      piVar17 = aiStack_50;
                      goto LAB_000c38e4;
                    }
                    if (iStack_80 == iStack_88) {
                      uVar13 = 0;
                      if (uStack_180 != 0) {
                        do {
                          iVar8 = iVar3 + uVar13 * 0x18;
                          iVar7 = *(int *)(iVar8 + 0xc);
                          bVar23 = iVar7 == 0;
                          if (bVar23) {
                            iVar7 = *(int *)(iVar8 + 0x10);
                          }
                          if ((bVar23 && iVar7 == 0) && (*(int *)(iVar8 + 8) == DAT_000c3634)) {
                            uStack_dc = *(uint *)(iVar8 + 0x14);
                            puVar9 = (uint *)param_7[1];
                            if (puVar9 == (uint *)param_7[2]) {
                              uVar20 = param_7[2] - *param_7 >> 2;
                              uVar1 = (int)puVar9 - *param_7 >> 2;
                              if (uVar1 < uVar20) {
                                param_7[1] = (int)(puVar9 + 1);
                                if (puVar9 != (uint *)0x0) {
                                  uVar20 = puVar9[-1];
                                }
                                puVar15 = puVar9 + -1;
                                if (puVar9 != (uint *)0x0) {
                                  *puVar9 = uVar20;
                                }
                                iVar7 = (int)puVar15 - (int)puVar9 >> 2;
                                iVar8 = 1;
                                puVar16 = puVar9;
                                if (1 < iVar7 + 1) {
                                  do {
                                    puVar16 = puVar16 + -1;
                                    puVar15 = puVar15 + -1;
                                    if (puVar16 != puVar15) {
                                      *puVar16 = *puVar15;
                                    }
                                    iVar8 = iVar8 + 1;
                                  } while (iVar8 < iVar7 + 1);
                                }
                                if (puVar9 != &uStack_dc) {
                                  *puVar9 = uStack_dc;
                                }
                              }
                              else {
                                uStack_b0 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
                                if (uStack_b0 < uVar1 + 1) {
                                  uStack_b0 = uVar1 + 1;
                                }
                                puVar10 = (uint *)FUN_0010f82c(uStack_b0 << 2,0);
                                puVar16 = puVar10;
                                for (puVar15 = (uint *)*param_7; puVar15 != puVar9;
                                    puVar15 = puVar15 + 1) {
                                  if (puVar16 != (uint *)0x0) {
                                    *puVar16 = *puVar15;
                                  }
                                  puVar16 = puVar16 + 1;
                                }
                                puVar15 = (uint *)((int)puVar10 +
                                                  ((int)puVar9 - *param_7 & 0xfffffffcU));
                                if (puVar15 != (uint *)0x0) {
                                  *puVar15 = uStack_dc;
                                }
                                puVar16 = (uint *)param_7[1];
                                puVar15 = (uint *)((int)puVar10 +
                                                  ((int)puVar9 - *param_7 & 0xfffffffcU));
                                for (; puVar9 != puVar16; puVar9 = puVar9 + 1) {
                                  puVar15 = puVar15 + 1;
                                  if (puVar15 != (uint *)0x0) {
                                    *puVar15 = *puVar9;
                                  }
                                }
                                iVar7 = *param_7;
                                iVar8 = param_7[1];
                                FUN_0010fa20(iVar7,param_7[2] - iVar7 >> 2,0);
                                param_7[2] = (int)(puVar10 + uStack_b0);
                                *param_7 = (int)puVar10;
                                param_7[1] = (int)(puVar10 + (iVar8 - iVar7 >> 2) + 1);
                              }
                            }
                            else {
                              param_7[1] = (int)(puVar9 + 1);
                              if (puVar9 != (uint *)0x0) {
                                *puVar9 = uStack_dc;
                              }
                            }
                          }
                          uVar13 = uVar13 + 1;
                        } while (uVar13 < uStack_180);
                      }
                    }
                    else {
                      FUN_000028a4(DAT_000c38ec);
                    }
                    FUN_0019f30c(iVar3);
                  }
                }
                uVar12 = uVar12 | 4;
                if (uVar12 == uStack_ac) goto joined_r0x000c37bc;
              }
              uVar21 = uVar21 + uVar19 + 8;
              if (*param_6 <= uVar21) goto LAB_000c3898;
              FUN_000cbd04(&uStack_a8,auStack_140,uStack_e8,uStack_bc);
              iVar3 = (**(code **)(*local_ec + 8))(local_ec,&uStack_a8,0xffffffff);
              if (iVar3 != 0) {
                pcVar11 = s_ERROR__WaveFileHeaderParser__get_000c3648;
LAB_000c3874:
                FUN_000028a4(pcVar11);
                goto LAB_000c3898;
              }
              auStack_190[0] = 0;
              FUN_000cbca8(&uStack_a8,auStack_140,uStack_e8,uStack_bc);
              iVar3 = (**(code **)(*local_ec + 8))(local_ec,&uStack_a8,0xffffffff);
              pcVar11 = DAT_000c3688;
              if (iVar3 != 0) goto LAB_000c3874;
            } while (iStack_84 == 0x30);
            FUN_000028a4(DAT_000c38f4,iStack_84,0x30);
LAB_000c3898:
            if ((uVar12 & 3) != 0) {
joined_r0x000c37bc:
              if (param_8 == (undefined4 *)0x0) {
                FUN_000d7e18(aiStack_b8,auStack_140,uStack_e8,uStack_bc);
                piVar4 = (int *)FUN_0009b63c();
                (**(code **)(*piVar4 + 8))(piVar4,aiStack_b8,0xffffffff);
              }
              else {
                *param_8 = uStack_bc;
              }
              FUN_0014fc34(auStack_140);
              return 1;
            }
            FUN_000028a4(DAT_000c38f8);
            FUN_000d7e18(aiStack_b8,auStack_140,uStack_e8,uStack_bc);
            piVar4 = (int *)FUN_0009b63c();
            pcVar22 = *(code **)(*piVar4 + 8);
            piVar17 = aiStack_b8;
          }
          else {
            FUN_000028a4(DAT_000c306c);
            FUN_000d7e18(aiStack_b8,auStack_140,uStack_e8,uStack_bc);
            piVar4 = (int *)FUN_0009b63c();
            pcVar22 = *(code **)(*piVar4 + 8);
            piVar17 = aiStack_b8;
          }
        }
        else {
          FUN_000028a4(s_ERROR__WaveFileHeaderParser__get_000c2fe4);
          FUN_000d7e18(&iStack_88,auStack_140,uStack_e8,uStack_bc);
          piVar4 = (int *)FUN_0009b63c();
          pcVar22 = *(code **)(*piVar4 + 8);
          piVar17 = &iStack_88;
        }
      }
    }
    else {
      FUN_000028a4(s_U___V__ERROR__WaveFileHeaderPars_000c2fa1._3_4_);
      FUN_000d7e18(&iStack_98,auStack_140,uStack_e8,uStack_bc);
      piVar4 = (int *)FUN_0009b63c();
      pcVar22 = *(code **)(*piVar4 + 8);
      piVar17 = &iStack_98;
    }
LAB_000c38e4:
    (*pcVar22)(piVar4,piVar17,0xffffffff);
  }
  else {
    FUN_000028a4(_DAT_000c2fa0,*param_1);
    if (piStack_c4 != piVar17) {
      piVar17 = piStack_c4 + -3;
      iVar3 = *piVar17;
      if ((iVar3 == -1) || ((piVar17 != piVar4 && (*piVar17 = iVar3 + -1, iVar3 == 0)))) {
        FUN_0010fa20(piStack_c4 + -3,piStack_c4[-2] + 8,0);
      }
    }
  }
  FUN_0014fc34(auStack_140);
  return 0;
}


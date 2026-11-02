// rea decompile_all
// name: FUN_000affc4
// address: 0xaffc4
// body: available
// range: 0xaffc4-0xb0443 inclusive
// range: 0xb0490-0xb0af7 inclusive
// range: 0xb0b60-0xb0d9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb0954 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000affc4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int extraout_r12;
  int iVar16;
  undefined4 *local_b0;
  undefined4 local_ac;
  int local_a0;
  int local_9c;
  undefined4 local_90;
  int local_8c;
  undefined1 auStack_88 [40];
  int local_60;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  int *local_50;
  int local_44;
  int local_40 [2];
  uint local_38;
  undefined4 local_34;
  uint local_30 [2];
  undefined4 local_28;
  
  uVar1 = s_0___P___ArchwaveAES67_000b0444._0_4_;
  iVar2 = *(int *)(param_2 + 0x14);
  if ((iVar2 != 1) && ((iVar2 == 2 || (iVar2 != 3)))) {
    return 0;
  }
  FUN_0017afd4(s_0___P___ArchwaveAES67_000b0444._0_4_,0xffffffff);
  uVar3 = *(int *)(param_2 + 0xc) + 1;
  iVar2 = s_0___P___ArchwaveAES67_000b0444._4_4_;
  iVar4 = 0;
  if (0x8000 < uVar3) {
    iVar4 = FUN_001a0808(uVar3,1);
    iVar2 = 0;
    if (iVar4 != 0) {
      FUN_0019f30c(0);
      iVar2 = iVar4;
    }
    iVar4 = iVar2;
    if (iVar2 == 0) goto LAB_000b0090;
  }
  FUN_00003628(iVar2,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  *(undefined1 *)(iVar2 + *(int *)(param_2 + 0xc)) = 0;
  FUN_001d6158(auStack_88,0,0x400);
  FUN_001d5fcc(auStack_88,iVar2);
  if (((local_60 == 0) &&
      (iVar2 = FUN_001d8c94(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8), iVar2 != 0)) &&
     (iVar2 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8),
     *(int *)(iVar2 + 0xc) == 3)) {
    uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
    iVar2 = FUN_001d8c94(uVar5,s_version_000b045c);
    if (iVar2 != 0) {
      uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
      iVar2 = FUN_001d436c(uVar5,s_version_000b045c);
      if ((*(uint *)(iVar2 + 0xc) & 0x400) != 0) {
        uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
        piVar6 = (int *)FUN_001d436c(uVar5,s_version_000b045c);
        if ((piVar6[3] & 0x400U) == 0) {
LAB_000b0954:
                    /* WARNING: Subroutine does not return */
          FUN_000032f8();
        }
        if (*piVar6 == 1) {
          uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
          iVar2 = FUN_001d8c94(uVar5,s_outputs_000b0464);
          if (iVar2 != 0) {
            uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
            iVar2 = FUN_001d436c(uVar5,s_outputs_000b0464);
            if (*(int *)(iVar2 + 0xc) == 4) {
              uVar5 = FUN_000b9aac();
              FUN_00159dd0(&local_b0,uVar5);
              uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
              iVar7 = FUN_001d436c(uVar5,s_outputs_000b0464);
              iVar2 = DAT_000b046c;
              if (*(int *)(iVar7 + 0xc) != 4) goto LAB_000b0954;
              if (local_9c != *(int *)(iVar7 + 4)) {
                FUN_000028a4(s_ERROR__RavennaPOST_handler__doOu_000b0ddc);
                FUN_001612b4(&local_b0);
LAB_000b0d20:
                FUN_0015242c(auStack_88);
LAB_000b0090:
                FUN_0019f30c(iVar4);
                FUN_0017b0f0(uVar1);
                return 0;
              }
              uVar3 = 0;
              iVar7 = *(int *)(local_a0 + 8);
              if (iVar7 != local_a0) {
                do {
                  uVar15 = *(undefined4 *)(iVar7 + 0x14);
                  uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
                  piVar6 = (int *)FUN_001d436c(uVar5,s_outputs_000b0464);
                  if ((piVar6[3] != 4) || ((uint)piVar6[1] <= uVar3)) goto LAB_000b0954;
                  iVar8 = FUN_001d8c94(*piVar6 + uVar3 * 0x10,&DAT_000b0470);
                  if (iVar8 != 0) {
                    uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
                    piVar6 = (int *)FUN_001d436c(uVar5,s_outputs_000b0464);
                    if ((piVar6[3] != 4) || ((uint)piVar6[1] <= uVar3)) goto LAB_000b0954;
                    iVar8 = FUN_001d436c(*piVar6 + uVar3 * 0x10,&DAT_000b0470);
                    if ((*(uint *)(iVar8 + 0xc) & 0x100000) != 0) {
                      uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
                      piVar6 = (int *)FUN_001d436c(uVar5,s_outputs_000b0464);
                      if (((piVar6[3] != 4) || ((uint)piVar6[1] <= uVar3)) ||
                         (puVar9 = (undefined4 *)FUN_001d436c(*piVar6 + uVar3 * 0x10,&DAT_000b0470),
                         (puVar9[3] & 0x100000) == 0)) goto LAB_000b0954;
                      FUN_000704c4(uVar15,*puVar9);
                    }
                  }
                  uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
                  piVar6 = (int *)FUN_001d436c(uVar5,s_outputs_000b0464);
                  if ((piVar6[3] != 4) || ((uint)piVar6[1] <= uVar3)) goto LAB_000b0954;
                  iVar8 = FUN_001d8c94(*piVar6 + uVar3 * 0x10,s_streamPath_000b0478);
                  if (iVar8 != 0) {
                    uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
                    piVar6 = (int *)FUN_001d436c(uVar5,s_outputs_000b0464);
                    if ((piVar6[3] != 4) || ((uint)piVar6[1] <= uVar3)) goto LAB_000b0954;
                    iVar8 = FUN_001d436c(*piVar6 + uVar3 * 0x10,s_streamPath_000b0478);
                    if ((*(uint *)(iVar8 + 0xc) & 0x100000) != 0) {
                      uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
                      piVar6 = (int *)FUN_001d436c(uVar5,s_outputs_000b0464);
                      if ((piVar6[3] != 4) || ((uint)piVar6[1] <= uVar3)) goto LAB_000b0954;
                      iVar8 = FUN_001d8c94(*piVar6 + uVar3 * 0x10,s_manualSDP_000b0484);
                      if (iVar8 != 0) {
                        uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
                        piVar6 = (int *)FUN_001d436c(uVar5,s_outputs_000b0464);
                        if ((piVar6[3] != 4) || ((uint)piVar6[1] <= uVar3)) goto LAB_000b0954;
                        iVar8 = FUN_001d436c(*piVar6 + uVar3 * 0x10,s_manualSDP_000b0484);
                        if ((*(uint *)(iVar8 + 0xc) & 0x100000) != 0) {
                          local_50 = &local_44;
                          uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
                          piVar6 = (int *)FUN_001d436c(uVar5,s_outputs_000b0464);
                          if (((piVar6[3] != 4) || ((uint)piVar6[1] <= uVar3)) ||
                             (puVar9 = (undefined4 *)
                                       FUN_001d436c(*piVar6 + uVar3 * 0x10,s_streamPath_000b0478),
                             (puVar9[3] & 0x100000) == 0)) goto LAB_000b0954;
                          local_54 = *puVar9;
                          uVar10 = FUN_000034d0();
                          iVar8 = iVar2;
                          if (uVar10 != 0) {
                            puVar12 = &local_38;
                            if (0x80 < uVar10) {
                              puVar12 = local_30;
                            }
                            local_30[0] = uVar10;
                            local_38 = 0x80;
                            iVar8 = FUN_001da28c(local_50,*puVar12,uVar10);
                            iVar8 = iVar8 + 0xc;
                          }
                          local_44 = iVar8;
                          FUN_00003628(iVar8,local_54,uVar10);
                          if (*(int *)(local_44 + -4) != 0) {
                            pcVar11 = (char *)(*(int *)(local_44 + -4) + -1 + local_44);
                            iVar14 = 2 - (local_44 - (int)pcVar11);
                            iVar8 = iVar14;
                            if (1 < iVar14) {
                              iVar8 = local_44 - (int)pcVar11;
                            }
                            iVar13 = 1;
                            iVar16 = extraout_r12;
                            if (1 < iVar14) {
                              iVar16 = 2 - iVar8;
                            }
                            local_54 = CONCAT31(local_54._1_3_,0x2f);
                            if (1 < iVar14) {
                              do {
                                if (*pcVar11 == '/') break;
                                iVar13 = iVar13 + 1;
                                pcVar11 = pcVar11 + -1;
                              } while (iVar13 < iVar16);
                            }
                          }
                          FUN_001d8dd0(&local_34,&local_44,0);
                          local_50 = local_40;
                          uVar5 = FUN_001d436c(auStack_88,s_0___P___ArchwaveAES67_000b0444 + 8);
                          piVar6 = (int *)FUN_001d436c(uVar5,s_outputs_000b0464);
                          if (((piVar6[3] != 4) || ((uint)piVar6[1] <= uVar3)) ||
                             (puVar9 = (undefined4 *)
                                       FUN_001d436c(*piVar6 + uVar3 * 0x10,s_manualSDP_000b0484),
                             (puVar9[3] & 0x100000) == 0)) goto LAB_000b0954;
                          local_54 = *puVar9;
                          uVar10 = FUN_000034d0();
                          iVar8 = iVar2;
                          if (uVar10 != 0) {
                            puVar12 = &local_38;
                            if (0x80 < uVar10) {
                              puVar12 = local_30;
                            }
                            local_30[0] = uVar10;
                            local_38 = 0x80;
                            iVar8 = FUN_001da28c(local_50,*puVar12,uVar10);
                            iVar8 = iVar8 + 0xc;
                          }
                          local_40[0] = iVar8;
                          FUN_00003628(iVar8,local_54,uVar10);
                          if (*(int *)(local_44 + -4) == 0) {
                            if (*(int *)(local_40[0] + -4) == 0) {
                              iVar8 = FUN_00070690(uVar15,s_manualSDPChannel_000b0b4c + 0x10,0);
                              if (iVar8 == 0) {
                                FUN_000028a4(_DAT_000b0afc);
                                FUN_001da314(local_40);
                                FUN_001da314(&local_34);
                                FUN_001da314(&local_44);
                                if (local_a0 != 0) {
                                  local_8c = local_a0;
                                  local_90 = *(undefined4 *)(local_a0 + 8);
                                  FUN_001ce9cc(auStack_58,&local_b0,&local_90,&local_8c);
                                  *(undefined4 *)(local_a0 + 0xc) = local_ac;
                                  piVar6 = local_b0;
                                  while (local_b0 = piVar6, piVar6 != (int *)0x0) {
                                    local_b0 = (undefined4 *)*piVar6;
                                    FUN_0010fa20(piVar6[2],piVar6[1],0);
                                    FUN_0010fa20(piVar6,1,0);
                                    piVar6 = local_b0;
                                  }
                                }
                                goto LAB_000b0d20;
                              }
                              iVar8 = FUN_00070260(uVar15,s_manualSDPChannel_000b0b4c + 0x10,0);
                              if (iVar8 == 0) {
                                FUN_000028a4(s_ERROR__RavennaPOST_handler__doOu_000b0d9c);
                                FUN_001da314(local_40);
                                FUN_001da314(&local_34);
                                FUN_001da314(&local_44);
                                if (local_a0 != 0) {
                                  local_8c = local_a0;
                                  local_90 = *(undefined4 *)(local_a0 + 8);
                                  FUN_001ce9cc(auStack_58,&local_b0,&local_90,&local_8c);
                                  *(undefined4 *)(local_a0 + 0xc) = local_ac;
                                  piVar6 = local_b0;
                                  while (local_b0 = piVar6, piVar6 != (int *)0x0) {
                                    local_b0 = (undefined4 *)*piVar6;
                                    FUN_0010fa20(piVar6[2],piVar6[1],0);
                                    FUN_0010fa20(piVar6,1,0);
                                    piVar6 = local_b0;
                                  }
                                }
                                goto LAB_000b0d20;
                              }
                            }
                            else {
                              iVar8 = 1;
                              uVar5 = FUN_001d436c(auStack_88,_DAT_000b0b40);
                              piVar6 = (int *)FUN_001d436c(uVar5,s__outputs_000b0b43 + 1);
                              if ((piVar6[3] != 4) || ((uint)piVar6[1] <= uVar3)) goto LAB_000b0954;
                              iVar14 = FUN_001d8c94(*piVar6 + uVar3 * 0x10,
                                                    s_manualSDPChannel_000b0b4c);
                              if (iVar14 != 0) {
                                uVar5 = FUN_001d436c(auStack_88,_DAT_000b0b40);
                                piVar6 = (int *)FUN_001d436c(uVar5,s__outputs_000b0b43 + 1);
                                if ((piVar6[3] != 4) || ((uint)piVar6[1] <= uVar3))
                                goto LAB_000b0954;
                                iVar14 = FUN_001d436c(*piVar6 + uVar3 * 0x10,
                                                      s_manualSDPChannel_000b0b4c);
                                if ((*(uint *)(iVar14 + 0xc) & 0x400) != 0) {
                                  uVar5 = FUN_001d436c(auStack_88,_DAT_000b0b40);
                                  piVar6 = (int *)FUN_001d436c(uVar5,s__outputs_000b0b43 + 1);
                                  if (((piVar6[3] != 4) || ((uint)piVar6[1] <= uVar3)) ||
                                     (piVar6 = (int *)FUN_001d436c(*piVar6 + uVar3 * 0x10,
                                                                   s_manualSDPChannel_000b0b4c),
                                     (piVar6[3] & 0x400U) == 0)) goto LAB_000b0954;
                                  iVar8 = *piVar6;
                                }
                              }
                              iVar8 = FUN_00070260(uVar15,local_40[0],iVar8 + -1,0);
                              if (iVar8 == 0) {
                                FUN_000028a4(s__ERROR__RavennaPOST_handler__doO_000b0aff + 1);
                                FUN_001da314(local_40);
                                FUN_001da314(&local_34);
                                FUN_001da314(&local_44);
                                if (local_a0 != 0) {
                                  local_8c = local_a0;
                                  local_90 = *(undefined4 *)(local_a0 + 8);
                                  FUN_001ce9cc(auStack_58,&local_b0,&local_90,&local_8c);
                                  *(undefined4 *)(local_a0 + 0xc) = local_ac;
                                  piVar6 = local_b0;
                                  while (local_b0 = piVar6, piVar6 != (int *)0x0) {
                                    local_b0 = (undefined4 *)*piVar6;
                                    FUN_0010fa20(piVar6[2],piVar6[1],0);
                                    FUN_0010fa20(piVar6,1,0);
                                    piVar6 = local_b0;
                                  }
                                }
                                goto LAB_000b0d20;
                              }
                              iVar8 = FUN_00070690(uVar15,s_manualSDPChannel_000b0b4c + 0x10,0);
                              if (iVar8 == 0) {
                                FUN_000028a4(_DAT_000b0afc);
                                FUN_001da314(local_40);
                                FUN_001da314(&local_34);
                                FUN_001da314(&local_44);
                                if (local_a0 != 0) {
                                  local_8c = local_a0;
                                  local_90 = *(undefined4 *)(local_a0 + 8);
                                  FUN_001ce9cc(auStack_58,&local_b0,&local_90,&local_8c);
                                  *(undefined4 *)(local_a0 + 0xc) = local_ac;
                                  piVar6 = local_b0;
                                  while (local_b0 = piVar6, piVar6 != (int *)0x0) {
                                    local_b0 = (undefined4 *)*piVar6;
                                    FUN_0010fa20(piVar6[2],piVar6[1],0);
                                    FUN_0010fa20(piVar6,1,0);
                                    piVar6 = local_b0;
                                  }
                                }
                                goto LAB_000b0d20;
                              }
                            }
LAB_000b0b94:
                            FUN_001da314(local_40);
                            FUN_001da314(&local_34);
                            FUN_001da314(&local_44);
                          }
                          else {
                            pcVar11 = (char *)(*(int *)(local_44 + -4) + -1 + local_44);
                            iVar14 = 2 - (local_44 - (int)pcVar11);
                            iVar8 = iVar14;
                            if (1 < iVar14) {
                              iVar8 = local_44 - (int)pcVar11;
                            }
                            iVar16 = 1;
                            if (1 < iVar14) {
                              iVar8 = 2 - iVar8;
                            }
                            local_50 = (int *)CONCAT31(local_50._1_3_,0x2f);
                            if (1 < iVar14) {
                              do {
                                if (*pcVar11 == '/') {
                                  if (pcVar11 == (char *)0x0) goto LAB_000b0700;
                                  iVar8 = (int)pcVar11 - local_44;
                                  goto LAB_000b068c;
                                }
                                iVar16 = iVar16 + 1;
                                pcVar11 = pcVar11 + -1;
                              } while (iVar16 < iVar8);
                            }
                            iVar8 = -1;
LAB_000b068c:
                            if (iVar8 != -1) {
                              FUN_001d8dd0(&local_28,&local_44,iVar8 + 1,0xffffffff);
                              iVar8 = FUN_0000317c(local_28);
                              FUN_001da314(&local_28);
                              if (iVar8 != 0) {
                                iVar8 = FUN_00070690(uVar15,local_34,iVar8 + -1);
                                if (iVar8 == 0) {
                                  FUN_000028a4(_DAT_000b0afc);
                                  FUN_001da314(local_40);
                                  FUN_001da314(&local_34);
                                  FUN_001da314(&local_44);
                                  if (local_a0 != 0) {
                                    local_8c = local_a0;
                                    local_90 = *(undefined4 *)(local_a0 + 8);
                                    FUN_001ce9cc(auStack_58,&local_b0,&local_90,&local_8c);
                                    *(undefined4 *)(local_a0 + 0xc) = local_ac;
                                    piVar6 = local_b0;
                                    while (local_b0 = piVar6, piVar6 != (int *)0x0) {
                                      local_b0 = (undefined4 *)*piVar6;
                                      FUN_0010fa20(piVar6[2],piVar6[1],0);
                                      FUN_0010fa20(piVar6,1,0);
                                      piVar6 = local_b0;
                                    }
                                  }
                                }
                                else {
                                  iVar8 = FUN_00070260(uVar15,&DAT_000b0474,0);
                                  if (iVar8 != 0) goto LAB_000b0b94;
                                  FUN_000028a4(s__ERROR__RavennaPOST_handler__doO_000b0aff + 1);
                                  FUN_001da314(local_40);
                                  FUN_001da314(&local_34);
                                  FUN_001da314(&local_44);
                                  if (local_a0 != 0) {
                                    local_8c = local_a0;
                                    local_90 = *(undefined4 *)(local_a0 + 8);
                                    FUN_001ce9cc(auStack_58,&local_b0,&local_90,&local_8c);
                                    *(undefined4 *)(local_a0 + 0xc) = local_ac;
                                    piVar6 = local_b0;
                                    while (local_b0 = piVar6, piVar6 != (int *)0x0) {
                                      local_b0 = (undefined4 *)*piVar6;
                                      FUN_0010fa20(piVar6[2],piVar6[1],0);
                                      FUN_0010fa20(piVar6,1,0);
                                      piVar6 = local_b0;
                                    }
                                  }
                                }
                                goto LAB_000b0d20;
                              }
                            }
LAB_000b0700:
                            FUN_000028a4(DAT_000b0af8,uVar3);
                            FUN_001da314(local_40);
                            FUN_001da314(&local_34);
                            FUN_001da314(&local_44);
                          }
                        }
                      }
                    }
                  }
                  uVar3 = uVar3 + 1;
                  iVar8 = *(int *)(iVar7 + 0xc);
                  if (*(int *)(iVar7 + 0xc) == 0) {
                    iVar8 = *(int *)(iVar7 + 4);
                    while (iVar14 = iVar8, iVar7 == *(int *)(iVar14 + 0xc)) {
                      iVar7 = iVar14;
                      iVar8 = *(int *)(iVar14 + 4);
                    }
                    if (*(int *)(iVar7 + 0xc) != iVar14) {
                      iVar7 = iVar14;
                    }
                  }
                  else {
                    do {
                      iVar7 = iVar8;
                      iVar8 = *(int *)(iVar7 + 8);
                    } while (*(int *)(iVar7 + 8) != 0);
                  }
                } while (iVar7 != local_a0);
              }
              FUN_001612b4(&local_b0);
            }
          }
        }
      }
    }
  }
  FUN_0015242c(auStack_88);
  FUN_0019f30c(iVar4);
  FUN_0017b0f0(uVar1);
  return 1;
}


// rea decompile_all
// name: FUN_000f9660
// address: 0xf9660
// body: available
// range: 0xf9660-0xf9a23 inclusive
// range: 0xf9b0c-0xfa037 inclusive
// range: 0xfa0ec-0xfa2ab inclusive
// range: 0xfa3e4-0xfa4eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f9660(int param_1,undefined4 *param_2,uint param_3)

{
  byte *pbVar1;
  undefined3 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  undefined4 extraout_r1;
  char *pcVar12;
  int iVar13;
  ushort *puVar14;
  char cVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  uint local_2c8;
  undefined4 local_2c4;
  char *local_2c0;
  undefined4 local_2bc;
  undefined4 *local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  char *local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  uint local_294;
  ushort local_290 [232];
  undefined4 local_c0;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 auStack_b8 [40];
  uint local_90 [9];
  uint local_6c [2];
  undefined4 local_64;
  undefined4 uStack_58;
  undefined1 auStack_54 [24];
  uint local_3c;
  undefined4 auStack_34 [2];
  undefined1 auStack_2c [8];
  
  iVar6 = FUN_00003d18(*param_2,s_route_000f9a24);
  if (iVar6 == 0) {
    if (param_3 < 2) {
      return 6;
    }
    uVar24 = FUN_00003d18(param_2[1],s_reset_000f9a94);
    uVar17 = (undefined4)((ulonglong)uVar24 >> 0x20);
    if ((int)uVar24 != 0) {
      *(undefined1 *)s_4___<c__Route_file_channel__u_to_000f9a9c._0_4_ = 1;
      FUN_00003c08(s_4___<c__Route_file_channel__u_to_000f9a9c._4_4_,0x20,0xffffffff);
      uVar17 = s_4___<c__Route_file_channel__u_to_000f9a9c._4_4_;
      iVar20 = 0;
      iVar11 = 0;
      iVar6 = 0;
      while( true ) {
        while( true ) {
          cVar15 = *(char *)(param_2[1] + iVar6);
          if (cVar15 == ',' || cVar15 == '\0') break;
          iVar6 = iVar6 + 1;
        }
        if (iVar6 != iVar11) {
          iVar13 = -1;
          if (*(char *)(param_2[1] + iVar11) != '*') {
            local_2b8 = (undefined4 *)0x0;
            local_2b4 = 0;
            local_2b0 = 0;
            local_2ac = 0;
            local_2a8 = 0;
            local_2a4 = 0;
            local_2a0 = (char *)0x0;
            local_29c = 0;
            FUN_000039e0(&local_2b8,iVar11 + param_2[1],iVar6 - iVar11);
            iVar13 = FUN_00003258(&local_2b8);
          }
          *(char *)(uVar17 + iVar20) = (char)iVar13;
          if (iVar13 < 0) {
            FUN_00002898(s_Skip_file_channel__u_000f9ae8,iVar20);
          }
          else {
            FUN_00002898(s_4___<c__Route_file_channel__u_to_000f9a9c + 8,iVar20);
          }
        }
        iVar20 = iVar20 + 1;
        if (cVar15 == '\0') break;
        iVar11 = iVar6 + 1;
        iVar6 = iVar11;
      }
      return 0;
    }
    *(undefined1 *)s_4___<c__Route_file_channel__u_to_000f9a9c._0_4_ = 0;
    pcVar12 = s_Routing_has_been_reset_000f9ad0;
    goto LAB_000f9f4c;
  }
  iVar6 = FUN_00003d18(*param_2,s_configure_000f9a2c);
  uVar16 = DAT_000f9a38;
  if (iVar6 == 0) {
    if (param_3 < 9) {
      return 6;
    }
    local_294 = FUN_000032fc(param_2[1],0);
    local_294 = local_294 & 0xff;
    iVar6 = 0;
    cVar15 = *(char *)param_2[2];
    while (cVar15 != '\0') {
      puVar14 = local_290 + iVar6;
      pbVar1 = (byte *)(param_2[2] + iVar6);
      iVar6 = iVar6 + 1;
      *puVar14 = (ushort)*pbVar1;
      cVar15 = *(char *)(param_2[2] + iVar6);
    }
    local_290[iVar6] = 0;
    FUN_00231ef4(auStack_34,local_290,auStack_2c);
    local_3c = FUN_000032fc(param_2[3],0);
    local_3c = local_3c & 0xff;
    local_2ac = FUN_000032fc(param_2[4],0);
    uVar7 = FUN_00003258(param_2[5]);
    uVar7 = uVar7 & 0xff;
    if (uVar7 == 0) {
      uVar7 = 2;
    }
    else if (8 < uVar7) {
      uVar7 = 8;
    }
    pcVar12 = (char *)FUN_000032fc(param_2[6],0);
    if (pcVar12 < "\a") {
      pcVar12 = "\a";
    }
    uVar8 = FUN_00003258(param_2[7]);
    uVar8 = uVar8 & 0xff;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    else if (8 < uVar8) {
      uVar8 = 8;
    }
    local_2c4 = FUN_000032fc(param_2[8],0);
    local_2b4 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    local_2c0 = (char *)0x0;
    if (9 < param_3) {
      uVar22 = 9;
      iVar6 = FUN_00003d18(param_2[9],s_autostart_000f9b00);
      if (iVar6 == 0) {
        uVar22 = 10;
        local_2b4 = 1;
      }
      if (uVar22 < param_3) {
        local_2b0 = FUN_000032fc(param_2[uVar22],0);
        if (uVar22 + 1 < param_3) {
          local_2a8 = FUN_000032fc(param_2[uVar22 + 1],0);
          if ((uVar22 + 2 < param_3) &&
             (iVar6 = FUN_00003d18(param_2[uVar22 + 2],s_pause_000f9a58), iVar6 == 0)) {
            local_2c0 = (char *)0x1;
          }
        }
      }
    }
    uVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
    uVar19 = local_2b0;
    uVar17 = local_2b4;
    local_29c = 0;
    local_2a0 = local_2c0;
    local_2a4 = local_2a8;
    local_298 = 0;
    local_2b0 = local_2ac;
    local_2b4 = 1;
    local_2ac = uVar17;
    local_2a8 = uVar19;
    local_2b8 = auStack_34;
    local_2bc = local_2c4;
    local_2c8 = uVar7;
    local_2c4 = uVar8;
    local_2c0 = pcVar12;
    FUN_0014afac(local_90,local_294,uVar5,local_3c);
    uVar17 = s_4___<c__Route_file_channel__u_to_000f9a9c._4_4_;
    if (*(char *)s_4___<c__Route_file_channel__u_to_000f9a9c._0_4_ != '\0') {
      uVar7 = 0;
      do {
        FUN_0014aef0(local_90,uVar7,(int)*(char *)(uVar17 + uVar7));
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < 0x20);
    }
    (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),local_90);
    local_90[0] = uVar16;
    FUN_00232190(local_6c);
    puVar9 = auStack_34;
  }
  else {
    iVar6 = FUN_00003d18(*param_2,&DAT_000f9a3c);
    if (iVar6 != 0) {
      iVar6 = FUN_00003d18(*param_2,&DAT_000f9a44);
      if (iVar6 == 0) {
        local_2c4 = local_2c4 & 0xffffff00;
        local_2c8._0_1_ = s_X___preload_000fa038[0];
        local_2c8._1_1_ = s_X___preload_000fa038[1];
        local_2c8._2_1_ = s_X___preload_000fa038[2];
        local_2c8._3_1_ = s_X___preload_000fa038[3];
        (**(code **)(**(int **)(param_1 + 0x14) + 0xc))(*(int **)(param_1 + 0x14),&local_2c8);
        return 0;
      }
      iVar6 = FUN_00003d18(*param_2,s_start_000f9a4c);
      pcVar12 = DAT_000f9a54;
      if (iVar6 == 0) {
        local_2c0 = DAT_000f9a54;
        local_2bc = 0x1000101;
        (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_2c0);
        return 0;
      }
      iVar6 = FUN_00003d18(*param_2,s_pause_000f9a58);
      if (iVar6 == 0) {
        local_2c0 = pcVar12;
        local_2bc = 0x1000001;
        (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_2c0);
        return 0;
      }
      iVar6 = FUN_00003d18(*param_2,&DAT_000f9a60);
      if (iVar6 == 0) {
        if (param_3 < 2) {
          return 6;
        }
        iVar6 = FUN_00003d18(param_2[1],s_X___preload_000fa038 + 4);
        if (iVar6 != 0) {
          iVar6 = FUN_00003d18(param_2[1],s_select_000f9a80);
          if (iVar6 == 0) {
            local_2c8 = _DAT_000fa0a0;
            local_2c4 = CONCAT31(local_2c4._1_3_,1);
            (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_2c8);
            FUN_00002898(s____Select_next_files_done_000fa0a1 + 3);
            return 0;
          }
          if (param_3 < 3) {
            return 6;
          }
          local_6c[0] = FUN_000032fc(param_2[1],0);
          local_6c[0] = local_6c[0] & 0xff;
          iVar6 = 0;
          cVar15 = *(char *)param_2[2];
          while (cVar15 != '\0') {
            iVar11 = iVar6 * 2;
            pbVar1 = (byte *)(param_2[2] + iVar6);
            iVar6 = iVar6 + 1;
            *(ushort *)((int)&local_2c8 + iVar11) = (ushort)*pbVar1;
            cVar15 = *(char *)(param_2[2] + iVar6);
          }
          *(undefined2 *)((int)&local_2c8 + iVar6 * 2) = 0;
          FUN_00231ef4(&uStack_58,&local_2c8,auStack_54);
          uVar17 = 0;
          uVar19 = 0xffffffff;
          uVar21 = 0;
          uVar23 = 0;
          uVar5 = 0;
          if (((((3 < param_3) && (uVar17 = FUN_000032fc(param_2[3],0), 4 < param_3)) &&
               (uVar19 = FUN_000032fc(param_2[4],0), 5 < param_3)) &&
              ((uVar21 = FUN_000032fc(param_2[5],0), 6 < param_3 &&
               (uVar23 = FUN_000032fc(param_2[6],0), 7 < param_3)))) &&
             (iVar6 = FUN_00003d18(param_2[7],s_pause_000f9a58), iVar6 == 0)) {
            uVar5 = 1;
          }
          uVar4 = _DAT_000fa044;
          local_64 = 0xffffffff;
          local_bc = 0;
          local_bb = (undefined1)local_6c[0];
          local_c0 = _DAT_000fa044;
          iVar6 = FUN_00232084(auStack_b8,&uStack_58);
          *(undefined4 *)(iVar6 + 0x14) = 0;
          *(undefined4 *)(iVar6 + 4) = uVar17;
          *(undefined4 *)(iVar6 + 8) = uVar19;
          *(undefined4 *)(iVar6 + 0xc) = uVar21;
          *(undefined4 *)(iVar6 + 0x10) = uVar23;
          *(undefined4 *)(iVar6 + 0x18) = local_64;
          *(undefined1 *)(iVar6 + 0x1c) = uVar5;
          *(undefined1 *)(iVar6 + 0x1d) = 0;
          FUN_00003c08(iVar6 + 0x1e,0x20,0xffffffff);
          *(undefined1 *)(iVar6 + -4) = 1;
          uVar17 = s_4___<c__Route_file_channel__u_to_000f9a9c._4_4_;
          if (*(char *)s_4___<c__Route_file_channel__u_to_000f9a9c._0_4_ != '\0') {
            uVar16 = 0;
            do {
              FUN_001710f4(&local_c0,uVar16,(int)*(char *)(uVar17 + uVar16));
              uVar16 = uVar16 + 1 & 0xff;
            } while (uVar16 < 0x20);
          }
          iVar6 = (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_c0)
          ;
          if (iVar6 == 0) {
            pcVar12 = s_Set_next_file_name_failed_000fa064;
          }
          else {
            pcVar12 = s____Set_next_file_name_done_000fa045 + 3;
          }
          FUN_00002898(pcVar12);
          local_c0 = uVar4;
          FUN_00232190(auStack_b8);
          puVar9 = &uStack_58;
          goto LAB_000f9f1c;
        }
        local_2c8 = _DAT_000fa080;
        local_2c4 = CONCAT31(local_2c4._1_3_,1);
        (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_2c8);
        pcVar12 = s____Preload_next_files_done_000fa081 + 3;
        uVar17 = extraout_r1;
      }
      else {
        iVar6 = FUN_00003d18(*param_2,&DAT_000f9a68);
        if (iVar6 == 0) {
          if (param_3 < 3) {
            return 6;
          }
          uVar5 = FUN_000032fc(param_2[1],0);
          pcVar12 = (char *)FUN_000032fc(param_2[2],0);
          uVar17 = 0xffffffff;
          uVar18 = 0;
          if (((3 < param_3) && (uVar17 = FUN_000032fc(param_2[3],0), 4 < param_3)) &&
             (iVar6 = FUN_00003d18(param_2[4],s_pause_000fa0bc), iVar6 == 0)) {
            uVar18 = 1;
          }
          local_2c8 = _DAT_000fa0c4;
          local_2b8 = (undefined4 *)CONCAT31(local_2b8._1_3_,uVar18);
          local_2c4 = CONCAT31(CONCAT21(local_2c4._2_2_,uVar5),1);
          local_2c0 = pcVar12;
          local_2bc = uVar17;
          uVar24 = (**(code **)(**(int **)(param_1 + 0x14) + 8))
                             (*(int **)(param_1 + 0x14),&local_2c8);
          uVar17 = (undefined4)((ulonglong)uVar24 >> 0x20);
          if ((int)uVar24 == 0) {
            pcVar12 = s_Set_marks_failed_000fa0d8;
          }
          else {
            pcVar12 = s___Set_marks_done_000fa0c5 + 3;
          }
        }
        else {
          iVar6 = FUN_00003d18(*param_2,s_samplecounter_000f9a70);
          if (iVar6 != 0) {
            iVar6 = FUN_00003d18(*param_2,s_select_000f9a80);
            if (iVar6 == 0) {
              if (param_3 < 3) {
                return 6;
              }
              uVar5 = FUN_000032fc(param_2[1],0);
              pcVar12 = (char *)FUN_000032fc(param_2[2],0);
              local_2c8 = _DAT_000fa390;
              local_2c4 = CONCAT31(CONCAT21(local_2c4._2_2_,uVar5),1);
              local_2c0 = pcVar12;
              iVar6 = (**(code **)(**(int **)(param_1 + 0x14) + 8))
                                (*(int **)(param_1 + 0x14),&local_2c8);
              if (iVar6 == 0) {
                pcVar10 = s_Select_next_file_by_file_id__u_f_000fa3bc;
              }
              else {
                pcVar10 = s____Select_next_file_by_file_id___000fa391 + 3;
              }
            }
            else {
              iVar6 = FUN_00003d18(*param_2,s_clear_000f9a88);
              if (iVar6 == 0) {
                if (param_3 < 2) {
                  return 6;
                }
                uVar5 = FUN_000032fc(param_2[1],0);
                local_2c0 = (char *)s_d___Clear_next_files_done_000fa4ec._0_4_;
                local_2bc = CONCAT31(CONCAT21(local_2bc._2_2_,uVar5),1);
                uVar24 = (**(code **)(**(int **)(param_1 + 0x14) + 8))
                                   (*(int **)(param_1 + 0x14),&local_2c0);
                uVar17 = (undefined4)((ulonglong)uVar24 >> 0x20);
                if ((int)uVar24 == 0) {
                  pcVar12 = s_Clear_next_files_failed_000fa508;
                }
                else {
                  pcVar12 = s_d___Clear_next_files_done_000fa4ec + 4;
                }
                goto LAB_000f9f4c;
              }
              iVar6 = FUN_00003d18(*param_2,&DAT_000f9a90);
              if (iVar6 != 0) {
                return 6;
              }
              if (param_3 < 3) {
                return 6;
              }
              uVar5 = FUN_000032fc(param_2[1],0);
              iVar6 = FUN_00003d18(param_2[2],s_pause_000fa0bc);
              if (iVar6 == 0) {
                bVar3 = true;
              }
              else {
                iVar6 = FUN_00003d18(param_2[2],s_continue_000fa524);
                if (iVar6 != 0) {
                  return 6;
                }
                bVar3 = false;
              }
              uVar2 = CONCAT21(local_2bc._2_2_,uVar5);
              local_2c0 = (char *)s_____Set_000fa530._0_4_;
              local_2bc._0_3_ = CONCAT12(bVar3,(short)uVar2 << 8);
              local_2bc = CONCAT31(local_2bc._1_3_,1);
              iVar6 = (**(code **)(**(int **)(param_1 + 0x14) + 8))
                                (*(int **)(param_1 + 0x14),&local_2c0);
              if (iVar6 == 0) {
                if (bVar3) {
                  pcVar12 = s_____Set_000fa530 + 4;
                }
                else {
                  pcVar12 = s_Clear_000fa538;
                }
                pcVar10 = s__s_pause_at_end_of_file_failed_000fa560;
              }
              else {
                if (bVar3) {
                  pcVar12 = s_____Set_000fa530 + 4;
                }
                else {
                  pcVar12 = s_Clear_000fa538;
                }
                pcVar10 = s__s_pause_at_end_of_file_done_000fa540;
              }
            }
            goto LAB_000fa234;
          }
          if (param_3 < 2) {
            return 6;
          }
          iVar6 = FUN_00003d18(param_2[1],s_reset_000fa2ac);
          if (iVar6 == 0) {
            local_2c8 = DAT_000fa2b4;
            local_2c4 = (uint)local_2c4._2_2_ << 0x10;
            local_2bc = 0xffffffff;
            local_2c0 = (char *)0x0;
            local_2c4 = CONCAT31(local_2c4._1_3_,1);
            uVar24 = (**(code **)(**(int **)(param_1 + 0x14) + 8))
                               (*(int **)(param_1 + 0x14),&local_2c8);
            uVar17 = (undefined4)((ulonglong)uVar24 >> 0x20);
            if ((int)uVar24 == 0) {
              pcVar12 = s_Reset_sample_counters_failed_000fa2e4;
            }
            else {
              pcVar12 = s_Reset_sample_counters_done_000fa2c8;
            }
          }
          else {
            if (param_3 < 3) {
              return 6;
            }
            local_2c8 = DAT_000fa2b4;
            local_2c4 = (uint)local_2c4._2_2_ << 0x10;
            local_2bc = 0xffffffff;
            local_2c0 = (char *)0x0;
            local_2c4 = CONCAT31(local_2c4._1_3_,1);
            pcVar12 = (char *)FUN_000032fc(param_2[2],0);
            if (3 < param_3) {
              local_2bc = FUN_0000328c(param_2[3],0);
            }
            iVar6 = FUN_00003d18(param_2[1],s_start_000fa2b8);
            if (iVar6 == 0) {
              local_2c4._0_2_ = CONCAT11(1,(undefined1)local_2c4);
              local_2c0 = pcVar12;
              uVar24 = (**(code **)(**(int **)(param_1 + 0x14) + 8))
                                 (*(int **)(param_1 + 0x14),&local_2c8);
              uVar17 = (undefined4)((ulonglong)uVar24 >> 0x20);
              if ((int)uVar24 != 0) {
                pcVar10 = s_Set_start_sample_counter__u_done_000fa304;
                goto LAB_000fa234;
              }
              pcVar12 = s_Set_start_sample_counter_failed_000fa328;
            }
            else {
              iVar6 = FUN_00003d18(param_2[1],&DAT_000fa2c0);
              if (iVar6 != 0) {
                return 6;
              }
              local_2c4._0_2_ = CONCAT11(2,(undefined1)local_2c4);
              local_2c0 = pcVar12;
              uVar24 = (**(code **)(**(int **)(param_1 + 0x14) + 8))
                                 (*(int **)(param_1 + 0x14),&local_2c8);
              uVar17 = (undefined4)((ulonglong)uVar24 >> 0x20);
              if ((int)uVar24 != 0) {
                pcVar10 = s_Set_stop_sample_counter__u_done_000fa34c;
LAB_000fa234:
                FUN_00002898(pcVar10,pcVar12);
                return 0;
              }
              pcVar12 = s_Set_stop_sample_counter_failed_000fa370;
            }
          }
        }
      }
LAB_000f9f4c:
      FUN_00002898(pcVar12,uVar17);
      return 0;
    }
    if (param_3 < 2) {
      cVar15 = '\0';
      while( true ) {
        FUN_0014af30(&local_2c8,cVar15);
        iVar6 = (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_2c8);
        puVar9 = &local_2a4;
        local_2c8 = uVar16;
        if (iVar6 == 0) break;
        FUN_00232190(puVar9);
        cVar15 = cVar15 + '\x01';
      }
    }
    else {
      uVar5 = FUN_000032fc(param_2[1],0);
      FUN_0014af30(&local_2c8,uVar5);
      (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_2c8);
      puVar9 = &local_2a4;
      local_2c8 = uVar16;
    }
  }
LAB_000f9f1c:
  FUN_00232190(puVar9);
  return 0;
}


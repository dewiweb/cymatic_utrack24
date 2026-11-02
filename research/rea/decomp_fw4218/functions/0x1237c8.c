// rea decompile_all
// name: FUN_001237c8
// address: 0x1237c8
// body: available
// range: 0x1237c8-0x123ac7 inclusive
// range: 0x123b74-0x123ef3 inclusive
// range: 0x123ff4-0x12409f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001237c8(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  char *pcVar11;
  char cVar12;
  undefined4 extraout_r1;
  undefined4 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 local_288;
  undefined1 local_284;
  char local_283;
  undefined1 local_282;
  undefined1 local_281;
  uint local_280;
  undefined4 local_27c;
  undefined4 local_278;
  uint uStack_274;
  undefined1 local_270;
  undefined1 local_26f;
  undefined4 local_26c;
  undefined1 *local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  uint local_74;
  undefined4 local_70;
  undefined1 auStack_6c [12];
  undefined4 local_60;
  undefined1 auStack_50 [4];
  uint local_4c;
  uint local_44;
  undefined1 auStack_30 [12];
  
  iVar8 = FUN_00003d18(*param_2,s_maxlen_00123ac8);
  if (iVar8 == 0) {
    if (param_3 < 2) {
      uVar10 = *(uint *)(param_1 + 0x18);
      pcVar11 = s_Max_file_length_is__u_00123b34;
    }
    else {
      uVar10 = FUN_000032fc(param_2[1],0);
      *(uint *)(param_1 + 0x18) = uVar10;
      pcVar11 = s_Max_file_length_set_to__u_00123b4c;
    }
    goto LAB_001238f4;
  }
  iVar8 = FUN_00003d18(*param_2,s_configure_00123ad0);
  uVar13 = DAT_00123adc;
  if (iVar8 == 0) {
    if (8 < param_3) {
      uVar7 = FUN_000032fc(param_2[1],0);
      iVar8 = 0;
      cVar12 = *(char *)param_2[2];
      while (cVar12 != '\0') {
        iVar1 = iVar8 * 2;
        pbVar2 = (byte *)(param_2[2] + iVar8);
        iVar8 = iVar8 + 1;
        *(ushort *)((int)&local_288 + iVar1) = (ushort)*pbVar2;
        cVar12 = *(char *)(param_2[2] + iVar8);
      }
      *(undefined2 *)((int)&local_288 + iVar8 * 2) = 0;
      FUN_00231ef4(auStack_50,&local_288,auStack_30);
      uVar5 = FUN_000032fc(param_2[3],0);
      uVar6 = FUN_000032fc(param_2[4],0);
      local_44 = FUN_000032fc(param_2[5],0);
      local_44 = local_44 & 0xff;
      local_4c = FUN_000032fc(param_2[6],0);
      local_4c = local_4c & 0xff;
      uVar10 = FUN_000032fc(param_2[7],0);
      if (uVar10 < 0x10000) {
        uVar10 = 0x10000;
      }
      local_60 = FUN_000032fc(param_2[8],0);
      uVar14 = 0;
      if ((9 < param_3) && (iVar8 = FUN_00003d18(param_2[9],s_autostart_00123b68), iVar8 == 0)) {
        uVar14 = 1;
      }
      local_7a = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
      local_70 = local_60;
      uVar3 = DAT_00123adc;
      local_84 = auStack_50;
      local_60 = 1;
      uVar15 = *(undefined4 *)(param_1 + 0x18);
      local_7c = 0;
      local_78 = (undefined1)local_44;
      DAT_00123adc._0_1_ = (char)uVar13;
      DAT_00123adc._1_1_ = SUB41(uVar13,1);
      DAT_00123adc._2_1_ = SUB41(uVar13,2);
      DAT_00123adc._3_1_ = SUB41(uVar13,3);
      local_80._0_1_ = (char)DAT_00123adc;
      local_80._1_1_ = DAT_00123adc._1_1_;
      local_80._2_1_ = DAT_00123adc._2_1_;
      local_80._3_1_ = DAT_00123adc._3_1_;
      local_76 = (undefined1)local_4c;
      DAT_00123adc = uVar3;
      local_7b = uVar7;
      local_79 = uVar6;
      local_77 = uVar5;
      local_74 = uVar10;
      iVar8 = FUN_00232084(auStack_6c,local_84);
      *(char *)(iVar8 + 4) = (char)local_60;
      *(undefined1 *)(iVar8 + 5) = uVar14;
      *(undefined4 *)(iVar8 + 8) = uVar15;
      *(undefined1 *)(iVar8 + -0x10) = 1;
      (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_80);
      uVar3 = DAT_00123adc;
      DAT_00123adc._0_1_ = (char)uVar13;
      DAT_00123adc._1_1_ = SUB41(uVar13,1);
      DAT_00123adc._2_1_ = SUB41(uVar13,2);
      DAT_00123adc._3_1_ = SUB41(uVar13,3);
      local_80._0_1_ = (char)DAT_00123adc;
      local_80._1_1_ = DAT_00123adc._1_1_;
      local_80._2_1_ = DAT_00123adc._2_1_;
      local_80._3_1_ = DAT_00123adc._3_1_;
      DAT_00123adc = uVar3;
      FUN_00232190(auStack_6c);
      FUN_00232190(auStack_50);
      return 0;
    }
    return 6;
  }
  iVar8 = FUN_00003d18(*param_2,&DAT_00123ae0);
  uVar10 = DAT_00123ef4;
  if (iVar8 != 0) {
    iVar8 = FUN_00003d18(*param_2,s_start_00123ae8);
    uVar10 = DAT_00123af0;
    if (iVar8 == 0) {
      local_280 = DAT_00123af0;
      local_27c = 0x10101;
      (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_280);
      return 0;
    }
    iVar8 = FUN_00003d18(*param_2,s_pause_00123af4);
    if (iVar8 == 0) {
      local_280 = uVar10;
      local_27c = 0x10001;
      (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_280);
      return 0;
    }
    iVar8 = FUN_00003d18(*param_2,&DAT_00123afc);
    if (iVar8 == 0) {
      local_284 = 0;
      local_288 = DAT_00123ef8;
      (**(code **)(**(int **)(param_1 + 0x14) + 0xc))(*(int **)(param_1 + 0x14),&local_288);
      return 0;
    }
    iVar8 = FUN_00003d18(*param_2,&DAT_00123b04);
    if (iVar8 == 0) {
      local_288._0_1_ = DAT_00123efc;
      local_288._1_1_ = s___Save_cue_done_00123efd[0];
      local_288._2_1_ = s___Save_cue_done_00123efd[1];
      local_288._3_1_ = s___Save_cue_done_00123efd[2];
      local_284 = 1;
      uVar16 = (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_288);
      uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
      if ((int)uVar16 == 0) {
        pcVar11 = s_Save_cue_failed_00123f10;
      }
      else {
        pcVar11 = s___Save_cue_done_00123efd + 3;
      }
    }
    else {
      iVar8 = FUN_00003d18(*param_2,s_prerecord_00123b08);
      if (iVar8 == 0) {
        local_288._0_1_ = s_____Start_pre_recording_done_00123f24[0];
        local_288._1_1_ = s_____Start_pre_recording_done_00123f24[1];
        local_288._2_1_ = s_____Start_pre_recording_done_00123f24[2];
        local_288._3_1_ = s_____Start_pre_recording_done_00123f24[3];
        local_284 = 1;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_288);
        if (iVar8 == 0) {
          pcVar11 = s_Start_pre_recording_failed_00123f44;
        }
        else {
          pcVar11 = s_____Start_pre_recording_done_00123f24 + 4;
        }
        FUN_00002898(pcVar11);
        return 6;
      }
      iVar8 = FUN_00003d18(*param_2,&DAT_00123b14);
      if (iVar8 == 0) {
        if (param_3 < 3) {
          return 6;
        }
        uVar7 = FUN_000032fc(param_2[1],0);
        iVar8 = 0;
        cVar12 = *(char *)param_2[2];
        while (cVar12 != '\0') {
          iVar1 = iVar8 * 2;
          pbVar2 = (byte *)(param_2[2] + iVar8);
          iVar8 = iVar8 + 1;
          *(ushort *)((int)&local_288 + iVar1) = (ushort)*pbVar2;
          cVar12 = *(char *)(param_2[2] + iVar8);
        }
        *(undefined2 *)((int)&local_288 + iVar8 * 2) = 0;
        FUN_00231ef4(&local_74,&local_288,&local_70);
        puVar4 = _DAT_00123f60;
        local_84 = _DAT_00123f60;
        local_80 = (uint)CONCAT21(local_80._2_2_,uVar7) << 8;
        iVar8 = FUN_00232084(&local_7c,&local_74);
        *(undefined1 *)(iVar8 + -4) = 1;
        iVar8 = (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_84);
        if (iVar8 == 0) {
          pcVar11 = s_Setup_next_file_failed_00123f7c;
        }
        else {
          pcVar11 = s____Setup_next_file_done_00123f61 + 3;
        }
        FUN_00002898(pcVar11);
        local_84 = puVar4;
        FUN_00232190(&local_7c);
        puVar9 = &local_74;
        goto LAB_00123dc0;
      }
      iVar8 = FUN_00003d18(*param_2,s_switch_00123b1c);
      if (iVar8 == 0) {
        local_283 = '\0';
        local_288._0_1_ = DAT_00123f94;
        local_288._1_1_ = s____Switch_files_done_00123f95[0];
        local_288._2_1_ = s____Switch_files_done_00123f95[1];
        local_288._3_1_ = s____Switch_files_done_00123f95[2];
        local_284 = 1;
        (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_288);
        pcVar11 = s____Switch_files_done_00123f95 + 3;
        uVar13 = extraout_r1;
      }
      else {
        iVar8 = FUN_00003d18(*param_2,s_samplecounter_00123b24);
        if (iVar8 != 0) {
          return 6;
        }
        if (param_3 < 2) {
          return 6;
        }
        iVar8 = FUN_00003d18(param_2[1],s_reset_00123fac);
        if (iVar8 == 0) {
          local_288._0_1_ = s_L___Reset_sample_counters_done_00123fb4[0];
          local_288._1_1_ = s_L___Reset_sample_counters_done_00123fb4[1];
          local_288._2_1_ = s_L___Reset_sample_counters_done_00123fb4[2];
          local_288._3_1_ = s_L___Reset_sample_counters_done_00123fb4[3];
          local_283 = '\0';
          local_27c = 0xffffffff;
          local_280 = 0;
          local_284 = 1;
          uVar16 = (**(code **)(**(int **)(param_1 + 0x14) + 8))
                             (*(int **)(param_1 + 0x14),&local_288);
          uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
          if ((int)uVar16 == 0) {
            pcVar11 = s_Reset_sample_counters_failed_00123fd4;
          }
          else {
            pcVar11 = s_L___Reset_sample_counters_done_00123fb4 + 4;
          }
        }
        else {
          if (param_3 < 3) {
            return 6;
          }
          local_288._0_1_ = s_L___Reset_sample_counters_done_00123fb4[0];
          local_288._1_1_ = s_L___Reset_sample_counters_done_00123fb4[1];
          local_288._2_1_ = s_L___Reset_sample_counters_done_00123fb4[2];
          local_288._3_1_ = s_L___Reset_sample_counters_done_00123fb4[3];
          local_283 = 0;
          local_27c = 0xffffffff;
          local_280 = 0;
          local_284 = 1;
          uVar10 = FUN_000032fc(param_2[2],0);
          if (3 < param_3) {
            local_27c = FUN_0000328c(param_2[3],0);
          }
          iVar8 = FUN_00003d18(param_2[1],s_start_00123ae8);
          if (iVar8 == 0) {
            local_283 = '\x01';
            local_280 = uVar10;
            uVar16 = (**(code **)(**(int **)(param_1 + 0x14) + 8))
                               (*(int **)(param_1 + 0x14),&local_288);
            uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
            if ((int)uVar16 != 0) {
              pcVar11 = s_Set_start_sample_counter__u_done_001240a0;
LAB_001238f4:
              FUN_00002898(pcVar11,uVar10);
              return 0;
            }
            pcVar11 = s_Set_start_sample_counter_failed_001240c4;
          }
          else {
            iVar8 = FUN_00003d18(param_2[1],&DAT_00123ae0);
            if (iVar8 == 0) {
              local_283 = '\x02';
              local_280 = uVar10;
              uVar16 = (**(code **)(**(int **)(param_1 + 0x14) + 8))
                                 (*(int **)(param_1 + 0x14),&local_288);
              uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
              if ((int)uVar16 != 0) {
                pcVar11 = s_Set_stop_sample_counter__u_done_001240e8;
                goto LAB_001238f4;
              }
              pcVar11 = s_Set_stop_sample_counter_failed_0012410c;
            }
            else {
              iVar8 = FUN_00003d18(param_2[1],s_switch_00123b1c);
              if (iVar8 != 0) {
                return 6;
              }
              local_283 = '\x03';
              local_280 = uVar10;
              uVar16 = (**(code **)(**(int **)(param_1 + 0x14) + 8))
                                 (*(int **)(param_1 + 0x14),&local_288);
              uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
              if ((int)uVar16 != 0) {
                FUN_00002898(s_Set_switch_to_next_file_sample_c_0012415c,uVar10);
                return 0;
              }
              pcVar11 = s_Set_switch_to_next_file_sample_c_0012412c;
            }
          }
        }
      }
    }
    FUN_00002898(pcVar11,uVar13);
    return 0;
  }
  local_283 = '\0';
  while( true ) {
    uVar3 = DAT_00123adc;
    local_284 = 0;
    local_282 = 0;
    DAT_00123adc._0_1_ = (char)uVar13;
    DAT_00123adc._1_1_ = SUB41(uVar13,1);
    DAT_00123adc._2_1_ = SUB41(uVar13,2);
    DAT_00123adc._3_1_ = SUB41(uVar13,3);
    local_288._0_1_ = (char)DAT_00123adc;
    local_288._1_1_ = DAT_00123adc._1_1_;
    local_288._2_1_ = DAT_00123adc._2_1_;
    local_288._3_1_ = DAT_00123adc._3_1_;
    local_281 = 0;
    local_280 = local_280 & 0xff000000;
    local_27c = 0;
    local_278 = 0;
    uStack_274 = uVar10;
    local_270 = 0;
    local_26f = 0;
    local_26c = 0x7fffffff;
    cVar12 = local_283 + '\x01';
    DAT_00123adc = uVar3;
    iVar8 = (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),&local_288);
    uVar3 = DAT_00123adc;
    puVar9 = &uStack_274;
    DAT_00123adc._0_1_ = (char)uVar13;
    DAT_00123adc._1_1_ = SUB41(uVar13,1);
    DAT_00123adc._2_1_ = SUB41(uVar13,2);
    DAT_00123adc._3_1_ = SUB41(uVar13,3);
    local_288._0_1_ = (char)DAT_00123adc;
    local_288._1_1_ = DAT_00123adc._1_1_;
    local_288._2_1_ = DAT_00123adc._2_1_;
    local_288._3_1_ = DAT_00123adc._3_1_;
    DAT_00123adc = uVar3;
    if (iVar8 == 0) break;
    FUN_00232190(puVar9);
    local_283 = cVar12;
  }
LAB_00123dc0:
  FUN_00232190(puVar9);
  return 0;
}


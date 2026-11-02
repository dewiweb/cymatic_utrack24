// rea decompile_all
// name: FUN_0002db68
// address: 0x2db68
// body: available
// range: 0x2db68-0x2dbb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0002ed5e) */
/* WARNING: Removing unreachable block (ram,0x0002ed7e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002db68(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  bool bVar12;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  undefined4 *puStack_d0;
  undefined4 uStack_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined4 *local_88;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined1 uStack_44;
  int iStack_3c;
  char *local_34;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_28 = DAT_0002df50;
  local_24 = DAT_0002df54;
  local_94 = param_2;
  local_90 = param_2;
  iVar2 = FUN_0003b6b6(param_2);
  local_8c = iVar2 + local_94;
  local_88 = &local_24;
  iVar2 = FUN_0003b6ce(local_90,&local_24);
  if ((iVar2 == 0) && (local_8c <= local_90)) {
    return;
  }
  local_20 = param_1 + 0x28;
  local_1c = param_1 + 0x56;
  local_34 = (char *)(param_1 + 0x40);
  local_18 = param_1 + 0x60;
  uStack_dc = FUN_00044eec(&local_94);
  if (uStack_dc == 0) {
    return;
  }
  for (uVar9 = 0; uVar3 = FUN_0003b6b6(uStack_dc), uVar9 < uVar3; uVar9 = uVar9 + 1) {
    if (*(char *)(uStack_dc + uVar9) != ' ') {
      uStack_dc = uStack_dc + uVar9;
      break;
    }
  }
  uStack_d8 = uStack_dc;
  iVar2 = FUN_0003b6b6(uStack_dc);
  uStack_d4 = iVar2 + uStack_dc;
  puStack_d0 = &local_28;
  iVar2 = FUN_0003b6ce(uStack_d8,&local_28);
  if ((iVar2 == 0) && (uStack_d4 <= uStack_d8)) {
    FUN_0002f33a();
  }
  iVar2 = FUN_00044eec(&uStack_dc);
  if (iVar2 == 0) {
    return;
  }
  iVar4 = FUN_0003b6be(iVar2,&DAT_0002df58,1);
  if (iVar4 == 0) {
LAB_0002dda4:
    iVar2 = FUN_00044eec(&uStack_dc);
    if (iVar2 == 0) {
      FUN_0002f334();
    }
    uVar9 = FUN_0003b5b4();
    if (uVar9 == 0) {
      FUN_0002f9d4(s__s_is_not_a_valid_value_for_port_0002dfc8,iVar2);
    }
    iVar2 = FUN_00044eec(&uStack_dc);
    if (iVar2 == 0) {
      FUN_0002f334();
    }
    iVar4 = FUN_0003b5b4();
    iVar2 = -1;
    if ((-2 < iVar4) && (iVar2 = iVar4, 4 < iVar4)) {
      iVar2 = 4;
    }
    iVar4 = FUN_0003bb20(uVar9 & 0xffff,(int)(char)iVar2);
    if (iVar4 != 0) {
      FUN_0002de06(s_Set_log_announce_interval_for_po_0002dfec,uVar9,iVar2);
      return;
    }
    pcVar5 = s_Error_setting_log_announce_inter_0002e01c;
    do {
      FUN_0002f9d4(pcVar5,uVar9,iVar2);
      FUN_0002f33a();
LAB_0002de0e:
      iVar2 = FUN_00044eec(&uStack_dc);
      if (iVar2 == 0) {
        FUN_0002f334();
      }
      uVar9 = FUN_0003b5b4();
      if (uVar9 == 0) {
        FUN_0002f9d4(s__s_is_not_a_valid_value_for_port_0002dfc8,iVar2);
      }
      iVar2 = FUN_00044eec(&uStack_dc);
      if (iVar2 == 0) {
        FUN_0002f334();
      }
      iVar2 = FUN_0003b5b4();
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (5 < iVar2) {
        iVar2 = 5;
      }
      iVar4 = FUN_0003bbd0(uVar9 & 0xffff,(int)(char)iVar2);
      pcVar5 = DAT_0002e08c;
      if (iVar4 != 0) {
        pcVar5 = s_Set_log_min_pdelay_request_inter_0002e054;
      }
    } while( true );
  }
  iVar4 = FUN_0003b6be(iVar2,&DAT_0002df5c,1);
  if (iVar4 == 0) goto LAB_0002de0e;
  iVar4 = FUN_0003b6be(iVar2,&DAT_0002df60,1);
  if (iVar4 == 0) {
    FUN_0002be2c(local_20);
    FUN_0002f33a();
LAB_0002de76:
    FUN_0002c210(local_34);
    FUN_0002f33a();
  }
  else {
    iVar4 = FUN_0003b6be(iVar2,&DAT_0002df64,1);
    if (iVar4 == 0) goto LAB_0002de76;
    iVar4 = FUN_0003b6be(iVar2,&DAT_0002df68,1);
    if (iVar4 != 0) {
      iVar4 = FUN_0003b6be(iVar2,&DAT_0002df6c,1);
      if (iVar4 == 0) goto LAB_0002df04;
      iVar4 = FUN_0003b6be(iVar2,&DAT_0002df70,1);
      if (iVar4 == 0) goto LAB_0002e0ec;
      iVar4 = FUN_0003b6be(iVar2,&DAT_0002df74,1);
      if (iVar4 == 0) goto LAB_0002e0f6;
      iVar4 = FUN_0003b6be(iVar2,&DAT_0002df78,1);
      if (iVar4 == 0) {
        iVar2 = FUN_00044eec(&uStack_dc);
        if (iVar2 != 0) {
          uVar9 = FUN_0003b5b4();
          FUN_0002f9d4(s_Clock_initialisation_requested_w_0002e580,uVar9);
          FUN_0002cd84(param_1,uVar9 & 0xffff);
          goto LAB_0002eca6;
        }
        goto LAB_0002ec92;
      }
      iVar4 = FUN_0003b6be(iVar2,&DAT_0002df7c,1);
      if (iVar4 == 0) {
        iVar2 = FUN_00044eec(&uStack_dc);
        if (iVar2 == 0) {
          FUN_0003b924(&uStack_98);
        }
        else {
          iVar2 = FUN_0003b5b4();
          uStack_98 = CONCAT31(uStack_98._1_3_,iVar2 == 0);
        }
        if ((char)uStack_98 == '\x01') {
          FUN_0003bdbc(0);
          pcVar5 = s_Slave_only__FALSE_0002e5c4;
        }
        else {
          FUN_0003bdbc(1);
          pcVar5 = s_Slave_only__TRUE_0002e5b0;
        }
        goto LAB_0002ec86;
      }
      iVar4 = FUN_0003b6be(iVar2,&DAT_0002df80,1);
      if (iVar4 == 0) {
        if (*local_34 == '\x01') {
          FUN_0003be00(0);
          pcVar5 = s_Enabling_one_step_Sync_PDelay__0002e8ac;
        }
        else {
          FUN_0003be00(1);
          pcVar5 = s_Disabling_one_step_Sync_PDelay__0002e888;
        }
        goto LAB_0002ec86;
      }
      iVar4 = FUN_0003b6be(iVar2,&DAT_0002df84,1);
      if (iVar4 == 0) {
        iVar2 = FUN_00044eec(&uStack_dc);
        if (iVar2 != 0) {
          uVar9 = FUN_0003b5b4();
          FUN_0003ba48(uVar9 & 0xff);
          pcVar5 = s_Clock_domain_changed_to___d_0002e8cc;
LAB_0002ecaa:
          FUN_0002ee8a(pcVar5,uVar9);
          return;
        }
        goto LAB_0002ec92;
      }
      iVar4 = FUN_0003b6be(iVar2,&DAT_0002df88,1);
      if (iVar4 == 0) {
        iVar2 = FUN_00044eec(&uStack_dc);
        if (iVar2 == 0) goto LAB_0002ec92;
        uVar9 = FUN_0003b5b4();
        if (uVar9 != 0) {
          iVar2 = FUN_0003b6ce(uStack_d8,puStack_d0);
          if ((iVar2 == 0) && (uStack_d4 <= uStack_d8)) goto LAB_0002eca6;
          pbVar6 = (byte *)FUN_00044eec(&uStack_dc);
          if (pbVar6 == (byte *)0x0) goto LAB_0002ec92;
          uVar3 = FUN_0003b5b4();
          if (uVar3 != 0) goto switchD_0002e65e_default;
          bVar1 = *pbVar6;
          if (bVar1 == 0x61) {
switchD_0002e65e_caseD_41:
            uVar3 = 10;
          }
          else if (bVar1 < 0x62) {
            switch(bVar1) {
            case 0x41:
              goto switchD_0002e65e_caseD_41;
            case 0x42:
switchD_0002e65e_caseD_42:
              uVar3 = 0xb;
              break;
            case 0x43:
switchD_0002e65e_caseD_43:
              uVar3 = 0xc;
              break;
            case 0x44:
switchD_0002e65e_caseD_44:
              uVar3 = 0xd;
              break;
            case 0x45:
switchD_0002e65e_caseD_45:
              uVar3 = 0xe;
              break;
            case 0x46:
switchD_0002e65e_caseD_46:
              uVar3 = 0xf;
            }
          }
          else {
            switch(bVar1) {
            case 0x62:
              goto switchD_0002e65e_caseD_42;
            case 99:
              goto switchD_0002e65e_caseD_43;
            case 100:
              goto switchD_0002e65e_caseD_44;
            case 0x65:
              goto switchD_0002e65e_caseD_45;
            case 0x66:
              goto switchD_0002e65e_caseD_46;
            }
          }
switchD_0002e65e_default:
          FUN_0003bc80(uVar9 & 0xffff,uVar3 & 0xff);
          FUN_0002f9d4(s_Multicast_address_scope_changed_t_0002e8ec,uVar3);
          if (uVar3 == 5) {
            pcVar5 = s__Site_Local_scope__0002e964;
            goto LAB_0002ec86;
          }
          if ((int)uVar3 < 6) {
            if (uVar3 == 1) {
              pcVar5 = s__Interface_Local_scope__0002e918;
              goto LAB_0002ec86;
            }
            if (uVar3 == 2) {
              pcVar5 = s__Link_Local_scope__0002e934;
              goto LAB_0002ec86;
            }
            if (uVar3 == 4) {
              pcVar5 = s__Admin_Local_scope__0002e94c;
              goto LAB_0002ec86;
            }
          }
          else {
            if (uVar3 == 8) {
              pcVar5 = s__Organization_Local_scope__0002e97c;
              goto LAB_0002ec86;
            }
            if (uVar3 == 0xe) {
              pcVar5 = s__Global_scope__0002e99c;
              goto LAB_0002ec86;
            }
          }
          pcVar5 = &DAT_0002e914;
LAB_0002ec86:
          FUN_0002f32e(pcVar5);
          return;
        }
      }
      else {
        iVar4 = FUN_0003b6be(iVar2,&DAT_0002df8c,1);
        if (iVar4 == 0) {
          iVar2 = FUN_00044eec(&uStack_dc);
          if (iVar2 != 0) {
            iVar4 = FUN_0003b6be(iVar2,&DAT_0002e9b0,1);
            if (iVar4 == 0) {
              FUN_0003b9ac();
              pcVar5 = s_Save_current_values_to_NVM_0002e9b8;
            }
            else {
              iVar2 = FUN_0003b6be(iVar2,&DAT_0002e9b4,1);
              if (iVar2 != 0) goto LAB_0002eca6;
              FUN_0003b968();
              pcVar5 = s_Reset_NVM_0002e9d4;
            }
            goto LAB_0002ec86;
          }
          goto LAB_0002ec92;
        }
        iVar4 = FUN_0003b6be(iVar2,&DAT_0002df90,1);
        if (iVar4 == 0) {
          if (*(int *)(param_1 + 0xa4) != 0) {
            FUN_0002f9d4(s_Port_data_set_for_port___d_0002e9e0,
                         *(undefined2 *)(*(int *)(param_1 + 0xa4) + 2));
            FUN_0003a07c(*(int *)(param_1 + 0xa4) + 0x250);
          }
          goto LAB_0002eca6;
        }
        iVar4 = FUN_0003b6be(iVar2,&DAT_0002df94,1);
        if (iVar4 == 0) {
          FUN_00039710(local_18);
          goto LAB_0002eca6;
        }
        iVar4 = FUN_0003b6be(iVar2,&DAT_0002df98,1);
        if (iVar4 == 0) {
          iVar2 = FUN_00044eec(&uStack_dc);
          if (iVar2 != 0) {
            uVar9 = FUN_0003b5b4();
            if (uVar9 == 0) {
              FUN_0002f9d4(_DAT_0002e9fc,iVar2);
            }
            iVar2 = FUN_00044eec(&uStack_dc);
            if (iVar2 != 0) {
              uVar3 = FUN_0003b5b4();
              if ((int)uVar3 < 0) {
                uVar3 = 0;
              }
              else if (5 < (int)uVar3) {
                uVar3 = 5;
              }
              iVar2 = FUN_0003bb78(uVar9 & 0xffff,(int)(char)uVar3);
              if (iVar2 == 0) goto LAB_0002e792;
              pcVar5 = s__Set_log_min_delay_request_inter_0002e9ff + 1;
              uVar7 = uVar3;
              uVar10 = uVar9;
LAB_0002e78e:
              do {
                FUN_0002de06(pcVar5,uVar9,uVar3);
                uVar3 = uVar7;
                uVar9 = uVar10;
LAB_0002e792:
                pcVar5 = s_Error_setting_log_min_delay_requ_0002ea38;
                uVar7 = uVar3;
                uVar10 = uVar9;
              } while( true );
            }
          }
          goto LAB_0002ec92;
        }
        iVar4 = FUN_0003b6be(iVar2,&DAT_0002df9c,1);
        if (iVar4 != 0) {
          iVar4 = FUN_0003b6be(iVar2,&DAT_0002dfa0,1);
          if (iVar4 == 0) {
            FUN_0002f9d4(DAT_0002ead8);
            FUN_0002b5dc(&iStack_50);
            FUN_0003c640(&iStack_50);
          }
          else {
            iVar4 = FUN_0003b6be(iVar2,&DAT_0002dfa4,1);
            if (iVar4 != 0) {
              iVar4 = FUN_0003b6be(iVar2,&DAT_0002dfa8,1);
              if (iVar4 != 0) {
                iVar4 = FUN_0003b6be(iVar2,&DAT_0002dfac,1);
                if (iVar4 == 0) {
                  FUN_0002ed84();
                }
                iVar4 = FUN_0003b6be(iVar2,&DAT_0002dfb0,1);
                if (iVar4 == 0) {
                  FUN_0002ee64();
                }
                iVar4 = FUN_0003b6be(iVar2,&DAT_0002dfb4,1);
                if (iVar4 == 0) {
                  FUN_0002f2fe();
                }
                FUN_0002ee8a(s__s_not_defined_0002dfb8,iVar2);
                goto LAB_0002dda4;
              }
              uVar10 = 1;
              iVar2 = FUN_00044eec(&uStack_dc);
              if (iVar2 == 0) {
                FUN_0002f334();
                return;
              }
              uVar9 = FUN_0003b5b4();
              if (uVar9 == 0) {
                FUN_0002f9d4(DAT_0002ef5c,iVar2);
                FUN_0002f33a();
                return;
              }
              iVar2 = FUN_0003b6ce(uStack_d8,puStack_d0);
              if ((iVar2 == 0) && (uStack_d4 <= uStack_d8)) {
                iVar2 = FUN_0003b8d0(uVar9 & 0xffff);
                if (iVar2 == 0) {
                  FUN_0002ee8a(s_Error_getting_v1_hardware_compat_0002efdc,uVar9);
                  return;
                }
                FUN_0002f9d4(s_Active_v1_hardware_compatibility_0002f054,uVar9);
                FUN_0002f33a();
                return;
              }
              uVar3 = FUN_00044eec(&uStack_dc);
              if (uVar3 == 0) {
                FUN_0002f334();
                return;
              }
              iVar2 = FUN_0003b6be(uVar3,&DAT_0002ef60,2);
              if (iVar2 == 0) {
                uVar10 = 0;
              }
              else {
                iVar2 = FUN_0003b6be(uVar3,&DAT_0002ef64,3);
                if ((iVar2 != 0) && (iVar2 = FUN_0003b6be(uVar3,&DAT_0002ef68,4), iVar2 == 0)) {
                  uVar10 = 2;
                }
              }
              iVar2 = FUN_0003be48(uVar9 & 0xffff,uVar10);
              uVar7 = uVar9;
              if (iVar2 == 1) {
                pcVar5 = s_Set_v1_hardware_compatibility_mo_0002efa4;
              }
              else {
                pcVar5 = s_Error_setting_network_protocol_f_0002ef70;
              }
              goto LAB_0002e78e;
            }
            iVar2 = FUN_0003b6ce(uStack_d8,puStack_d0);
            if ((iVar2 == 0) && (uStack_d4 <= uStack_d8)) {
              FUN_0002f9d4(_DAT_0002eadc);
              FUN_0002f9d4(s____Category_key_0002eade + 2);
              FUN_0002f9d4(s_PTP_Environment__0_0002eb00);
              FUN_0002f9d4(s_PTP_PORT__1_0002eb1c);
              FUN_0002f9d4(s_PTP_BMC_Algorithm__2_0002eb38);
              FUN_0002f9d4(s_PTP_State_Machine__3_0002eb54);
              FUN_0002f9d4(s_PTP_Frame_Analyser__4_0002eb70);
              FUN_0002f9d4(s_PTP_General_Infos__5_0002eb8c);
              FUN_0002f9d4(s_PTP_Timer__6_0002eba8);
              FUN_0002f9d4(s_PTP_Header__7_0002ebc4);
              FUN_0002f9d4(s_PTP_PTP_Messages__8_0002ebe0);
              FUN_0002f9d4(s_PTP_Managemnet__9_0002ebfc);
              FUN_0002f9d4(s_PTP_Multicast__10_0002ec18);
              FUN_0002f9d4(s_PTP_Port_Interface__11_0002ec34);
              FUN_0002f9d4(s_PTP_Timestamp_ITF__12_0002ec50);
              FUN_0002f9d4(s_PTP_Current_DS__13_0002eeb8);
              FUN_0002f9d4(s_PTP_Clock_ITF__14_0002eed4);
              FUN_0002f9d4(s_PTP_Loopcontrol__15_0002eef0);
              FUN_0002f9d4(s_PTP_Port_DS__16_0002ef0c);
              pcVar5 = s_PTP_Unicast__17_0002ef28;
              goto LAB_0002ec86;
            }
            iVar2 = FUN_00044eec(&uStack_dc);
            if (iVar2 == 0) goto LAB_0002ec92;
            uVar9 = FUN_0003b5b4();
            if (0x11 < uVar9) {
              pcVar5 = s_Key_out_of_range___d_0002ef44;
              goto LAB_0002ecaa;
            }
            FUN_00036714(1 << (uVar9 & 0xff));
          }
          goto LAB_0002eca6;
        }
        iVar2 = FUN_00044eec(&uStack_dc);
        if (iVar2 == 0) {
LAB_0002ec92:
          FUN_0002f334();
          return;
        }
        uVar9 = FUN_0003b5b4();
        if (uVar9 != 0) {
          iVar2 = FUN_00044eec(&uStack_dc);
          if (iVar2 != 0) {
            uVar7 = FUN_0003b5b4();
            uVar3 = 0xffffffff;
            if ((-2 < (int)uVar7) && (uVar3 = uVar7, 1 < (int)uVar7)) {
              uVar3 = 1;
            }
            iVar2 = FUN_0003bc28(uVar9 & 0xffff,(int)(char)uVar3);
            uVar7 = uVar3;
            uVar10 = uVar9;
            if (iVar2 == 0) {
              pcVar5 = s_Error_setting_log_sync_interval_f_0002eaa4;
            }
            else {
              pcVar5 = s_Set_log_sync_interval_for_port___0002ea78;
            }
            goto LAB_0002e78e;
          }
          goto LAB_0002ec92;
        }
      }
      FUN_0002f9d4(_DAT_0002e9fc,iVar2);
LAB_0002eca6:
      FUN_0002f33a();
      return;
    }
  }
  iVar2 = FUN_00044eec(&uStack_dc);
  if (iVar2 == 0) {
    FUN_0002f334();
  }
  iVar2 = FUN_0003b5bc();
  iVar8 = iVar2 >> 0x1f;
  iVar4 = FUN_00044eec(&uStack_dc);
  if (iVar4 == 0) {
    FUN_0002f334();
  }
  iVar4 = FUN_0003b5bc();
  uVar11 = (iVar4 >> 0x1e & 1U) != 0;
  iStack_3c = iVar4 >> 0x1f;
  FUN_00249238();
  bVar12 = true;
  FUN_00249684();
  if (!(bool)uVar11 || bVar12) {
    FUN_0002f334();
  }
  if (iStack_3c < 0) {
    FUN_0002f334();
  }
  uStack_44 = -1 < iVar8;
  iStack_50 = iVar2;
  iStack_4c = iVar8;
  if (!(bool)uStack_44) {
    iStack_50 = -iVar2;
    iStack_4c = -(uint)(iVar2 != 0) - iVar8;
  }
  iStack_48 = iVar4;
  FUN_0002bccc(&iStack_50);
  FUN_0002f9d4(s_A____Current_Time_____0002e093 + 1);
  FUN_0003c640(&iStack_50);
  FUN_0002f33a();
LAB_0002df04:
  if (*(int *)(param_1 + 0xa4) == 0) {
    FUN_0002f33a();
  }
  uStack_98 = 0;
  iVar2 = FUN_0003ac86(*(undefined4 *)(param_1 + 0xa4));
  if (iVar2 == 0) {
    FUN_0002f33a();
  }
  FUN_0002f9d4(s_Foreign_Data_sets_of_port___d_0002e0ac,
               *(undefined2 *)(*(int *)(param_1 + 0xa4) + 2));
  FUN_0002f734(iVar2,&uStack_98);
  do {
    iVar4 = FUN_0002f836(iVar2,uStack_98);
    if (iVar4 != 0) {
      iVar4 = FUN_0002f7ea(iVar2);
      if (iVar4 == 0) break;
      FUN_0002f33a();
    }
    iVar4 = FUN_0002f778(iVar2,uStack_98);
    if (iVar4 != 0) {
      FUN_0002ce64();
    }
    FUN_0002f888(iVar2,&uStack_98);
  } while( true );
  FUN_0002f32e(s______empty______0002e224);
LAB_0002e0ec:
  FUN_0003bed8(local_1c);
  FUN_0002f33a();
LAB_0002e0f6:
  FUN_0002f9d4(s_Help_0002e238);
  FUN_0002f9d4(DAT_0002e240);
  FUN_0002f9d4(_DAT_0002e244);
  FUN_0002f9d4(s____c__Print_current_dataset_0002e246 + 2);
  FUN_0002f9d4(s_d__Print_default_dataset_0002e264);
  FUN_0002f9d4(s_e__<sec>_<nsec>__Set_time_e_g____0002e280);
  FUN_0002f9d4(s_f__Print_foreign_datasets_for_al_0002e2ac);
  FUN_0002f9d4(s_g__Print_time_properties_dataset_0002e2d8);
  FUN_0002f9d4(s_i_<init_key>__Initialize_PTP_clo_0002e2fc);
  FUN_0002f9d4(s_j__0_1___Toggle_or_set_slave_onl_0002e32c);
  FUN_0002f9d4(s_k__Toggle_one_step_Sync_PDelay_0002e358);
  FUN_0002f9d4(s_l_<domain>__set_clock_domain_num_0002e37c);
  FUN_0002f9d4(DAT_0002e3b0);
  FUN_0002f9d4(_DAT_0002e3b4);
  FUN_0002f9d4(s____o__Print_port_dataset_for_all_0002e3b6 + 2);
  FUN_0002f9d4(s_p__Print_parent_dataset_0002e3e0);
  FUN_0002f9d4(DAT_0002e3fc);
  FUN_0002f9d4(_DAT_0002e400);
  FUN_0002f9d4(s____t__Print_current_time_0002e402 + 2);
  FUN_0002f9d4(s_v__Adjust_verbose_level__used_fo_0002e41c);
  FUN_0002f9d4(s_w_<port>__Display_current_v1_HW_c_0002e458);
  FUN_0002f9d4(_DAT_0002e498);
  FUN_0002f9d4(s____x_<port>__Display_current_net_0002e49a + 2);
  FUN_0002f9d4(_DAT_0002e4d4);
  FUN_0002f9d4(s____y_<port>__Display_current_del_0002e4d6 + 2);
  FUN_0002f9d4(s_y_<port>_<e2e_p2p>__Change_delay_0002e510);
  pcVar5 = s_z_<priority>_<value>__Set_priori_0002e54c;
  goto LAB_0002ec86;
}


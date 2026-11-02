// rea decompile_all
// name: FUN_00027ff8
// address: 0x27ff8
// body: available
// range: 0x27ff8-0x28047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000291ee) */
/* WARNING: Removing unreachable block (ram,0x0002920e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00027ff8(int param_1,uint param_2)

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
  
  local_28 = DAT_000283e0;
  local_24 = DAT_000283e4;
  local_94 = param_2;
  local_90 = param_2;
  iVar2 = FUN_0003590a(param_2);
  local_8c = iVar2 + local_94;
  local_88 = &local_24;
  iVar2 = FUN_00035922(local_90,&local_24);
  if ((iVar2 == 0) && (local_8c <= local_90)) {
    return;
  }
  local_20 = param_1 + 0x28;
  local_1c = param_1 + 0x56;
  local_34 = (char *)(param_1 + 0x40);
  local_18 = param_1 + 0x60;
  uStack_dc = FUN_0004028c(&local_94);
  if (uStack_dc == 0) {
    return;
  }
  for (uVar9 = 0; uVar3 = FUN_0003590a(uStack_dc), uVar9 < uVar3; uVar9 = uVar9 + 1) {
    if (*(char *)(uStack_dc + uVar9) != ' ') {
      uStack_dc = uStack_dc + uVar9;
      break;
    }
  }
  uStack_d8 = uStack_dc;
  iVar2 = FUN_0003590a(uStack_dc);
  uStack_d4 = iVar2 + uStack_dc;
  puStack_d0 = &local_28;
  iVar2 = FUN_00035922(uStack_d8,&local_28);
  if ((iVar2 == 0) && (uStack_d4 <= uStack_d8)) {
    FUN_000297ca();
  }
  iVar2 = FUN_0004028c(&uStack_dc);
  if (iVar2 == 0) {
    return;
  }
  iVar4 = FUN_00035912(iVar2,&DAT_000283e8,1);
  if (iVar4 == 0) {
LAB_00028234:
    iVar2 = FUN_0004028c(&uStack_dc);
    if (iVar2 == 0) {
      FUN_000297c4();
    }
    uVar9 = FUN_00035808();
    if (uVar9 == 0) {
      FUN_00029e84(s__s_is_not_a_valid_value_for_port_00028458,iVar2);
    }
    iVar2 = FUN_0004028c(&uStack_dc);
    if (iVar2 == 0) {
      FUN_000297c4();
    }
    iVar4 = FUN_00035808();
    iVar2 = -1;
    if ((-2 < iVar4) && (iVar2 = iVar4, 4 < iVar4)) {
      iVar2 = 4;
    }
    iVar4 = FUN_00035e54(uVar9 & 0xffff,(int)(char)iVar2);
    if (iVar4 != 0) {
      FUN_00028296(s_Set_log_announce_interval_for_po_0002847c,uVar9,iVar2);
      return;
    }
    pcVar5 = s_Error_setting_log_announce_inter_000284ac;
    do {
      FUN_00029e84(pcVar5,uVar9,iVar2);
      FUN_000297ca();
LAB_0002829e:
      iVar2 = FUN_0004028c(&uStack_dc);
      if (iVar2 == 0) {
        FUN_000297c4();
      }
      uVar9 = FUN_00035808();
      if (uVar9 == 0) {
        FUN_00029e84(s__s_is_not_a_valid_value_for_port_00028458,iVar2);
      }
      iVar2 = FUN_0004028c(&uStack_dc);
      if (iVar2 == 0) {
        FUN_000297c4();
      }
      iVar2 = FUN_00035808();
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (5 < iVar2) {
        iVar2 = 5;
      }
      iVar4 = FUN_00035f04(uVar9 & 0xffff,(int)(char)iVar2);
      pcVar5 = DAT_0002851c;
      if (iVar4 != 0) {
        pcVar5 = s_Set_log_min_pdelay_request_inter_000284e4;
      }
    } while( true );
  }
  iVar4 = FUN_00035912(iVar2,&DAT_000283ec,1);
  if (iVar4 == 0) goto LAB_0002829e;
  iVar4 = FUN_00035912(iVar2,&DAT_000283f0,1);
  if (iVar4 == 0) {
    FUN_000262bc(local_20);
    FUN_000297ca();
LAB_00028306:
    FUN_000266a0(local_34);
    FUN_000297ca();
  }
  else {
    iVar4 = FUN_00035912(iVar2,&DAT_000283f4,1);
    if (iVar4 == 0) goto LAB_00028306;
    iVar4 = FUN_00035912(iVar2,&DAT_000283f8,1);
    if (iVar4 != 0) {
      iVar4 = FUN_00035912(iVar2,&DAT_000283fc,1);
      if (iVar4 == 0) goto LAB_00028394;
      iVar4 = FUN_00035912(iVar2,&DAT_00028400,1);
      if (iVar4 == 0) goto LAB_0002857c;
      iVar4 = FUN_00035912(iVar2,&DAT_00028404,1);
      if (iVar4 == 0) goto LAB_00028586;
      iVar4 = FUN_00035912(iVar2,&DAT_00028408,1);
      if (iVar4 == 0) {
        iVar2 = FUN_0004028c(&uStack_dc);
        if (iVar2 != 0) {
          uVar9 = FUN_00035808();
          FUN_00029e84(s_Clock_initialisation_requested_w_00028a10,uVar9);
          FUN_00027214(param_1,uVar9 & 0xffff);
          goto LAB_00029136;
        }
        goto LAB_00029122;
      }
      iVar4 = FUN_00035912(iVar2,&DAT_0002840c,1);
      if (iVar4 == 0) {
        iVar2 = FUN_0004028c(&uStack_dc);
        if (iVar2 == 0) {
          FUN_00035c58(&uStack_98);
        }
        else {
          iVar2 = FUN_00035808();
          uStack_98 = CONCAT31(uStack_98._1_3_,iVar2 == 0);
        }
        if ((char)uStack_98 == '\x01') {
          FUN_00036108(0);
          pcVar5 = s_Slave_only__FALSE_00028a54;
        }
        else {
          FUN_00036108(1);
          pcVar5 = s_Slave_only__TRUE_00028a40;
        }
        goto LAB_00029116;
      }
      iVar4 = FUN_00035912(iVar2,&DAT_00028410,1);
      if (iVar4 == 0) {
        if (*local_34 == '\x01') {
          FUN_0003614c(0);
          pcVar5 = s_Enabling_one_step_Sync_PDelay__00028d3c;
        }
        else {
          FUN_0003614c(1);
          pcVar5 = s_Disabling_one_step_Sync_PDelay__00028d18;
        }
        goto LAB_00029116;
      }
      iVar4 = FUN_00035912(iVar2,&DAT_00028414,1);
      if (iVar4 == 0) {
        iVar2 = FUN_0004028c(&uStack_dc);
        if (iVar2 != 0) {
          uVar9 = FUN_00035808();
          FUN_00035d7c(uVar9 & 0xff);
          pcVar5 = s_Clock_domain_changed_to___d_00028d5c;
LAB_0002913a:
          FUN_0002931a(pcVar5,uVar9);
          return;
        }
        goto LAB_00029122;
      }
      iVar4 = FUN_00035912(iVar2,&DAT_00028418,1);
      if (iVar4 == 0) {
        iVar2 = FUN_0004028c(&uStack_dc);
        if (iVar2 == 0) goto LAB_00029122;
        uVar9 = FUN_00035808();
        if (uVar9 != 0) {
          iVar2 = FUN_00035922(uStack_d8,puStack_d0);
          if ((iVar2 == 0) && (uStack_d4 <= uStack_d8)) goto LAB_00029136;
          pbVar6 = (byte *)FUN_0004028c(&uStack_dc);
          if (pbVar6 == (byte *)0x0) goto LAB_00029122;
          uVar3 = FUN_00035808();
          if (uVar3 != 0) goto switchD_00028aee_default;
          bVar1 = *pbVar6;
          if (bVar1 == 0x61) {
switchD_00028aee_caseD_41:
            uVar3 = 10;
          }
          else if (bVar1 < 0x62) {
            switch(bVar1) {
            case 0x41:
              goto switchD_00028aee_caseD_41;
            case 0x42:
switchD_00028aee_caseD_42:
              uVar3 = 0xb;
              break;
            case 0x43:
switchD_00028aee_caseD_43:
              uVar3 = 0xc;
              break;
            case 0x44:
switchD_00028aee_caseD_44:
              uVar3 = 0xd;
              break;
            case 0x45:
switchD_00028aee_caseD_45:
              uVar3 = 0xe;
              break;
            case 0x46:
switchD_00028aee_caseD_46:
              uVar3 = 0xf;
            }
          }
          else {
            switch(bVar1) {
            case 0x62:
              goto switchD_00028aee_caseD_42;
            case 99:
              goto switchD_00028aee_caseD_43;
            case 100:
              goto switchD_00028aee_caseD_44;
            case 0x65:
              goto switchD_00028aee_caseD_45;
            case 0x66:
              goto switchD_00028aee_caseD_46;
            }
          }
switchD_00028aee_default:
          FUN_00035fb4(uVar9 & 0xffff,uVar3 & 0xff);
          FUN_00029e84(s_Multicast_address_scope_changed_t_00028d7c,uVar3);
          if (uVar3 == 5) {
            pcVar5 = s__Site_Local_scope__00028df4;
            goto LAB_00029116;
          }
          if ((int)uVar3 < 6) {
            if (uVar3 == 1) {
              pcVar5 = s__Interface_Local_scope__00028da8;
              goto LAB_00029116;
            }
            if (uVar3 == 2) {
              pcVar5 = s__Link_Local_scope__00028dc4;
              goto LAB_00029116;
            }
            if (uVar3 == 4) {
              pcVar5 = s__Admin_Local_scope__00028ddc;
              goto LAB_00029116;
            }
          }
          else {
            if (uVar3 == 8) {
              pcVar5 = s__Organization_Local_scope__00028e0c;
              goto LAB_00029116;
            }
            if (uVar3 == 0xe) {
              pcVar5 = s__Global_scope__00028e2c;
              goto LAB_00029116;
            }
          }
          pcVar5 = &DAT_00028da4;
LAB_00029116:
          FUN_000297be(pcVar5);
          return;
        }
      }
      else {
        iVar4 = FUN_00035912(iVar2,&DAT_0002841c,1);
        if (iVar4 == 0) {
          iVar2 = FUN_0004028c(&uStack_dc);
          if (iVar2 != 0) {
            iVar4 = FUN_00035912(iVar2,&DAT_00028e40,1);
            if (iVar4 == 0) {
              FUN_00035ce0();
              pcVar5 = s_Save_current_values_to_NVM_00028e48;
            }
            else {
              iVar2 = FUN_00035912(iVar2,&DAT_00028e44,1);
              if (iVar2 != 0) goto LAB_00029136;
              FUN_00035c9c();
              pcVar5 = s_Reset_NVM_00028e64;
            }
            goto LAB_00029116;
          }
          goto LAB_00029122;
        }
        iVar4 = FUN_00035912(iVar2,&DAT_00028420,1);
        if (iVar4 == 0) {
          if (*(int *)(param_1 + 0xa4) != 0) {
            FUN_00029e84(s_Port_data_set_for_port___d_00028e70,
                         *(undefined2 *)(*(int *)(param_1 + 0xa4) + 2));
            FUN_000344e0(*(int *)(param_1 + 0xa4) + 0x250);
          }
          goto LAB_00029136;
        }
        iVar4 = FUN_00035912(iVar2,&DAT_00028424,1);
        if (iVar4 == 0) {
          FUN_00033b74(local_18);
          goto LAB_00029136;
        }
        iVar4 = FUN_00035912(iVar2,&DAT_00028428,1);
        if (iVar4 == 0) {
          iVar2 = FUN_0004028c(&uStack_dc);
          if (iVar2 != 0) {
            uVar9 = FUN_00035808();
            if (uVar9 == 0) {
              FUN_00029e84(_DAT_00028e8c,iVar2);
            }
            iVar2 = FUN_0004028c(&uStack_dc);
            if (iVar2 != 0) {
              uVar3 = FUN_00035808();
              if ((int)uVar3 < 0) {
                uVar3 = 0;
              }
              else if (5 < (int)uVar3) {
                uVar3 = 5;
              }
              iVar2 = FUN_00035eac(uVar9 & 0xffff,(int)(char)uVar3);
              if (iVar2 == 0) goto LAB_00028c22;
              pcVar5 = s__Set_log_min_delay_request_inter_00028e8f + 1;
              uVar7 = uVar3;
              uVar10 = uVar9;
LAB_00028c1e:
              do {
                FUN_00028296(pcVar5,uVar9,uVar3);
                uVar3 = uVar7;
                uVar9 = uVar10;
LAB_00028c22:
                pcVar5 = s_Error_setting_log_min_delay_requ_00028ec8;
                uVar7 = uVar3;
                uVar10 = uVar9;
              } while( true );
            }
          }
          goto LAB_00029122;
        }
        iVar4 = FUN_00035912(iVar2,&DAT_0002842c,1);
        if (iVar4 != 0) {
          iVar4 = FUN_00035912(iVar2,&DAT_00028430,1);
          if (iVar4 == 0) {
            FUN_00029e84(DAT_00028f68);
            FUN_00025a58(&iStack_50);
            FUN_0003698c(&iStack_50);
          }
          else {
            iVar4 = FUN_00035912(iVar2,&DAT_00028434,1);
            if (iVar4 != 0) {
              iVar4 = FUN_00035912(iVar2,&DAT_00028438,1);
              if (iVar4 != 0) {
                iVar4 = FUN_00035912(iVar2,&DAT_0002843c,1);
                if (iVar4 == 0) {
                  FUN_00029214();
                }
                iVar4 = FUN_00035912(iVar2,&DAT_00028440,1);
                if (iVar4 == 0) {
                  FUN_000292f4();
                }
                iVar4 = FUN_00035912(iVar2,&DAT_00028444,1);
                if (iVar4 == 0) {
                  FUN_0002978e();
                }
                FUN_0002931a(s__s_not_defined_00028448,iVar2);
                goto LAB_00028234;
              }
              uVar10 = 1;
              iVar2 = FUN_0004028c(&uStack_dc);
              if (iVar2 == 0) {
                FUN_000297c4();
                return;
              }
              uVar9 = FUN_00035808();
              if (uVar9 == 0) {
                FUN_00029e84(DAT_000293ec,iVar2);
                FUN_000297ca();
                return;
              }
              iVar2 = FUN_00035922(uStack_d8,puStack_d0);
              if ((iVar2 == 0) && (uStack_d4 <= uStack_d8)) {
                iVar2 = FUN_00035c04(uVar9 & 0xffff);
                if (iVar2 == 0) {
                  FUN_0002931a(s_Error_getting_v1_hardware_compat_0002946c,uVar9);
                  return;
                }
                FUN_00029e84(s_Active_v1_hardware_compatibility_000294e4,uVar9);
                FUN_000297ca();
                return;
              }
              uVar3 = FUN_0004028c(&uStack_dc);
              if (uVar3 == 0) {
                FUN_000297c4();
                return;
              }
              iVar2 = FUN_00035912(uVar3,&DAT_000293f0,2);
              if (iVar2 == 0) {
                uVar10 = 0;
              }
              else {
                iVar2 = FUN_00035912(uVar3,&DAT_000293f4,3);
                if ((iVar2 != 0) && (iVar2 = FUN_00035912(uVar3,&DAT_000293f8,4), iVar2 == 0)) {
                  uVar10 = 2;
                }
              }
              iVar2 = FUN_00036194(uVar9 & 0xffff,uVar10);
              uVar7 = uVar9;
              if (iVar2 == 1) {
                pcVar5 = s_Set_v1_hardware_compatibility_mo_00029434;
              }
              else {
                pcVar5 = s_Error_setting_network_protocol_f_00029400;
              }
              goto LAB_00028c1e;
            }
            iVar2 = FUN_00035922(uStack_d8,puStack_d0);
            if ((iVar2 == 0) && (uStack_d4 <= uStack_d8)) {
              FUN_00029e84(_DAT_00028f6c);
              FUN_00029e84(s_y___Category_key_00028f6d + 3);
              FUN_00029e84(s_PTP_Environment__0_00028f90);
              FUN_00029e84(s_PTP_PORT__1_00028fac);
              FUN_00029e84(s_PTP_BMC_Algorithm__2_00028fc8);
              FUN_00029e84(s_PTP_State_Machine__3_00028fe4);
              FUN_00029e84(s_PTP_Frame_Analyser__4_00029000);
              FUN_00029e84(s_PTP_General_Infos__5_0002901c);
              FUN_00029e84(s_PTP_Timer__6_00029038);
              FUN_00029e84(s_PTP_Header__7_00029054);
              FUN_00029e84(s_PTP_PTP_Messages__8_00029070);
              FUN_00029e84(s_PTP_Managemnet__9_0002908c);
              FUN_00029e84(s_PTP_Multicast__10_000290a8);
              FUN_00029e84(s_PTP_Port_Interface__11_000290c4);
              FUN_00029e84(s_PTP_Timestamp_ITF__12_000290e0);
              FUN_00029e84(s_PTP_Current_DS__13_00029348);
              FUN_00029e84(s_PTP_Clock_ITF__14_00029364);
              FUN_00029e84(s_PTP_Loopcontrol__15_00029380);
              FUN_00029e84(s_PTP_Port_DS__16_0002939c);
              pcVar5 = s_PTP_Unicast__17_000293b8;
              goto LAB_00029116;
            }
            iVar2 = FUN_0004028c(&uStack_dc);
            if (iVar2 == 0) goto LAB_00029122;
            uVar9 = FUN_00035808();
            if (0x11 < uVar9) {
              pcVar5 = s_Key_out_of_range___d_000293d4;
              goto LAB_0002913a;
            }
            FUN_00030bc4(1 << (uVar9 & 0xff));
          }
          goto LAB_00029136;
        }
        iVar2 = FUN_0004028c(&uStack_dc);
        if (iVar2 == 0) {
LAB_00029122:
          FUN_000297c4();
          return;
        }
        uVar9 = FUN_00035808();
        if (uVar9 != 0) {
          iVar2 = FUN_0004028c(&uStack_dc);
          if (iVar2 != 0) {
            uVar7 = FUN_00035808();
            uVar3 = 0xffffffff;
            if ((-2 < (int)uVar7) && (uVar3 = uVar7, 1 < (int)uVar7)) {
              uVar3 = 1;
            }
            iVar2 = FUN_00035f5c(uVar9 & 0xffff,(int)(char)uVar3);
            uVar7 = uVar3;
            uVar10 = uVar9;
            if (iVar2 == 0) {
              pcVar5 = s_Error_setting_log_sync_interval_f_00028f34;
            }
            else {
              pcVar5 = s_Set_log_sync_interval_for_port___00028f08;
            }
            goto LAB_00028c1e;
          }
          goto LAB_00029122;
        }
      }
      FUN_00029e84(_DAT_00028e8c,iVar2);
LAB_00029136:
      FUN_000297ca();
      return;
    }
  }
  iVar2 = FUN_0004028c(&uStack_dc);
  if (iVar2 == 0) {
    FUN_000297c4();
  }
  iVar2 = FUN_00035810();
  iVar8 = iVar2 >> 0x1f;
  iVar4 = FUN_0004028c(&uStack_dc);
  if (iVar4 == 0) {
    FUN_000297c4();
  }
  iVar4 = FUN_00035810();
  uVar11 = (iVar4 >> 0x1e & 1U) != 0;
  iStack_3c = iVar4 >> 0x1f;
  FUN_001e3580();
  bVar12 = true;
  FUN_001e39cc();
  if (!(bool)uVar11 || bVar12) {
    FUN_000297c4();
  }
  if (iStack_3c < 0) {
    FUN_000297c4();
  }
  uStack_44 = -1 < iVar8;
  iStack_50 = iVar2;
  iStack_4c = iVar8;
  if (!(bool)uStack_44) {
    iStack_50 = -iVar2;
    iStack_4c = -(uint)(iVar2 != 0) - iVar8;
  }
  iStack_48 = iVar4;
  FUN_0002615c(&iStack_50);
  FUN_00029e84(s_A____Current_Time_____00028523 + 1);
  FUN_0003698c(&iStack_50);
  FUN_000297ca();
LAB_00028394:
  if (*(int *)(param_1 + 0xa4) == 0) {
    FUN_000297ca();
  }
  uStack_98 = 0;
  iVar2 = FUN_000350ea(*(undefined4 *)(param_1 + 0xa4));
  if (iVar2 == 0) {
    FUN_000297ca();
  }
  FUN_00029e84(s_Foreign_Data_sets_of_port___d_0002853c,
               *(undefined2 *)(*(int *)(param_1 + 0xa4) + 2));
  FUN_00029be4(iVar2,&uStack_98);
  do {
    iVar4 = FUN_00029ce6(iVar2,uStack_98);
    if (iVar4 != 0) {
      iVar4 = FUN_00029c9a(iVar2);
      if (iVar4 == 0) break;
      FUN_000297ca();
    }
    iVar4 = FUN_00029c28(iVar2,uStack_98);
    if (iVar4 != 0) {
      FUN_000272f4();
    }
    FUN_00029d38(iVar2,&uStack_98);
  } while( true );
  FUN_000297be(s______empty______000286b4);
LAB_0002857c:
  FUN_00036224(local_1c);
  FUN_000297ca();
LAB_00028586:
  FUN_00029e84(s_Help_000286c8);
  FUN_00029e84(DAT_000286d0);
  FUN_00029e84(_DAT_000286d4);
  FUN_00029e84(s_x___c__Print_current_dataset_000286d5 + 3);
  FUN_00029e84(s_d__Print_default_dataset_000286f4);
  FUN_00029e84(s_e__<sec>_<nsec>__Set_time_e_g____00028710);
  FUN_00029e84(s_f__Print_foreign_datasets_for_al_0002873c);
  FUN_00029e84(s_g__Print_time_properties_dataset_00028768);
  FUN_00029e84(s_i_<init_key>__Initialize_PTP_clo_0002878c);
  FUN_00029e84(s_j__0_1___Toggle_or_set_slave_onl_000287bc);
  FUN_00029e84(s_k__Toggle_one_step_Sync_PDelay_000287e8);
  FUN_00029e84(s_l_<domain>__set_clock_domain_num_0002880c);
  FUN_00029e84(s__x__8x___o__Print_port_dataset_f_00028840._0_4_);
  FUN_00029e84(s__x__8x___o__Print_port_dataset_f_00028840._4_4_);
  FUN_00029e84(s__x__8x___o__Print_port_dataset_f_00028840 + 8);
  FUN_00029e84(s_p__Print_parent_dataset_00028870);
  FUN_00029e84(DAT_0002888c);
  FUN_00029e84(_DAT_00028890);
  FUN_00029e84(s_w___t__Print_current_time_00028891 + 3);
  FUN_00029e84(s_v__Adjust_verbose_level__used_fo_000288ac);
  FUN_00029e84(s_w_<port>__Display_current_v1_HW_c_000288e8);
  FUN_00029e84(s__w___x_<port>__Display_current_n_00028928._0_4_);
  FUN_00029e84(s__w___x_<port>__Display_current_n_00028928 + 4);
  FUN_00029e84(_DAT_00028964);
  FUN_00029e84(s_w___y_<port>__Display_current_de_00028965 + 3);
  FUN_00029e84(s_y_<port>_<e2e_p2p>__Change_delay_000289a0);
  pcVar5 = s_z_<priority>_<value>__Set_priori_000289dc;
  goto LAB_00029116;
}


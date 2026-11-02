// rea decompile_all
// name: FUN_00028048
// address: 0x28048
// body: available
// range: 0x28048-0x28295 inclusive
// range: 0x282fc-0x283df inclusive
// range: 0x2855c-0x286b3 inclusive
// range: 0x28a68-0x28aef inclusive
// range: 0x28af6-0x28b05 inclusive
// range: 0x28b0c-0x28d15 inclusive
// range: 0x290fc-0x29213 inclusive
// range: 0x2933e-0x2933f inclusive
// range: 0x29344-0x29345 inclusive
// range: 0x2973c-0x2973d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2828e to 0x28296 FUN_00028296 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x29116 to 0x297be FUN_000297be (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x29122 to 0x297c4 FUN_000297c4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x29136 to 0x297ca FUN_000297ca (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2913a to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2914a to 0x297c4 FUN_000297c4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2916a to 0x297ca FUN_000297ca (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x291ec to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x29212 to 0x2931a FUN_0002931a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2933e to 0x297c4 FUN_000297c4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2973c to 0x297ca FUN_000297ca (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000291ee) */
/* WARNING: Removing unreachable block (ram,0x0002920e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00028048(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  byte *pbVar8;
  int unaff_r5;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  bool bVar13;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  undefined1 *in_stack_00000010;
  char cStack00000048;
  undefined3 uStack00000049;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_00000098;
  undefined1 in_stack_0000009c;
  int in_stack_000000a4;
  char *in_stack_000000ac;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c4;
  undefined4 in_stack_000000c8;
  
  uVar2 = FUN_0004028c(&stack0x0000004c);
  if (uVar2 == 0) {
    return;
  }
  for (uVar10 = 0; uVar3 = FUN_0003590a(uVar2), uVar10 < uVar3; uVar10 = uVar10 + 1) {
    if (*(char *)(uVar2 + uVar10) != ' ') {
      uVar2 = uVar2 + uVar10;
      break;
    }
  }
  in_stack_00000004 = uVar2;
  in_stack_00000008 = uVar2;
  iVar4 = FUN_0003590a(uVar2);
  in_stack_0000000c = iVar4 + in_stack_00000004;
  in_stack_00000010 = &stack0x000000b8;
  iVar4 = FUN_00035922(in_stack_00000008,&stack0x000000b8);
  if ((iVar4 == 0) && (in_stack_0000000c <= in_stack_00000008)) {
    FUN_000297ca();
  }
  iVar4 = FUN_0004028c(&stack0x00000004);
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_00035912(iVar4,&DAT_000283e8,1);
  if (iVar5 == 0) {
LAB_00028234:
    iVar4 = FUN_0004028c(&stack0x00000004);
    if (iVar4 == 0) {
      FUN_000297c4();
    }
    uVar2 = FUN_00035808();
    if (uVar2 == 0) {
      FUN_00029e84(s__s_is_not_a_valid_value_for_port_00028458,iVar4);
    }
    iVar4 = FUN_0004028c(&stack0x00000004);
    if (iVar4 == 0) {
      FUN_000297c4();
    }
    iVar5 = FUN_00035808();
    iVar4 = -1;
    if ((-2 < iVar5) && (iVar4 = iVar5, 4 < iVar5)) {
      iVar4 = 4;
    }
    iVar5 = FUN_00035e54(uVar2 & 0xffff,(int)(char)iVar4);
    if (iVar5 != 0) {
      FUN_00028296(s_Set_log_announce_interval_for_po_0002847c,uVar2,iVar4);
      return;
    }
    pcVar7 = s_Error_setting_log_announce_inter_000284ac;
    do {
      FUN_00029e84(pcVar7,uVar2,iVar4);
      FUN_000297ca();
LAB_0002829e:
      iVar4 = FUN_0004028c(&stack0x00000004);
      if (iVar4 == 0) {
        FUN_000297c4();
      }
      uVar2 = FUN_00035808();
      if (uVar2 == 0) {
        FUN_00029e84(s__s_is_not_a_valid_value_for_port_00028458,iVar4);
      }
      iVar4 = FUN_0004028c(&stack0x00000004);
      if (iVar4 == 0) {
        FUN_000297c4();
      }
      iVar4 = FUN_00035808();
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (5 < iVar4) {
        iVar4 = 5;
      }
      iVar5 = FUN_00035f04(uVar2 & 0xffff,(int)(char)iVar4);
      pcVar7 = DAT_0002851c;
      if (iVar5 != 0) {
        pcVar7 = s_Set_log_min_pdelay_request_inter_000284e4;
      }
    } while( true );
  }
  iVar5 = FUN_00035912(iVar4,&DAT_000283ec,1);
  if (iVar5 == 0) goto LAB_0002829e;
  iVar5 = FUN_00035912(iVar4,&DAT_000283f0,1);
  if (iVar5 == 0) {
    FUN_000262bc(in_stack_000000c0);
    FUN_000297ca();
LAB_00028306:
    FUN_000266a0(in_stack_000000ac);
    FUN_000297ca();
  }
  else {
    iVar5 = FUN_00035912(iVar4,&DAT_000283f4,1);
    if (iVar5 == 0) goto LAB_00028306;
    iVar5 = FUN_00035912(iVar4,&DAT_000283f8,1);
    if (iVar5 != 0) {
      iVar5 = FUN_00035912(iVar4,&DAT_000283fc,1);
      if (iVar5 == 0) goto LAB_00028394;
      iVar5 = FUN_00035912(iVar4,&DAT_00028400,1);
      if (iVar5 == 0) goto LAB_0002857c;
      iVar5 = FUN_00035912(iVar4,&DAT_00028404,1);
      if (iVar5 == 0) goto LAB_00028586;
      iVar5 = FUN_00035912(iVar4,&DAT_00028408,1);
      if (iVar5 == 0) {
        iVar4 = FUN_0004028c(&stack0x00000004);
        if (iVar4 != 0) {
          uVar6 = FUN_00035808();
          FUN_00029e84(s_Clock_initialisation_requested_w_00028a10,uVar6);
          FUN_00027214();
          goto LAB_00029136;
        }
        goto LAB_00029122;
      }
      iVar5 = FUN_00035912(iVar4,&DAT_0002840c,1);
      if (iVar5 == 0) {
        iVar4 = FUN_0004028c(&stack0x00000004);
        if (iVar4 == 0) {
          FUN_00035c58(&stack0x00000048);
        }
        else {
          iVar4 = FUN_00035808();
          _cStack00000048 = CONCAT31(uStack00000049,iVar4 == 0);
        }
        if (cStack00000048 == '\x01') {
          FUN_00036108(0);
          pcVar7 = s_Slave_only__FALSE_00028a54;
        }
        else {
          FUN_00036108(1);
          pcVar7 = s_Slave_only__TRUE_00028a40;
        }
        goto LAB_00029116;
      }
      iVar5 = FUN_00035912(iVar4,&DAT_00028410,1);
      if (iVar5 == 0) {
        if (*in_stack_000000ac == '\x01') {
          FUN_0003614c(0);
          pcVar7 = s_Enabling_one_step_Sync_PDelay__00028d3c;
        }
        else {
          FUN_0003614c(1);
          pcVar7 = s_Disabling_one_step_Sync_PDelay__00028d18;
        }
        goto LAB_00029116;
      }
      iVar5 = FUN_00035912(iVar4,&DAT_00028414,1);
      if (iVar5 == 0) {
        iVar4 = FUN_0004028c(&stack0x00000004);
        if (iVar4 != 0) {
          uVar2 = FUN_00035808();
          FUN_00035d7c(uVar2 & 0xff);
          pcVar7 = s_Clock_domain_changed_to___d_00028d5c;
LAB_0002913a:
          FUN_0002931a(pcVar7,uVar2);
          return;
        }
        goto LAB_00029122;
      }
      iVar5 = FUN_00035912(iVar4,&DAT_00028418,1);
      if (iVar5 == 0) {
        iVar4 = FUN_0004028c(&stack0x00000004);
        if (iVar4 == 0) goto LAB_00029122;
        uVar2 = FUN_00035808();
        if (uVar2 != 0) {
          iVar4 = FUN_00035922(in_stack_00000008,in_stack_00000010);
          if ((iVar4 == 0) && (in_stack_0000000c <= in_stack_00000008)) goto LAB_00029136;
          pbVar8 = (byte *)FUN_0004028c(&stack0x00000004);
          if (pbVar8 == (byte *)0x0) goto LAB_00029122;
          uVar10 = FUN_00035808();
          if (uVar10 != 0) goto switchD_00028aee_default;
          bVar1 = *pbVar8;
          if (bVar1 == 0x61) {
switchD_00028aee_caseD_41:
            uVar10 = 10;
          }
          else if (bVar1 < 0x62) {
            switch(bVar1) {
            case 0x41:
              goto switchD_00028aee_caseD_41;
            case 0x42:
switchD_00028aee_caseD_42:
              uVar10 = 0xb;
              break;
            case 0x43:
switchD_00028aee_caseD_43:
              uVar10 = 0xc;
              break;
            case 0x44:
switchD_00028aee_caseD_44:
              uVar10 = 0xd;
              break;
            case 0x45:
switchD_00028aee_caseD_45:
              uVar10 = 0xe;
              break;
            case 0x46:
switchD_00028aee_caseD_46:
              uVar10 = 0xf;
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
          FUN_00035fb4(uVar2 & 0xffff,uVar10 & 0xff);
          FUN_00029e84(s_Multicast_address_scope_changed_t_00028d7c,uVar10);
          if (uVar10 == 5) {
            pcVar7 = s__Site_Local_scope__00028df4;
            goto LAB_00029116;
          }
          if ((int)uVar10 < 6) {
            if (uVar10 == 1) {
              pcVar7 = s__Interface_Local_scope__00028da8;
              goto LAB_00029116;
            }
            if (uVar10 == 2) {
              pcVar7 = s__Link_Local_scope__00028dc4;
              goto LAB_00029116;
            }
            if (uVar10 == 4) {
              pcVar7 = s__Admin_Local_scope__00028ddc;
              goto LAB_00029116;
            }
          }
          else {
            if (uVar10 == 8) {
              pcVar7 = s__Organization_Local_scope__00028e0c;
              goto LAB_00029116;
            }
            if (uVar10 == 0xe) {
              pcVar7 = s__Global_scope__00028e2c;
              goto LAB_00029116;
            }
          }
          pcVar7 = &DAT_00028da4;
LAB_00029116:
          FUN_000297be(pcVar7);
          return;
        }
      }
      else {
        iVar5 = FUN_00035912(iVar4,&DAT_0002841c,1);
        if (iVar5 == 0) {
          iVar4 = FUN_0004028c(&stack0x00000004);
          if (iVar4 != 0) {
            iVar5 = FUN_00035912(iVar4,&DAT_00028e40,1);
            if (iVar5 == 0) {
              FUN_00035ce0();
              pcVar7 = s_Save_current_values_to_NVM_00028e48;
            }
            else {
              iVar4 = FUN_00035912(iVar4,&DAT_00028e44,1);
              if (iVar4 != 0) goto LAB_00029136;
              FUN_00035c9c();
              pcVar7 = s_Reset_NVM_00028e64;
            }
            goto LAB_00029116;
          }
          goto LAB_00029122;
        }
        iVar5 = FUN_00035912(iVar4,&DAT_00028420,1);
        if (iVar5 == 0) {
          if (*(int *)(unaff_r5 + 0x24) != 0) {
            FUN_00029e84(s_Port_data_set_for_port___d_00028e70,
                         *(undefined2 *)(*(int *)(unaff_r5 + 0x24) + 2));
            FUN_000344e0(*(int *)(unaff_r5 + 0x24) + 0x250);
          }
          goto LAB_00029136;
        }
        iVar5 = FUN_00035912(iVar4,&DAT_00028424,1);
        if (iVar5 == 0) {
          FUN_00033b74(in_stack_000000c8);
          goto LAB_00029136;
        }
        iVar5 = FUN_00035912(iVar4,&DAT_00028428,1);
        if (iVar5 == 0) {
          iVar4 = FUN_0004028c(&stack0x00000004);
          if (iVar4 != 0) {
            uVar2 = FUN_00035808();
            if (uVar2 == 0) {
              FUN_00029e84(_DAT_00028e8c,iVar4);
            }
            iVar4 = FUN_0004028c(&stack0x00000004);
            if (iVar4 != 0) {
              uVar10 = FUN_00035808();
              if ((int)uVar10 < 0) {
                uVar10 = 0;
              }
              else if (5 < (int)uVar10) {
                uVar10 = 5;
              }
              iVar4 = FUN_00035eac(uVar2 & 0xffff,(int)(char)uVar10);
              if (iVar4 == 0) goto LAB_00028c22;
              pcVar7 = s__Set_log_min_delay_request_inter_00028e8f + 1;
              uVar3 = uVar10;
              uVar11 = uVar2;
LAB_00028c1e:
              do {
                FUN_00028296(pcVar7,uVar2,uVar10);
                uVar10 = uVar3;
                uVar2 = uVar11;
LAB_00028c22:
                pcVar7 = s_Error_setting_log_min_delay_requ_00028ec8;
                uVar3 = uVar10;
                uVar11 = uVar2;
              } while( true );
            }
          }
          goto LAB_00029122;
        }
        iVar5 = FUN_00035912(iVar4,&DAT_0002842c,1);
        if (iVar5 != 0) {
          iVar5 = FUN_00035912(iVar4,&DAT_00028430,1);
          if (iVar5 == 0) {
            FUN_00029e84(DAT_00028f68);
            FUN_00025a58(&stack0x00000090);
            FUN_0003698c(&stack0x00000090);
          }
          else {
            iVar5 = FUN_00035912(iVar4,&DAT_00028434,1);
            if (iVar5 != 0) {
              iVar5 = FUN_00035912(iVar4,&DAT_00028438,1);
              if (iVar5 != 0) {
                iVar5 = FUN_00035912(iVar4,&DAT_0002843c,1);
                if (iVar5 == 0) {
                  FUN_00029214();
                }
                iVar5 = FUN_00035912(iVar4,&DAT_00028440,1);
                if (iVar5 == 0) {
                  FUN_000292f4();
                }
                iVar5 = FUN_00035912(iVar4,&DAT_00028444,1);
                if (iVar5 == 0) {
                  FUN_0002978e();
                }
                FUN_0002931a(s__s_not_defined_00028448,iVar4);
                goto LAB_00028234;
              }
              uVar11 = 1;
              iVar4 = FUN_0004028c(&stack0x00000004);
              if (iVar4 == 0) {
                FUN_000297c4();
                return;
              }
              uVar2 = FUN_00035808();
              if (uVar2 == 0) {
                FUN_00029e84(DAT_000293ec,iVar4);
                FUN_000297ca();
                return;
              }
              iVar4 = FUN_00035922(in_stack_00000008,in_stack_00000010);
              if ((iVar4 == 0) && (in_stack_0000000c <= in_stack_00000008)) {
                iVar4 = FUN_00035c04(uVar2 & 0xffff);
                if (iVar4 == 0) {
                  FUN_0002931a(s_Error_getting_v1_hardware_compat_0002946c,uVar2);
                  return;
                }
                FUN_00029e84(s_Active_v1_hardware_compatibility_000294e4,uVar2);
                FUN_000297ca();
                return;
              }
              uVar10 = FUN_0004028c(&stack0x00000004);
              if (uVar10 == 0) {
                FUN_000297c4();
                return;
              }
              iVar4 = FUN_00035912(uVar10,&DAT_000293f0,2);
              if (iVar4 == 0) {
                uVar11 = 0;
              }
              else {
                iVar4 = FUN_00035912(uVar10,&DAT_000293f4,3);
                if ((iVar4 != 0) && (iVar4 = FUN_00035912(uVar10,&DAT_000293f8,4), iVar4 == 0)) {
                  uVar11 = 2;
                }
              }
              iVar4 = FUN_00036194(uVar2 & 0xffff,uVar11);
              uVar3 = uVar2;
              if (iVar4 == 1) {
                pcVar7 = s_Set_v1_hardware_compatibility_mo_00029434;
              }
              else {
                pcVar7 = s_Error_setting_network_protocol_f_00029400;
              }
              goto LAB_00028c1e;
            }
            iVar4 = FUN_00035922(in_stack_00000008,in_stack_00000010);
            if ((iVar4 == 0) && (in_stack_0000000c <= in_stack_00000008)) {
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
              pcVar7 = s_PTP_Unicast__17_000293b8;
              goto LAB_00029116;
            }
            iVar4 = FUN_0004028c(&stack0x00000004);
            if (iVar4 == 0) goto LAB_00029122;
            uVar2 = FUN_00035808();
            if (0x11 < uVar2) {
              pcVar7 = s_Key_out_of_range___d_000293d4;
              goto LAB_0002913a;
            }
            FUN_00030bc4(1 << (uVar2 & 0xff));
          }
          goto LAB_00029136;
        }
        iVar4 = FUN_0004028c(&stack0x00000004);
        if (iVar4 == 0) {
LAB_00029122:
          FUN_000297c4();
          return;
        }
        uVar2 = FUN_00035808();
        if (uVar2 != 0) {
          iVar4 = FUN_0004028c(&stack0x00000004);
          if (iVar4 != 0) {
            uVar3 = FUN_00035808();
            uVar10 = 0xffffffff;
            if ((-2 < (int)uVar3) && (uVar10 = uVar3, 1 < (int)uVar3)) {
              uVar10 = 1;
            }
            iVar4 = FUN_00035f5c(uVar2 & 0xffff,(int)(char)uVar10);
            uVar3 = uVar10;
            uVar11 = uVar2;
            if (iVar4 == 0) {
              pcVar7 = s_Error_setting_log_sync_interval_f_00028f34;
            }
            else {
              pcVar7 = s_Set_log_sync_interval_for_port___00028f08;
            }
            goto LAB_00028c1e;
          }
          goto LAB_00029122;
        }
      }
      FUN_00029e84(_DAT_00028e8c,iVar4);
LAB_00029136:
      FUN_000297ca();
      return;
    }
  }
  iVar4 = FUN_0004028c(&stack0x00000004);
  if (iVar4 == 0) {
    FUN_000297c4();
  }
  iVar4 = FUN_00035810();
  iVar9 = iVar4 >> 0x1f;
  iVar5 = FUN_0004028c(&stack0x00000004);
  if (iVar5 == 0) {
    FUN_000297c4();
  }
  iVar5 = FUN_00035810();
  uVar12 = (iVar5 >> 0x1e & 1U) != 0;
  in_stack_000000a4 = iVar5 >> 0x1f;
  FUN_001e3580();
  bVar13 = true;
  FUN_001e39cc();
  if (!(bool)uVar12 || bVar13) {
    FUN_000297c4();
  }
  if (in_stack_000000a4 < 0) {
    FUN_000297c4();
  }
  in_stack_0000009c = -1 < iVar9;
  in_stack_00000090 = iVar4;
  in_stack_00000094 = iVar9;
  if (!(bool)in_stack_0000009c) {
    in_stack_00000090 = -iVar4;
    in_stack_00000094 = -(uint)(iVar4 != 0) - iVar9;
  }
  in_stack_00000098 = iVar5;
  FUN_0002615c(&stack0x00000090);
  FUN_00029e84(s_A____Current_Time_____00028523 + 1);
  FUN_0003698c(&stack0x00000090);
  FUN_000297ca();
LAB_00028394:
  if (*(int *)(unaff_r5 + 0x24) == 0) {
    FUN_000297ca();
  }
  _cStack00000048 = 0;
  iVar4 = FUN_000350ea(*(undefined4 *)(unaff_r5 + 0x24));
  if (iVar4 == 0) {
    FUN_000297ca();
  }
  FUN_00029e84(s_Foreign_Data_sets_of_port___d_0002853c,
               *(undefined2 *)(*(int *)(unaff_r5 + 0x24) + 2));
  FUN_00029be4(iVar4,&stack0x00000048);
  do {
    iVar5 = FUN_00029ce6(iVar4,_cStack00000048);
    if (iVar5 != 0) {
      iVar5 = FUN_00029c9a(iVar4);
      if (iVar5 == 0) break;
      FUN_000297ca();
    }
    iVar5 = FUN_00029c28(iVar4,_cStack00000048);
    if (iVar5 != 0) {
      FUN_000272f4();
    }
    FUN_00029d38(iVar4,&stack0x00000048);
  } while( true );
  FUN_000297be(s______empty______000286b4);
LAB_0002857c:
  FUN_00036224(in_stack_000000c4);
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
  pcVar7 = s_z_<priority>_<value>__Set_priori_000289dc;
  goto LAB_00029116;
}


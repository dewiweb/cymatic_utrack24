// rea decompile_all
// name: FUN_0002dbb8
// address: 0x2dbb8
// body: available
// range: 0x2dbb8-0x2de05 inclusive
// range: 0x2de6c-0x2df4f inclusive
// range: 0x2e0cc-0x2e223 inclusive
// range: 0x2e5d8-0x2e65f inclusive
// range: 0x2e666-0x2e675 inclusive
// range: 0x2e67c-0x2e885 inclusive
// range: 0x2ec6c-0x2ed83 inclusive
// range: 0x2eeae-0x2eeaf inclusive
// range: 0x2eeb4-0x2eeb5 inclusive
// range: 0x2f2ac-0x2f2ad inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2ddfe to 0x2de06 FUN_0002de06 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2ec86 to 0x2f32e FUN_0002f32e (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2ec92 to 0x2f334 FUN_0002f334 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2eca6 to 0x2f33a FUN_0002f33a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2ecaa to 0x2ee8a FUN_0002ee8a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2ecba to 0x2f334 FUN_0002f334 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2ecda to 0x2f33a FUN_0002f33a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2ed5c to 0x2ee8a FUN_0002ee8a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2ed82 to 0x2ee8a FUN_0002ee8a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2eeae to 0x2f334 FUN_0002f334 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2f2ac to 0x2f33a FUN_0002f33a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0002ed5e) */
/* WARNING: Removing unreachable block (ram,0x0002ed7e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002dbb8(void)

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
  
  uVar2 = FUN_00044eec(&stack0x0000004c);
  if (uVar2 == 0) {
    return;
  }
  for (uVar10 = 0; uVar3 = FUN_0003b6b6(uVar2), uVar10 < uVar3; uVar10 = uVar10 + 1) {
    if (*(char *)(uVar2 + uVar10) != ' ') {
      uVar2 = uVar2 + uVar10;
      break;
    }
  }
  in_stack_00000004 = uVar2;
  in_stack_00000008 = uVar2;
  iVar4 = FUN_0003b6b6(uVar2);
  in_stack_0000000c = iVar4 + in_stack_00000004;
  in_stack_00000010 = &stack0x000000b8;
  iVar4 = FUN_0003b6ce(in_stack_00000008,&stack0x000000b8);
  if ((iVar4 == 0) && (in_stack_0000000c <= in_stack_00000008)) {
    FUN_0002f33a();
  }
  iVar4 = FUN_00044eec(&stack0x00000004);
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_0003b6be(iVar4,&DAT_0002df58,1);
  if (iVar5 == 0) {
LAB_0002dda4:
    iVar4 = FUN_00044eec(&stack0x00000004);
    if (iVar4 == 0) {
      FUN_0002f334();
    }
    uVar2 = FUN_0003b5b4();
    if (uVar2 == 0) {
      FUN_0002f9d4(s__s_is_not_a_valid_value_for_port_0002dfc8,iVar4);
    }
    iVar4 = FUN_00044eec(&stack0x00000004);
    if (iVar4 == 0) {
      FUN_0002f334();
    }
    iVar5 = FUN_0003b5b4();
    iVar4 = -1;
    if ((-2 < iVar5) && (iVar4 = iVar5, 4 < iVar5)) {
      iVar4 = 4;
    }
    iVar5 = FUN_0003bb20(uVar2 & 0xffff,(int)(char)iVar4);
    if (iVar5 != 0) {
      FUN_0002de06(s_Set_log_announce_interval_for_po_0002dfec,uVar2,iVar4);
      return;
    }
    pcVar7 = s_Error_setting_log_announce_inter_0002e01c;
    do {
      FUN_0002f9d4(pcVar7,uVar2,iVar4);
      FUN_0002f33a();
LAB_0002de0e:
      iVar4 = FUN_00044eec(&stack0x00000004);
      if (iVar4 == 0) {
        FUN_0002f334();
      }
      uVar2 = FUN_0003b5b4();
      if (uVar2 == 0) {
        FUN_0002f9d4(s__s_is_not_a_valid_value_for_port_0002dfc8,iVar4);
      }
      iVar4 = FUN_00044eec(&stack0x00000004);
      if (iVar4 == 0) {
        FUN_0002f334();
      }
      iVar4 = FUN_0003b5b4();
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (5 < iVar4) {
        iVar4 = 5;
      }
      iVar5 = FUN_0003bbd0(uVar2 & 0xffff,(int)(char)iVar4);
      pcVar7 = DAT_0002e08c;
      if (iVar5 != 0) {
        pcVar7 = s_Set_log_min_pdelay_request_inter_0002e054;
      }
    } while( true );
  }
  iVar5 = FUN_0003b6be(iVar4,&DAT_0002df5c,1);
  if (iVar5 == 0) goto LAB_0002de0e;
  iVar5 = FUN_0003b6be(iVar4,&DAT_0002df60,1);
  if (iVar5 == 0) {
    FUN_0002be2c(in_stack_000000c0);
    FUN_0002f33a();
LAB_0002de76:
    FUN_0002c210(in_stack_000000ac);
    FUN_0002f33a();
  }
  else {
    iVar5 = FUN_0003b6be(iVar4,&DAT_0002df64,1);
    if (iVar5 == 0) goto LAB_0002de76;
    iVar5 = FUN_0003b6be(iVar4,&DAT_0002df68,1);
    if (iVar5 != 0) {
      iVar5 = FUN_0003b6be(iVar4,&DAT_0002df6c,1);
      if (iVar5 == 0) goto LAB_0002df04;
      iVar5 = FUN_0003b6be(iVar4,&DAT_0002df70,1);
      if (iVar5 == 0) goto LAB_0002e0ec;
      iVar5 = FUN_0003b6be(iVar4,&DAT_0002df74,1);
      if (iVar5 == 0) goto LAB_0002e0f6;
      iVar5 = FUN_0003b6be(iVar4,&DAT_0002df78,1);
      if (iVar5 == 0) {
        iVar4 = FUN_00044eec(&stack0x00000004);
        if (iVar4 != 0) {
          uVar6 = FUN_0003b5b4();
          FUN_0002f9d4(s_Clock_initialisation_requested_w_0002e580,uVar6);
          FUN_0002cd84();
          goto LAB_0002eca6;
        }
        goto LAB_0002ec92;
      }
      iVar5 = FUN_0003b6be(iVar4,&DAT_0002df7c,1);
      if (iVar5 == 0) {
        iVar4 = FUN_00044eec(&stack0x00000004);
        if (iVar4 == 0) {
          FUN_0003b924(&stack0x00000048);
        }
        else {
          iVar4 = FUN_0003b5b4();
          _cStack00000048 = CONCAT31(uStack00000049,iVar4 == 0);
        }
        if (cStack00000048 == '\x01') {
          FUN_0003bdbc(0);
          pcVar7 = s_Slave_only__FALSE_0002e5c4;
        }
        else {
          FUN_0003bdbc(1);
          pcVar7 = s_Slave_only__TRUE_0002e5b0;
        }
        goto LAB_0002ec86;
      }
      iVar5 = FUN_0003b6be(iVar4,&DAT_0002df80,1);
      if (iVar5 == 0) {
        if (*in_stack_000000ac == '\x01') {
          FUN_0003be00(0);
          pcVar7 = s_Enabling_one_step_Sync_PDelay__0002e8ac;
        }
        else {
          FUN_0003be00(1);
          pcVar7 = s_Disabling_one_step_Sync_PDelay__0002e888;
        }
        goto LAB_0002ec86;
      }
      iVar5 = FUN_0003b6be(iVar4,&DAT_0002df84,1);
      if (iVar5 == 0) {
        iVar4 = FUN_00044eec(&stack0x00000004);
        if (iVar4 != 0) {
          uVar2 = FUN_0003b5b4();
          FUN_0003ba48(uVar2 & 0xff);
          pcVar7 = s_Clock_domain_changed_to___d_0002e8cc;
LAB_0002ecaa:
          FUN_0002ee8a(pcVar7,uVar2);
          return;
        }
        goto LAB_0002ec92;
      }
      iVar5 = FUN_0003b6be(iVar4,&DAT_0002df88,1);
      if (iVar5 == 0) {
        iVar4 = FUN_00044eec(&stack0x00000004);
        if (iVar4 == 0) goto LAB_0002ec92;
        uVar2 = FUN_0003b5b4();
        if (uVar2 != 0) {
          iVar4 = FUN_0003b6ce(in_stack_00000008,in_stack_00000010);
          if ((iVar4 == 0) && (in_stack_0000000c <= in_stack_00000008)) goto LAB_0002eca6;
          pbVar8 = (byte *)FUN_00044eec(&stack0x00000004);
          if (pbVar8 == (byte *)0x0) goto LAB_0002ec92;
          uVar10 = FUN_0003b5b4();
          if (uVar10 != 0) goto switchD_0002e65e_default;
          bVar1 = *pbVar8;
          if (bVar1 == 0x61) {
switchD_0002e65e_caseD_41:
            uVar10 = 10;
          }
          else if (bVar1 < 0x62) {
            switch(bVar1) {
            case 0x41:
              goto switchD_0002e65e_caseD_41;
            case 0x42:
switchD_0002e65e_caseD_42:
              uVar10 = 0xb;
              break;
            case 0x43:
switchD_0002e65e_caseD_43:
              uVar10 = 0xc;
              break;
            case 0x44:
switchD_0002e65e_caseD_44:
              uVar10 = 0xd;
              break;
            case 0x45:
switchD_0002e65e_caseD_45:
              uVar10 = 0xe;
              break;
            case 0x46:
switchD_0002e65e_caseD_46:
              uVar10 = 0xf;
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
          FUN_0003bc80(uVar2 & 0xffff,uVar10 & 0xff);
          FUN_0002f9d4(s_Multicast_address_scope_changed_t_0002e8ec,uVar10);
          if (uVar10 == 5) {
            pcVar7 = s__Site_Local_scope__0002e964;
            goto LAB_0002ec86;
          }
          if ((int)uVar10 < 6) {
            if (uVar10 == 1) {
              pcVar7 = s__Interface_Local_scope__0002e918;
              goto LAB_0002ec86;
            }
            if (uVar10 == 2) {
              pcVar7 = s__Link_Local_scope__0002e934;
              goto LAB_0002ec86;
            }
            if (uVar10 == 4) {
              pcVar7 = s__Admin_Local_scope__0002e94c;
              goto LAB_0002ec86;
            }
          }
          else {
            if (uVar10 == 8) {
              pcVar7 = s__Organization_Local_scope__0002e97c;
              goto LAB_0002ec86;
            }
            if (uVar10 == 0xe) {
              pcVar7 = s__Global_scope__0002e99c;
              goto LAB_0002ec86;
            }
          }
          pcVar7 = &DAT_0002e914;
LAB_0002ec86:
          FUN_0002f32e(pcVar7);
          return;
        }
      }
      else {
        iVar5 = FUN_0003b6be(iVar4,&DAT_0002df8c,1);
        if (iVar5 == 0) {
          iVar4 = FUN_00044eec(&stack0x00000004);
          if (iVar4 != 0) {
            iVar5 = FUN_0003b6be(iVar4,&DAT_0002e9b0,1);
            if (iVar5 == 0) {
              FUN_0003b9ac();
              pcVar7 = s_Save_current_values_to_NVM_0002e9b8;
            }
            else {
              iVar4 = FUN_0003b6be(iVar4,&DAT_0002e9b4,1);
              if (iVar4 != 0) goto LAB_0002eca6;
              FUN_0003b968();
              pcVar7 = s_Reset_NVM_0002e9d4;
            }
            goto LAB_0002ec86;
          }
          goto LAB_0002ec92;
        }
        iVar5 = FUN_0003b6be(iVar4,&DAT_0002df90,1);
        if (iVar5 == 0) {
          if (*(int *)(unaff_r5 + 0x24) != 0) {
            FUN_0002f9d4(s_Port_data_set_for_port___d_0002e9e0,
                         *(undefined2 *)(*(int *)(unaff_r5 + 0x24) + 2));
            FUN_0003a07c(*(int *)(unaff_r5 + 0x24) + 0x250);
          }
          goto LAB_0002eca6;
        }
        iVar5 = FUN_0003b6be(iVar4,&DAT_0002df94,1);
        if (iVar5 == 0) {
          FUN_00039710(in_stack_000000c8);
          goto LAB_0002eca6;
        }
        iVar5 = FUN_0003b6be(iVar4,&DAT_0002df98,1);
        if (iVar5 == 0) {
          iVar4 = FUN_00044eec(&stack0x00000004);
          if (iVar4 != 0) {
            uVar2 = FUN_0003b5b4();
            if (uVar2 == 0) {
              FUN_0002f9d4(_DAT_0002e9fc,iVar4);
            }
            iVar4 = FUN_00044eec(&stack0x00000004);
            if (iVar4 != 0) {
              uVar10 = FUN_0003b5b4();
              if ((int)uVar10 < 0) {
                uVar10 = 0;
              }
              else if (5 < (int)uVar10) {
                uVar10 = 5;
              }
              iVar4 = FUN_0003bb78(uVar2 & 0xffff,(int)(char)uVar10);
              if (iVar4 == 0) goto LAB_0002e792;
              pcVar7 = s__Set_log_min_delay_request_inter_0002e9ff + 1;
              uVar3 = uVar10;
              uVar11 = uVar2;
LAB_0002e78e:
              do {
                FUN_0002de06(pcVar7,uVar2,uVar10);
                uVar10 = uVar3;
                uVar2 = uVar11;
LAB_0002e792:
                pcVar7 = s_Error_setting_log_min_delay_requ_0002ea38;
                uVar3 = uVar10;
                uVar11 = uVar2;
              } while( true );
            }
          }
          goto LAB_0002ec92;
        }
        iVar5 = FUN_0003b6be(iVar4,&DAT_0002df9c,1);
        if (iVar5 != 0) {
          iVar5 = FUN_0003b6be(iVar4,&DAT_0002dfa0,1);
          if (iVar5 == 0) {
            FUN_0002f9d4(DAT_0002ead8);
            FUN_0002b5dc(&stack0x00000090);
            FUN_0003c640(&stack0x00000090);
          }
          else {
            iVar5 = FUN_0003b6be(iVar4,&DAT_0002dfa4,1);
            if (iVar5 != 0) {
              iVar5 = FUN_0003b6be(iVar4,&DAT_0002dfa8,1);
              if (iVar5 != 0) {
                iVar5 = FUN_0003b6be(iVar4,&DAT_0002dfac,1);
                if (iVar5 == 0) {
                  FUN_0002ed84();
                }
                iVar5 = FUN_0003b6be(iVar4,&DAT_0002dfb0,1);
                if (iVar5 == 0) {
                  FUN_0002ee64();
                }
                iVar5 = FUN_0003b6be(iVar4,&DAT_0002dfb4,1);
                if (iVar5 == 0) {
                  FUN_0002f2fe();
                }
                FUN_0002ee8a(s__s_not_defined_0002dfb8,iVar4);
                goto LAB_0002dda4;
              }
              uVar11 = 1;
              iVar4 = FUN_00044eec(&stack0x00000004);
              if (iVar4 == 0) {
                FUN_0002f334();
                return;
              }
              uVar2 = FUN_0003b5b4();
              if (uVar2 == 0) {
                FUN_0002f9d4(DAT_0002ef5c,iVar4);
                FUN_0002f33a();
                return;
              }
              iVar4 = FUN_0003b6ce(in_stack_00000008,in_stack_00000010);
              if ((iVar4 == 0) && (in_stack_0000000c <= in_stack_00000008)) {
                iVar4 = FUN_0003b8d0(uVar2 & 0xffff);
                if (iVar4 == 0) {
                  FUN_0002ee8a(s_Error_getting_v1_hardware_compat_0002efdc,uVar2);
                  return;
                }
                FUN_0002f9d4(s_Active_v1_hardware_compatibility_0002f054,uVar2);
                FUN_0002f33a();
                return;
              }
              uVar10 = FUN_00044eec(&stack0x00000004);
              if (uVar10 == 0) {
                FUN_0002f334();
                return;
              }
              iVar4 = FUN_0003b6be(uVar10,&DAT_0002ef60,2);
              if (iVar4 == 0) {
                uVar11 = 0;
              }
              else {
                iVar4 = FUN_0003b6be(uVar10,&DAT_0002ef64,3);
                if ((iVar4 != 0) && (iVar4 = FUN_0003b6be(uVar10,&DAT_0002ef68,4), iVar4 == 0)) {
                  uVar11 = 2;
                }
              }
              iVar4 = FUN_0003be48(uVar2 & 0xffff,uVar11);
              uVar3 = uVar2;
              if (iVar4 == 1) {
                pcVar7 = s_Set_v1_hardware_compatibility_mo_0002efa4;
              }
              else {
                pcVar7 = s_Error_setting_network_protocol_f_0002ef70;
              }
              goto LAB_0002e78e;
            }
            iVar4 = FUN_0003b6ce(in_stack_00000008,in_stack_00000010);
            if ((iVar4 == 0) && (in_stack_0000000c <= in_stack_00000008)) {
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
              pcVar7 = s_PTP_Unicast__17_0002ef28;
              goto LAB_0002ec86;
            }
            iVar4 = FUN_00044eec(&stack0x00000004);
            if (iVar4 == 0) goto LAB_0002ec92;
            uVar2 = FUN_0003b5b4();
            if (0x11 < uVar2) {
              pcVar7 = s_Key_out_of_range___d_0002ef44;
              goto LAB_0002ecaa;
            }
            FUN_00036714(1 << (uVar2 & 0xff));
          }
          goto LAB_0002eca6;
        }
        iVar4 = FUN_00044eec(&stack0x00000004);
        if (iVar4 == 0) {
LAB_0002ec92:
          FUN_0002f334();
          return;
        }
        uVar2 = FUN_0003b5b4();
        if (uVar2 != 0) {
          iVar4 = FUN_00044eec(&stack0x00000004);
          if (iVar4 != 0) {
            uVar3 = FUN_0003b5b4();
            uVar10 = 0xffffffff;
            if ((-2 < (int)uVar3) && (uVar10 = uVar3, 1 < (int)uVar3)) {
              uVar10 = 1;
            }
            iVar4 = FUN_0003bc28(uVar2 & 0xffff,(int)(char)uVar10);
            uVar3 = uVar10;
            uVar11 = uVar2;
            if (iVar4 == 0) {
              pcVar7 = s_Error_setting_log_sync_interval_f_0002eaa4;
            }
            else {
              pcVar7 = s_Set_log_sync_interval_for_port___0002ea78;
            }
            goto LAB_0002e78e;
          }
          goto LAB_0002ec92;
        }
      }
      FUN_0002f9d4(_DAT_0002e9fc,iVar4);
LAB_0002eca6:
      FUN_0002f33a();
      return;
    }
  }
  iVar4 = FUN_00044eec(&stack0x00000004);
  if (iVar4 == 0) {
    FUN_0002f334();
  }
  iVar4 = FUN_0003b5bc();
  iVar9 = iVar4 >> 0x1f;
  iVar5 = FUN_00044eec(&stack0x00000004);
  if (iVar5 == 0) {
    FUN_0002f334();
  }
  iVar5 = FUN_0003b5bc();
  uVar12 = (iVar5 >> 0x1e & 1U) != 0;
  in_stack_000000a4 = iVar5 >> 0x1f;
  FUN_00249238();
  bVar13 = true;
  FUN_00249684();
  if (!(bool)uVar12 || bVar13) {
    FUN_0002f334();
  }
  if (in_stack_000000a4 < 0) {
    FUN_0002f334();
  }
  in_stack_0000009c = -1 < iVar9;
  in_stack_00000090 = iVar4;
  in_stack_00000094 = iVar9;
  if (!(bool)in_stack_0000009c) {
    in_stack_00000090 = -iVar4;
    in_stack_00000094 = -(uint)(iVar4 != 0) - iVar9;
  }
  in_stack_00000098 = iVar5;
  FUN_0002bccc(&stack0x00000090);
  FUN_0002f9d4(s_A____Current_Time_____0002e093 + 1);
  FUN_0003c640(&stack0x00000090);
  FUN_0002f33a();
LAB_0002df04:
  if (*(int *)(unaff_r5 + 0x24) == 0) {
    FUN_0002f33a();
  }
  _cStack00000048 = 0;
  iVar4 = FUN_0003ac86(*(undefined4 *)(unaff_r5 + 0x24));
  if (iVar4 == 0) {
    FUN_0002f33a();
  }
  FUN_0002f9d4(s_Foreign_Data_sets_of_port___d_0002e0ac,
               *(undefined2 *)(*(int *)(unaff_r5 + 0x24) + 2));
  FUN_0002f734(iVar4,&stack0x00000048);
  do {
    iVar5 = FUN_0002f836(iVar4,_cStack00000048);
    if (iVar5 != 0) {
      iVar5 = FUN_0002f7ea(iVar4);
      if (iVar5 == 0) break;
      FUN_0002f33a();
    }
    iVar5 = FUN_0002f778(iVar4,_cStack00000048);
    if (iVar5 != 0) {
      FUN_0002ce64();
    }
    FUN_0002f888(iVar4,&stack0x00000048);
  } while( true );
  FUN_0002f32e(s______empty______0002e224);
LAB_0002e0ec:
  FUN_0003bed8(in_stack_000000c4);
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
  pcVar7 = s_z_<priority>_<value>__Set_priori_0002e54c;
  goto LAB_0002ec86;
}


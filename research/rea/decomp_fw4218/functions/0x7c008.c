// rea decompile_all
// name: FUN_0007c008
// address: 0x7c008
// body: available
// range: 0x7c008-0x7c297 inclusive
// range: 0x7c3ac-0x7c687 inclusive
// range: 0x7c794-0x7ca6b inclusive
// range: 0x7cb8c-0x7cd1b inclusive
// range: 0x7ce28-0x7cfb7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0007c008(undefined4 param_1,uint *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined4 local_18;
  uint local_14;
  undefined4 uStack_10;
  uint *local_c;
  int local_8;
  
  local_14 = *param_2;
  uStack_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  iVar1 = FUN_00003d18(local_14,&DAT_0007c298);
  if (iVar1 == 0) {
    local_18 = FUN_00178f04();
    local_14 = FUN_001776c0();
    FUN_00178f04();
    local_18 = FUN_00178208();
    FUN_00178f04();
    uVar2 = FUN_001781f8();
    FUN_00002898(s_Analog_Board_Id_is__d_Digital_Bo_0007c2a0,uVar2,local_18);
    uVar2 = 0;
  }
  else {
    local_14 = *local_c;
    iVar1 = FUN_00003d18(local_14,&DAT_0007c2d4);
    if ((iVar1 == 0) && (local_8 == 2)) {
      FUN_00002fec(local_c[1],&DAT_0007c2dc,&local_14);
      uVar2 = FUN_00178f04();
      local_18 = FUN_001781dc(uVar2,local_14 != 0);
      if (local_18 == 0) {
        FUN_00002898(s_Error_in_setting_the_Sync_Master_0007c2e0);
      }
      else {
        if (local_14 == 0) {
          pcVar3 = s_Slave_0007c310;
        }
        else {
          pcVar3 = s_Master_0007c308;
        }
        FUN_00002898(s_Clock_set_as__d__s_0007c318,local_14,pcVar3);
      }
      uVar2 = 0;
    }
    else {
      local_14 = *local_c;
      iVar1 = FUN_00003d18(local_14,&DAT_0007c32c);
      if ((iVar1 == 0) && (local_8 == 2)) {
        FUN_00002fec(local_c[1],&DAT_0007c2dc,&local_14);
        uVar2 = FUN_00178f04();
        local_18 = FUN_00177558(uVar2,local_14 != 0);
        if (local_18 == 0) {
          FUN_00002898(s_Error_in_setting_the_Madi_Input_0007c330);
        }
        else {
          if (local_14 == 0) {
            pcVar3 = s_Optical_0007c35c;
          }
          else {
            pcVar3 = &DAT_0007c354;
          }
          FUN_00002898(s_Madi_Input_set_to__d__s_0007c364,local_14,pcVar3);
        }
        uVar2 = 0;
      }
      else {
        local_14 = *local_c;
        iVar1 = FUN_00003d18(local_14,&DAT_0007c380);
        if ((iVar1 == 0) && (local_8 == 2)) {
          FUN_00002fec(local_c[1],&DAT_0007c2dc,&local_14);
          uVar2 = FUN_00178f04();
          local_18 = FUN_0017753c(uVar2,local_14 != 0);
          if (local_18 == 0) {
            FUN_00002898(s_Error_in_setting_the_56_64Ch_mod_0007c388);
          }
          else {
            if (local_14 == 0) {
              puVar4 = &DAT_0007c690;
            }
            else {
              puVar4 = &DAT_0007c688;
            }
            FUN_00002898(s_Mode_set_as__d__s_0007c698,local_14,puVar4);
          }
          uVar2 = 0;
        }
        else {
          local_14 = *local_c;
          iVar1 = FUN_00003d18(local_14,s_tx48k_0007c6ac);
          if ((iVar1 == 0) && (local_8 == 2)) {
            FUN_00002fec(local_c[1],&DAT_0007c2dc,&local_14);
            uVar2 = FUN_00178f04();
            local_18 = FUN_00177574(uVar2,local_14 != 0);
            if (local_18 == 0) {
              FUN_00002898(s_Error_in_setting_the_tx48k_0007c6b4);
            }
            else {
              if (local_14 == 0) {
                puVar4 = &DAT_0007c6d4;
              }
              else {
                puVar4 = &DAT_0007c6d0;
              }
              FUN_00002898(s_tx48k_set_to__d__s_0007c6d8,local_14,puVar4);
            }
            uVar2 = 0;
          }
          else {
            local_14 = *local_c;
            iVar1 = FUN_00003d18(local_14,s_setfs_0007c6ec);
            if ((iVar1 == 0) && (local_8 == 2)) {
              FUN_00002fec(local_c[1],&DAT_0007c2dc,&local_14);
              if (local_14 == 0x2c) {
                uVar2 = 1;
                local_18 = 1;
              }
              else if (local_14 == 0x30) {
                uVar2 = 2;
                local_18 = 2;
              }
              else if (local_14 == 0x58) {
                uVar2 = 3;
                local_18 = 3;
              }
              else {
                if (local_14 != 0x60) {
                  return 6;
                }
                uVar2 = 4;
                local_18 = 4;
              }
              uVar2 = FUN_00178f04(uVar2);
              iVar1 = FUN_00177bcc(uVar2,local_18);
              if (iVar1 == 0) {
                FUN_00002898(s_Error_in_setting_the_fs_to__d_0007c6f4,local_14);
              }
              else {
                FUN_00002898(s_FS__set_to__d_0007c714,local_14);
              }
              uVar2 = 0;
            }
            else {
              local_14 = *local_c;
              iVar1 = FUN_00003d18(local_14,s_input_0007c724);
              if (iVar1 == 0) {
                if (local_8 == 3) {
                  FUN_00002fec(local_c[1],&DAT_0007c2dc,&local_14);
                  FUN_00002fec(local_c[2],&DAT_0007c2dc,&local_18);
                  if (((int)local_14 < 0x20) && (local_18 < 0x40)) {
                    uVar2 = FUN_00178f04();
                    iVar1 = FUN_001778ec(uVar2,local_14,local_18);
                    if (iVar1 == 0) {
                      FUN_00002898(s_Error_in_setting_the_utrack_madi_0007c72c);
                    }
                    else {
                      FUN_00002898(s_uTrackAddress__d__d_receives_inp_0007c758,local_14,local_14 + 7
                                   ,local_18,local_18 + 7);
                    }
                    return 0;
                  }
                  return 6;
                }
                if (local_8 == 2) {
                  FUN_00002fec(local_c[1],&DAT_0007ca6c,&local_14);
                  if (0x1f < (int)local_14) {
                    return 6;
                  }
                  uVar2 = FUN_00178f04();
                  local_18 = FUN_00177910(uVar2,(int)(local_14 +
                                                     ((uint)((int)local_14 >> 0x1f) >> 0x1d)) >> 3,0
                                         );
                  if (local_18 == 0) {
                    FUN_00002898(s_Error_in_setting_the_utrack_madi_0007c72c);
                  }
                  else {
                    FUN_00002898(s_uTrack_input_block__d_set_to_ana_0007ca70,
                                 (int)(local_14 + ((uint)((int)local_14 >> 0x1f) >> 0x1d)) >> 3);
                  }
                  return 0;
                }
              }
              local_14 = *local_c;
              iVar1 = FUN_00003d18(local_14,s_output_0007ca98);
              if ((iVar1 == 0) && (local_8 == 3)) {
                FUN_00002fec(local_c[1],&DAT_0007ca6c,&local_14);
                FUN_00002fec(local_c[2],&DAT_0007ca6c,&local_18);
                if (((int)local_14 < 0x20) && (local_18 < 0x40)) {
                  uVar2 = FUN_00178f04();
                  iVar1 = FUN_00177b7c(uVar2,local_14,local_18);
                  if (iVar1 == 0) {
                    FUN_00002898(s_Error_in_setting_the_utrack_madi_0007caa0);
                  }
                  else {
                    FUN_00002898(s_uTrackAddress__d__d_mapped_to_ma_0007cacc,local_14,local_14 + 7,
                                 local_18,local_18 + 7);
                  }
                  uVar2 = 0;
                }
                else {
                  uVar2 = 6;
                }
              }
              else {
                local_14 = *local_c;
                iVar1 = FUN_00003d18(local_14,&DAT_0007cb00);
                if ((iVar1 == 0) && (local_8 == 3)) {
                  FUN_00002fec(local_c[1],&DAT_0007ca6c,&local_14);
                  FUN_00002fec(local_c[2],&DAT_0007ca6c,&local_18);
                  if ((local_18 < 0x40) && (local_18 < 0x40)) {
                    uVar2 = FUN_00178f04();
                    iVar1 = FUN_00177be8(uVar2,local_14,local_18);
                    if (iVar1 == 0) {
                      FUN_00002898(s_Error_in_setting_the_utrack_madi_0007caa0);
                    }
                    else {
                      FUN_00002898(s_madiInAddress__d__d_receives_inp_0007cb08,local_14,local_14 + 7
                                   ,local_18,local_18 + 7);
                    }
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = 6;
                  }
                }
                else {
                  local_14 = *local_c;
                  iVar1 = FUN_00003d18(local_14,&DAT_0007cb44);
                  if (iVar1 == 0) {
                    local_14 = 0;
                    uVar2 = FUN_00178f04();
                    local_18 = FUN_001777d0(uVar2,&local_14);
                    if (local_18 == 0) {
                      FUN_00002898(s_MadiModuleId_could_not_be_read___0007cb64);
                    }
                    else {
                      FUN_00002898(s_MadiModuleId_is____x_0007cb48,local_14 & 0xff);
                    }
                    uVar2 = 0;
                  }
                  else {
                    local_14 = *local_c;
                    iVar1 = FUN_00003d18(local_14,&DAT_0007cd1c);
                    if (iVar1 == 0) {
                      local_14 = 0;
                      uVar2 = FUN_00178f04();
                      local_18 = FUN_00178164(uVar2,&local_14);
                      if (local_18 == 0) {
                        FUN_00002898(s_MadiModuleRevision_could_not_be_r_0007cd40);
                      }
                      else {
                        FUN_00002898(s_MadiModuleRevision_is____x_0007cd20,local_14 & 0xff);
                      }
                      uVar2 = 0;
                    }
                    else {
                      local_14 = *local_c;
                      iVar1 = FUN_00003d18(local_14,s_getfs_0007cd70);
                      if (iVar1 == 0) {
                        local_14 = 0xff;
                        uVar2 = FUN_00178f04();
                        local_18 = FUN_00179198(uVar2,&local_14);
                        if (local_18 == 0) {
                          FUN_00002898(s_get_Madi_FS_could_not_be_read_0007cda4);
                        }
                        else {
                          FUN_00002898(s_get_Madi_FS_in_EISO_SFI_FDF_is___0007cd78,local_14);
                        }
                        uVar2 = 0;
                      }
                      else {
                        local_14 = *local_c;
                        iVar1 = FUN_00003d18(local_14,s_getlock_0007cdc8);
                        if (iVar1 == 0) {
                          local_14 = 0;
                          uVar2 = FUN_00178f04();
                          local_18 = FUN_00177520(uVar2,&local_14);
                          if (local_18 == 0) {
                            FUN_00002898(s_Madi_lock_could_not_be_read_0007cde8);
                          }
                          else {
                            FUN_00002898(s_Madi_getlock_is__d_0007cdd0,local_14 & 0xff);
                          }
                          uVar2 = 0;
                        }
                        else {
                          local_14 = *local_c;
                          iVar1 = FUN_00003d18(local_14,s_getconn_0007ce08);
                          if (iVar1 == 0) {
                            local_14 = 0;
                            uVar2 = FUN_00178f04();
                            local_18 = FUN_00177b00(uVar2,&local_14);
                            if (local_18 == 0) {
                              FUN_00002898(s_Madi_conn_could_not_be_read_0007cfb8);
                            }
                            else {
                              FUN_00002898(s_Madi_getconn_is__d_0007ce10,local_14 & 0xff);
                            }
                            uVar2 = 0;
                          }
                          else {
                            local_14 = *local_c;
                            iVar1 = FUN_00003d18(local_14,s_get48k_0007cfd8);
                            if (iVar1 == 0) {
                              local_14 = 0;
                              uVar2 = FUN_00178f04();
                              local_18 = FUN_00176df8(uVar2,&local_14);
                              if (local_18 == 0) {
                                FUN_00002898(s_Madi_rx48k_bit_could_not_be_read_0007cff8);
                              }
                              else {
                                FUN_00002898(s_Madi_rx48k_bit_is__d_0007cfe0,local_14 & 0xff);
                              }
                              uVar2 = 0;
                            }
                            else {
                              local_14 = *local_c;
                              iVar1 = FUN_00003d18(local_14,s_get56ch_0007d01c);
                              if (iVar1 == 0) {
                                local_14 = 0;
                                uVar2 = FUN_00178f04();
                                local_18 = FUN_00177504(uVar2,&local_14);
                                if (local_18 == 0) {
                                  FUN_00002898(s_Madi_rx56ch_bit_could_not_be_rea_0007d03c);
                                }
                                else {
                                  FUN_00002898(s_Madi_56ch_bit_is__d_0007d024,local_14 & 0xff);
                                }
                                uVar2 = 0;
                              }
                              else {
                                local_14 = *local_c;
                                iVar1 = FUN_00003d18(local_14,&DAT_0007d064);
                                if ((iVar1 == 0) && (local_8 == 2)) {
                                  FUN_00002fec(local_c[1],&DAT_0007d068,&local_14);
                                  uVar2 = FUN_00178f04();
                                  iVar1 = FUN_001778c0(uVar2,local_14 & 0xff,&local_18,2);
                                  if (iVar1 == 0) {
                                    FUN_00002898(s___Madi_read_FAILED_________0007d06c);
                                  }
                                  else {
                                    FUN_00002898(s_Madi_Register__x_____x_0007d088,local_14,
                                                 local_18._1_1_);
                                  }
                                  uVar2 = 0;
                                }
                                else {
                                  uVar2 = 6;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}


// rea decompile_all
// name: FUN_00174c00
// address: 0x174c00
// body: available
// range: 0x174c00-0x175051 inclusive
// range: 0x1750f4-0x175383 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00174c00(int *param_1,int *param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,char *param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  char local_78 [68];
  int local_34;
  int *local_30;
  int local_2c [2];
  int *local_24;
  int *local_20;
  char *local_1c;
  undefined4 local_18;
  
  *param_2 = 0;
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    return -2;
  }
  if (*param_1 < 1) {
    return -10;
  }
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_000038a0(local_78,0x44);
  FUN_00175564(local_24,local_24[0xb],local_78,0x31);
  if (local_78[0] == '\0') {
    return -10;
  }
  iVar2 = FUN_001a5740(&local_34);
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar3 = FUN_001a6f50(local_1c);
  FUN_001a612c(local_34,uVar3);
  uVar3 = FUN_001a6f50(s_SIP_2_0_00175054);
  FUN_001a6782(local_34,uVar3);
  FUN_001a6730(local_34,0);
  FUN_001a669c(local_34,0);
  iVar2 = FUN_00003960(s_REGISTER_0017505c,local_1c);
  if (iVar2 == 0) {
    bVar1 = true;
    iVar2 = FUN_001a7a88(local_34 + 4);
    if ((iVar2 != 0) || (iVar2 = FUN_001a7cac(*(undefined4 *)(local_34 + 4),param_7), iVar2 != 0))
    goto LAB_0017531a;
    iVar2 = FUN_001a6734(local_34,param_6);
    if (iVar2 == 0) {
      if (*(int *)(local_34 + 0xac) != 0) {
        iVar2 = *(int *)(*(int *)(local_34 + 0xac) + 4);
        if (iVar2 != 0) {
          iVar2 = iVar2 + 0x1c;
          iVar5 = FUN_001a4d44();
          while ((0 < iVar5 &&
                 (puVar4 = (undefined4 *)FUN_001a4bdc(iVar2,0), puVar4 != (undefined4 *)0x0))) {
            iVar5 = FUN_001a6f04(*puVar4,&DAT_00175068);
            if ((iVar5 != 0) &&
               ((((iVar5 = FUN_001a6f04(*puVar4,&DAT_00175070), iVar5 != 0 &&
                  (iVar5 = FUN_001a6f04(*puVar4,s_call_id_00175074), iVar5 != 0)) &&
                 (iVar5 = FUN_001a6f04(*puVar4,&DAT_0017507c), iVar5 != 0)) &&
                ((iVar5 = FUN_001a6f04(*puVar4,&DAT_00175084), iVar5 != 0 &&
                 (iVar5 = FUN_001a6f04(*puVar4,s_contact_00175088), iVar5 != 0)))))) {
              iVar5 = FUN_001a6f04(*puVar4,s_route_00175090);
              if (iVar5 == 0) {
                FUN_001a66e8(local_34,puVar4[1]);
              }
              else {
                iVar5 = FUN_001a6f04(*puVar4,s_call_info_00175098);
                if (iVar5 == 0) {
                  FUN_001a5c68(local_34,puVar4[1]);
                }
                else {
                  iVar5 = FUN_001a6f04(*puVar4,s_accept_001750a4);
                  if (iVar5 == 0) {
                    FUN_001a585a(local_34,puVar4[1]);
                  }
                  else {
                    iVar5 = FUN_001a6f04(*puVar4,s_accept_encoding_001750ac);
                    if (iVar5 == 0) {
                      FUN_001a5898(local_34,puVar4[1]);
                    }
                    else {
                      iVar5 = FUN_001a6f04(*puVar4,s_accept_language_001750bc);
                      if (iVar5 == 0) {
                        FUN_001a5950(local_34,puVar4[1]);
                      }
                      else {
                        iVar5 = FUN_001a6f04(*puVar4,s_alert_info_001750cc);
                        if (iVar5 == 0) {
                          FUN_001a5998(local_34,puVar4[1]);
                        }
                        else {
                          iVar5 = FUN_001a6f04(*puVar4,s_allow_001750d8);
                          if (iVar5 == 0) {
                            FUN_001a59e0(local_34,puVar4[1]);
                          }
                          else {
                            iVar5 = FUN_001a6f04(*puVar4,s_content_type_001750e0);
                            if (iVar5 == 0) {
                              FUN_001a5ec0(local_34,puVar4[1]);
                            }
                            else {
                              FUN_001a6054(local_34,*puVar4,puVar4[1]);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            FUN_001a4cbc(iVar2,0);
            FUN_001a7b8c(puVar4);
            iVar5 = FUN_001a4d44(iVar2);
          }
        }
        goto LAB_00174fec;
      }
      goto LAB_00174cd8;
    }
joined_r0x00174ffa:
    if (iVar2 < 0) goto LAB_0017531a;
  }
  else {
    bVar1 = false;
    iVar2 = FUN_001a6734(local_34,local_18);
    if (iVar2 != 0) goto joined_r0x00174ffa;
    if (*(int *)(local_34 + 0xac) != 0) {
      iVar2 = *(int *)(*(int *)(local_34 + 0xac) + 4);
      if (iVar2 != 0) {
        local_30 = (int *)(iVar2 + 0x1c);
        iVar2 = FUN_001a4d44();
        while ((0 < iVar2 &&
               (puVar4 = (undefined4 *)FUN_001a4bdc(local_30,0), puVar4 != (undefined4 *)0x0))) {
          iVar2 = FUN_001a6f04(*puVar4,&DAT_00175068);
          if (((iVar2 != 0) &&
              (((iVar2 = FUN_001a6f04(*puVar4,&DAT_00175070), iVar2 != 0 &&
                (iVar2 = FUN_001a6f04(*puVar4,s_call_id_00175074), iVar2 != 0)) &&
               (iVar2 = FUN_001a6f04(*puVar4,&DAT_0017507c), iVar2 != 0)))) &&
             ((iVar2 = FUN_001a6f04(*puVar4,&DAT_00175084), iVar2 != 0 &&
              (iVar2 = FUN_001a6f04(*puVar4,s_contact_00175088), iVar2 != 0)))) {
            iVar2 = FUN_001a6f04(*puVar4,s_route_00175090);
            if (iVar2 == 0) {
              FUN_001a66e8(local_34,puVar4[1]);
            }
            else {
              iVar2 = FUN_001a6f04(*puVar4,s_call_info_00175098);
              if (iVar2 == 0) {
                FUN_001a5c68(local_34,puVar4[1]);
              }
              else {
                iVar2 = FUN_001a6f04(*puVar4,s_accept_001750a4);
                if (iVar2 == 0) {
                  FUN_001a585a(local_34,puVar4[1]);
                }
                else {
                  iVar2 = FUN_001a6f04(*puVar4,s_accept_encoding_001750ac);
                  if (iVar2 == 0) {
                    FUN_001a5898(local_34,puVar4[1]);
                  }
                  else {
                    iVar2 = FUN_001a6f04(*puVar4,s_accept_language_001750bc);
                    if (iVar2 == 0) {
                      FUN_001a5950(local_34,puVar4[1]);
                    }
                    else {
                      iVar2 = FUN_001a6f04(*puVar4,s_alert_info_001750cc);
                      if (iVar2 == 0) {
                        FUN_001a5998(local_34,puVar4[1]);
                      }
                      else {
                        iVar2 = FUN_001a6f04(*puVar4,s_allow_001750d8);
                        if (iVar2 == 0) {
                          FUN_001a59e0(local_34,puVar4[1]);
                        }
                        else {
                          iVar2 = FUN_001a6f04(*puVar4,s_content_type_001750e0);
                          if (iVar2 == 0) {
                            FUN_001a5ec0(local_34,puVar4[1]);
                          }
                          else {
                            FUN_001a6054(local_34,*puVar4,puVar4[1]);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          FUN_001a4cbc(local_30,0);
          FUN_001a7b8c(puVar4);
          iVar2 = FUN_001a4d44(local_30);
        }
      }
      if ((param_7 == (char *)0x0) || (*param_7 == '\0')) {
        iVar2 = FUN_001a7830(*(undefined4 *)(*(int *)(local_34 + 0xac) + 4),local_34 + 4);
        if (iVar2 != 0) goto LAB_0017531a;
      }
      else {
        FUN_001a6e84(&local_30);
        iVar2 = FUN_001a6e8c(local_30,param_7);
        if (iVar2 != 0) {
LAB_00174f34:
          FUN_001a6e7c(local_30);
          goto LAB_0017531a;
        }
        FUN_001a7c44(local_30[1] + 0x14,&DAT_001750f0,local_2c);
        if (local_2c[0] == 0) {
          *(int *)(local_34 + 4) = local_30[1];
          local_30[1] = 0;
          FUN_001a6e7c();
          FUN_001a66e8(local_34,local_18);
        }
        else {
          iVar2 = FUN_001a7830(*(undefined4 *)(*(int *)(local_34 + 0xac) + 4),local_34 + 4);
          if (iVar2 != 0) goto LAB_00174f34;
          FUN_001a4a80(local_34 + 0xa4,local_30,0);
        }
      }
LAB_00174fec:
      iVar2 = FUN_001a5fe4(local_34,param_6);
      if (iVar2 != 0) goto joined_r0x00174ffa;
      if (*(int *)(local_34 + 0x7c) != 0) {
        if ((bVar1) && (iVar2 = *(int *)(*(int *)(local_34 + 0x7c) + 4), iVar2 != 0)) {
          iVar2 = iVar2 + 0x1c;
          iVar5 = FUN_001a4d44();
          while ((0 < iVar5 && (iVar5 = FUN_001a4bdc(iVar2,0), iVar5 != 0))) {
            FUN_001a4cbc(iVar2,0);
            FUN_001a7b8c(iVar5);
            iVar5 = FUN_001a4d44(iVar2);
          }
        }
        if ((*(int *)(local_34 + 0xac) != 0) &&
           (iVar2 = *(int *)(*(int *)(local_34 + 0xac) + 4), iVar2 != 0)) {
          iVar5 = 0;
          iVar2 = FUN_001a4bc4(iVar2 + 0x14,0);
          while (iVar2 == 0) {
            puVar4 = (undefined4 *)
                     FUN_001a4bdc(*(int *)(*(int *)(local_34 + 0xac) + 4) + 0x14,iVar5);
            iVar2 = FUN_000034d0(*puVar4);
            if (((iVar2 == 6) && (iVar2 = FUN_001a7022(*puVar4,s_method_00175384,6), iVar2 == 0)) &&
               (puVar4[1] != 0)) {
              FUN_001a4cbc(*(int *)(*(int *)(local_34 + 0xac) + 4) + 0x14,iVar5);
              FUN_001a7b8c(puVar4);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar2 = FUN_001a4bc4(*(int *)(*(int *)(local_34 + 0xac) + 4) + 0x14,iVar5);
          }
        }
        if ((*(int *)(local_34 + 0x7c) != 0) &&
           (iVar2 = *(int *)(*(int *)(local_34 + 0x7c) + 4), iVar2 != 0)) {
          iVar5 = 0;
          iVar2 = FUN_001a4bc4(iVar2 + 0x14,0);
          while (iVar2 == 0) {
            puVar4 = (undefined4 *)
                     FUN_001a4bdc(*(int *)(*(int *)(local_34 + 0x7c) + 4) + 0x14,iVar5);
            iVar2 = FUN_000034d0(*puVar4);
            if (((iVar2 == 6) && (iVar2 = FUN_001a7022(*puVar4,s_method_00175384,6), iVar2 == 0)) &&
               (puVar4[1] != 0)) {
              FUN_001a4cbc(*(int *)(*(int *)(local_34 + 0x7c) + 4) + 0x14,iVar5);
              FUN_001a7b8c(puVar4);
              break;
            }
            iVar5 = iVar5 + 1;
            iVar2 = FUN_001a4bc4(*(int *)(*(int *)(local_34 + 0x7c) + 4) + 0x14,iVar5);
          }
        }
        if (*(int *)(local_34 + 4) != 0) {
          iVar2 = 0;
          iVar5 = FUN_001a4bc4(*(int *)(local_34 + 4) + 0x14,0);
          while (iVar5 == 0) {
            puVar4 = (undefined4 *)FUN_001a4bdc(*(int *)(local_34 + 4) + 0x14,iVar2);
            iVar5 = FUN_000034d0(*puVar4);
            if (((iVar5 == 6) && (iVar5 = FUN_001a7022(*puVar4,s_method_00175384,6), iVar5 == 0)) &&
               (puVar4[1] != 0)) {
              FUN_001a4cbc(*(int *)(local_34 + 4) + 0x14,iVar2);
              FUN_001a7b8c(puVar4);
              break;
            }
            iVar2 = iVar2 + 1;
            iVar5 = FUN_001a4bc4(*(int *)(local_34 + 4) + 0x14,iVar2);
          }
        }
        puVar4 = DAT_0017538c;
        if ((code *)*DAT_0017538c == entry) {
          iVar2 = FUN_0019b388(0x21);
        }
        else {
          iVar2 = (*(code *)*DAT_0017538c)(0x21);
        }
        uVar3 = FUN_001a2c34();
        if (iVar2 != 0) {
          FUN_000028d8(iVar2,DAT_00175390,uVar3);
        }
        uVar3 = FUN_001a6f50(&DAT_00175394);
        FUN_001a7adc(*(int *)(local_34 + 0x7c) + 8,uVar3,iVar2);
        iVar2 = FUN_001a2cf8(local_2c);
        if (iVar2 == 0) {
          if ((code *)*puVar4 == entry) {
            iVar2 = FUN_0019b388(0x21);
          }
          else {
            iVar2 = (*(code *)*puVar4)(0x21);
          }
          uVar3 = FUN_001a2c34();
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            FUN_000028d8(iVar2,DAT_00175390,uVar3);
          }
          FUN_001a2e0c(local_2c[0],iVar2);
          *(int *)(local_34 + 0x4c) = local_2c[0];
          iVar2 = FUN_001a3844(&local_30);
          if (iVar2 == 0) {
            if (bVar1) {
              puVar6 = &DAT_00175398;
            }
            else {
              puVar6 = &DAT_0017539c;
            }
            uVar3 = FUN_001a6f50(puVar6);
            FUN_001a39a4(local_30,uVar3);
            uVar3 = FUN_001a6f50(local_1c);
            FUN_001a39a0(local_30,uVar3);
            *(int **)(local_34 + 0x70) = local_30;
            if ((*local_30 == 0) || (local_30[1] == 0)) {
              FUN_001a52e0(local_34);
              return -4;
            }
            iVar2 = FUN_00178820(local_24,local_34,param_5,local_78);
            if (iVar2 == 0) {
              FUN_001a6054(local_34,s_Max_Forwards_001753a4,&DAT_001753a0);
              iVar2 = FUN_00003960(s_REGISTER_001753b4,local_1c);
              if (((iVar2 != 0) && (iVar2 = FUN_00003960(&DAT_001753c0,local_1c), iVar2 != 0)) &&
                 (iVar2 = FUN_00003960(s_OPTIONS_001753c8,local_1c), iVar2 == 0)) {
                FUN_001a585a(local_34,s_application_sdp_001753d0);
              }
              FUN_001a6054(local_34,s_User_Agent_001753e0,local_24[0x21]);
              *local_20 = local_34;
              return 0;
            }
          }
        }
        goto LAB_0017531a;
      }
    }
  }
LAB_00174cd8:
  iVar2 = -5;
LAB_0017531a:
  FUN_001a52e0(local_34);
  return iVar2;
}


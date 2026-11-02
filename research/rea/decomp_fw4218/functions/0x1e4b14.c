// rea decompile_all
// name: FUN_001e4b14
// address: 0x1e4b14
// body: available
// range: 0x1e4b14-0x1e4c59 inclusive
// range: 0x1e4c5c-0x1e4f15 inclusive
// range: 0x1e5014-0x1e5419 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e4b14(int param_1,byte *param_2,uint param_3,undefined4 param_4,uint param_5,
                 undefined4 *param_6,uint param_7,undefined4 *param_8)

{
  byte *pbVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  int extraout_r1;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined *puVar17;
  uint uVar18;
  uint uVar19;
  undefined *puVar20;
  short *psVar21;
  int iVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined4 in_stack_fffffbf4;
  undefined4 *in_stack_fffffbf8;
  undefined4 in_stack_fffffbfc;
  undefined2 uVar27;
  undefined1 auStack_3e0 [4];
  undefined1 auStack_3dc [4];
  undefined2 local_3d8;
  undefined4 local_3d4;
  undefined2 local_3d0;
  undefined2 local_3ce;
  int local_3bc;
  undefined1 uStack_7c;
  char cStack_7b;
  int local_7a;
  undefined1 auStack_74 [6];
  undefined1 auStack_6e [6];
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 *local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_30;
  int local_28;
  int iStack_24;
  byte *pbStack_20;
  uint local_1c;
  undefined4 local_18;
  
  uVar4 = (undefined2)((uint)in_stack_fffffbf4 >> 0x10);
  uVar27 = (undefined2)((uint)in_stack_fffffbfc >> 0x10);
  local_64 = param_1 + DAT_001e4f18;
  iStack_24 = param_1;
  pbStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_000039e0(&uStack_7c,DAT_001e4f1c,0x14);
  local_68 = 0;
  if (*DAT_001e4f20 != 0) {
    if (*(short *)(param_2 + 10) == 1) {
      puVar20 = &DAT_001e4f4c;
    }
    else {
      puVar20 = &DAT_001e4f24;
    }
    if (*(short *)(param_2 + 8) == 1) {
      puVar25 = &DAT_001e4f50;
    }
    else {
      puVar25 = &DAT_001e4f28;
    }
    if (*(short *)(param_2 + 6) == 1) {
      puVar17 = &DAT_001e4f58;
    }
    else {
      puVar17 = &DAT_001e4f30;
    }
    uVar14 = (uint)*(ushort *)(param_2 + 4);
    if (uVar14 == 1) {
      puVar26 = &DAT_001e4f58;
    }
    else {
      puVar26 = &DAT_001e4f30;
    }
    uVar18 = (param_7 & 0xff) << 8 | (param_7 & 0xffff) >> 8;
    in_stack_fffffbf8 = param_8;
    FUN_0002a1c6(2,DAT_001e4f34,local_18,(param_5 & 0xff) << 8 | (param_5 & 0xffff) >> 8,param_6,
                 uVar18,param_8,uVar14,puVar26,*(short *)(param_2 + 6),puVar17,
                 *(short *)(param_2 + 8),puVar25,*(short *)(param_2 + 10),puVar20,
                 (local_1c - (int)param_2) + -0xc);
    uVar4 = (undefined2)(uVar18 >> 0x10);
    uVar27 = (undefined2)(uVar14 >> 0x10);
  }
  if (param_8 != (undefined4 *)0x0) {
    local_54 = param_1 + 0x2880;
    if ((*(ushort **)(param_1 + 0x2888) != (ushort *)0x0) &&
       ((param_7 & 0xffff) == (uint)**(ushort **)(param_1 + 0x2888))) {
      local_3c = param_5 & 0xffff;
      if (*DAT_001e4f38 != 0) {
        FUN_00025d38(param_1,0,0,&DAT_001e4f3c,local_18,CONCAT22(uVar4,(short)param_5),param_6,
                     CONCAT22(uVar27,(short)param_7),param_2,local_1c);
        in_stack_fffffbf8 = param_6;
      }
      iVar5 = FUN_0002a168(param_2,local_1c,0x14);
      puVar6 = (undefined4 *)(param_1 + DAT_001e4f40);
      uVar14 = param_1 + DAT_001e4f48;
      iVar7 = param_1 + DAT_001e4f44;
      local_58 = puVar6;
      if (iVar5 != 0) {
        iVar5 = FUN_000279c8(param_1,param_2,iVar5,local_1c,0,0x80,puVar6);
        if (((iVar5 != 0) && (*(char *)(uVar14 + 0x10) != -0x10)) &&
           (*(short *)(uVar14 + 0x12) == 0x29)) {
          iVar5 = 1;
          psVar21 = (short *)(*(int *)(iVar7 + 0x10) + 4);
          FUN_001c6eb0((*(int *)(iVar7 + 0x10) + (uint)*(ushort *)(uVar14 + 0x1c) + 4) -
                       (int)psVar21);
          puVar6 = (undefined4 *)(extraout_r1 + 1);
          if (1 < (int)puVar6) {
            do {
              if (*psVar21 == 2) {
                local_68 = *(uint *)(psVar21 + 2);
              }
              else if ((*psVar21 == 4) && ((char)psVar21[2] == '\0')) {
                FUN_000039e0(&uStack_7c,psVar21 + 2,0x14);
              }
              psVar21 = psVar21 + 0xc;
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)puVar6);
          }
        }
        *(undefined1 *)(uVar14 + 0x10) = 0;
        in_stack_fffffbf8 = puVar6;
      }
      local_48 = param_1 + DAT_001e4f60;
      FUN_000291f8(local_48,uVar14 & 0xffff0000 | (uint)*param_2 | (uint)param_2[1] << 8,
                   *DAT_001e4f5c);
      iVar5 = DAT_001e4f6c;
      uVar4 = (undefined2)((uint)in_stack_fffffbf8 >> 0x10);
      iVar15 = param_1 + DAT_001e4f68;
      if ((local_68 == 0) || (local_7a == 0)) {
        if (*(int *)(DAT_001e4f64 + 4) < 100) {
          *(int *)(DAT_001e4f64 + 4) = *(int *)(DAT_001e4f64 + 4) + 1;
          if (local_7a == 0) {
            pcVar11 = s_No_owner_001e4fa8;
          }
          else {
            pcVar11 = &DAT_001e4f2c;
          }
          if (local_68 == 0) {
            pcVar12 = s_No_lease_001e4fb4;
          }
          else {
            pcVar12 = &DAT_001e4f2c;
          }
          FUN_0002a1c6(0,s___Refusing_sleep_proxy_registrat_001e4f72 + 2,local_18,
                       (param_5 & 0xff) << 8 | (param_5 & 0xffff) >> 8,pcVar12,pcVar11);
        }
        *(byte *)(iVar15 + 0x17) = *(byte *)(iVar15 + 0x17) | 1;
      }
      else {
        local_5c = param_1 + 0x3600;
        iVar22 = *(int *)(param_1 + 0x3638);
        uVar3 = *(ushort *)(param_2 + 8);
        iVar16 = iVar22 + (uint)uVar3;
        if (DAT_001e4f6c < iVar16) {
          if (*(int *)(DAT_001e4f64 + 8) < 100) {
            *(int *)(DAT_001e4f64 + 8) = *(int *)(DAT_001e4f64 + 8) + 1;
            FUN_0002a1c6(0,_DAT_001e4f70,local_18,(param_5 & 0xff) << 8 | (param_5 & 0xffff) >> 8,
                         iVar22,(uint)uVar3,iVar16,iVar5);
            uVar4 = (undefined2)((uint)iVar16 >> 0x10);
          }
          *(byte *)(iVar15 + 0x17) = *(byte *)(iVar15 + 0x17) | 5;
        }
        else {
          if (*DAT_001e4f20 != 0) {
            FUN_0002a1c6(2,s_Received_Update_for_H_MAC___6a_I_001e4fc0,&local_7a,auStack_74,
                         auStack_6e,(int)cStack_7b);
          }
          if (DAT_001e5000 < local_68) {
            local_68 = DAT_001e5000;
          }
          uVar18 = FUN_00006604(0x40000000,*DAT_001e5004);
          if (uVar18 < local_68) {
            local_68 = uVar18;
          }
          uVar18 = FUN_0002a0d6(param_2,local_1c);
          local_60 = 0;
          iVar5 = param_1 + 0x1f80;
          local_44 = param_1 + DAT_001e5008;
          local_4c = param_1 + 0x100;
          local_28 = param_1 + 0x7c00;
          local_30 = param_1 + 0x37;
          local_40 = param_1 + 0xc0;
LAB_001e5340:
          uVar4 = (undefined2)((uint)in_stack_fffffbf8 >> 0x10);
          if ((((int)(uint)*(ushort *)(param_2 + 8) <= local_60) || (uVar18 == 0)) ||
             (local_1c <= uVar18)) goto LAB_001e535c;
          in_stack_fffffbf8 = local_58;
          uVar18 = FUN_000279c8(param_1,param_2,uVar18,local_1c,param_8,0xa0,local_58);
          uVar4 = (undefined2)((uint)in_stack_fffffbf8 >> 0x10);
          if ((uVar18 == 0) || (*(char *)(uVar14 + 0x10) == -0x10)) {
LAB_001e5334:
            *(undefined1 *)(uVar14 + 0x10) = 0;
            local_60 = local_60 + 1;
            goto LAB_001e5340;
          }
          sVar2 = *(short *)(local_44 + 2);
          if (sVar2 == 6) {
            uVar19 = 0x214;
          }
          else if (sVar2 == 0x11) {
            uVar19 = 0x200;
          }
          else {
            uVar19 = DAT_001e500c;
            if (sVar2 != 0x1a) {
              if (sVar2 == 0x2f) {
                uVar19 = 0x20;
              }
              else {
                uVar19 = (uint)*(ushort *)(local_44 + 0xc);
              }
            }
          }
          iVar16 = FUN_001e5788(uVar19 + 0x25c);
          if (iVar16 != 0) {
            if ((int)((uint)*(byte *)(uVar14 + 0x10) << 0x1b) < 0) {
              local_50 = 2;
            }
            else {
              local_50 = 8;
            }
            *(ushort *)(uVar14 + 0x14) = *(ushort *)(uVar14 + 0x14) & 0x7fff;
            FUN_00023a84(param_1,&uStack_7c,*(undefined4 *)(iVar5 + 0x3c));
            FUN_00023a84(param_1,&uStack_7c,*(undefined4 *)(iVar5 + 0x38));
            in_stack_fffffbf8 = (undefined4 *)0x0;
            FUN_001e9a9c(iVar16,0,param_8,*(undefined2 *)(uVar14 + 0x12),
                         *(undefined4 *)(local_28 + 0x38),local_50,0,DAT_001e5010,iVar16);
            uVar8 = FUN_00025d12(*(int *)(iVar7 + 0xc),*(int *)(iVar7 + 0xc) + 0x100);
            if (uVar8 < 0x101) {
              FUN_001e57d8(iVar16 + 0x158,*(undefined4 *)(iVar7 + 0xc),uVar8);
            }
            else {
              *(undefined1 *)(iVar16 + 0x158) = 0;
            }
            uVar4 = FUN_0002813a(local_44,0);
            *(undefined2 *)(iVar16 + 0x10) = uVar4;
            **(undefined2 **)(iVar16 + 0x24) = (short)uVar19;
            FUN_001e57d8(*(int *)(iVar16 + 0x24) + 4,*(int *)(iVar7 + 0x10) + 4,uVar19);
            *(undefined1 *)(iVar16 + 0x46) = 1;
            FUN_000039e0(iVar16 + 0x47,&uStack_7c,0x14);
            if (*(short *)(uVar14 + 0x12) == 0xc) {
              uVar23 = *(undefined4 *)(iVar7 + 0xc);
              iVar22 = FUN_00024984(uVar23);
              if (-1 < iVar22 + -2) {
                uVar23 = thunk_FUN_0004488c(uVar23,iVar22 + -2);
                iVar22 = FUN_000400ea(uVar23,&DAT_001e541c);
                if (iVar22 == 0) {
                  iVar22 = FUN_000400ea(uVar23,&DAT_001e5430);
                  if (iVar22 != 0) {
                    uVar23 = *(undefined4 *)(iVar7 + 0xc);
                    puVar6 = (undefined4 *)(iVar16 + 0x5c);
                    iVar22 = FUN_00024984(uVar23);
                    if (iVar22 + -0x22 < 0) {
                      FUN_0002a1c6(0,s_GetIPFromName__Need_34_labels_in_001e543c,uVar23);
                    }
                    else {
                      pcVar11 = (char *)thunk_FUN_0004488c(uVar23,iVar22 + -0x22);
                      iVar22 = 0;
                      do {
                        if (*pcVar11 != '\x01') goto LAB_001e5294;
                        uVar19 = (uint)(byte)pcVar11[1];
                        uVar8 = uVar19 - 0x30;
                        if (9 < uVar8) {
                          if (uVar19 - 0x41 < 6) {
                            uVar8 = uVar19 - 0x37;
                          }
                          else if (uVar19 - 0x61 < 6) {
                            uVar8 = uVar19 - 0x57;
                          }
                          else {
                            uVar8 = 0xffffffff;
                          }
                        }
                        if (pcVar11[2] != '\x01') goto LAB_001e5294;
                        uVar19 = (uint)(byte)pcVar11[3];
                        uVar24 = uVar19 - 0x30;
                        if (9 < uVar24) {
                          if (uVar19 - 0x41 < 6) {
                            uVar24 = uVar19 - 0x37;
                          }
                          else if (uVar19 - 0x61 < 6) {
                            uVar24 = uVar19 - 0x57;
                          }
                          else {
                            uVar24 = 0xffffffff;
                          }
                        }
                        pcVar11 = pcVar11 + 4;
                        if (((int)uVar8 < 0) || ((int)uVar24 < 0)) goto LAB_001e5294;
                        iVar9 = iVar22 + 1;
                        *(byte *)((int)puVar6 + (0x13 - iVar22)) = (byte)(uVar24 << 4) | (byte)uVar8
                        ;
                        iVar22 = iVar9;
                      } while (iVar9 < 0x10);
                      *puVar6 = 6;
                    }
                  }
                }
                else {
                  in_stack_fffffbf8 = (undefined4 *)(iVar16 + 0x5c);
                  uVar23 = *(undefined4 *)(iVar7 + 0xc);
                  iVar22 = FUN_00024984();
                  iVar9 = iVar22 + -6;
                  if (iVar9 < 0) {
                    FUN_0002a1c6(0,DAT_001e542c,uVar23);
                  }
                  else {
                    pbVar10 = (byte *)thunk_FUN_0004488c(uVar23,iVar22 + -3);
                    iVar22 = 0;
                    if (*pbVar10 - 1 < 3) {
                      iVar13 = 1;
                      uVar19 = *pbVar10 + 1;
                      if (1 < uVar19) {
                        do {
                          pbVar1 = pbVar10 + iVar13;
                          if (9 < *pbVar1 - 0x30) goto LAB_001e5294;
                          iVar13 = iVar13 + 1;
                          iVar22 = (uint)*pbVar1 + iVar22 * 10 + -0x30;
                        } while (iVar13 < (int)uVar19);
                        if (0xff < iVar22) goto LAB_001e5294;
                      }
                      *(char *)(in_stack_fffffbf8 + 1) = (char)iVar22;
                      pbVar10 = (byte *)thunk_FUN_0004488c(uVar23,iVar9 + 2);
                      iVar22 = 0;
                      if (*pbVar10 - 1 < 3) {
                        iVar13 = 1;
                        uVar19 = *pbVar10 + 1;
                        if (1 < uVar19) {
                          do {
                            pbVar1 = pbVar10 + iVar13;
                            if (9 < *pbVar1 - 0x30) goto LAB_001e5294;
                            iVar13 = iVar13 + 1;
                            iVar22 = (uint)*pbVar1 + iVar22 * 10 + -0x30;
                          } while (iVar13 < (int)uVar19);
                          if (0xff < iVar22) goto LAB_001e5294;
                        }
                        *(char *)((int)in_stack_fffffbf8 + 5) = (char)iVar22;
                        pbVar10 = (byte *)thunk_FUN_0004488c(uVar23,iVar9 + 1);
                        iVar22 = 0;
                        if (*pbVar10 - 1 < 3) {
                          iVar13 = 1;
                          uVar19 = *pbVar10 + 1;
                          if (1 < uVar19) {
                            do {
                              pbVar1 = pbVar10 + iVar13;
                              if (9 < *pbVar1 - 0x30) goto LAB_001e5294;
                              iVar13 = iVar13 + 1;
                              iVar22 = (uint)*pbVar1 + iVar22 * 10 + -0x30;
                            } while (iVar13 < (int)uVar19);
                            if (0xff < iVar22) goto LAB_001e5294;
                          }
                          *(char *)((int)in_stack_fffffbf8 + 6) = (char)iVar22;
                          pbVar10 = (byte *)thunk_FUN_0004488c(uVar23,iVar9);
                          iVar22 = 0;
                          if (*pbVar10 - 1 < 3) {
                            iVar9 = 1;
                            uVar19 = *pbVar10 + 1;
                            if (1 < uVar19) {
                              do {
                                pbVar1 = pbVar10 + iVar9;
                                if (9 < *pbVar1 - 0x30) goto LAB_001e5294;
                                iVar9 = iVar9 + 1;
                                iVar22 = (uint)*pbVar1 + iVar22 * 10 + -0x30;
                              } while (iVar9 < (int)uVar19);
                              if (0xff < iVar22) goto LAB_001e5294;
                            }
                            *(char *)((int)in_stack_fffffbf8 + 7) = (char)iVar22;
                            *in_stack_fffffbf8 = 4;
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_001e5294:
              if (*(int *)(iVar16 + 0x5c) != 0) {
                if ((*(undefined4 **)(local_54 + 4) != (undefined4 *)0x0) &&
                   (*(undefined4 **)(local_54 + 4) != param_8)) {
                  FUN_001e5ae8(param_1);
                }
                *(undefined4 **)(local_54 + 4) = param_8;
              }
            }
            *(undefined4 *)(iVar16 + 0x70) = *(undefined4 *)(local_40 + 0x1c);
            iVar22 = *(int *)(local_40 + 0x1c) + *DAT_001e547c * local_68;
            *(int *)(iVar16 + 0x74) = iVar22;
            if (0 < *(int *)(local_4c + 4) - iVar22) {
              *(int *)(local_4c + 4) = iVar22;
            }
            FUN_001e8d78(param_1,iVar16);
            if (((*(uint *)(param_1 + 4) & 1) != 0) && (*(short *)(iVar16 + 6) == 0x1c)) {
              *(undefined4 *)(iVar16 + 0xc) = 0;
            }
            *(int *)(local_5c + 0x38) = *(int *)(local_5c + 0x38) + 1;
            FUN_001ead94(param_1);
            if (*_DAT_001e5480 != 0) {
              uVar23 = FUN_00028288(iVar16 + 4,*(int *)(iVar16 + 0x24) + 4,local_30);
              FUN_0002a1c6(2,s____SPS_Registered__4d__X__s_001e5481 + 3,
                           *(undefined4 *)(local_5c + 0x38),local_50,uVar23);
            }
            goto LAB_001e5334;
          }
          *(byte *)(iVar15 + 0x17) = *(byte *)(iVar15 + 0x17) | 5;
LAB_001e535c:
          if ((*(byte *)(iVar15 + 0x17) & 0xf) == 0) {
            uVar4 = 0;
            FUN_001e9a9c(auStack_3e0,0,*DAT_001e54e4,0x29,DAT_001e54e0,0x20,0,0,0);
            local_3d8 = 0x5a0;
            local_3d0 = 0x18;
            local_3ce = 0x18;
            *(undefined2 *)(local_3bc + 4) = 2;
            *(uint *)(local_3bc + 8) = local_68;
            local_64 = FUN_0003ef54(local_48,local_64,param_1 + DAT_001e54e8,auStack_3dc,local_3d4,
                                    local_58);
          }
          else {
            FUN_0002a1c6(0,s_Refusing_sleep_proxy_registratio_001e54a0,local_18,
                         (param_5 & 0xff) << 8 | (param_5 & 0xffff) >> 8);
            FUN_00023c10(param_1,&uStack_7c,*(undefined4 *)(iVar5 + 0x3c));
            FUN_00023c10(param_1,&uStack_7c,*(undefined4 *)(iVar5 + 0x38));
          }
        }
      }
      if (local_64 != 0) {
        FUN_001e5b84(param_1,local_48,local_64,param_8,*(undefined4 *)(local_54 + 8),local_18,
                     CONCAT22(uVar4,(short)local_3c),0,0);
      }
    }
  }
  return;
}


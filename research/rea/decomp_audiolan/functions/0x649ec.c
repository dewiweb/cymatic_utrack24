// rea decompile_all
// name: FUN_000649ec
// address: 0x649ec
// body: available
// range: 0x649ec-0x64d6b inclusive
// range: 0x64ddc-0x65447 inclusive
// range: 0x654a8-0x6576f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000649ec(int *param_1,int *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint extraout_r1;
  uint uVar12;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint extraout_r1_06;
  uint uVar13;
  char *pcVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined4 local_c8 [15];
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [28];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(char *)s_D___Too_few_parameters_entered_00064d6c._0_4_ == '\0') {
    FUN_000028a4(s_No_SDS_available_00064d8c);
    return 0;
  }
  if (param_3 < 2) {
    FUN_000028a4(s_D___Too_few_parameters_entered_00064d6c + 4);
    return 2;
  }
  if (2 < param_3) {
    FUN_000028a4(s_Too_many_parameters_entered_00064da0);
    return 2;
  }
  uVar13 = 0;
  if (param_3 != 0) {
    do {
      iVar4 = FUN_000034d0(param_2[uVar13]);
      if (*(char *)(param_2[uVar13] + iVar4 + -1) == '*') {
        local_c8[0] = 1;
        uVar13 = (**(code **)(*param_1 + 0x20))(param_1,9,param_2,param_3);
        return uVar13;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_3);
  }
  iVar4 = *DAT_00064dc0;
  if (iVar4 == 0) {
    return 1;
  }
  iVar5 = FUN_000034d0(*param_2);
  iVar6 = *param_2;
  FUN_000e1e1c(auStack_4c,iVar4 + 0xfc);
  uVar7 = FUN_001b987c(auStack_40,0);
  FUN_0014f7b8(auStack_68,uVar7);
  FUN_001b98a8(auStack_40);
  pcVar14 = (char *)(iVar6 + iVar5 + -1);
  iVar6 = iVar5;
  for (; (iVar6 != 0 && (*pcVar14 != '/' && *pcVar14 != '\\')); pcVar14 = pcVar14 + -1) {
    iVar6 = iVar6 + -1;
  }
  uVar13 = FUN_000b285c(param_1,*param_2,iVar5 - iVar6);
  if (uVar13 != 0) {
    FUN_000e1e54(iVar4 + 0xfc,auStack_4c);
    FUN_0014f868(auStack_68);
    FUN_000e1e40(auStack_4c);
    return uVar13;
  }
  iVar8 = *param_2;
  iVar5 = FUN_0015c970(iVar4 + 0xfc);
  uVar7 = DAT_00064dc4;
  uStack_78 = DAT_00064dc4;
  uStack_74 = 0;
  FUN_00065b7c(&uStack_78,param_2[1]);
  uVar13 = 1;
  do {
    if (iVar5 == 0) {
      FUN_000028a4(s_No_leaf_name___s__found_000657c0,*param_2);
      goto LAB_00065724;
    }
    iVar5 = iVar5 + -1;
    FUN_000e1cfc(iVar4 + 0xfc,iVar5);
    FUN_0015c8fc(iVar4 + 0xfc,auStack_68);
    iVar9 = FUN_001609a4(auStack_68,iVar8 + iVar6);
  } while (iVar9 == 0);
  iVar6 = FUN_0015c938(iVar4 + 0xfc);
  if (iVar6 == DAT_00064dc8) {
    uVar13 = FUN_00003196(param_2[1]);
    puVar10 = (undefined4 *)FUN_000b61f0(local_c8);
    uVar11 = DAT_00064dcc;
    puVar10[0x10] = uVar13;
    *puVar10 = uVar11;
    iVar6 = FUN_000e1dac(iVar4 + 0xfc,local_c8);
    uVar11 = DAT_00064dd0;
    if (iVar6 == 0) goto LAB_0006565c;
    FUN_001a0700();
    uVar12 = extraout_r1;
    if (iStack_8c != 0) {
      uVar12 = (uint)*(byte *)(iStack_8c + 0x40);
    }
    if ((iStack_8c != 0 && uVar12 != 3) && uVar12 != 4) {
      if (uVar12 != 1) {
        bVar15 = uVar12 != 2;
        if (bVar15) {
          uVar12 = *(uint *)(iStack_8c + 0x44);
        }
        if (!bVar15 || uVar12 == uVar13) goto LAB_00064ca0;
      }
      *(uint *)(iStack_8c + 0x44) = uVar13;
      (**(code **)(*(int *)(iStack_8c + 0x24) + 8))();
    }
  }
  else if (iVar6 == DAT_00064dd4) {
    uVar13 = FUN_00003220(param_2[1],0);
    puVar10 = (undefined4 *)FUN_000b61f0(local_c8);
    uVar11 = DAT_00064dd8;
    puVar10[0x10] = uVar13;
    *puVar10 = uVar11;
    iVar6 = FUN_000e1dac(iVar4 + 0xfc,local_c8);
    uVar11 = DAT_00064dd0;
    if (iVar6 == 0) {
LAB_00065224:
      FUN_000028a4(s___No_sysDataProxy_available_0006546e + 2);
      FUN_000b61b4(local_c8,local_c8);
      FUN_000b6230(local_c8);
      uVar13 = 1;
      goto LAB_00065724;
    }
    FUN_001a0700();
    uVar12 = 0;
    if (iStack_8c != 0) {
      uVar12 = (uint)*(byte *)(iStack_8c + 0x40);
    }
    if ((iStack_8c != 0 && uVar12 != 3) && uVar12 != 4) {
      if (uVar12 != 1) {
        bVar15 = uVar12 != 2;
        if (bVar15) {
          uVar12 = *(uint *)(iStack_8c + 0x44);
        }
        if (!bVar15 || uVar12 == uVar13) goto LAB_00064ca0;
      }
      *(uint *)(iStack_8c + 0x44) = uVar13;
      (**(code **)(*(int *)(iStack_8c + 0x24) + 8))((int *)(iStack_8c + 0x24));
    }
  }
  else if (iVar6 == DAT_00065448) {
    bVar2 = FUN_000031b0(param_2[1],0);
    puVar10 = (undefined4 *)FUN_000b61f0(local_c8);
    uVar11 = DAT_0006544c;
    *(byte *)(puVar10 + 0x10) = bVar2;
    *puVar10 = uVar11;
    iVar6 = FUN_000e1dac(iVar4 + 0xfc,local_c8);
    uVar11 = DAT_00064dd0;
    if (iVar6 == 0) goto LAB_0006565c;
    FUN_001a0700();
    uVar13 = extraout_r1_00;
    if (iStack_8c != 0) {
      uVar13 = (uint)*(byte *)(iStack_8c + 0x40);
    }
    if ((iStack_8c != 0 && uVar13 != 3) && uVar13 != 4) {
      if (uVar13 != 1) {
        bVar15 = uVar13 != 2;
        if (bVar15) {
          uVar13 = (uint)*(byte *)(iStack_8c + 0x41);
        }
        if (!bVar15 || uVar13 == bVar2) goto LAB_00064ca0;
      }
      *(byte *)(iStack_8c + 0x41) = bVar2;
      (**(code **)(*(int *)(iStack_8c + 0x24) + 8))();
    }
  }
  else {
    if (iVar6 != DAT_00065450) {
      if (iVar6 != DAT_00065458) {
        if (iVar6 == DAT_00065460) {
          iVar6 = FUN_00065c88(&uStack_38,&uStack_78);
          puVar10 = (undefined4 *)FUN_000b61f0(local_c8);
          *puVar10 = DAT_00065464;
          iVar5 = FUN_00065c88(puVar10 + 0x10,iVar6);
          *(undefined4 *)(iVar5 + -0x40) = DAT_00065468;
          iVar5 = FUN_000e1dac(iVar4 + 0xfc,local_c8);
          uVar11 = DAT_00064dd0;
          if (iVar5 == 0) {
            FUN_000028a4(s___No_sysDataProxy_available_0006546e + 2);
            FUN_000b61b4(local_c8,local_c8);
            uStack_88 = uVar7;
            FUN_0019f30c(uStack_84);
            FUN_000b6230(local_c8);
            uVar13 = 1;
          }
          else {
            FUN_001a0700();
            cVar1 = '\0';
            if (iStack_8c != 0) {
              cVar1 = *(char *)(iStack_8c + 0x40);
            }
            if ((iStack_8c != 0 && cVar1 != '\x03') && cVar1 != '\x04') {
              if (cVar1 == '\x01') {
LAB_000650c0:
                FUN_00065ce0(iStack_8c + 0x44,iVar6);
                (**(code **)(*(int *)(iStack_8c + 0x24) + 8))((int *)(iStack_8c + 0x24));
              }
              else if (cVar1 != '\x02') {
                iVar5 = *(int *)(iVar6 + 4);
                if (*(int *)(iVar6 + 4) == 0) {
                  iVar5 = _DAT_0006546c;
                }
                iVar8 = *(int *)(iStack_8c + 0x48);
                if (*(int *)(iStack_8c + 0x48) == 0) {
                  iVar8 = _DAT_0006546c;
                }
                iVar5 = FUN_00003960(iVar8,iVar5);
                if (iVar5 != 0) goto LAB_000650c0;
              }
            }
            FUN_001a0d18(uVar11);
            FUN_000b61b4(local_c8,local_c8);
            uStack_88 = uVar7;
            FUN_0019f30c(uStack_84);
            FUN_000b6230(local_c8);
            uVar13 = 0;
          }
          uStack_38 = uVar7;
        }
        else {
          if (iVar6 == DAT_0006548c) {
            iVar6 = FUN_00003220(param_2[1],0);
            bVar15 = iVar6 != 0;
            puVar10 = (undefined4 *)FUN_000b61f0(local_c8);
            uVar11 = DAT_00065490;
            *(bool *)(puVar10 + 0x10) = bVar15;
            *puVar10 = uVar11;
            iVar6 = FUN_000e1dac(iVar4 + 0xfc,local_c8);
            uVar11 = DAT_00064dd0;
            if (iVar6 == 0) goto LAB_00065224;
            FUN_001a0700();
            uVar13 = extraout_r1_03;
            if (iStack_8c != 0) {
              uVar13 = (uint)*(byte *)(iStack_8c + 0x40);
            }
            if ((iStack_8c != 0 && uVar13 != 3) && uVar13 != 4) {
              if (uVar13 != 1) {
                bVar16 = uVar13 != 2;
                if (bVar16) {
                  uVar13 = (uint)*(byte *)(iStack_8c + 0x41);
                }
                if (!bVar16 || uVar13 == bVar15) goto LAB_00064ca0;
              }
              *(bool *)(iStack_8c + 0x41) = bVar15;
              (**(code **)(*(int *)(iStack_8c + 0x24) + 8))();
            }
            goto LAB_00064ca0;
          }
          if (iVar6 == DAT_00065494) {
            uVar17 = FUN_0017dfc4(param_2[1]);
            puVar10 = (undefined4 *)FUN_000b61f0(local_c8);
            uVar11 = DAT_00065498;
            *puVar10 = DAT_0006549c;
            *(undefined8 *)(puVar10 + 0x10) = uVar17;
            iVar6 = FUN_000e1dac(iVar4 + 0xfc,local_c8,uVar11);
            uVar11 = DAT_00064dd0;
            if (iVar6 == 0) {
              FUN_000028a4(s___No_sysDataProxy_available_0006546e + 2);
              FUN_000b61b4(local_c8,local_c8);
              FUN_000b6230(local_c8);
              uVar13 = 1;
            }
            else {
              FUN_001a0700();
              uVar13 = extraout_r1_04;
              if (iStack_8c != 0) {
                uVar13 = (uint)*(byte *)(iStack_8c + 0x44);
              }
              if (((iStack_8c != 0 && uVar13 != 3) && uVar13 != 4) &&
                 ((uVar13 == 1 ||
                  ((bVar15 = uVar13 == 2, !bVar15 &&
                   (FUN_001e33d8(*(undefined4 *)(iStack_8c + 0x48),*(undefined4 *)(iStack_8c + 0x4c)
                                 ,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20)), !bVar15)))))) {
                *(undefined8 *)(iStack_8c + 0x48) = uVar17;
                (**(code **)(*(int *)(iStack_8c + 0x28) + 8))((int *)(iStack_8c + 0x28));
              }
              FUN_001a0d18(uVar11);
              FUN_000b61b4(local_c8,local_c8);
              FUN_000b6230(local_c8);
              uVar13 = 0;
            }
            goto LAB_00065724;
          }
          if (iVar6 == DAT_000654a0) {
            uVar13 = FUN_000031b0(param_2[1],0);
            puVar10 = (undefined4 *)FUN_000b61f0(local_c8);
            uVar11 = DAT_000654a4;
            puVar10[0x10] = uVar13;
            *puVar10 = uVar11;
            iVar6 = FUN_000e1dac(iVar4 + 0xfc,local_c8);
            uVar11 = DAT_00064dd0;
            if (iVar6 == 0) {
LAB_0006565c:
              FUN_000028a4(s___No_sysDataProxy_available_0006546e + 2);
              FUN_000b61b4(local_c8,local_c8);
              FUN_000b6230(local_c8);
              uVar13 = 1;
              goto LAB_00065724;
            }
            FUN_001a0700(DAT_00064dd0);
            uVar12 = extraout_r1_05;
            if (iStack_8c != 0) {
              uVar12 = (uint)*(byte *)(iStack_8c + 0x40);
            }
            if ((iStack_8c != 0 && uVar12 != 3) && uVar12 != 4) {
              if (uVar12 != 1) {
                bVar15 = uVar12 != 2;
                if (bVar15) {
                  uVar12 = *(uint *)(iStack_8c + 0x44);
                }
                if (!bVar15 || uVar12 == uVar13) goto LAB_00064ca0;
              }
              *(uint *)(iStack_8c + 0x44) = uVar13;
              (**(code **)(*(int *)(iStack_8c + 0x24) + 8))();
            }
            goto LAB_00064ca0;
          }
          if (iVar6 == DAT_00065770) {
            puVar10 = (undefined4 *)FUN_000b61f0(local_c8);
            uVar11 = DAT_00065774;
            puVar10[0x10] = 0;
            *puVar10 = uVar11;
            iVar6 = FUN_000e1dac(iVar4 + 0xfc,local_c8);
            uVar11 = DAT_00064dd0;
            if (iVar6 == 0) goto LAB_0006565c;
            FUN_001a0700();
            uVar13 = 0;
            if (iStack_8c != 0) {
              uVar13 = (uint)*(byte *)(iStack_8c + 0x40);
            }
            if ((iStack_8c != 0 && uVar13 != 3) && uVar13 != 4) {
              if (uVar13 != 1) {
                bVar15 = uVar13 != 2;
                if (bVar15) {
                  uVar13 = *(uint *)(iStack_8c + 0x44);
                }
                if (!bVar15 || uVar13 == 0) goto LAB_00065554;
              }
              *(undefined4 *)(iStack_8c + 0x44) = 0;
              (**(code **)(*(int *)(iStack_8c + 0x24) + 8))((int *)(iStack_8c + 0x24));
            }
LAB_00065554:
            FUN_001a0d18(uVar11);
            FUN_000b61b4(local_c8,local_c8);
            FUN_000b6230(local_c8);
            uVar13 = 0;
            goto LAB_00065724;
          }
          if (iVar6 == DAT_00065778) {
            uVar3 = FUN_00003220(param_2[1],0);
            puVar10 = (undefined4 *)FUN_000b61f0(local_c8);
            uVar11 = DAT_0006577c;
            *(ushort *)(puVar10 + 0x10) = uVar3;
            *puVar10 = uVar11;
            iVar6 = FUN_000e1dac(iVar4 + 0xfc,local_c8);
            uVar11 = DAT_00064dd0;
            if (iVar6 == 0) goto LAB_0006565c;
            FUN_001a0700(DAT_00064dd0);
            uVar13 = extraout_r1_06;
            if (iStack_8c != 0) {
              uVar13 = (uint)*(byte *)(iStack_8c + 0x40);
            }
            if ((iStack_8c != 0 && uVar13 != 3) && uVar13 != 4) {
              if (uVar13 != 1) {
                bVar15 = uVar13 != 2;
                if (bVar15) {
                  uVar13 = (uint)*(ushort *)(iStack_8c + 0x42);
                }
                if (!bVar15 || uVar13 == uVar3) goto LAB_00064ff0;
              }
              *(ushort *)(iStack_8c + 0x42) = uVar3;
              (**(code **)(*(int *)(iStack_8c + 0x24) + 8))();
            }
            goto LAB_00064ff0;
          }
          if (iVar6 != DAT_00065780) {
            iVar6 = FUN_0015cb14(iVar4 + 0xfc,0);
            if (iVar6 == 0) {
              FUN_000028a4(s____Not_possible_to_set_this_syst_00065786 + 2);
              uVar13 = 1;
            }
            goto LAB_00065724;
          }
          uVar11 = FUN_00065c88(&uStack_70,&uStack_78);
          FUN_000acc64(local_c8);
          iVar6 = FUN_000e1dac(iVar4 + 0xfc,local_c8);
          if (iVar6 == 0) {
            FUN_000028a4(_DAT_00065784);
            FUN_000acc88(local_c8);
          }
          else {
            FUN_000acc3c(local_c8,uVar11);
            FUN_000acc88(local_c8);
          }
          uVar13 = (uint)(iVar6 == 0);
          uStack_70 = uVar7;
          uStack_34 = uStack_6c;
        }
        FUN_0019f30c(uStack_34);
        goto LAB_00065724;
      }
      uVar13 = param_2[1];
      puVar10 = (undefined4 *)FUN_000b61f0(local_c8);
      uVar11 = DAT_0006545c;
      puVar10[0x10] = uVar13;
      *puVar10 = uVar11;
      iVar6 = FUN_000e1dac(iVar4 + 0xfc,local_c8);
      uVar11 = DAT_00064dd0;
      if (iVar6 == 0) goto LAB_0006565c;
      FUN_001a0700(DAT_00064dd0);
      uVar12 = extraout_r1_02;
      if (iStack_8c != 0) {
        uVar12 = (uint)*(byte *)(iStack_8c + 0x40);
      }
      if ((iStack_8c != 0 && uVar12 != 3) && uVar12 != 4) {
        if (uVar12 != 1) {
          bVar15 = uVar12 != 2;
          if (bVar15) {
            uVar12 = *(uint *)(iStack_8c + 0x44);
          }
          if (!bVar15 || uVar12 == uVar13) goto LAB_00064ff0;
        }
        *(uint *)(iStack_8c + 0x44) = uVar13;
        (**(code **)(*(int *)(iStack_8c + 0x24) + 8))();
      }
LAB_00064ff0:
      FUN_001a0d18(uVar11);
      FUN_000b61b4(local_c8,local_c8);
      FUN_000b6230(local_c8);
      uVar13 = 0;
      goto LAB_00065724;
    }
    bVar2 = FUN_00003220(param_2[1],0);
    puVar10 = (undefined4 *)FUN_000b61f0(local_c8);
    uVar11 = DAT_00065454;
    *(byte *)(puVar10 + 0x10) = bVar2;
    *puVar10 = uVar11;
    iVar6 = FUN_000e1dac(iVar4 + 0xfc,local_c8);
    uVar11 = DAT_00064dd0;
    if (iVar6 == 0) goto LAB_00065224;
    FUN_001a0700(DAT_00064dd0);
    uVar13 = extraout_r1_01;
    if (iStack_8c != 0) {
      uVar13 = (uint)*(byte *)(iStack_8c + 0x40);
    }
    if ((iStack_8c != 0 && uVar13 != 3) && uVar13 != 4) {
      if (uVar13 != 1) {
        bVar15 = uVar13 != 2;
        if (bVar15) {
          uVar13 = (uint)*(byte *)(iStack_8c + 0x41);
        }
        if (!bVar15 || uVar13 == bVar2) goto LAB_00064ca0;
      }
      *(byte *)(iStack_8c + 0x41) = bVar2;
      (**(code **)(*(int *)(iStack_8c + 0x24) + 8))();
    }
  }
LAB_00064ca0:
  FUN_001a0d18(uVar11);
  FUN_000b61b4(local_c8,local_c8);
  FUN_000b6230(local_c8);
  uVar13 = 0;
LAB_00065724:
  FUN_000e1e54(iVar4 + 0xfc,auStack_4c);
  uStack_78 = uVar7;
  FUN_0019f30c(uStack_74);
  FUN_0014f868(auStack_68);
  FUN_000e1e40(auStack_4c);
  return uVar13;
}


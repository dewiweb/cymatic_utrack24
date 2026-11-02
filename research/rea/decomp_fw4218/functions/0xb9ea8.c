// rea decompile_all
// name: FUN_000b9ea8
// address: 0xb9ea8
// body: available
// range: 0xb9ea8-0xba1f7 inclusive
// range: 0xba31c-0xba657 inclusive
// range: 0xba754-0xba95b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000b9ea8(int param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  char cVar17;
  int local_30;
  int local_2c;
  undefined1 auStack_28 [8];
  
  iVar3 = FUN_00003d18(*param_2,&DAT_000ba1f8);
  if (iVar3 == 0) {
    if (param_3 < 3) {
      return 6;
    }
    iVar3 = FUN_000032fc(param_2[1],0);
    iVar4 = FUN_000032fc(param_2[2],0);
    uVar6 = iVar4 + 0x1fU & 0xffffffe0;
    do {
      uVar7 = 0x400;
      if (uVar6 < 0x400) {
        uVar7 = uVar6;
      }
      iVar4 = FUN_001dabd8(0,iVar3,param_1 + 0x20,uVar7);
      if (iVar4 != 0) {
        FUN_00002898(s_Reading_flash_offset_0x_08X_fail_000ba230,iVar3);
        break;
      }
      uVar16 = 0;
      if (uVar7 != 0) {
        do {
          FUN_00002898(s_0x_08X__000ba254,iVar3 + uVar16);
          uVar13 = 0;
          while( true ) {
            FUN_00002898(&DAT_000ba264,*(undefined1 *)(uVar16 + uVar13 + param_1 + 0x20));
            uVar13 = uVar13 + 1;
            if (0x1f < uVar13) break;
            if ((uVar13 != 0) && ((uVar13 & 3) == 0)) {
              thunk_FUN_00002898(0xba260);
            }
          }
          FUN_00002898(&DAT_000ba26c);
          uVar13 = 0;
          do {
            uVar11 = (uint)*(byte *)(uVar16 + uVar13 + param_1 + 0x20);
            if (0x5e < uVar11 - 0x20) {
              uVar11 = 0x2e;
            }
            FUN_00002898(&DAT_000ba270,uVar11);
            uVar13 = uVar13 + 1;
          } while (uVar13 < 0x20);
          uVar16 = uVar16 + 0x20;
        } while (uVar16 < uVar7);
      }
      uVar6 = uVar6 - uVar7;
      iVar3 = iVar3 + uVar7;
    } while (uVar6 != 0);
    FUN_00002898(&DAT_000ba274);
    return 0;
  }
  iVar4 = FUN_00003d18(*param_2,s_transmit_000ba200);
  iVar3 = _DAT_000ba20c;
  if (iVar4 == 0) {
    if (param_3 < 3) {
      return 6;
    }
    uVar5 = FUN_000032fc(param_2[1],0);
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    uVar6 = FUN_000032fc(param_2[2],0);
    *(uint *)(param_1 + 0x1c) = uVar6;
    if (0x400000 < uVar6) {
      uVar6 = 0x400000;
    }
    *(uint *)(param_1 + 0x1c) = uVar6;
    FUN_00002898(s_Start_X_Modem_now____000ba278);
    FUN_001d0130(1000);
    piVar14 = (int *)FUN_001f01c4(0x490,1);
    if (piVar14 != (int *)0x0) {
      *piVar14 = iVar3;
      uVar5 = FUN_001dba80(piVar14);
      (**(code **)(*piVar14 + 0xc))(piVar14,uVar5,param_1 + 0x14);
      (**(code **)(*piVar14 + 4))(piVar14);
      return 0;
    }
    pcVar8 = s_Creating_X_Modem_object_failed_000ba290;
LAB_000ba8bc:
    FUN_00002898(pcVar8);
    return 0;
  }
  iVar4 = FUN_00003d18(*param_2,s___receive_000ba20e + 2);
  if (iVar4 == 0) {
    if (2 < param_3) {
      uVar5 = FUN_000032fc(param_2[1],0);
      *(undefined4 *)(param_1 + 0x18) = uVar5;
      uVar6 = FUN_000032fc(param_2[2],0);
      *(uint *)(param_1 + 0x1c) = uVar6;
      if (0x400000 < uVar6) {
        uVar6 = 0x400000;
      }
      *(uint *)(param_1 + 0x1c) = uVar6;
      FUN_00002898(s_Erasing_flash___u_bytes_from_off_000ba2b0,uVar6,*(undefined4 *)(param_1 + 0x18)
                  );
      iVar4 = FUN_001da98c(0,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      if (iVar4 != 0) {
LAB_000ba480:
        FUN_00002898(s_Could_not_add_r_w_area_000ba6b0);
        return 0;
      }
      iVar4 = FUN_001dac54(0,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      if (iVar4 != 0) goto LAB_000ba4e4;
      iVar4 = FUN_001da9b4(0,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      if (iVar4 != 0) {
LAB_000ba3c0:
        FUN_00002898(s_Could_not_erase_flash_000ba68c);
        return 0;
      }
      FUN_00002898(s_Start__Send_File__via_XModem_now_000ba2e0);
      FUN_001d0130(1000);
      piVar14 = (int *)FUN_001f01c4(0x490,1);
      if (piVar14 == (int *)0x0) {
        FUN_00002898(s_Creating_X_Modem_object_failed_000ba290);
      }
      else {
        *piVar14 = iVar3;
        uVar5 = FUN_001dba80();
        local_30 = param_1 + 0x14;
        (**(code **)(*piVar14 + 8))(piVar14,uVar5,param_1 + 0x20,0x400);
        (**(code **)(*piVar14 + 4))(piVar14);
      }
    }
    return 6;
  }
  iVar3 = FUN_00003d18(*param_2,s_erase_000ba218);
  if (iVar3 == 0) {
    if (param_3 < 3) {
      return 6;
    }
    uVar6 = FUN_000032fc(param_2[1],0);
    uVar7 = FUN_000032fc(param_2[2],0);
    if (uVar6 < 0x40000) goto LAB_000ba804;
    if (uVar7 < 0x400001) {
      FUN_00002898(s_Erasing_flash___u_bytes_starting_000ba658,uVar7,uVar6);
      iVar3 = FUN_001da98c(0,uVar6,uVar7);
      if (iVar3 != 0) goto LAB_000ba480;
      iVar3 = FUN_001dac54(0,uVar6,uVar7);
      if (iVar3 == 0) {
        iVar3 = FUN_001da9b4(0,uVar6,uVar7);
        if (iVar3 == 0) {
          FUN_00002898(s_Done_000ba6a4);
          return 0;
        }
        goto LAB_000ba3c0;
      }
LAB_000ba4e4:
      FUN_00002898(s_Could_not_unlock_flash_000ba6d8);
      return 0;
    }
  }
  else {
    iVar3 = FUN_00003d18(*param_2,s_pattern_000ba220);
    if (iVar3 == 0) {
      if (param_3 < 3) {
        return 6;
      }
      uVar6 = FUN_000032fc(param_2[1],0);
      uVar7 = FUN_000032fc(param_2[2],0);
      if (uVar6 < 0x40000) goto LAB_000ba804;
      if (uVar7 < 0x400001) {
        if (uVar7 == 0) {
          FUN_00002898(s_Invalid_size_000ba6c8);
          return 0;
        }
        iVar3 = 0;
        bVar2 = false;
        if (3 < param_3) {
          iVar4 = FUN_00003d18(param_2[3],&DAT_000ba6ac);
          if (iVar4 == 0) {
            bVar2 = true;
            if (4 < param_3) {
              iVar3 = FUN_000032fc(param_2[4],0);
            }
          }
          else {
            iVar3 = FUN_000032fc(param_2[3],0);
          }
        }
        iVar4 = FUN_001da98c(0,uVar6,uVar7);
        if (iVar4 != 0) goto LAB_000ba480;
        iVar4 = FUN_001dac54(0,uVar6,uVar7);
        if (iVar4 == 0) {
          piVar14 = (int *)0x0;
          if (bVar2) {
            piVar14 = (int *)FUN_001f01c4(uVar7,1);
            if (piVar14 == (int *)0x0) {
              FUN_00002898(s_Could_not_allocate_large_buffer_000ba714);
              bVar2 = false;
            }
            else {
              FUN_00002898(s_Large_buffer_of__u_bytes_allocat_000ba6f0,uVar7);
            }
          }
          if (iVar3 == 0) {
            if (bVar2) {
              cVar17 = (uVar7 & 1) != 0;
              piVar12 = (int *)((int)piVar14 + -1);
              if ((bool)cVar17) {
                *(char *)piVar14 = '\0';
                piVar12 = piVar14;
              }
              for (uVar16 = uVar7 >> 1; uVar16 != 0; uVar16 = uVar16 - 1) {
                cVar1 = cVar17 + '\x01';
                *(char *)((int)piVar12 + 1) = cVar17;
                cVar17 = cVar17 + '\x02';
                piVar12 = (int *)((int)piVar12 + 2);
                *(char *)piVar12 = cVar1;
              }
            }
            else {
              uVar13 = 0;
              uVar16 = uVar13;
              do {
                *(char *)(param_1 + uVar13 + 0x20) = (char)uVar13;
                uVar16 = uVar16 + 2;
                *(char *)(param_1 + uVar13 + 1 + 0x20) = (char)(uVar13 + 1);
                uVar13 = uVar13 + 2;
              } while (uVar16 < 0x400);
            }
          }
          else if (bVar2) {
            if (0 < (int)uVar7) {
              piVar12 = piVar14 + -1;
              if ((uVar7 - 1 & 1) == 0) {
                *piVar14 = iVar3;
                piVar12 = piVar14;
              }
              for (iVar4 = (int)uVar7 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
                piVar12[1] = iVar3;
                piVar12 = piVar12 + 2;
                *piVar12 = iVar3;
              }
            }
          }
          else {
            piVar12 = (int *)(param_1 + 0x1c);
            iVar4 = 0x80;
            do {
              piVar12[1] = iVar3;
              iVar4 = iVar4 + -1;
              piVar12 = piVar12 + 2;
              *piVar12 = iVar3;
            } while (iVar4 != 0);
          }
          iVar3 = 0;
          do {
            if (uVar7 == 0) {
LAB_000ba7b4:
              FUN_00002898(s_Done_000ba6a4);
              if (piVar14 == (int *)0x0) {
                return 0;
              }
              FUN_001eecc8(piVar14);
              return 0;
            }
            if (bVar2) {
              FUN_001daad8(0,uVar6,&local_30);
              FUN_001daa88(0,local_30,auStack_28,&local_2c);
              uVar16 = (local_2c - uVar6) + 1;
              if (uVar7 < uVar16) {
                uVar16 = uVar7;
              }
              iVar4 = FUN_001dacc8(0,uVar6,(char *)((int)piVar14 + iVar3),uVar16);
            }
            else {
              uVar16 = 0x400;
              if (uVar7 < 0x400) {
                uVar16 = uVar7;
              }
              iVar4 = FUN_001dacc8(0,uVar6,param_1 + 0x20,uVar16);
            }
            if (iVar4 != 0) {
              FUN_00002898(s_Could_not_write_to_flash_000ba738);
              goto LAB_000ba7b4;
            }
            uVar7 = uVar7 - uVar16;
            uVar6 = uVar6 + uVar16;
            iVar3 = iVar3 + uVar16;
          } while( true );
        }
        goto LAB_000ba4e4;
      }
    }
    else {
      iVar3 = FUN_00003d18(*param_2,s_verify_000ba228);
      if (iVar3 != 0) {
        return 6;
      }
      if (param_3 < 3) {
        return 6;
      }
      uVar6 = FUN_000032fc(param_2[1],0);
      uVar7 = FUN_000032fc(param_2[2],0);
      if (uVar6 < 0x40000) {
LAB_000ba804:
        FUN_00002898(s_Offset_is_not_allowed_000ba95c);
        return 0;
      }
      if (uVar7 < 0x400001) {
        if (uVar7 != 0) {
          iVar3 = 0;
          if (3 < param_3) {
            iVar3 = FUN_000032fc(param_2[3],0);
          }
          iVar4 = 0;
          iVar15 = 0;
          FUN_00002898(s_Verifying__u_bytes_starting_at_o_000ba984,uVar7,uVar6);
          do {
            uVar16 = 0x400;
            if (uVar7 < 0x400) {
              uVar16 = uVar7;
            }
            FUN_00003c58(param_1 + 0x20,0x400);
            iVar9 = FUN_001dabd8(0,uVar6,param_1 + 0x20,uVar16);
            if (iVar9 != 0) {
              FUN_00002898(_DAT_000ba9b8,uVar6);
              break;
            }
            if (iVar3 == 0) {
              if (uVar16 != 0) {
                iVar9 = 0;
                pbVar10 = (byte *)(param_1 + 0x20);
                uVar13 = uVar16;
                do {
                  if ((uint)*pbVar10 != (iVar4 + iVar9 & 0xffU)) {
                    iVar15 = iVar15 + 1;
                  }
                  uVar13 = uVar13 - 1;
                  iVar9 = iVar9 + 1;
                  pbVar10 = pbVar10 + 1;
                } while (uVar13 != 0);
              }
            }
            else if (3 < uVar16) {
              uVar13 = uVar16 >> 2;
              piVar14 = (int *)(param_1 + 0x20);
              do {
                if (*piVar14 != iVar3) {
                  iVar15 = iVar15 + 1;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 1;
              } while (uVar13 != 0);
            }
            uVar7 = uVar7 - uVar16;
            uVar6 = uVar6 + uVar16;
            iVar4 = iVar4 + uVar16;
          } while (uVar7 != 0);
          FUN_00002898(s__Done___u_errors_detected_000ba9bb + 1,iVar15);
          return 0;
        }
        pcVar8 = s_Invalid_size_000ba6c8;
        goto LAB_000ba8bc;
      }
    }
  }
  FUN_00002898(s_Size_too_big_000ba974);
  return 0;
}


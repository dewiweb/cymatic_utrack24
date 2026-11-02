// rea decompile_all
// name: FUN_00057d0c
// address: 0x57d0c
// body: available
// range: 0x57d0c-0x57e07 inclusive
// range: 0x57e34-0x57e6f inclusive
// range: 0x5848c-0x5856f inclusive
// range: 0x586dc-0x5876f inclusive
// range: 0x58868-0x58a9f inclusive
// range: 0x18757c-0x187583 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00057d0c(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int *local_e8;
  undefined4 local_e4;
  int *local_44 [8];
  
  uVar3 = DAT_000583bc;
  cVar1 = *(char *)(param_1 + 0x118);
  while (cVar1 != '\0') {
    local_44[0] = (int *)0x0;
    thunk_EXT_FUN_004002f0(param_1 + 0xd0,local_44,100);
    if (local_44[0] == (int *)0x0) {
      FUN_0018715c(*(undefined4 *)(param_1 + 0x114));
      FUN_00185be0(*(undefined4 *)(param_1 + 0x114));
      while (pbVar5 = (byte *)FUN_00187134(*(undefined4 *)(param_1 + 0x114),0),
            pbVar5 != (byte *)0x0) {
        FUN_00186e54(*(undefined4 *)(param_1 + 0x114),pbVar5);
        local_e4 = *(undefined4 *)(pbVar5 + 0x118);
        local_e8 = *(int **)(pbVar5 + 0x11c);
        FUN_000028a4(DAT_000583c0,*pbVar5,pbVar5 + 1,*(undefined4 *)(pbVar5 + 0x124));
        bVar2 = *pbVar5;
        if (bVar2 == 0xe) {
          iVar6 = *(int *)(pbVar5 + 0x108);
          iVar4 = 0;
          if (iVar6 != 0) {
            iVar4 = *(int *)(iVar6 + 8);
          }
          if ((iVar6 != 0 && iVar4 != 0) &&
             (iVar4 = FUN_001a6f04(iVar4,s_m__UPDATE_000587cd + 3), iVar4 == 0)) {
            iVar4 = *(int *)(*(int *)(param_1 + 0x138) + 8);
            if (iVar4 != *(int *)(param_1 + 0x138)) {
              do {
                local_e8 = *(int **)(pbVar5 + 0x118);
                iVar6 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))
                                  (*(int **)(iVar4 + 0x10),param_1,*(undefined4 *)(pbVar5 + 0x124),
                                   *(undefined4 *)(pbVar5 + 0x11c));
                if (iVar6 != 0) goto switchD_00057e00_default;
                iVar6 = *(int *)(iVar4 + 0xc);
                if (*(int *)(iVar4 + 0xc) == 0) {
                  iVar6 = *(int *)(iVar4 + 4);
                  while (iVar7 = iVar6, iVar4 == *(int *)(iVar7 + 0xc)) {
                    iVar4 = iVar7;
                    iVar6 = *(int *)(iVar7 + 4);
                  }
                  if (*(int *)(iVar4 + 0xc) != iVar7) {
                    iVar4 = iVar7;
                  }
                }
                else {
                  do {
                    iVar4 = iVar6;
                    iVar6 = *(int *)(iVar4 + 8);
                  } while (*(int *)(iVar4 + 8) != 0);
                }
              } while (iVar4 != *(int *)(param_1 + 0x138));
            }
            iVar4 = FUN_00186744(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(pbVar5 + 0x118),
                                 uVar3,0);
            if (iVar4 != 0) {
              thunk_FUN_000028a4(_DAT_000587cc);
            }
          }
        }
        else if (bVar2 < 0xe) {
          switch(bVar2) {
          case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 3:
          case 4:
          case 5:
          case 6:
          case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 9:
          case 10:
          case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if (bVar2 == 0x15) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x138) + 8);
          if (iVar4 != *(int *)(param_1 + 0x138)) {
            do {
              local_e8 = *(int **)(pbVar5 + 0x118);
              iVar6 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x20))
                                (*(int **)(iVar4 + 0x10),param_1,*(undefined4 *)(pbVar5 + 0x124),
                                 *(undefined4 *)(pbVar5 + 0x11c));
              if (iVar6 != 0) goto switchD_00057e00_default;
              iVar6 = *(int *)(iVar4 + 0xc);
              if (*(int *)(iVar4 + 0xc) == 0) {
                iVar6 = *(int *)(iVar4 + 4);
                while (iVar7 = iVar6, iVar4 == *(int *)(iVar7 + 0xc)) {
                  iVar4 = iVar7;
                  iVar6 = *(int *)(iVar7 + 4);
                }
                if (*(int *)(iVar4 + 0xc) != iVar7) {
                  iVar4 = iVar7;
                }
              }
              else {
                do {
                  iVar4 = iVar6;
                  iVar6 = *(int *)(iVar4 + 8);
                } while (*(int *)(iVar4 + 8) != 0);
              }
            } while (iVar4 != *(int *)(param_1 + 0x138));
          }
          iVar4 = FUN_00186744(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(pbVar5 + 0x118),
                               uVar3,0);
          if (iVar4 != 0) {
            FUN_000028a4(DAT_00058ad4,uVar3);
          }
        }
        else if (bVar2 < 0x15) {
          if (((bVar2 == 0x12 || bVar2 == 0x13) || bVar2 == 0x14) &&
             (iVar4 = *(int *)(*(int *)(param_1 + 0x138) + 8), iVar4 != *(int *)(param_1 + 0x138)))
          {
            do {
              local_e8 = (int *)(uint)*pbVar5;
              iVar6 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                                (*(int **)(iVar4 + 0x10),param_1,*(undefined4 *)(pbVar5 + 0x124),
                                 *(undefined4 *)(pbVar5 + 0x11c));
              if (iVar6 != 0) break;
              iVar6 = *(int *)(iVar4 + 0xc);
              if (*(int *)(iVar4 + 0xc) == 0) {
                iVar6 = *(int *)(iVar4 + 4);
                while (iVar7 = iVar6, iVar4 == *(int *)(iVar7 + 0xc)) {
                  iVar4 = iVar7;
                  iVar6 = *(int *)(iVar7 + 4);
                }
                if (*(int *)(iVar4 + 0xc) != iVar7) {
                  iVar4 = iVar7;
                }
              }
              else {
                do {
                  iVar4 = iVar6;
                  iVar6 = *(int *)(iVar4 + 8);
                } while (*(int *)(iVar4 + 8) != 0);
              }
            } while (iVar4 != *(int *)(param_1 + 0x138));
          }
        }
        else if (bVar2 == 0x16) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x138) + 8);
          if (iVar4 != *(int *)(param_1 + 0x138)) {
            do {
              iVar6 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x14))
                                (*(int **)(iVar4 + 0x10),param_1,*(undefined4 *)(pbVar5 + 0x124),
                                 *(undefined4 *)(pbVar5 + 0x11c));
              if (iVar6 != 0) break;
              iVar6 = *(int *)(iVar4 + 0xc);
              if (*(int *)(iVar4 + 0xc) == 0) {
                iVar6 = *(int *)(iVar4 + 4);
                while (iVar7 = iVar6, iVar4 == *(int *)(iVar7 + 0xc)) {
                  iVar4 = iVar7;
                  iVar6 = *(int *)(iVar7 + 4);
                }
                if (*(int *)(iVar4 + 0xc) != iVar7) {
                  iVar4 = iVar7;
                }
              }
              else {
                do {
                  iVar4 = iVar6;
                  iVar6 = *(int *)(iVar4 + 8);
                } while (*(int *)(iVar4 + 8) != 0);
              }
            } while (iVar4 != *(int *)(param_1 + 0x138));
          }
        }
        else if ((bVar2 != 0x17) && (bVar2 == 0x2e)) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x138) + 8);
          if (iVar4 != *(int *)(param_1 + 0x138)) {
            do {
              iVar6 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x18))
                                (*(int **)(iVar4 + 0x10),param_1,*(undefined4 *)(pbVar5 + 0x124),
                                 *(undefined4 *)(pbVar5 + 0x11c));
              if (iVar6 != 0) goto switchD_00057e00_default;
              iVar6 = *(int *)(iVar4 + 0xc);
              if (*(int *)(iVar4 + 0xc) == 0) {
                iVar6 = *(int *)(iVar4 + 4);
                while (iVar7 = iVar6, iVar4 == *(int *)(iVar7 + 0xc)) {
                  iVar4 = iVar7;
                  iVar6 = *(int *)(iVar7 + 4);
                }
                if (*(int *)(iVar4 + 0xc) != iVar7) {
                  iVar4 = iVar7;
                }
              }
              else {
                do {
                  iVar4 = iVar6;
                  iVar6 = *(int *)(iVar4 + 8);
                } while (*(int *)(iVar4 + 8) != 0);
              }
            } while (iVar4 != *(int *)(param_1 + 0x138));
          }
          iVar4 = FUN_00186c84(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(pbVar5 + 0x124),
                               *(undefined4 *)(pbVar5 + 0x11c));
          if (iVar4 != 0) {
            FUN_000028a4(DAT_00058ad8);
          }
        }
switchD_00057e00_default:
        FUN_001870e4(pbVar5);
      }
    }
    else {
      (**(code **)(*local_44[0] + 0xc))();
    }
    cVar1 = *(char *)(param_1 + 0x118);
  }
  while( true ) {
    local_e8 = (int *)0x0;
    iVar4 = thunk_EXT_FUN_004002f0(param_1 + 0xd0,&local_e8,0);
    if (iVar4 != 0) break;
    if (local_e8 != (int *)0x0) {
      (**(code **)(*local_e8 + 4))();
    }
  }
  iVar4 = *(int *)(param_1 + 0x114);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(iVar4 + 0xa8) != -1) {
    *(undefined4 *)(iVar4 + 0xa8) = 1;
    FUN_00179b24(iVar4);
    FUN_00187faa(iVar4);
    if (*(int *)(iVar4 + 0x84) != 0) {
      if ((code *)*DAT_00187820 == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*DAT_00187820)();
      }
    }
    iVar6 = *(int *)(iVar4 + 0x8c);
    while (iVar6 != 0) {
      if (*(int *)(iVar6 + 0x20) == 0) {
        iVar6 = *(int *)(iVar6 + 0x1c);
        *(int *)(iVar4 + 0x8c) = iVar6;
        if (iVar6 != 0) {
          *(undefined4 *)(iVar6 + 0x20) = 0;
        }
      }
      else {
        *(undefined4 *)(*(int *)(iVar6 + 0x20) + 0x1c) = *(undefined4 *)(iVar6 + 0x1c);
        if (*(int *)(iVar6 + 0x1c) != 0) {
          *(undefined4 *)(*(int *)(iVar6 + 0x1c) + 0x20) = *(undefined4 *)(iVar6 + 0x20);
        }
        *(undefined4 *)(iVar6 + 0x1c) = 0;
        *(undefined4 *)(iVar6 + 0x20) = 0;
      }
      FUN_00172050(iVar4);
      iVar6 = *(int *)(iVar4 + 0x8c);
    }
    iVar6 = *(int *)(iVar4 + 0x90);
    while (iVar6 != 0) {
      if (*(int *)(iVar6 + 0x24) == 0) {
        iVar6 = *(int *)(iVar6 + 0x20);
        *(int *)(iVar4 + 0x90) = iVar6;
        if (iVar6 != 0) {
          *(undefined4 *)(iVar6 + 0x24) = 0;
        }
      }
      else {
        *(undefined4 *)(*(int *)(iVar6 + 0x24) + 0x20) = *(undefined4 *)(iVar6 + 0x20);
        if (*(int *)(iVar6 + 0x20) != 0) {
          *(undefined4 *)(*(int *)(iVar6 + 0x20) + 0x24) = *(undefined4 *)(iVar6 + 0x24);
        }
        *(undefined4 *)(iVar6 + 0x20) = 0;
        *(undefined4 *)(iVar6 + 0x24) = 0;
      }
      FUN_0017952c(iVar4);
      iVar6 = *(int *)(iVar4 + 0x90);
    }
    iVar6 = *(int *)(iVar4 + 0x94);
    while (iVar6 != 0) {
      if (*(int *)(iVar6 + 0x24) == 0) {
        iVar6 = *(int *)(iVar6 + 0x20);
        *(int *)(iVar4 + 0x94) = iVar6;
        if (iVar6 != 0) {
          *(undefined4 *)(iVar6 + 0x24) = 0;
        }
      }
      else {
        *(undefined4 *)(*(int *)(iVar6 + 0x24) + 0x20) = *(undefined4 *)(iVar6 + 0x20);
        if (*(int *)(iVar6 + 0x20) != 0) {
          *(undefined4 *)(*(int *)(iVar6 + 0x20) + 0x24) = *(undefined4 *)(iVar6 + 0x24);
        }
        *(undefined4 *)(iVar6 + 0x20) = 0;
        *(undefined4 *)(iVar6 + 0x24) = 0;
      }
      FUN_00175c88(iVar4);
      iVar6 = *(int *)(iVar4 + 0x94);
    }
    iVar6 = *(int *)(iVar4 + 0x88);
    while (iVar6 != 0) {
      if (*(int *)(iVar6 + 0x58) == 0) {
        iVar6 = *(int *)(iVar6 + 0x54);
        *(int *)(iVar4 + 0x88) = iVar6;
        if (iVar6 != 0) {
          *(undefined4 *)(iVar6 + 0x58) = 0;
        }
      }
      else {
        *(undefined4 *)(*(int *)(iVar6 + 0x58) + 0x54) = *(undefined4 *)(iVar6 + 0x54);
        if (*(int *)(iVar6 + 0x54) != 0) {
          *(undefined4 *)(*(int *)(iVar6 + 0x54) + 0x58) = *(undefined4 *)(iVar6 + 0x58);
        }
        *(undefined4 *)(iVar6 + 0x54) = 0;
        *(undefined4 *)(iVar6 + 0x58) = 0;
      }
      FUN_001776d4(iVar4);
      iVar6 = *(int *)(iVar4 + 0x88);
    }
    iVar7 = iVar4 + 0x9c;
    iVar6 = *(int *)(iVar4 + 0x98);
    while (iVar6 != 0) {
      if (*(int *)(iVar6 + 0x154) == 0) {
        iVar6 = *(int *)(iVar6 + 0x150);
        *(int *)(iVar4 + 0x98) = iVar6;
        if (iVar6 != 0) goto LAB_0018769c;
      }
      else {
        *(undefined4 *)(*(int *)(iVar6 + 0x154) + 0x150) = *(undefined4 *)(iVar6 + 0x150);
        if (*(int *)(iVar6 + 0x150) != 0) {
          *(undefined4 *)(*(int *)(iVar6 + 0x150) + 0x154) = *(undefined4 *)(iVar6 + 0x154);
        }
        *(undefined4 *)(iVar6 + 0x150) = 0;
LAB_0018769c:
        *(undefined4 *)(iVar6 + 0x154) = 0;
      }
      FUN_00177268(iVar4);
      iVar6 = *(int *)(iVar4 + 0x98);
    }
    while (iVar6 = FUN_001a4bc4(iVar7,0), iVar6 == 0) {
      iVar6 = FUN_001a4bdc(iVar7,0);
      FUN_001a4cbc(iVar7,0);
      FUN_00173680(iVar6);
      FUN_00173bae(*(undefined4 *)(iVar6 + 0x2b48));
      *(undefined4 *)(iVar6 + 0x2b48) = 0;
      FUN_001a7396(iVar6);
    }
    FUN_00175be8(*(int *)(iVar4 + 0xa4) + 0x20);
    FUN_00175be8(*(int *)(iVar4 + 0xa4) + 0x30);
    FUN_00175be8(*(int *)(iVar4 + 0xa4) + 0x28);
    FUN_00175be8(*(int *)(iVar4 + 0xa4) + 0x38);
    FUN_001a6d78(*(undefined4 *)(iVar4 + 0xa4));
    iVar6 = FUN_001a3e96(*(undefined4 *)(iVar4 + 0xac));
    while (iVar6 != 0) {
      FUN_001870e4();
      iVar6 = FUN_001a3e96(*(undefined4 *)(iVar4 + 0xac));
    }
    FUN_001a3e64(*(undefined4 *)(iVar4 + 0xac));
    iVar6 = *(int *)(iVar4 + 0xb0);
    while (iVar6 != 0) {
      if (*(int *)(iVar6 + 0xfc) == 0) {
        iVar7 = *(int *)(iVar6 + 0x100);
        *(int *)(iVar4 + 0xb0) = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)(iVar7 + 0xfc) = 0;
        }
      }
      else {
        piVar8 = (int *)(iVar6 + 0x100);
        *(int *)(*(int *)(iVar6 + 0xfc) + 0x100) = *piVar8;
        if (*piVar8 != 0) {
          *(undefined4 *)(*piVar8 + 0xfc) = *(undefined4 *)(iVar6 + 0xfc);
        }
        *piVar8 = 0;
        *(undefined4 *)(iVar6 + 0xfc) = 0;
      }
      if (iVar6 != 0) {
        if ((code *)*DAT_00187820 == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*DAT_00187820)();
        }
      }
      iVar6 = *(int *)(iVar4 + 0xb0);
    }
    iVar6 = 0;
    do {
      pcVar9 = (char *)(iVar6 * 0x8c + iVar4 + DAT_00187824);
      if (*pcVar9 != '\0') {
        FUN_001a8fa4(*(undefined4 *)(pcVar9 + 0x40));
        FUN_000038a0(pcVar9,0x8c);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 100);
    if (*(code **)(iVar4 + 0x3c) != entry) {
      (**(code **)(iVar4 + 0x3c))(iVar4);
    }
    FUN_000038a0(iVar4,DAT_00187828);
    *(undefined4 *)(iVar4 + 0xa8) = 0xffffffff;
  }
  return;
}


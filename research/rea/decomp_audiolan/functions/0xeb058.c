// rea decompile_all
// name: FUN_000eb058
// address: 0xeb058
// body: available
// range: 0xeb058-0xebdc3 inclusive
// range: 0xebde4-0xebe47 inclusive
// range: 0xebf90-0xebfbf inclusive
// range: 0xebfc8-0xec2e3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000eb058(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint local_30;
  uint local_2c [2];
  ushort local_24;
  
  uVar6 = 1;
  if (param_1[2] == 0) {
    piVar1 = (int *)*param_1;
    while (piVar1 != (int *)0x0) {
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)*param_1;
      }
      else {
        iVar4 = *piVar1;
        piVar1 = (int *)piVar1[3];
        (**(code **)(iVar4 + 4))();
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)((int)param_1 + 0x51) = 1;
    local_30 = param_1[0x10];
    uVar7 = *(int *)(param_1[0xf] + 0x14) + *(int *)(param_1[0xf] + 0x10);
    FUN_000e9ccc(local_2c);
    uVar6 = DAT_000ebfc0;
    while( true ) {
      if (uVar7 <= local_30) {
        return 1;
      }
      if ((uint)*(ushort *)((int)param_1 + 0x4e) <= (uint)param_1[2]) {
        return 1;
      }
      iVar4 = FUN_000e9c94(local_2c,local_30,uVar7);
      if (iVar4 == 0) {
        return 0;
      }
      pcVar2 = (char *)(local_2c[0] & 0xff00);
      if (pcVar2 == &DAT_00004200) {
        uVar3 = local_2c[0] & 0xff;
        if (uVar3 == 8) {
          iVar4 = FUN_0016d7a4(0x68,DAT_000ebfc4);
          if (iVar4 != 0) {
            piVar1 = (int *)FUN_000f1a78();
            goto LAB_000eb298;
          }
        }
        else if (uVar3 < 9) {
          switch(uVar3) {
          case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          default:
          }
        }
        else if (uVar3 == 0x30) {
          iVar4 = FUN_0016d7a4(0x18,DAT_000ebfc4);
          if (iVar4 != 0) {
            piVar1 = (int *)FUN_000f5c0c();
            goto LAB_000eb298;
          }
        }
        else if (uVar3 < 0x31) {
          if (uVar3 == 0x20) {
            if ((local_2c[0] & 0x40000) == 0) {
              if (((local_2c[0] & 0x20000) != 0) &&
                 (iVar4 = FUN_0016d7a4(0x38,DAT_000ebfc4), iVar4 != 0)) {
                piVar1 = (int *)FUN_000f0784();
                goto LAB_000eb298;
              }
            }
            else {
              iVar4 = FUN_0016d7a4(0x24,DAT_000ebfc4);
              if (iVar4 != 0) {
                piVar1 = (int *)FUN_000f16e0();
                goto LAB_000eb298;
              }
            }
          }
          else if (uVar3 == 0x21) {
            iVar4 = FUN_0016d7a4(0x30,DAT_000ebfc4);
            if (iVar4 != 0) {
              piVar1 = (int *)FUN_000f7688();
              goto LAB_000eb298;
            }
          }
          else if ((uVar3 == 0x22) && (iVar4 = FUN_0016d7a4(0x18,DAT_000ebfc4), iVar4 != 0)) {
            piVar1 = (int *)FUN_000f080c();
            goto LAB_000eb298;
          }
        }
        else if (uVar3 == 0xe0) {
          iVar4 = FUN_0016d7a4(0x20,DAT_000ebfc4);
          if (iVar4 != 0) {
            piVar1 = (int *)FUN_000f1c24();
            goto LAB_000eb298;
          }
        }
        else if (uVar3 == 0xe1) {
          iVar4 = FUN_0016d7a4(0x38,DAT_000ebfc4);
          if (iVar4 != 0) {
            piVar1 = (int *)FUN_000f0b50();
            goto LAB_000eb298;
          }
        }
        else if ((uVar3 == 0xf6) && (iVar4 = FUN_0016d7a4(0x18,DAT_000ebfc4), iVar4 != 0)) {
          piVar1 = (int *)FUN_000efd3c();
          goto LAB_000eb298;
        }
        goto joined_r0x000ec214;
      }
      if (pcVar2 <= &DAT_00004200) break;
      if (pcVar2 == s_SIGABRT__Abnormal_termination_00005ae4 + 0x1c) {
        if (((local_2c[0] & 0xff) == 1) && (iVar4 = FUN_0016d7a4(uVar6,DAT_000ebfc4), iVar4 != 0)) {
          piVar1 = (int *)FUN_000ef854();
          goto LAB_000eb298;
        }
        goto joined_r0x000ec214;
      }
      if (((pcVar2 != (char *)0x6300) || ((local_2c[0] & 0xff) != 1)) ||
         (iVar4 = FUN_0016d7a4(0x2c,DAT_000ebfc4), iVar4 == 0)) goto joined_r0x000ec214;
      piVar1 = (int *)FUN_000ef3f0();
LAB_000eb298:
      if (piVar1 == (int *)0x0) goto joined_r0x000ec214;
      iVar4 = (**(code **)(*piVar1 + 0x10))(piVar1,&local_30,local_30 + local_24);
      if (iVar4 == 0) {
        (**(code **)(*piVar1 + 4))(piVar1);
        goto joined_r0x000ec214;
      }
      piVar1[2] = 0;
      piVar1[3] = 0;
      if (param_1[1] == 0) {
        *param_1 = (int)piVar1;
      }
      else {
        piVar1[2] = param_1[1];
        *(int **)(param_1[1] + 0xc) = piVar1;
      }
      param_1[1] = (int)piVar1;
      param_1[2] = param_1[2] + 1;
      local_30 = local_30 + 3 & 0xfffffffc;
    }
    if (pcVar2 == (char *)0x1000) {
      uVar3 = local_2c[0] & 0xff;
      if (uVar3 == 0x13) {
        iVar4 = FUN_0016d7a4(0x28,DAT_000ebfc4);
        if (iVar4 != 0) {
          piVar1 = (int *)FUN_000f7830();
          goto LAB_000eb298;
        }
      }
      else if (uVar3 < 0x14) {
        if (uVar3 == 1) {
          if ((local_2c[0] & 0x40000) == 0) {
            if (((local_2c[0] & 0x20000) != 0) &&
               (iVar4 = FUN_0016d7a4(0x30,DAT_000ebfc4), iVar4 != 0)) {
              piVar1 = (int *)FUN_000f6c4c();
              goto LAB_000eb298;
            }
          }
          else {
            iVar4 = FUN_0016d7a4(0x24,DAT_000ebfc4);
            if (iVar4 != 0) {
              piVar1 = (int *)FUN_000f78c8();
              goto LAB_000eb298;
            }
          }
        }
        else if (uVar3 == 2) {
          iVar4 = FUN_0016d7a4(0x38,DAT_000ebfc4);
          if (iVar4 != 0) {
            piVar1 = (int *)FUN_000eec98();
            goto LAB_000eb298;
          }
        }
        else if (uVar3 == 3) {
          iVar4 = FUN_0016d7a4(0x24,DAT_000ebfc4);
          if (iVar4 != 0) {
            piVar1 = (int *)FUN_000f1600();
            goto LAB_000eb298;
          }
        }
        else if ((uVar3 == 0x12) && (iVar4 = FUN_0016d7a4(0x28,DAT_000ebfc4), iVar4 != 0)) {
          piVar1 = (int *)FUN_000f9dac();
          goto LAB_000eb298;
        }
      }
      else if (uVar3 == 0x14) {
        iVar4 = FUN_0016d7a4(0x24,DAT_000ebfc4);
        if (iVar4 != 0) {
          piVar1 = (int *)FUN_000f2e10();
          goto LAB_000eb298;
        }
      }
      else if (uVar3 == 0x15) {
        iVar4 = FUN_0016d7a4(0x24,DAT_000ebfc4);
        if (iVar4 != 0) {
          piVar1 = (int *)FUN_000f8b0c();
          goto LAB_000eb298;
        }
      }
      else if (uVar3 == 0x20) {
        iVar4 = FUN_0016d7a4(0x24,DAT_000ebfc4);
        if (iVar4 != 0) {
          piVar1 = (int *)FUN_000f6f08();
          goto LAB_000eb298;
        }
      }
      else if ((uVar3 == 0x21) && (iVar4 = FUN_0016d7a4(0x28,DAT_000ebfc4), iVar4 != 0)) {
        piVar1 = (int *)FUN_000f5d88();
        goto LAB_000eb298;
      }
    }
    else if (pcVar2 == "") {
      uVar3 = local_2c[0] & 0xff;
      if (uVar3 == 0x60) {
        iVar4 = FUN_0016d7a4(0x18,DAT_000ebfc4);
        if (iVar4 != 0) {
          piVar1 = (int *)FUN_000f2f10();
          goto LAB_000eb298;
        }
      }
      else if (uVar3 < 0x61) {
        if (uVar3 == 0x17) {
LAB_000eb8b4:
          iVar4 = FUN_0016d7a4(0x94,DAT_000ebfc4);
          if (iVar4 != 0) {
            piVar1 = (int *)FUN_000f9b04(iVar4,local_2c[0] & 0xff);
            goto LAB_000eb298;
          }
        }
        else if (uVar3 < 0x18) {
          if (uVar3 == 0x13) {
            iVar4 = FUN_0016d7a4(0x7c,DAT_000ebfc4);
            if (iVar4 != 0) {
              piVar1 = (int *)FUN_000fa838();
              goto LAB_000eb298;
            }
          }
          else if (uVar3 < 0x14) {
            if (uVar3 == 1) {
              if ((local_2c[0] & 0x40000) == 0) {
                if (((local_2c[0] & 0x20000) != 0) &&
                   (iVar4 = FUN_0016d7a4(0x118,DAT_000ebfc4), iVar4 != 0)) {
                  piVar1 = (int *)FUN_000f4f60();
                  goto LAB_000eb298;
                }
              }
              else {
                iVar4 = FUN_0016d7a4(0x48,DAT_000ebfc4);
                if (iVar4 != 0) {
                  piVar1 = (int *)FUN_000f6750();
                  goto LAB_000eb298;
                }
              }
            }
            else if (uVar3 == 0x10) {
              iVar4 = FUN_0016d7a4(0x7c,DAT_000ebfc4);
              if (iVar4 != 0) {
                piVar1 = (int *)FUN_000fa43c();
                goto LAB_000eb298;
              }
            }
            else if (uVar3 == 0x11) {
              iVar4 = FUN_0016d7a4(0x7c,DAT_000ebfc4);
              if (iVar4 != 0) {
                piVar1 = (int *)FUN_000fa22c();
                goto LAB_000eb298;
              }
            }
            else if ((uVar3 == 0x12) && (iVar4 = FUN_0016d7a4(0x7c,DAT_000ebfc4), iVar4 != 0)) {
              piVar1 = (int *)FUN_000fa2f0();
              goto LAB_000eb298;
            }
          }
          else if (uVar3 == 0x14) {
            iVar4 = FUN_0016d7a4(0xc0,DAT_000ebfc4);
            if (iVar4 != 0) {
              piVar1 = (int *)FUN_000f7418();
              goto LAB_000eb298;
            }
          }
          else if (uVar3 == 0x15) {
            iVar4 = FUN_0016d7a4(0x28,DAT_000ebfc4);
            if (iVar4 != 0) {
              piVar1 = (int *)FUN_000f9a18();
              goto LAB_000eb298;
            }
          }
          else if (uVar3 == 0x16) goto LAB_000eb8b4;
        }
        else if (uVar3 == 0x20) {
          if ((local_2c[0] & 0x40000) == 0) {
            if (((local_2c[0] & 0x20000) != 0) &&
               (iVar4 = FUN_0016d7a4(0x78,DAT_000ebfc4), iVar4 != 0)) {
              piVar1 = (int *)FUN_000f85b4();
              goto LAB_000eb298;
            }
          }
          else {
            iVar4 = FUN_0016d7a4(0x38,DAT_000ebfc4);
            if (iVar4 != 0) {
              piVar1 = (int *)FUN_000f93d8();
              goto LAB_000eb298;
            }
          }
        }
        else {
          if (0x20 < uVar3) {
            if (uVar3 == 0x31) {
              if ((local_2c[0] & 0x40000) == 0) {
                if (((local_2c[0] & 0x20000) != 0) &&
                   (iVar4 = FUN_0016d7a4(0x40,DAT_000ebfc4), iVar4 != 0)) {
                  piVar1 = (int *)FUN_000f98c4();
                  goto LAB_000eb298;
                }
              }
              else {
                iVar4 = FUN_0016d7a4(0x28,DAT_000ebfc4);
                if (iVar4 != 0) {
                  piVar1 = (int *)FUN_000f9c4c();
                  goto LAB_000eb298;
                }
              }
            }
            else if (uVar3 == 0x51) {
              iVar4 = FUN_0016d7a4(0x3c,DAT_000ebfc4);
              if (iVar4 != 0) {
                piVar1 = (int *)FUN_000f5278();
                goto LAB_000eb298;
              }
            }
            else if ((uVar3 == 0x52) && (iVar4 = FUN_0016d7a4(0x2c,DAT_000ebfc4), iVar4 != 0)) {
              piVar1 = (int *)FUN_000f6910();
              goto LAB_000eb298;
            }
            goto joined_r0x000ec214;
          }
          if (uVar3 == 0x18) goto LAB_000eb8b4;
          if (uVar3 == 0x19) {
            iVar4 = FUN_0016d7a4(0x78,DAT_000ebfc4);
            if (iVar4 != 0) {
              piVar1 = (int *)FUN_000f925c();
              goto LAB_000eb298;
            }
          }
          else if ((uVar3 == 0x1a) && (iVar4 = FUN_0016d7a4(0x28,DAT_000ebfc4), iVar4 != 0)) {
            piVar1 = (int *)FUN_000fa058();
            goto LAB_000eb298;
          }
        }
      }
      else if (uVar3 == 0x90) {
        iVar4 = FUN_0016d7a4(0x18,DAT_000ebfc4);
        if (iVar4 != 0) {
          piVar1 = (int *)FUN_000f0278();
          goto LAB_000eb298;
        }
      }
      else if (uVar3 < 0x91) {
        if (uVar3 == 0x80) {
          iVar4 = FUN_0016d7a4(0x38,DAT_000ebfc4);
          if (iVar4 != 0) {
            uVar5 = 1;
LAB_000ebc04:
            piVar1 = (int *)FUN_000ef07c(iVar4,uVar5);
            goto LAB_000eb298;
          }
        }
        else if (uVar3 < 0x81) {
          if (uVar3 == 0x61) {
            iVar4 = FUN_0016d7a4(0x1c,DAT_000ebfc4);
            if (iVar4 != 0) {
              piVar1 = (int *)FUN_000f32e8();
              goto LAB_000eb298;
            }
          }
          else if (uVar3 == 0x70) {
            if ((local_2c[0] & 0x40000) == 0) {
              if (((local_2c[0] & 0x20000) != 0) &&
                 (iVar4 = FUN_0016d7a4(0x38,DAT_000ebfc4), iVar4 != 0)) {
                piVar1 = (int *)FUN_000f7c00();
                goto LAB_000eb298;
              }
            }
            else {
              iVar4 = FUN_0016d7a4(0x34,DAT_000ebfc4);
              if (iVar4 != 0) {
                piVar1 = (int *)FUN_000f8c58();
                goto LAB_000eb298;
              }
            }
          }
          else if (uVar3 == 0x71) {
            if ((local_2c[0] & 0x40000) == 0) {
              if (((local_2c[0] & 0x20000) != 0) &&
                 (iVar4 = FUN_0016d7a4(0x30,DAT_000ebfc4), iVar4 != 0)) {
                piVar1 = (int *)FUN_000f7db0();
                goto LAB_000eb298;
              }
            }
            else {
              iVar4 = FUN_0016d7a4(0x38,DAT_000ebfc4);
              if (iVar4 != 0) {
                piVar1 = (int *)FUN_000f8e44();
                goto LAB_000eb298;
              }
            }
          }
        }
        else if (uVar3 == 0x81) {
          iVar4 = FUN_0016d7a4(0x38,DAT_000ebfc4);
          if (iVar4 != 0) {
            uVar5 = 0;
            goto LAB_000ebc04;
          }
        }
        else if (uVar3 == 0x82) {
          iVar4 = FUN_0016d7a4(0x20,DAT_000ebfc4);
          if (iVar4 != 0) {
            uVar5 = 1;
            goto LAB_000ebc64;
          }
        }
        else if ((uVar3 == 0x83) && (iVar4 = FUN_0016d7a4(0x20,DAT_000ebfc4), iVar4 != 0)) {
          uVar5 = 0;
LAB_000ebc64:
          piVar1 = (int *)FUN_000efeec(iVar4,uVar5);
          goto LAB_000eb298;
        }
      }
      else if (uVar3 == 0xf1) {
        iVar4 = FUN_0016d7a4(0x6c,DAT_000ebfc4);
joined_r0x000eb674:
        if (iVar4 != 0) {
          piVar1 = (int *)FUN_000f633c();
          goto LAB_000eb298;
        }
      }
      else if (uVar3 < 0xf2) {
        if (uVar3 == 0x91) {
          iVar4 = FUN_0016d7a4(0x3c,DAT_000ebfc4);
          if (iVar4 != 0) {
            piVar1 = (int *)FUN_000f31bc();
            goto LAB_000eb298;
          }
        }
        else if (uVar3 == 0x92) {
          iVar4 = FUN_0016d7a4(0x1c,DAT_000ebfc4);
          if (iVar4 != 0) {
            piVar1 = (int *)FUN_000eee04();
            goto LAB_000eb298;
          }
        }
        else if (uVar3 == 0xf0) {
          iVar4 = FUN_0016d7a4(0x6c,DAT_000ebfc4);
          goto joined_r0x000eb674;
        }
      }
      else if (uVar3 == 0xf2) {
        iVar4 = FUN_0016d7a4(0x28,DAT_000ebfc4);
        if (iVar4 != 0) {
          piVar1 = (int *)FUN_000f0d0c();
          goto LAB_000eb298;
        }
      }
      else if (uVar3 == 0xf3) {
        iVar4 = FUN_0016d7a4(0x30,DAT_000ebfc4);
        if (iVar4 != 0) {
          piVar1 = (int *)FUN_000f6dd4();
          goto LAB_000eb298;
        }
      }
      else if (uVar3 == 0xf4) {
        iVar4 = FUN_0016d7a4(0x6c,DAT_000ebfc4);
        goto joined_r0x000eb674;
      }
    }
    else if (pcVar2 == (char *)0x3700) {
      if ((local_2c[0] & 0x20000) == 0) {
        iVar4 = FUN_0016d7a4(0x24,DAT_000ebfc4);
        if (iVar4 != 0) {
          piVar1 = (int *)FUN_000ef5b0();
          goto LAB_000eb298;
        }
      }
      else {
        iVar4 = FUN_0016d7a4(0x28,DAT_000ebfc4);
        if (iVar4 != 0) {
          piVar1 = (int *)FUN_000f0420();
          goto LAB_000eb298;
        }
      }
    }
joined_r0x000ec214:
    uVar6 = 0;
    if (local_30 < uVar7) {
      uVar6 = 0;
    }
  }
  return uVar6;
}


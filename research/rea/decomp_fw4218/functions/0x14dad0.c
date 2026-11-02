// rea decompile_all
// name: FUN_0014dad0
// address: 0x14dad0
// body: available
// range: 0x14dad0-0x14e83b inclusive
// range: 0x14e85c-0x14e8bf inclusive
// range: 0x14ea08-0x14ea37 inclusive
// range: 0x14ea40-0x14ed5b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0014dad0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_30;
  uint local_2c [2];
  ushort local_24;
  
  uVar5 = 1;
  if (param_1[2] == 0) {
    piVar1 = (int *)*param_1;
    while (piVar1 != (int *)0x0) {
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)*param_1;
      }
      else {
        iVar3 = *piVar1;
        piVar1 = (int *)piVar1[3];
        (**(code **)(iVar3 + 4))();
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)((int)param_1 + 0x51) = 1;
    local_30 = param_1[0x10];
    uVar6 = *(int *)(param_1[0xf] + 0x14) + *(int *)(param_1[0xf] + 0x10);
    FUN_0014c744(local_2c);
    uVar5 = DAT_0014ea38;
    while( true ) {
      if (uVar6 <= local_30) {
        return 1;
      }
      if ((uint)*(ushort *)((int)param_1 + 0x4e) <= (uint)param_1[2]) {
        return 1;
      }
      iVar3 = FUN_0014c70c(local_2c,local_30,uVar6);
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = local_2c[0] & 0xff00;
      if (uVar2 == 0x4200) {
        uVar2 = local_2c[0] & 0xff;
        if (uVar2 == 8) {
          iVar3 = FUN_001c6b14(0x68,DAT_0014ea3c);
          if (iVar3 != 0) {
            piVar1 = (int *)FUN_00153fa8();
            goto LAB_0014dd10;
          }
        }
        else if (uVar2 < 9) {
          switch(uVar2) {
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
        else if (uVar2 == 0x30) {
          iVar3 = FUN_001c6b14(0x18,DAT_0014ea3c);
          if (iVar3 != 0) {
            piVar1 = (int *)FUN_00157f40();
            goto LAB_0014dd10;
          }
        }
        else if (uVar2 < 0x31) {
          if (uVar2 == 0x20) {
            if ((local_2c[0] & 0x40000) == 0) {
              if (((local_2c[0] & 0x20000) != 0) &&
                 (iVar3 = FUN_001c6b14(0x38,DAT_0014ea3c), iVar3 != 0)) {
                piVar1 = (int *)FUN_00152d68();
                goto LAB_0014dd10;
              }
            }
            else {
              iVar3 = FUN_001c6b14(0x24,DAT_0014ea3c);
              if (iVar3 != 0) {
                piVar1 = (int *)FUN_00153c10();
                goto LAB_0014dd10;
              }
            }
          }
          else if (uVar2 == 0x21) {
            iVar3 = FUN_001c6b14(0x30,DAT_0014ea3c);
            if (iVar3 != 0) {
              piVar1 = (int *)FUN_001599bc();
              goto LAB_0014dd10;
            }
          }
          else if ((uVar2 == 0x22) && (iVar3 = FUN_001c6b14(0x18,DAT_0014ea3c), iVar3 != 0)) {
            piVar1 = (int *)FUN_00152df0();
            goto LAB_0014dd10;
          }
        }
        else if (uVar2 == 0xe0) {
          iVar3 = FUN_001c6b14(0x20,DAT_0014ea3c);
          if (iVar3 != 0) {
            piVar1 = (int *)FUN_00154154();
            goto LAB_0014dd10;
          }
        }
        else if (uVar2 == 0xe1) {
          iVar3 = FUN_001c6b14(0x38,DAT_0014ea3c);
          if (iVar3 != 0) {
            piVar1 = (int *)FUN_00153134();
            goto LAB_0014dd10;
          }
        }
        else if ((uVar2 == 0xf6) && (iVar3 = FUN_001c6b14(0x18,DAT_0014ea3c), iVar3 != 0)) {
          piVar1 = (int *)FUN_001523a0();
          goto LAB_0014dd10;
        }
        goto joined_r0x0014ec8c;
      }
      if (uVar2 < 0x4201) break;
      if (uVar2 == 0x5b00) {
        if (((local_2c[0] & 0xff) == 1) && (iVar3 = FUN_001c6b14(uVar5,DAT_0014ea3c), iVar3 != 0)) {
          piVar1 = (int *)FUN_001520f0();
          goto LAB_0014dd10;
        }
        goto joined_r0x0014ec8c;
      }
      if (((uVar2 != 0x6300) || ((local_2c[0] & 0xff) != 1)) ||
         (iVar3 = FUN_001c6b14(0x2c,DAT_0014ea3c), iVar3 == 0)) goto joined_r0x0014ec8c;
      piVar1 = (int *)FUN_00151c8c();
LAB_0014dd10:
      if (piVar1 == (int *)0x0) goto joined_r0x0014ec8c;
      iVar3 = (**(code **)(*piVar1 + 0x10))(piVar1,&local_30,local_30 + local_24);
      if (iVar3 == 0) {
        (**(code **)(*piVar1 + 4))(piVar1);
        goto joined_r0x0014ec8c;
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
    if (uVar2 == 0x1000) {
      uVar2 = local_2c[0] & 0xff;
      if (uVar2 == 0x13) {
        iVar3 = FUN_001c6b14(0x28,DAT_0014ea3c);
        if (iVar3 != 0) {
          piVar1 = (int *)FUN_00159b64();
          goto LAB_0014dd10;
        }
      }
      else if (uVar2 < 0x14) {
        if (uVar2 == 1) {
          if ((local_2c[0] & 0x40000) == 0) {
            if (((local_2c[0] & 0x20000) != 0) &&
               (iVar3 = FUN_001c6b14(0x30,DAT_0014ea3c), iVar3 != 0)) {
              piVar1 = (int *)FUN_00158f80();
              goto LAB_0014dd10;
            }
          }
          else {
            iVar3 = FUN_001c6b14(0x24,DAT_0014ea3c);
            if (iVar3 != 0) {
              piVar1 = (int *)FUN_00159bfc();
              goto LAB_0014dd10;
            }
          }
        }
        else if (uVar2 == 2) {
          iVar3 = FUN_001c6b14(0x38,DAT_0014ea3c);
          if (iVar3 != 0) {
            piVar1 = (int *)FUN_00151534();
            goto LAB_0014dd10;
          }
        }
        else if (uVar2 == 3) {
          iVar3 = FUN_001c6b14(0x24,DAT_0014ea3c);
          if (iVar3 != 0) {
            piVar1 = (int *)FUN_00153b30();
            goto LAB_0014dd10;
          }
        }
        else if ((uVar2 == 0x12) && (iVar3 = FUN_001c6b14(0x28,DAT_0014ea3c), iVar3 != 0)) {
          piVar1 = (int *)FUN_0015c0e0();
          goto LAB_0014dd10;
        }
      }
      else if (uVar2 == 0x14) {
        iVar3 = FUN_001c6b14(0x24,DAT_0014ea3c);
        if (iVar3 != 0) {
          piVar1 = (int *)FUN_00155340();
          goto LAB_0014dd10;
        }
      }
      else if (uVar2 == 0x15) {
        iVar3 = FUN_001c6b14(0x24,DAT_0014ea3c);
        if (iVar3 != 0) {
          piVar1 = (int *)FUN_0015ae40();
          goto LAB_0014dd10;
        }
      }
      else if (uVar2 == 0x20) {
        iVar3 = FUN_001c6b14(0x24,DAT_0014ea3c);
        if (iVar3 != 0) {
          piVar1 = (int *)FUN_0015923c();
          goto LAB_0014dd10;
        }
      }
      else if ((uVar2 == 0x21) && (iVar3 = FUN_001c6b14(0x28,DAT_0014ea3c), iVar3 != 0)) {
        piVar1 = (int *)FUN_001580bc();
        goto LAB_0014dd10;
      }
    }
    else if (uVar2 == 0x2300) {
      uVar2 = local_2c[0] & 0xff;
      if (uVar2 == 0x60) {
        iVar3 = FUN_001c6b14(0x18,DAT_0014ea3c);
        if (iVar3 != 0) {
          piVar1 = (int *)FUN_00155440();
          goto LAB_0014dd10;
        }
      }
      else if (uVar2 < 0x61) {
        if (uVar2 == 0x17) {
LAB_0014e32c:
          iVar3 = FUN_001c6b14(0x94,DAT_0014ea3c);
          if (iVar3 != 0) {
            piVar1 = (int *)FUN_0015be38(iVar3,local_2c[0] & 0xff);
            goto LAB_0014dd10;
          }
        }
        else if (uVar2 < 0x18) {
          if (uVar2 == 0x13) {
            iVar3 = FUN_001c6b14(0x7c,DAT_0014ea3c);
            if (iVar3 != 0) {
              piVar1 = (int *)FUN_0015cab4();
              goto LAB_0014dd10;
            }
          }
          else if (uVar2 < 0x14) {
            if (uVar2 == 1) {
              if ((local_2c[0] & 0x40000) == 0) {
                if (((local_2c[0] & 0x20000) != 0) &&
                   (iVar3 = FUN_001c6b14(0x118,DAT_0014ea3c), iVar3 != 0)) {
                  piVar1 = (int *)FUN_00157490();
                  goto LAB_0014dd10;
                }
              }
              else {
                iVar3 = FUN_001c6b14(0x48,DAT_0014ea3c);
                if (iVar3 != 0) {
                  piVar1 = (int *)FUN_00158a84();
                  goto LAB_0014dd10;
                }
              }
            }
            else if (uVar2 == 0x10) {
              iVar3 = FUN_001c6b14(0x7c,DAT_0014ea3c);
              if (iVar3 != 0) {
                piVar1 = (int *)FUN_0015c714();
                goto LAB_0014dd10;
              }
            }
            else if (uVar2 == 0x11) {
              iVar3 = FUN_001c6b14(0x7c,DAT_0014ea3c);
              if (iVar3 != 0) {
                piVar1 = (int *)FUN_0015c560();
                goto LAB_0014dd10;
              }
            }
            else if ((uVar2 == 0x12) && (iVar3 = FUN_001c6b14(0x7c,DAT_0014ea3c), iVar3 != 0)) {
              piVar1 = (int *)FUN_0015c5c8();
              goto LAB_0014dd10;
            }
          }
          else if (uVar2 == 0x14) {
            iVar3 = FUN_001c6b14(0xc0,DAT_0014ea3c);
            if (iVar3 != 0) {
              piVar1 = (int *)FUN_0015974c();
              goto LAB_0014dd10;
            }
          }
          else if (uVar2 == 0x15) {
            iVar3 = FUN_001c6b14(0x28,DAT_0014ea3c);
            if (iVar3 != 0) {
              piVar1 = (int *)FUN_0015bd4c();
              goto LAB_0014dd10;
            }
          }
          else if (uVar2 == 0x16) goto LAB_0014e32c;
        }
        else if (uVar2 == 0x20) {
          if ((local_2c[0] & 0x40000) == 0) {
            if (((local_2c[0] & 0x20000) != 0) &&
               (iVar3 = FUN_001c6b14(0x78,DAT_0014ea3c), iVar3 != 0)) {
              piVar1 = (int *)FUN_0015a8e8();
              goto LAB_0014dd10;
            }
          }
          else {
            iVar3 = FUN_001c6b14(0x38,DAT_0014ea3c);
            if (iVar3 != 0) {
              piVar1 = (int *)FUN_0015b70c();
              goto LAB_0014dd10;
            }
          }
        }
        else {
          if (0x20 < uVar2) {
            if (uVar2 == 0x31) {
              if ((local_2c[0] & 0x40000) == 0) {
                if (((local_2c[0] & 0x20000) != 0) &&
                   (iVar3 = FUN_001c6b14(0x40,DAT_0014ea3c), iVar3 != 0)) {
                  piVar1 = (int *)FUN_0015bbf8();
                  goto LAB_0014dd10;
                }
              }
              else {
                iVar3 = FUN_001c6b14(0x28,DAT_0014ea3c);
                if (iVar3 != 0) {
                  piVar1 = (int *)FUN_0015bf80();
                  goto LAB_0014dd10;
                }
              }
            }
            else if (uVar2 == 0x51) {
              iVar3 = FUN_001c6b14(0x3c,DAT_0014ea3c);
              if (iVar3 != 0) {
                piVar1 = (int *)FUN_001577a8();
                goto LAB_0014dd10;
              }
            }
            else if ((uVar2 == 0x52) && (iVar3 = FUN_001c6b14(0x2c,DAT_0014ea3c), iVar3 != 0)) {
              piVar1 = (int *)FUN_00158c44();
              goto LAB_0014dd10;
            }
            goto joined_r0x0014ec8c;
          }
          if (uVar2 == 0x18) goto LAB_0014e32c;
          if (uVar2 == 0x19) {
            iVar3 = FUN_001c6b14(0x78,DAT_0014ea3c);
            if (iVar3 != 0) {
              piVar1 = (int *)FUN_0015b590();
              goto LAB_0014dd10;
            }
          }
          else if ((uVar2 == 0x1a) && (iVar3 = FUN_001c6b14(0x28,DAT_0014ea3c), iVar3 != 0)) {
            piVar1 = (int *)FUN_0015c38c();
            goto LAB_0014dd10;
          }
        }
      }
      else if (uVar2 == 0x90) {
        iVar3 = FUN_001c6b14(0x18,DAT_0014ea3c);
        if (iVar3 != 0) {
          piVar1 = (int *)FUN_0015285c();
          goto LAB_0014dd10;
        }
      }
      else if (uVar2 < 0x91) {
        if (uVar2 == 0x80) {
          iVar3 = FUN_001c6b14(0x38,DAT_0014ea3c);
          if (iVar3 != 0) {
            uVar4 = 1;
LAB_0014e67c:
            piVar1 = (int *)FUN_00151918(iVar3,uVar4);
            goto LAB_0014dd10;
          }
        }
        else if (uVar2 < 0x81) {
          if (uVar2 == 0x61) {
            iVar3 = FUN_001c6b14(0x1c,DAT_0014ea3c);
            if (iVar3 != 0) {
              piVar1 = (int *)FUN_00155818();
              goto LAB_0014dd10;
            }
          }
          else if (uVar2 == 0x70) {
            if ((local_2c[0] & 0x40000) == 0) {
              if (((local_2c[0] & 0x20000) != 0) &&
                 (iVar3 = FUN_001c6b14(0x38,DAT_0014ea3c), iVar3 != 0)) {
                piVar1 = (int *)FUN_00159f34();
                goto LAB_0014dd10;
              }
            }
            else {
              iVar3 = FUN_001c6b14(0x34,DAT_0014ea3c);
              if (iVar3 != 0) {
                piVar1 = (int *)FUN_0015af8c();
                goto LAB_0014dd10;
              }
            }
          }
          else if (uVar2 == 0x71) {
            if ((local_2c[0] & 0x40000) == 0) {
              if (((local_2c[0] & 0x20000) != 0) &&
                 (iVar3 = FUN_001c6b14(0x30,DAT_0014ea3c), iVar3 != 0)) {
                piVar1 = (int *)FUN_0015a0e4();
                goto LAB_0014dd10;
              }
            }
            else {
              iVar3 = FUN_001c6b14(0x38,DAT_0014ea3c);
              if (iVar3 != 0) {
                piVar1 = (int *)FUN_0015b178();
                goto LAB_0014dd10;
              }
            }
          }
        }
        else if (uVar2 == 0x81) {
          iVar3 = FUN_001c6b14(0x38,DAT_0014ea3c);
          if (iVar3 != 0) {
            uVar4 = 0;
            goto LAB_0014e67c;
          }
        }
        else if (uVar2 == 0x82) {
          iVar3 = FUN_001c6b14(0x20,DAT_0014ea3c);
          if (iVar3 != 0) {
            uVar4 = 1;
            goto LAB_0014e6dc;
          }
        }
        else if ((uVar2 == 0x83) && (iVar3 = FUN_001c6b14(0x20,DAT_0014ea3c), iVar3 != 0)) {
          uVar4 = 0;
LAB_0014e6dc:
          piVar1 = (int *)FUN_00152550(iVar3,uVar4);
          goto LAB_0014dd10;
        }
      }
      else if (uVar2 == 0xf1) {
        iVar3 = FUN_001c6b14(0x6c,DAT_0014ea3c);
joined_r0x0014e0ec:
        if (iVar3 != 0) {
          piVar1 = (int *)FUN_00158670();
          goto LAB_0014dd10;
        }
      }
      else if (uVar2 < 0xf2) {
        if (uVar2 == 0x91) {
          iVar3 = FUN_001c6b14(0x3c,DAT_0014ea3c);
          if (iVar3 != 0) {
            piVar1 = (int *)FUN_001556ec();
            goto LAB_0014dd10;
          }
        }
        else if (uVar2 == 0x92) {
          iVar3 = FUN_001c6b14(0x1c,DAT_0014ea3c);
          if (iVar3 != 0) {
            piVar1 = (int *)FUN_001516a0();
            goto LAB_0014dd10;
          }
        }
        else if (uVar2 == 0xf0) {
          iVar3 = FUN_001c6b14(0x6c,DAT_0014ea3c);
          goto joined_r0x0014e0ec;
        }
      }
      else if (uVar2 == 0xf2) {
        iVar3 = FUN_001c6b14(0x28,DAT_0014ea3c);
        if (iVar3 != 0) {
          piVar1 = (int *)FUN_001532f0();
          goto LAB_0014dd10;
        }
      }
      else if (uVar2 == 0xf3) {
        iVar3 = FUN_001c6b14(0x30,DAT_0014ea3c);
        if (iVar3 != 0) {
          piVar1 = (int *)FUN_00159108();
          goto LAB_0014dd10;
        }
      }
      else if (uVar2 == 0xf4) {
        iVar3 = FUN_001c6b14(0x6c,DAT_0014ea3c);
        goto joined_r0x0014e0ec;
      }
    }
    else if (uVar2 == 0x3700) {
      if ((local_2c[0] & 0x20000) == 0) {
        iVar3 = FUN_001c6b14(0x24,DAT_0014ea3c);
        if (iVar3 != 0) {
          piVar1 = (int *)FUN_00151e4c();
          goto LAB_0014dd10;
        }
      }
      else {
        iVar3 = FUN_001c6b14(0x28,DAT_0014ea3c);
        if (iVar3 != 0) {
          piVar1 = (int *)FUN_00152a04();
          goto LAB_0014dd10;
        }
      }
    }
joined_r0x0014ec8c:
    uVar5 = 0;
    if (local_30 < uVar6) {
      uVar5 = 0;
    }
  }
  return uVar5;
}


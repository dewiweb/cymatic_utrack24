// rea decompile_all
// name: FUN_00123760
// address: 0x123760
// body: available
// range: 0x123760-0x123857 inclusive
// range: 0x1239ac-0x1239ff inclusive
// range: 0x123ae0-0x12447f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00123760(int param_1,uint param_2,byte *param_3,undefined4 param_4,short *param_5)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  bool bVar12;
  
  if (param_5 != (short *)0x0) {
    *param_5 = 0;
  }
  iVar8 = *(int *)(param_1 + 0x2c);
  iVar9 = 0;
  if (iVar8 != 0) {
    if ((param_3 != (byte *)0x0) || (param_2 == 0xffff)) {
      bVar1 = *(byte *)(param_1 + 0x42);
      if (bVar1 < 0x10) {
        iVar9 = FUN_00123638(param_1,bVar1,iVar8,0);
      }
      else {
        if (bVar1 != 0x10) goto LAB_001237fc;
        iVar9 = FUN_00125118(param_1,iVar8,1);
      }
      if (iVar9 == 0x1e) {
        return 0x1e;
      }
    }
LAB_001237fc:
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == (byte *)0x0) {
    return 6;
  }
  iVar8 = 0;
  uVar11 = param_2;
LAB_00123838:
  bVar1 = *param_3;
  sVar10 = (short)uVar11;
  if ((bVar1 & 0x80) == 0) {
    bVar1 = *(byte *)(param_1 + 0x43);
    bVar7 = bVar1 & 0xf0;
    if (bVar7 == 0xb0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_001236b4(param_1,1);
      }
      bVar1 = *(byte *)(param_1 + 0x44);
      if (2 < bVar1) {
        bVar1 = 1;
        *(undefined1 *)(param_1 + 0x44) = 1;
      }
      *(byte *)(param_1 + 0x44) = bVar1 + 1;
      if (bVar1 == 1) goto LAB_00123ba4;
      if (bVar1 == 2) {
        bVar1 = *(byte *)(param_1 + 0x45);
        if (bVar1 != 0 && bVar1 != 0x20) {
          bVar12 = 0x40 < bVar1;
          if (bVar1 != 0x41) {
            bVar12 = 0x43 < bVar1;
          }
          if (bVar1 != 0x41 && bVar1 != 0x44) {
            bVar12 = 0x77 < bVar1;
          }
          if (!bVar12) {
            piVar3 = (int *)FUN_0012fb94(**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c));
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x84))(piVar3,0);
              (**(code **)(*piVar3 + 0xd8))(piVar3,*(undefined1 *)(param_1 + 0x45));
              (**(code **)(*piVar3 + 0xe8))(piVar3,(*param_3 & 0x7f) << 9);
              iVar9 = FUN_00123638(param_1,*(byte *)(param_1 + 0x43) & 0xf,piVar3,0);
              goto joined_r0x00123f50;
            }
            goto LAB_001239e8;
          }
        }
        piVar3 = (int *)FUN_0012ff48(**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c));
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x84))(piVar3,0);
          (**(code **)(*piVar3 + 0xa4))(piVar3,*(undefined1 *)(param_1 + 0x45));
          (**(code **)(*piVar3 + 0xac))(piVar3,*param_3);
          iVar9 = FUN_00123638(param_1,*(byte *)(param_1 + 0x43) & 0xf,piVar3,0);
          goto joined_r0x00123f50;
        }
        goto LAB_001239e8;
      }
      goto LAB_0012442c;
    }
    if (bVar7 < 0xb1) {
      if (bVar7 == 0x80) {
        if (*(int *)(param_1 + 0x28) != 0) {
          FUN_001236b4(param_1,1);
        }
        bVar1 = *(byte *)(param_1 + 0x44);
        if (2 < bVar1) {
          bVar1 = 1;
          *(undefined1 *)(param_1 + 0x44) = 1;
        }
        *(byte *)(param_1 + 0x44) = bVar1 + 1;
        if (bVar1 == 1) {
LAB_00123ba4:
          *(byte *)(param_1 + 0x45) = *param_3;
        }
        else if (bVar1 == 2) {
          piVar3 = (int *)FUN_00125c74(**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c));
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0xcc))(piVar3,2);
            (**(code **)(*piVar3 + 0xc4))(piVar3,*(byte *)(param_1 + 0x45) + 0xff00);
            (**(code **)(*piVar3 + 0xdc))(piVar3,*param_3);
            (**(code **)(*piVar3 + 0xe4))(piVar3,*(undefined1 *)(param_1 + 0x45));
            iVar9 = FUN_00123638(param_1,*(byte *)(param_1 + 0x43) & 0xf,piVar3,0);
            goto joined_r0x00123f50;
          }
          goto LAB_001239e8;
        }
      }
      else if (bVar7 == 0x90) {
        if (*(int *)(param_1 + 0x28) != 0) {
          FUN_001236b4(param_1,1);
        }
        bVar1 = *(byte *)(param_1 + 0x44);
        if (2 < bVar1) {
          bVar1 = 1;
          *(undefined1 *)(param_1 + 0x44) = 1;
        }
        *(byte *)(param_1 + 0x44) = bVar1 + 1;
        if (bVar1 == 1) goto LAB_00123ba4;
        if (bVar1 == 2) {
          piVar3 = (int *)FUN_00125c74(**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c));
          if (piVar3 != (int *)0x0) {
            if (*param_3 == 0) {
              (**(code **)(*piVar3 + 0xcc))(piVar3,2);
              *(ushort *)((int)piVar3 + 0x6e) = *(ushort *)((int)piVar3 + 0x6e) | 0x8000;
            }
            else {
              (**(code **)(*piVar3 + 0xcc))(piVar3,0x10);
            }
            (**(code **)(*piVar3 + 0xc4))(piVar3,*(byte *)(param_1 + 0x45) + 0xff00);
            (**(code **)(*piVar3 + 0xdc))(piVar3,*param_3);
            (**(code **)(*piVar3 + 0xe4))(piVar3,*(undefined1 *)(param_1 + 0x45));
            iVar9 = FUN_00123638(param_1,*(byte *)(param_1 + 0x43) & 0xf,piVar3,0);
            goto joined_r0x00123f50;
          }
          goto LAB_001239e8;
        }
      }
      else {
        if (bVar7 != 0xa0) goto LAB_00123b38;
        if (*(int *)(param_1 + 0x28) != 0) {
          FUN_001236b4(param_1,1);
        }
        bVar1 = *(byte *)(param_1 + 0x44);
        if (2 < bVar1) {
          bVar1 = 1;
          *(undefined1 *)(param_1 + 0x44) = 1;
        }
        *(byte *)(param_1 + 0x44) = bVar1 + 1;
        if (bVar1 == 1) goto LAB_00123ba4;
        if (bVar1 == 2) {
          piVar3 = (int *)FUN_0012fb94(**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c));
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0xd8))(piVar3,0x80);
            (**(code **)(*piVar3 + 0xf4))(piVar3,*(byte *)(param_1 + 0x45) + 0xff00);
            (**(code **)(*piVar3 + 0xe8))(piVar3,(*param_3 & 0x7f) << 9);
            iVar9 = FUN_00123638(param_1,*(byte *)(param_1 + 0x43) & 0xf,piVar3,0);
            goto joined_r0x00123f50;
          }
          goto LAB_001239e8;
        }
      }
      goto LAB_0012442c;
    }
    if (bVar7 == 0xc0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_001236b4(param_1,1);
      }
      bVar1 = *(byte *)(param_1 + 0x44);
      if (1 < bVar1) {
        bVar1 = 1;
        *(undefined1 *)(param_1 + 0x44) = 1;
      }
      *(byte *)(param_1 + 0x44) = bVar1 + 1;
      if (bVar1 != 1) goto LAB_0012442c;
      piVar3 = (int *)FUN_0012ff48(**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c));
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xa4))(piVar3,0x160);
        (**(code **)(*piVar3 + 0xac))(piVar3,*param_3);
        iVar9 = FUN_00123638(param_1,*(byte *)(param_1 + 0x43) & 0xf,piVar3,0);
        if (iVar9 != 0x1e) goto LAB_0012441c;
LAB_00123c4c:
        *(int **)(param_1 + 0x2c) = piVar3;
        (**(code **)(*piVar3 + 0x38))(piVar3);
        *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x43) & 0xf;
        (**(code **)(*piVar3 + 0x3c))(piVar3);
        sVar10 = sVar10 + -1;
LAB_00124454:
        if (param_5 != (short *)0x0) {
          *param_5 = (short)param_2 - sVar10;
        }
        if (*(int *)(param_1 + 0x4c) != 0) {
          uVar6 = FUN_0017bfc0();
          *(undefined4 *)(param_1 + 0x4c) = uVar6;
        }
        return iVar9;
      }
LAB_001239e8:
      iVar9 = 0x16;
      goto LAB_00124444;
    }
    if (bVar7 == 0xd0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_001236b4(param_1,1);
      }
      bVar1 = *(byte *)(param_1 + 0x44);
      if (1 < bVar1) {
        bVar1 = 1;
        *(undefined1 *)(param_1 + 0x44) = 1;
      }
      *(byte *)(param_1 + 0x44) = bVar1 + 1;
      if (bVar1 == 1) {
        piVar3 = (int *)FUN_0012fb94(**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c));
        if (piVar3 == (int *)0x0) goto LAB_001239e8;
        (**(code **)(*piVar3 + 0xd8))(piVar3,0x80);
        (**(code **)(*piVar3 + 0xe8))(piVar3,(*param_3 & 0x7f) << 9);
        iVar9 = FUN_00123638(param_1,*(byte *)(param_1 + 0x43) & 0xf,piVar3,0);
joined_r0x00123f50:
        if (iVar9 == 0x1e) goto LAB_00123c4c;
LAB_0012441c:
        (**(code **)(*piVar3 + 0x3c))(piVar3);
      }
    }
    else if (bVar7 == 0xe0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_001236b4(param_1,1);
      }
      bVar1 = *(byte *)(param_1 + 0x44);
      if (2 < bVar1) {
        bVar1 = 1;
        *(undefined1 *)(param_1 + 0x44) = 1;
      }
      *(byte *)(param_1 + 0x44) = bVar1 + 1;
      if (bVar1 == 1) goto LAB_00123ba4;
      if (bVar1 == 2) {
        piVar3 = (int *)FUN_0012fb94(**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c));
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0xd8))(piVar3,0x81);
          (**(code **)(*piVar3 + 0xe8))
                    (piVar3,(uint)*(byte *)(param_1 + 0x45) * 4 + (uint)*param_3 * 0x200 &
                            0xfffcffff);
          iVar9 = FUN_00123638(param_1,*(byte *)(param_1 + 0x43) & 0xf,piVar3,0);
          goto joined_r0x00123f50;
        }
        goto LAB_001239e8;
      }
    }
    else {
LAB_00123b38:
      if (bVar1 == 0xf0) {
        iVar2 = *(int *)(param_1 + 0x28);
        if (iVar2 == 0) {
          iVar2 = FUN_001199d0(**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c));
          *(int *)(param_1 + 0x28) = iVar2;
          if (iVar2 == 0) goto LAB_0012442c;
        }
        bVar1 = *(byte *)(iVar2 + 0x6e);
        bVar7 = *param_3;
        *(byte *)(iVar2 + 0x6e) = bVar1 + 1;
        *(byte *)((uint)bVar1 + iVar2 + 0x6f) = bVar7;
        if (*(char *)(*(int *)(param_1 + 0x28) + 0x6e) == -0x80) {
          iVar9 = FUN_001236b4(param_1,0);
          iVar8 = iVar8 + 1;
        }
        else {
          uVar6 = FUN_0017bfc0();
          *(undefined4 *)(param_1 + 0x54) = uVar6;
        }
      }
      else {
        if (bVar1 == 0xf1) {
          bVar1 = *(byte *)(param_1 + 0x44);
          if (1 < bVar1) {
            bVar1 = 1;
            *(undefined1 *)(param_1 + 0x44) = 1;
          }
          *(byte *)(param_1 + 0x44) = bVar1 + 1;
          if (bVar1 != 1) goto LAB_0012442c;
          piVar3 = (int *)FUN_0012ff48(**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c));
          if (piVar3 == (int *)0x0) goto LAB_001239e8;
          (**(code **)(*piVar3 + 0xa4))(piVar3,DAT_00124488);
          (**(code **)(*piVar3 + 0xac))(piVar3,*param_3);
          piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x18) + 0x148))
                                    (*(int **)(param_1 + 0x18),1);
          iVar9 = (**(code **)(*piVar4 + 0xfc))
                            (piVar4,*(int *)(*piVar3 + -0x14) + (int)piVar3,param_4);
joined_r0x00124418:
          if (iVar9 != 0x1e) goto LAB_0012441c;
          *(int **)(param_1 + 0x2c) = piVar3;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          *(undefined1 *)(param_1 + 0x42) = 0x10;
          (**(code **)(*piVar3 + 0x3c))(piVar3);
          sVar10 = sVar10 + -1;
          goto LAB_00124454;
        }
        if (bVar1 == 0xf2) {
          bVar1 = *(byte *)(param_1 + 0x44);
          if (2 < bVar1) {
            bVar1 = 1;
            *(undefined1 *)(param_1 + 0x44) = 1;
          }
          *(byte *)(param_1 + 0x44) = bVar1 + 1;
          if (bVar1 == 1) goto LAB_00123ba4;
          if (bVar1 == 2) {
            (**(code **)(**(int **)(param_1 + 0x1c) + 0xd0))
                      (*(int **)(param_1 + 0x1c),0,
                       (uint)*param_3 * 0x200 + (uint)*(byte *)(param_1 + 0x45) * 4);
          }
        }
        else if (bVar1 == 0xf3) {
          bVar1 = *(byte *)(param_1 + 0x44);
          if (1 < bVar1) {
            bVar1 = 1;
            *(undefined1 *)(param_1 + 0x44) = 1;
          }
          *(byte *)(param_1 + 0x44) = bVar1 + 1;
          if (bVar1 == 1) {
            piVar3 = (int *)FUN_0012ff48(**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c));
            if (piVar3 == (int *)0x0) goto LAB_001239e8;
            (**(code **)(*piVar3 + 0xa4))(piVar3,DAT_0012448c);
            (**(code **)(*piVar3 + 0xac))(piVar3,*param_3);
            piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x18) + 0x148))
                                      (*(int **)(param_1 + 0x18),1);
            iVar9 = (**(code **)(*piVar4 + 0xfc))
                              (piVar4,*(int *)(*piVar3 + -0x14) + (int)piVar3,param_4);
            goto joined_r0x00124418;
          }
        }
      }
    }
  }
  else {
    switch(bVar1) {
    case 0xf0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf1:
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
    case 0xf9:
    case 0xfd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xfa:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xfb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xfc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xfe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xff:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      *(byte *)(param_1 + 0x43) = bVar1;
      *(undefined1 *)(param_1 + 0x44) = 1;
    }
  }
LAB_0012442c:
  sVar10 = sVar10 + -1;
  if (iVar9 == 0x1e) goto LAB_00124454;
LAB_00124444:
  uVar5 = uVar11 - 1;
  uVar11 = uVar5 & 0xffff;
  sVar10 = (short)uVar5;
  param_3 = param_3 + 1;
  if ((uVar11 == 0) || (iVar8 != 0)) goto LAB_00124454;
  goto LAB_00123838;
}


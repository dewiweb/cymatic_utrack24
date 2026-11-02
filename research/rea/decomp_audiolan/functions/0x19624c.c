// rea decompile_all
// name: FUN_0019624c
// address: 0x19624c
// body: available
// range: 0x19624c-0x196653 inclusive
// range: 0x1966e4-0x1967fd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0019624c(int param_1,int *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int extraout_r1;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  
  cVar1 = (char)param_2[1];
  bVar4 = false;
  piVar5 = (int *)(param_1 + DAT_00196658);
  iVar6 = param_1 + DAT_0019665c;
  iVar7 = param_1 + 0x37;
  if (((char)param_2[0x1e] == '\x02') ||
     (piVar12 = (int *)(param_1 + DAT_00196654), (char)param_2[0x1e] == '\x03')) {
    FUN_000209c2(param_2[8]);
    iVar8 = FUN_0016dc78();
    iVar11 = param_2[8];
    iVar14 = param_2[5];
    piVar12 = *(int **)(iVar8 * 4 + iVar6 + 0x14);
    while ((piVar12 != (int *)0x0 &&
           ((piVar12[1] != iVar14 || (iVar8 = FUN_0003b48a(piVar12[4],iVar11), iVar8 == 0))))) {
      piVar12 = (int *)*piVar12;
    }
    if (piVar12 == (int *)0x0) {
      return 0;
    }
    piVar12 = piVar12 + 2;
    do {
      piVar13 = piVar12;
      piVar12 = (int *)*piVar13;
      if (piVar12 == (int *)0x0) break;
    } while (piVar12 != param_2);
    if (piVar12 != (int *)0x0) goto LAB_001962f6;
LAB_001964c8:
    do {
      piVar13 = piVar5;
      piVar5 = (int *)*piVar13;
      if (piVar5 == (int *)0x0) goto LAB_001964ee;
    } while (piVar5 != param_2);
    *(undefined1 *)(param_2 + 0x1f) = 0;
    bVar4 = true;
  }
  else {
    do {
      piVar13 = piVar12;
      piVar12 = (int *)*piVar13;
      if (piVar12 == (int *)0x0) goto LAB_001964c8;
    } while (piVar12 != param_2);
LAB_001962f6:
    if (param_3 == 2) {
      piVar5 = *(int **)(&DAT_00001fbc + param_1);
      if (piVar5 == (int *)0x0) goto LAB_001964e2;
      do {
        if (piVar5[7] == param_2[7]) {
          bVar2 = *(byte *)(piVar5 + 1);
          bVar3 = *(byte *)(param_2 + 1);
          if (((((bVar2 == bVar3) || ((bVar2 | bVar3) == 0x12)) || (bVar2 == 1)) || (bVar3 == 1)) &&
             (((((*(short *)((int)piVar5 + 6) == *(short *)((int)param_2 + 6) &&
                 ((short)piVar5[2] == (short)param_2[2])) &&
                ((piVar5[5] == param_2[5] &&
                 (((short)piVar5[4] == (short)param_2[4] && (piVar5[6] == param_2[6])))))) &&
               (iVar8 = FUN_0003b600(piVar5 + 1,param_2[9] + 4,_DAT_00196660), iVar8 != 0)) &&
              (iVar8 = FUN_0003b48a(piVar5[8],param_2[8]), iVar8 != 0)))) {
            *(undefined1 *)((int)piVar5 + 0x7a) = 0xff;
          }
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)0x0);
    }
    else {
      for (; iVar8 = *piVar5, iVar8 != 0; piVar5 = (int *)*piVar5) {
        if (*(int *)(iVar8 + 0x1c) == param_2[7]) {
          bVar2 = *(byte *)(iVar8 + 4);
          bVar3 = *(byte *)(param_2 + 1);
          if ((((((bVar2 == bVar3) || ((bVar2 | bVar3) == 0x12)) || (bVar2 == 1)) || (bVar3 == 1))
              && (((*(short *)(iVar8 + 6) == *(short *)((int)param_2 + 6) &&
                   (*(short *)(iVar8 + 8) == (short)param_2[2])) &&
                  (((*(int *)(iVar8 + 0x14) == param_2[5] &&
                    ((*(short *)(iVar8 + 0x10) == (short)param_2[4] &&
                     (*(int *)(iVar8 + 0x18) == param_2[6])))) &&
                   (iVar8 = FUN_0003b600(iVar8 + 4,param_2[9] + 4,_DAT_00196660), iVar8 != 0))))))
             && (iVar8 = FUN_0003b48a(*(undefined4 *)(*piVar5 + 0x20),param_2[8]), iVar8 != 0)) {
            piVar12 = (int *)*piVar5;
            if (piVar12 != (int *)0x0) {
              *piVar5 = *piVar12;
              if (((char)param_2[0x1e] == '\x02') || ((char)param_2[0x1e] == '\x03')) {
                *piVar12 = 0;
                iVar8 = FUN_00023888(param_1,iVar6,piVar12);
                if (iVar8 == 0) {
                  uVar9 = FUN_0002272c(piVar12 + 1,piVar12[9] + 4,iVar7);
                  FUN_00024642(0,s__mDNS_Deregister_internal__ERROR_00196663 + 1,uVar9);
                }
              }
              else {
                *piVar12 = *param_2;
                *param_2 = (int)piVar12;
              }
              *(char *)(piVar12 + 1) = (char)param_2[1];
              *(undefined1 *)((int)piVar12 + 0x7a) = *(undefined1 *)((int)param_2 + 0x7a);
              *(undefined1 *)((int)piVar12 + 0x7b) = *(undefined1 *)((int)param_2 + 0x7b);
              *(char *)(piVar12 + 0x1f) = (char)param_2[0x1f];
              *(undefined1 *)((int)piVar12 + 0x7d) = *(undefined1 *)((int)param_2 + 0x7d);
              piVar12[0x21] = param_2[0x21];
              *(undefined1 *)((int)piVar12 + 0x7f) = *(undefined1 *)((int)param_2 + 0x7f);
              piVar12[0x22] = param_2[0x22];
              piVar12[0x24] = param_2[0x24];
              iVar8 = param_2[0x26];
              iVar11 = param_2[0x27];
              iVar14 = param_2[0x28];
              piVar12[0x25] = param_2[0x25];
              piVar12[0x26] = iVar8;
              piVar12[0x27] = iVar11;
              piVar12[0x28] = iVar14;
              piVar12[0x2c] = param_2[0x2c];
              piVar12[0x2d] = param_2[0x2d];
              piVar12[0x2e] = param_2[0x2e];
              piVar12[0x2f] = param_2[0x2f];
              piVar12[0x39] = param_2[0x39];
              *(char *)(piVar12 + 0x36) = (char)param_2[0x36];
              *(undefined1 *)(param_2 + 0x1f) = 0;
              *(undefined1 *)((int)param_2 + 0x7d) = 0;
            }
            break;
          }
        }
      }
    }
  }
  if (*piVar13 == 0) {
LAB_001964ee:
    if (param_3 != 3) {
      uVar9 = FUN_0002272c(param_2 + 1,param_2[9] + 4,iVar7);
      FUN_00024642(0,s_mDNS_Deregister_internal__Record_00196698,param_2,uVar9);
    }
    return DAT_001966d4;
  }
LAB_001964e2:
  if (cVar1 == '\0') {
    uVar9 = FUN_0002272c(param_2 + 1,param_2[9] + 4,iVar7);
    FUN_00024642(0,DAT_001966d8,uVar9);
  }
  else if (cVar1 == '\x01') {
    uVar9 = FUN_0002272c(param_2 + 1,param_2[9] + 4,iVar7);
    FUN_00024642(0,DAT_001966dc,uVar9);
    return DAT_001966d4;
  }
  if ((*(int *)((int)param_2 + 0x49) == 0) &&
     ((cVar1 != '\b' || (((char)param_2[0x1f] == '\0' && (*(char *)((int)param_2 + 0x7d) == '\0'))))
     )) {
    if ((bVar4) || (((char)param_2[0x1e] != '\x02' && ((char)param_2[0x1e] != '\x03')))) {
      *piVar13 = *param_2;
      if (*(int **)(param_1 + 0x1fc0) == param_2) {
        *(int *)(param_1 + 0x1fc0) = *param_2;
      }
    }
    else {
      iVar6 = FUN_00039e3c(param_1,iVar6,param_2);
      if (*(int **)(iVar6 + 0x14) == param_2) {
        *(int *)(iVar6 + 0x14) = *param_2;
      }
    }
    if (*(int **)(&DAT_00001fc4 + param_1) == param_2) {
      *(int *)(&DAT_00001fc4 + param_1) = *param_2;
    }
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    iVar6 = param_2[0x30];
    if (iVar6 != 0) {
      iVar11 = param_2[9];
      iVar8 = param_2[4];
      FUN_0003f3bc(param_2 + 1,iVar6,(short)param_2[0x31]);
      param_2[0x30] = 0;
      if ((code *)param_2[0x32] != entry) {
        (*(code *)param_2[0x32])(param_1,param_2,iVar11,(short)iVar8);
      }
    }
    if (param_3 == 2) {
      *(undefined4 *)(&DAT_00001fd0 + param_1) = *(undefined4 *)(param_1 + 0xdc);
      iVar6 = *(int *)(&DAT_00001fd4 + param_1);
      *(uint *)(&DAT_00001fd4 + param_1) = iVar6 + 1U;
      if (0xe < iVar6 + 1U) {
        iVar6 = *(int *)(param_1 + 0xdc) + *DAT_001968c0 * 5;
        if (iVar6 == 0) {
          iVar6 = 1;
        }
        *(int *)(&DAT_00001fd8 + param_1) = iVar6;
        uVar9 = FUN_000203e4(*(undefined2 *)((int)param_2 + 6));
        FUN_00024642(0,DAT_001968c4,*(undefined4 *)(&DAT_00001fd4 + param_1),param_2[8],uVar9);
      }
      iVar6 = *(int *)(param_1 + 0x30) + 1;
      *(int *)(param_1 + 0x30) = iVar6;
      if (*(int *)(param_1 + 0x2c) != iVar6) {
        FUN_00024642(0,s____s__Locking_Failure__mDNS_busy_00196802 + 2,_DAT_00196800,
                     *(int *)(param_1 + 0x2c),iVar6);
      }
      if ((code *)param_2[0xf] != entry) {
        (*(code *)param_2[0xf])(param_1,param_2,DAT_001968c8);
      }
      if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
        FUN_00024642(0,s__s__Unlocking_Failure__mDNS_busy_00196880,_DAT_00196800,
                     *(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x30));
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      piVar5 = *(int **)(&DAT_00001fbc + param_1);
      while (piVar5 != (int *)0x0) {
        if (*(char *)((int)piVar5 + 0x7a) == -1) {
          FUN_0019624c(param_1,piVar5,2);
          piVar5 = *(int **)(&DAT_00001fbc + param_1);
        }
        else {
          piVar5 = (int *)*piVar5;
        }
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x30) + 1;
      *(int *)(param_1 + 0x30) = iVar6;
      if (*(int *)(param_1 + 0x2c) != iVar6) {
        FUN_00024642(0,s____s__Locking_Failure__mDNS_busy_00196802 + 2,_DAT_00196800,
                     *(int *)(param_1 + 0x2c),iVar6);
      }
      if (*_DAT_00196844 != 0) {
        uVar9 = FUN_0002272c(param_2 + 1,param_2[9] + 4,iVar7);
        FUN_00024642(3,s____mDNS_Deregister_internal__mSt_00196845 + 3,uVar9);
      }
      if ((code *)param_2[0xf] != entry) {
        (*(code *)param_2[0xf])(param_1,param_2,DAT_0019687c);
      }
      if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
        FUN_00024642(0,s__s__Unlocking_Failure__mDNS_busy_00196880,_DAT_00196800,
                     *(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x30));
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    }
  }
  else {
    *(undefined1 *)(param_2 + 1) = 1;
    param_2[3] = 0;
    if (*(int *)((int)param_2 + 0x49) == 0) {
      if (param_3 == 1) {
        uVar10 = 1;
      }
      else {
        uVar10 = 3;
      }
    }
    else {
      uVar10 = 0x12;
    }
    *(undefined1 *)((int)param_2 + 0x7b) = uVar10;
    iVar6 = *DAT_001966e0;
    param_2[0x2c] = iVar6 * 2;
    param_2[0x2d] = *(int *)(param_1 + 0xdc) + iVar6 * -2;
    *(undefined1 *)(param_1 + 0x114) = 1;
    FUN_0016da64(iVar6);
    iVar6 = extraout_r1 + *(int *)(param_1 + 0xdc);
    if (-1 < *(int *)(param_1 + 0xfc) - iVar6) {
      *(int *)(param_1 + 0xfc) = iVar6;
    }
  }
  FUN_0019a8dc(param_1);
  return 0;
}


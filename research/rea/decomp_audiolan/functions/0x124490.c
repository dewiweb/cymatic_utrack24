// rea decompile_all
// name: FUN_00124490
// address: 0x124490
// body: available
// range: 0x124490-0x124f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00124490(int param_1,int *param_2,int *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  undefined4 uStack_b4;
  char cStack_b0;
  byte bStack_af;
  byte bStack_ae;
  undefined4 uStack_ac;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [20];
  
  puVar4 = *(undefined4 **)(param_1 + 0x38);
  if ((puVar4 != (undefined4 *)0x0) &&
     ((**(code **)*puVar4)(puVar4,param_2), *(char *)(param_1 + 0x40) != '\0')) {
    return;
  }
  if (param_4 != 0) {
    return;
  }
  if (*(short *)(param_1 + 0x34) == 0) {
    return;
  }
  if (**(int **)(param_1 + 0x30) == 0) {
    return;
  }
  piVar5 = (int *)(**(code **)(*(int *)((int)param_2 + *(int *)(*param_2 + -0x38)) + 0x24))
                            (*(int *)(*param_2 + -0x38) + (int)param_2);
  bVar2 = (**(code **)(*piVar5 + 0x6c))();
  uVar11 = (uint)bVar2;
  iVar6 = (**(code **)(*(int *)((int)param_3 + *(int *)(*param_3 + -0x38)) + 0xc))
                    (*(int *)(*param_3 + -0x38) + (int)param_3);
  if (iVar6 == 0x8200) {
    piVar5 = (int *)(**(code **)(*(int *)((int)param_3 + *(int *)(*param_3 + -0x38)) + 0x24))
                              (*(int *)(*param_3 + -0x38) + (int)param_3);
    if (0xf < uVar11 - 1) {
      return;
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      return;
    }
    iVar6 = (**(code **)(*piVar5 + 0xb4))(piVar5);
    if (iVar6 == 0) {
      return;
    }
    bStack_af = (**(code **)(*piVar5 + 0xe8))(piVar5);
    bStack_ae = (**(code **)(*piVar5 + 0xe0))(piVar5);
    iVar6 = (**(code **)(*piVar5 + 0xd0))(piVar5);
    if (iVar6 == 2) {
      iVar6 = (**(code **)(*piVar5 + 200))(piVar5);
      iVar9 = (**(code **)(*piVar5 + 0xc0))(piVar5);
      if ((iVar9 != 0) && ((undefined1 *)0x7f < &DAT_ffff0100 + iVar6)) {
        return;
      }
      bVar12 = (*(ushort *)((int)piVar5 + 0x6e) & 0x8000) != 0;
      if (bVar12) {
        cStack_b0 = bVar2 + 0x8f;
      }
      else {
        cStack_b0 = bVar2 + 0x7f;
      }
      uVar11 = 0;
      if (bVar12) {
        bStack_ae = 0;
      }
      while( true ) {
        if (*(ushort *)(param_1 + 0x34) <= uVar11) {
          return;
        }
        puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x30) + uVar11 * 4);
        if (puVar4 == (undefined4 *)0x0) break;
        (**(code **)(*param_3 + 0x60))(auStack_78,param_3);
        piVar5 = *(int **)(param_1 + 0x18);
        if (piVar5 != (int *)0x0) {
          piVar5 = (int *)(*(int *)(*piVar5 + -0x14) + (int)piVar5);
        }
        (**(code **)*puVar4)(puVar4,piVar5,3,&cStack_b0);
        uVar11 = uVar11 + 1 & 0xfffeffff;
      }
      return;
    }
    if (iVar6 != 0x10) {
      return;
    }
    iVar6 = (**(code **)(*piVar5 + 200))(piVar5);
    iVar9 = (**(code **)(*piVar5 + 0xc0))(piVar5);
    if ((iVar9 != 0) && ((undefined1 *)0x7f < &DAT_ffff0100 + iVar6)) {
      return;
    }
    cStack_b0 = bVar2 + 0x8f;
    uVar11 = 0;
    while( true ) {
      if (*(ushort *)(param_1 + 0x34) <= uVar11) {
        return;
      }
      puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x30) + uVar11 * 4);
      if (puVar4 == (undefined4 *)0x0) break;
      (**(code **)(*param_3 + 0x60))(auStack_88,param_3);
      piVar5 = *(int **)(param_1 + 0x18);
      if (piVar5 != (int *)0x0) {
        piVar5 = (int *)(*(int *)(*piVar5 + -0x14) + (int)piVar5);
      }
      (**(code **)*puVar4)(puVar4,piVar5,3,&cStack_b0);
      uVar11 = uVar11 + 1 & 0xfffeffff;
    }
    return;
  }
  if (iVar6 == 0x8201) {
    piVar5 = (int *)(**(code **)(*(int *)((int)param_3 + *(int *)(*param_3 + -0x38)) + 0x24))
                              (*(int *)(*param_3 + -0x38) + (int)param_3);
    if (0xf < uVar11 - 1) {
      return;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar6 = (**(code **)(*piVar5 + 0xdc))(piVar5);
      if (iVar6 == 0x80) {
        iVar6 = (**(code **)(*piVar5 + 0xf0))(piVar5);
        if (iVar6 == 0) {
          uStack_b4 = (undefined1 *)CONCAT31(uStack_b4._1_3_,bVar2 - 0x31);
          uVar11 = (**(code **)(*piVar5 + 0xec))(piVar5);
          uVar7 = 2;
          uStack_b4._0_2_ = CONCAT11((char)(uVar11 >> 9),(undefined1)uStack_b4);
        }
        else {
          iVar6 = (**(code **)(*piVar5 + 0xf8))(piVar5);
          if ((undefined1 *)0x7f < &DAT_ffff0100 + iVar6) {
            return;
          }
          uStack_b4 = (undefined1 *)CONCAT31(uStack_b4._1_3_,bVar2 + 0x9f);
          uVar3 = (**(code **)(*piVar5 + 0xf8))(piVar5);
          uStack_b4._0_2_ = CONCAT11(uVar3,(undefined1)uStack_b4);
          uVar11 = (**(code **)(*piVar5 + 0xec))(piVar5);
          uVar7 = 3;
          uStack_b4._0_3_ = CONCAT12((char)(uVar11 >> 9),(undefined2)uStack_b4);
        }
      }
      else if (iVar6 == 0x81) {
        uStack_b4 = (undefined1 *)CONCAT31(uStack_b4._1_3_,bVar2 - 0x21);
        iVar6 = (**(code **)(*piVar5 + 0xec))(piVar5);
        uStack_b4._0_2_ = CONCAT11((byte)((uint)(iVar6 << 0x17) >> 0x19),(undefined1)uStack_b4);
        uVar11 = (**(code **)(*piVar5 + 0xec))(piVar5);
        uVar7 = 3;
        uStack_b4._0_3_ = CONCAT12((char)(uVar11 >> 9),(undefined2)uStack_b4);
      }
      else {
        uVar11 = (**(code **)(*piVar5 + 0xdc))(piVar5);
        if (uVar11 < 0x20) {
          cVar1 = *(char *)(param_1 + 0x49);
          if (cVar1 != '\0') {
            if (cVar1 == '\x01') {
              uStack_b4 = (undefined1 *)CONCAT31(uStack_b4._1_3_,bVar2 + 0xaf);
              uVar3 = (**(code **)(*piVar5 + 0xdc))(piVar5);
              uStack_b4._0_2_ = CONCAT11(uVar3,(undefined1)uStack_b4);
              uVar11 = (**(code **)(*piVar5 + 0xec))(piVar5);
              uStack_b4._0_3_ = CONCAT12((char)(uVar11 >> 9),(undefined2)uStack_b4);
              uStack_b4 = (undefined1 *)CONCAT13(bVar2 + 0xaf,(undefined3)uStack_b4);
              cStack_b0 = (**(code **)(*piVar5 + 0xdc))(piVar5);
              cStack_b0 = cStack_b0 + ' ';
              iVar6 = (**(code **)(*piVar5 + 0xec))(piVar5);
              bStack_af = (byte)((uint)(iVar6 << 0x17) >> 0x19);
            }
            else {
              if (cVar1 != '\x02') {
                return;
              }
              uStack_b4 = (undefined1 *)CONCAT31(uStack_b4._1_3_,bVar2 + 0xaf);
              uVar3 = (**(code **)(*piVar5 + 0xdc))(piVar5);
              uStack_b4._0_2_ = CONCAT11(uVar3,(undefined1)uStack_b4);
              iVar6 = (**(code **)(*piVar5 + 0xec))(piVar5);
              bStack_af = (byte)((uint)(iVar6 << 0x17) >> 0x19);
              uStack_b4 = (undefined1 *)CONCAT13(bVar2 + 0xaf,(undefined3)uStack_b4);
              cStack_b0 = (**(code **)(*piVar5 + 0xdc))(piVar5);
              cStack_b0 = cStack_b0 + ' ';
              uVar11 = (**(code **)(*piVar5 + 0xec))(piVar5);
              uStack_b4._0_3_ = CONCAT12((char)(uVar11 >> 9),(undefined2)uStack_b4);
            }
            uVar11 = 0;
            while ((uVar11 < *(ushort *)(param_1 + 0x34) &&
                   (puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x30) + uVar11 * 4),
                   puVar4 != (undefined4 *)0x0))) {
              (**(code **)(*param_3 + 0x60))(auStack_a0,param_3);
              piVar5 = *(int **)(param_1 + 0x18);
              if (piVar5 != (int *)0x0) {
                piVar5 = (int *)(*(int *)(*piVar5 + -0x14) + (int)piVar5);
              }
              (**(code **)*puVar4)(puVar4,piVar5,3,&uStack_b4);
              uVar11 = uVar11 + 1 & 0xfffeffff;
            }
            uVar11 = 0;
            while( true ) {
              if (*(ushort *)(param_1 + 0x34) <= uVar11) {
                return;
              }
              puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x30) + uVar11 * 4);
              if (puVar4 == (undefined4 *)0x0) break;
              (**(code **)(*param_3 + 0x60))(auStack_68,param_3);
              piVar5 = *(int **)(param_1 + 0x18);
              if (piVar5 != (int *)0x0) {
                piVar5 = (int *)(*(int *)(*piVar5 + -0x14) + (int)piVar5);
              }
              (**(code **)*puVar4)(puVar4,piVar5,3,(int)&uStack_b4 + 3);
              uVar11 = uVar11 + 1 & 0xfffeffff;
            }
            return;
          }
        }
        else {
          uVar11 = (**(code **)(*piVar5 + 0xdc))(piVar5);
          if ((0x3f < uVar11) && (uVar11 = (**(code **)(*piVar5 + 0xdc))(piVar5), 0x7f < uVar11)) {
            return;
          }
        }
        uStack_b4 = (undefined1 *)CONCAT31(uStack_b4._1_3_,bVar2 + 0xaf);
        uVar3 = (**(code **)(*piVar5 + 0xdc))(piVar5);
        uStack_b4._0_2_ = CONCAT11(uVar3,(undefined1)uStack_b4);
        uVar11 = (**(code **)(*piVar5 + 0xec))(piVar5);
        uVar7 = 3;
        uStack_b4._0_3_ = CONCAT12((char)(uVar11 >> 9),(undefined2)uStack_b4);
      }
      uVar11 = 0;
      while( true ) {
        if (*(ushort *)(param_1 + 0x34) <= uVar11) {
          return;
        }
        puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x30) + uVar11 * 4);
        if (puVar4 == (undefined4 *)0x0) break;
        (**(code **)(*param_3 + 0x60))(auStack_58,param_3);
        piVar5 = *(int **)(param_1 + 0x18);
        if (piVar5 != (int *)0x0) {
          piVar5 = (int *)(*(int *)(*piVar5 + -0x14) + (int)piVar5);
        }
        (**(code **)*puVar4)(puVar4,piVar5,uVar7,&uStack_b4);
        uVar11 = uVar11 + 1 & 0xfffeffff;
      }
      return;
    }
    return;
  }
  if (iVar6 != 0x8202) {
    if (iVar6 != 0x8204 || uVar11 != 0) {
      return;
    }
    piVar5 = (int *)(**(code **)(*(int *)((int)param_3 + *(int *)(*param_3 + -0x38)) + 0x24))
                              (*(int *)(*param_3 + -0x38) + (int)param_3);
    uVar11 = 0;
    while ((uVar11 < *(ushort *)(param_1 + 0x34) &&
           (piVar10 = *(int **)(*(int *)(param_1 + 0x30) + uVar11 * 4), piVar10 != (int *)0x0))) {
      (**(code **)(*param_3 + 0x60))(auStack_38,param_3);
      (**(code **)(*piVar5 + 0x8c))(piVar5);
      uStack_ac = (**(code **)(*piVar5 + 0x88))(piVar5);
      uVar7 = (**(code **)(*piVar5 + 0x84))(piVar5);
      piVar8 = *(int **)(param_1 + 0x18);
      if (piVar8 != (int *)0x0) {
        piVar8 = (int *)(*(int *)(*piVar8 + -0x14) + (int)piVar8);
      }
      uStack_b4 = auStack_38;
      (**(code **)(*piVar10 + 4))(piVar10,piVar8,uVar7,uStack_ac);
      uVar11 = uVar11 + 1 & 0xfffeffff;
    }
    iVar6 = (**(code **)(*piVar5 + 0x84))(piVar5);
    if (iVar6 == 0) {
      uVar7 = FUN_0017bfc0();
      *(undefined4 *)(param_1 + 0x50) = uVar7;
      return;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    return;
  }
  piVar5 = (int *)(**(code **)(*(int *)((int)param_3 + *(int *)(*param_3 + -0x38)) + 0x24))
                            (*(int *)(*param_3 + -0x38) + (int)param_3);
  if (uVar11 == 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      return;
    }
    iVar6 = (**(code **)(*piVar5 + 0xa8))(piVar5);
    if (iVar6 == 0x209) {
      cStack_b0 = -0xf;
      bStack_af = (**(code **)(*piVar5 + 0xb0))(piVar5);
      bStack_af = bStack_af & 0x7f;
      uVar7 = 2;
      goto LAB_00124d50;
    }
    if (iVar6 != 0x20a) {
      if (iVar6 == 0x20b) {
        cStack_b0 = -0xd;
        bStack_af = (**(code **)(*piVar5 + 0xb0))(piVar5);
        bStack_af = bStack_af & 0x7f;
        uVar7 = 2;
      }
      else {
        if (iVar6 != 0x20e) {
          return;
        }
        uVar7 = 1;
        cStack_b0 = -10;
      }
      goto LAB_00124d50;
    }
    cStack_b0 = -0xe;
    bStack_af = (**(code **)(*piVar5 + 0xb0))(piVar5);
    bStack_af = bStack_af & 0x7f;
    iVar6 = (**(code **)(*piVar5 + 0xb0))(piVar5);
    bStack_ae = (byte)((uint)(iVar6 << 0x12) >> 0x19);
  }
  else {
    if (0xf < uVar11 - 1) {
      return;
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      return;
    }
    iVar6 = (**(code **)(*piVar5 + 0xa8))(piVar5);
    if (iVar6 == 0x160) {
      cStack_b0 = bVar2 + 0xbf;
      bStack_af = (**(code **)(*piVar5 + 0xb0))(piVar5);
      bStack_af = bStack_af & 0x7f;
      uVar7 = 2;
      goto LAB_00124d50;
    }
    cStack_b0 = bVar2 + 0xaf;
    bStack_af = (**(code **)(*piVar5 + 0xa8))(piVar5);
    bStack_ae = (**(code **)(*piVar5 + 0xb0))(piVar5);
    bStack_ae = bStack_ae & 0x7f;
  }
  uVar7 = 3;
LAB_00124d50:
  uVar11 = 0;
  while( true ) {
    if (*(ushort *)(param_1 + 0x34) <= uVar11) {
      return;
    }
    puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x30) + uVar11 * 4);
    if (puVar4 == (undefined4 *)0x0) break;
    (**(code **)(*param_3 + 0x60))(auStack_48,param_3);
    piVar5 = *(int **)(param_1 + 0x18);
    if (piVar5 != (int *)0x0) {
      piVar5 = (int *)(*(int *)(*piVar5 + -0x14) + (int)piVar5);
    }
    (**(code **)*puVar4)(puVar4,piVar5,uVar7,&cStack_b0);
    uVar11 = uVar11 + 1 & 0xfffeffff;
  }
  return;
}


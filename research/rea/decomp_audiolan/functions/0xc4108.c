// rea decompile_all
// name: FUN_000c4108
// address: 0xc4108
// body: available
// range: 0xc4108-0xc44eb inclusive
// range: 0xc44fc-0xc474f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000c4108(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 **ppuVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint unaff_r5;
  undefined1 *puVar15;
  bool bVar16;
  uint *puStack_70;
  undefined1 *puStack_6c;
  undefined1 *apuStack_68 [2];
  undefined1 *puStack_60;
  uint *puStack_5c;
  uint uStack_54;
  uint *puStack_50;
  undefined1 auStack_4c [2];
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined1 auStack_40 [4];
  uint uStack_3c;
  undefined4 uStack_34;
  undefined4 local_30;
  uint uStack_2c;
  uint *puStack_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  puStack_28 = param_4;
  iVar2 = FUN_00041e54(param_2);
  if (iVar2 == 0) {
    return;
  }
  puStack_5c = DAT_000c44ec;
  puStack_70 = DAT_000c44ec;
  puStack_50 = DAT_000c44ec;
  iVar2 = FUN_000424ec(local_30,&puStack_70,&puStack_50);
  do {
    if (iVar2 == 0) {
      if (puStack_50 != puStack_5c) {
        puVar4 = puStack_50 + -3;
        uVar13 = *puVar4;
        if ((uVar13 == 0xffffffff) ||
           ((puVar4 != DAT_000c44f4 && (*puVar4 = uVar13 - 1, uVar13 == 0)))) {
          FUN_0010fa20(puStack_50 + -3,puStack_50[-2] + 0xe,0);
        }
      }
      if (puStack_70 == puStack_5c) {
        return;
      }
      puVar4 = puStack_70 + -3;
      uVar13 = *puVar4;
      if (uVar13 != 0xffffffff) {
        if (puVar4 == DAT_000c44f4) {
          return;
        }
        *puVar4 = uVar13 - 1;
        if (uVar13 != 0) {
          return;
        }
      }
      FUN_0010fa20(puStack_70 + -3,puStack_70[-2] + 0xe,0);
      return;
    }
    uVar13 = puStack_70[-1];
    puVar4 = puStack_70;
    if (uVar13 != 0) {
      pcVar3 = (char *)((uVar13 - 1) + (int)puStack_70);
      iVar12 = 2 - ((int)puStack_70 - (int)pcVar3);
      iVar2 = iVar12;
      if (1 < iVar12) {
        iVar2 = (int)puStack_70 - (int)pcVar3;
      }
      iVar8 = 1;
      if (1 < iVar12) {
        unaff_r5 = 2 - iVar2;
      }
      puStack_6c = (undefined1 *)CONCAT31(puStack_6c._1_3_,0x2f);
      if (1 < iVar12) {
        do {
          if (*pcVar3 == '/') {
            if (pcVar3 == (char *)0x0) goto LAB_000c43f8;
            iVar2 = (int)pcVar3 - (int)puStack_70;
            goto LAB_000c41c8;
          }
          iVar8 = iVar8 + 1;
          pcVar3 = pcVar3 + -1;
        } while (iVar8 < (int)unaff_r5);
      }
      iVar2 = -1;
LAB_000c41c8:
      if (iVar2 != -1) {
        uVar6 = uVar13;
        if (iVar2 + 1U < uVar13) {
          uVar6 = iVar2 + 1U;
        }
        uVar10 = uVar6;
        if (uVar13 <= uVar6) {
          uVar10 = uVar13;
        }
        uStack_54 = uStack_54 & 0xffffff00;
        if (0xfffffff1 < uVar13 - uVar10) {
          FUN_0010f7cc(8,&DAT_000c44f0,&DAT_000c44f0);
        }
        uVar13 = puStack_70[-1];
        puVar14 = (undefined1 *)(uVar13 - uVar10);
        if (puVar14 == (undefined1 *)0x0) {
          puVar4 = puStack_5c;
          if (puStack_70 != puStack_5c) {
            puVar5 = puStack_70 + -3;
            uVar13 = *puVar5;
            if ((uVar13 == 0xffffffff) ||
               ((puVar4 = puStack_5c, puVar5 != DAT_000c44f4 &&
                (*puVar5 = uVar13 - 1, puVar4 = puStack_5c, uVar13 == 0)))) {
              FUN_0010fa20(puStack_70 + -3,puStack_70[-2] + 0xe,0);
              puVar4 = puStack_5c;
            }
          }
        }
        else {
          puStack_60 = puVar14;
          if ((puStack_70[-3] + 1 < 2) && (puVar14 <= (undefined1 *)puStack_70[-2])) {
            bVar16 = &uStack_54 <= puStack_70;
            if (puStack_70 <= &uStack_54) {
              bVar16 = (uint *)((int)puStack_70 + uVar13) <= &uStack_54;
            }
            if (bVar16) {
              FUN_000036fc(puStack_70,(int)puStack_70 + uVar6,puVar14);
              puStack_70[-1] = (uint)puVar14;
              *(undefined1 *)((int)puStack_70 + (int)puVar14) = 0;
              puVar4 = puStack_70;
              goto LAB_000c43f8;
            }
          }
          puStack_6c = (undefined1 *)(uVar13 + (uVar13 >> 1) + (uVar13 >> 3));
          if (puStack_6c < (undefined1 *)(uVar13 + 0x80)) {
            puStack_6c = (undefined1 *)(uVar13 + 0x80);
          }
          apuStack_68[0] = puVar14;
          ppuVar9 = &puStack_6c;
          if (puStack_6c < puVar14) {
            ppuVar9 = apuStack_68;
          }
          puVar15 = *ppuVar9;
          if ((undefined1 *)0xfffffff1 < puVar15) {
            FUN_0010f7cc(8,&DAT_000c44f0,&DAT_000c44f0,puVar15);
          }
          if (puVar15 < puVar14) {
            FUN_0010f7cc(8,&DAT_000c44f0,&DAT_000c44f0,puVar14);
          }
          puVar4 = DAT_000c44f4;
          if (puVar15 != (undefined1 *)0x0) {
            puVar4 = (uint *)FUN_0010f82c(puVar15 + 0xe,0);
            if (puVar4 != (uint *)0x0) {
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
            }
            puVar4[2] = (uint)puVar14;
            puVar4[1] = (uint)puVar15;
            *puVar4 = 0;
            if ((undefined1 *)((int)puVar4 + (int)puVar14) + 0xc != (undefined1 *)0x0) {
              ((undefined1 *)((int)puVar4 + (int)puVar14))[0xc] = 0;
            }
          }
          if (puStack_60 != (undefined1 *)0x0) {
            FUN_00003628(puVar4 + 3,(int)puStack_70 + uVar6,puStack_60);
          }
          if (puStack_70 != puStack_5c) {
            puVar5 = puStack_70 + -3;
            uVar13 = *puVar5;
            if ((uVar13 == 0xffffffff) ||
               ((puVar5 != DAT_000c44f4 && (*puVar5 = uVar13 - 1, uVar13 == 0)))) {
              FUN_0010fa20(puStack_70 + -3,puStack_70[-2] + 0xe,0);
            }
          }
          puVar4 = puVar4 + 3;
        }
      }
    }
LAB_000c43f8:
    puStack_70 = puVar4;
    iVar2 = DAT_000c44f8;
    unaff_r5 = 0;
    do {
      iVar12 = FUN_00002ed0(puStack_70,*(undefined4 *)(iVar2 + unaff_r5 * 4),&uStack_54);
      if (iVar12 == 1) {
        if (unaff_r5 == param_3) {
          uVar13 = 0;
          do {
            iVar12 = FUN_00002ed0(puStack_50,*(undefined4 *)(DAT_000c44f8 + uVar13 * 4),auStack_40);
            iVar2 = DAT_000c4750;
            if ((iVar12 == 1) && ((uVar13 != param_3 || (param_3 == 0)))) {
              auStack_4c[0] = (undefined1)uVar13;
              uStack_48 = (undefined2)uStack_54;
              uStack_4a = auStack_40._0_2_;
              uVar6 = param_4[1];
              if (uVar6 == param_4[2]) {
                iVar8 = (int)((ulonglong)
                              ((longlong)DAT_000c4750 * (longlong)(int)(param_4[2] - *param_4)) >>
                             0x20);
                lVar1 = (longlong)DAT_000c4750 * (longlong)(int)(uVar6 - *param_4);
                iVar12 = (int)((ulonglong)lVar1 >> 0x20);
                uVar10 = iVar12 - (iVar12 >> 0x1f);
                puStack_60 = auStack_4c;
                if (uVar10 < (uint)(iVar8 - (iVar8 >> 0x1f))) {
                  param_4[1] = uVar6 + 6;
                  if (uVar6 != 0) {
                    FUN_0016d9dc(uVar6,uVar6 - 6);
                  }
                  uVar10 = uVar6 - 6;
                  unaff_r5 = uVar6;
                  if (5 < (int)(uVar10 - uVar6)) {
                    iVar2 = (int)((ulonglong)((longlong)iVar2 * (longlong)(int)(uVar10 - uVar6)) >>
                                 0x20);
                    uVar11 = uVar10;
                    if ((iVar2 - (iVar2 >> 0x1f) & 1U) != 0) {
                      uVar11 = uVar6 - 0xc;
                      FUN_0016d9dc(uVar10,uVar11);
                      unaff_r5 = uVar10;
                    }
                    for (iVar2 = iVar2 / 2; iVar2 != 0; iVar2 = iVar2 + -1) {
                      FUN_0016d9dc(unaff_r5 - 6,uVar11 - 6);
                      unaff_r5 = unaff_r5 - 0xc;
                      uVar11 = uVar11 - 0xc;
                      FUN_0016d9dc();
                    }
                  }
                  FUN_0016d9dc(uVar6,puStack_60);
                }
                else {
                  uVar11 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
                  uStack_3c = uVar10 + 1;
                  if (uVar10 + 1 <= uVar11) {
                    uStack_3c = uVar11;
                  }
                  uVar7 = FUN_0010f82c(uStack_3c * 6,0,uVar11,(int)lVar1);
                  uVar11 = uVar7;
                  for (uVar10 = *param_4; uVar10 != uVar6; uVar10 = uVar10 + 6) {
                    if (uVar11 != 0) {
                      FUN_0016d9dc(uVar11,uVar10);
                    }
                    uVar11 = uVar11 + 6;
                  }
                  iVar2 = (int)((ulonglong)
                                ((longlong)DAT_000c4750 * (longlong)(int)(uVar6 - *param_4)) >> 0x20
                               );
                  iVar2 = uVar7 + (iVar2 - (iVar2 >> 0x1f)) * 6;
                  if (iVar2 != 0) {
                    FUN_0016d9dc(iVar2,puStack_60);
                  }
                  uVar10 = param_4[1];
                  iVar2 = (int)((ulonglong)
                                ((longlong)DAT_000c4750 * (longlong)(int)(uVar6 - *param_4)) >> 0x20
                               );
                  unaff_r5 = uVar7 + (iVar2 - (iVar2 >> 0x1f)) * 6;
                  for (; unaff_r5 = unaff_r5 + 6, uVar6 != uVar10; uVar6 = uVar6 + 6) {
                    if (unaff_r5 != 0) {
                      FUN_0016d9dc(unaff_r5,uVar6);
                    }
                  }
                  uVar6 = *param_4;
                  iVar2 = (int)((ulonglong)
                                ((longlong)DAT_000c4750 * (longlong)(int)(param_4[1] - uVar6)) >>
                               0x20);
                  iVar12 = (int)((ulonglong)
                                 ((longlong)DAT_000c4750 * (longlong)(int)(param_4[2] - uVar6)) >>
                                0x20);
                  FUN_0010fa20(uVar6,iVar12 - (iVar12 >> 0x1f),0);
                  *param_4 = uVar7;
                  param_4[1] = uVar7 + (iVar2 - (iVar2 >> 0x1f)) * 6 + 6;
                  param_4[2] = uVar7 + uStack_3c * 6;
                }
              }
              else {
                param_4[1] = uVar6 + 6;
                if (uVar6 != 0) {
                  FUN_0016d9dc();
                }
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < 3);
        }
        break;
      }
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < 3);
    iVar2 = FUN_000424ec(local_30,&puStack_70,&puStack_50);
  } while( true );
}


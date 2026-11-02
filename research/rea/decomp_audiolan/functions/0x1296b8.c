// rea decompile_all
// name: FUN_001296b8
// address: 0x1296b8
// body: available
// range: 0x1296b8-0x129807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001296b8(int param_1,uint param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint extraout_r2;
  uint extraout_r2_00;
  int extraout_r3;
  int extraout_r3_00;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined1 auStack_d0 [172];
  undefined1 auStack_24 [12];
  
  cVar2 = *(char *)((int)param_3 + 0x6d);
  if (cVar2 == 'D') {
    FUN_00118fe8(**(int **)(param_1 + 0x7c) + 0x658,param_3);
    goto LAB_00118b28;
  }
  if (cVar2 == 'P') {
    FUN_00133a14(**(int **)(param_1 + 0x7c) + 0x8a4,param_1,param_2,param_3);
    goto LAB_00118b28;
  }
  if (cVar2 == '`') {
    FUN_00138080(param_1 + 0x118,param_3);
    goto LAB_00118b28;
  }
  if (cVar2 == 'a') {
    FUN_001383e4(param_1 + 0x120,param_3);
    goto LAB_00118b28;
  }
  if ((*(byte *)(param_3 + 0x1b) & 2) == 0) {
    if (param_2 < 0x8000) {
      iVar8 = FUN_0012bbec(param_1 + 0x90);
      if (iVar8 != 0) {
        FUN_001434e4(iVar8,param_3);
      }
      goto LAB_00118b28;
    }
    iVar8 = FUN_00125974(param_1 + 0x98);
joined_r0x001297dc:
    if (iVar8 != 0) {
      FUN_00142128(iVar8,param_3);
    }
  }
  else {
    if (param_2 < 0x4000) {
      piVar7 = (int *)FUN_0012da4c(param_1 + 0x80);
    }
    else {
      if (0x7fff < param_2) {
        iVar8 = FUN_00125974(param_1 + 0x98);
        goto joined_r0x001297dc;
      }
      piVar7 = (int *)FUN_0012da4c(param_1 + 0x88);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc0))(piVar7,param_3);
    }
  }
LAB_00118b28:
  iVar8 = **(int **)(param_1 + 0x7c);
  if (param_3 == (int *)0x0) {
    return;
  }
  uVar3 = *(uint *)(iVar8 + 0x65c);
  bVar17 = uVar3 == 0;
  if (bVar17) {
    uVar3 = *(uint *)(iVar8 + 0x660);
  }
  bVar19 = uVar3 != 0;
  if (!bVar17 || bVar19) {
    uVar3 = (uint)*(byte *)(param_3 + 0x1b);
  }
  bVar18 = (uVar3 & 1) == 0;
  puVar16 = (undefined4 *)auStack_d0;
  if (bVar17 && !bVar19 || bVar18) {
    puVar16 = (undefined4 *)auStack_24;
  }
  if (bVar17 && !bVar19 || bVar18) {
    return;
  }
  (**(code **)(*param_3 + 0x6c))(puVar16 + 0x26);
  iVar4 = FUN_0010f638(puVar16 + 0x20);
  iVar4 = FUN_0010f638(iVar4 + 0xc);
  FUN_0010f650(iVar4 + -0xc,puVar16 + 0x26);
  *(undefined2 *)(iVar4 + -4) = 0;
  FUN_0010f650(iVar4,param_1 + 0x40);
  *(undefined2 *)(iVar4 + 8) = 0;
  iVar4 = *(int *)(iVar8 + 0x678);
  if (*(int *)(iVar8 + 0x678) != 0) {
    do {
      iVar5 = FUN_0010f4d8(puVar16 + 0x20,iVar4);
      if (iVar5 == 0) {
        iVar5 = FUN_0010f4d8(puVar16 + 0x23,iVar4 + 0xc);
      }
      bVar17 = iVar5 < 0;
      bVar19 = iVar5 == 0;
      if (0 < iVar5) {
        iVar5 = 1;
      }
      if (bVar17) {
        iVar5 = 0;
      }
      if (bVar19) {
        if (iVar4 != 0) goto LAB_00118eb4;
        break;
      }
      iVar9 = *(int *)(iVar4 + iVar5 * 4 + 0x1c);
      if (iVar9 == 0) break;
      bVar1 = 0;
      if (iVar5 != 0) {
        bVar1 = *(byte *)(iVar4 + 0x24);
      }
      iVar4 = iVar9;
    } while (iVar5 == 0 || (bVar1 & 0x80) == 0);
  }
  iVar4 = FUN_0016d7a4(0x28,DAT_00118ed4);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = FUN_0010f638();
  iVar5 = FUN_0010f638(iVar4 + 0xc);
  iVar4 = iVar5 + -0xc;
  FUN_0010f650(iVar4,puVar16 + 0x20);
  FUN_0010f650(iVar5,puVar16 + 0x23);
  *(undefined2 *)(iVar5 + 0xc) = 0;
  *(undefined1 *)(iVar5 + 0xe) = 0;
  *(undefined4 *)(iVar5 + 0x14) = 0;
  piVar7 = (int *)(iVar8 + 0x674);
  *(undefined4 *)(iVar5 + 0x10) = 0;
  if (*(int *)(iVar8 + 0x678) == 0) {
    *piVar7 = *piVar7 + 1;
    *(undefined1 *)(iVar5 + 0x18) = 1;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(int *)(iVar8 + 0x678) = iVar4;
  }
  else {
    iVar9 = *(int *)(iVar8 + 0x678);
    iVar11 = 0;
    do {
      puVar16[iVar11] = iVar9;
      iVar15 = iVar11 + 1;
      uVar20 = FUN_0010f4d8(iVar4,iVar9);
      uVar3 = extraout_r2;
      iVar12 = extraout_r3;
      if ((int)uVar20 == 0) {
        uVar20 = FUN_0010f4d8(iVar5,iVar9 + 0xc);
        uVar3 = extraout_r2_00;
        iVar12 = extraout_r3_00;
      }
      uVar10 = (uint)((ulonglong)uVar20 >> 0x20);
      iVar6 = (int)uVar20;
      if (0 < iVar6) {
        iVar12 = 1;
      }
      if (iVar6 < 0) {
        iVar12 = 0;
      }
      if (iVar6 == 0) break;
      iVar6 = *(int *)(iVar9 + iVar12 * 4 + 0x1c);
      if (iVar6 == 0) {
LAB_00118d18:
        *piVar7 = *piVar7 + 1;
        *(undefined1 *)(iVar5 + 0x18) = 0x81;
        *(undefined4 *)(iVar5 + 0x10) = 0;
        if (iVar12 == 0) {
          *(int *)(iVar5 + 0x14) = iVar9;
        }
        else {
          *(byte *)(iVar9 + 0x24) = *(byte *)(iVar9 + 0x24) & 0x7f;
          *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar9 + iVar12 * 4 + 0x1c);
        }
        iVar5 = iVar11 + 2;
        iVar15 = 1;
        *(int *)(iVar9 + iVar12 * 4 + 0x1c) = iVar4;
        if (1 < iVar5) {
          do {
            if (iVar11 != 0) {
              uVar3 = puVar16[iVar11];
              if (*(uint *)(puVar16[iVar11 + -1] + 0x20) == uVar3) {
                iVar12 = 1;
              }
              else {
                iVar12 = 0;
              }
            }
            uVar10 = puVar16[iVar11];
            if (uVar10 != 0) {
              uVar3 = *(uint *)(uVar10 + 0x1c);
            }
            if (uVar10 != 0 && uVar3 != 0) {
              if (((byte)(*(byte *)(uVar3 + 0x24) * '\x02') ==
                   (byte)(*(byte *)(uVar10 + 0x24) * '\x02')) &&
                 ((*(byte *)(uVar10 + 0x24) & 0x7f) != 0)) {
                if ((*(byte *)(uVar3 + 0x24) & 0x80) == 0) {
                  uVar13 = *(undefined4 *)(uVar3 + 0x20);
                }
                else {
                  uVar13 = 0;
                }
                *(undefined4 *)(uVar10 + 0x1c) = uVar13;
                *(uint *)(uVar3 + 0x20) = uVar10;
                *(byte *)(uVar3 + 0x24) = *(byte *)(uVar3 + 0x24) & 0x7f;
                uVar10 = uVar3;
              }
            }
            puVar16[iVar11] = uVar10;
            if (uVar10 != 0) {
              bVar1 = *(byte *)(uVar10 + 0x24);
              uVar3 = (uint)bVar1;
              if (((((bVar1 & 0x80) == 0) && (uVar14 = *(uint *)(uVar10 + 0x20), uVar14 != 0)) &&
                  ((*(byte *)(uVar14 + 0x24) & 0x80) == 0)) &&
                 (((*(int *)(uVar14 + 0x20) != 0 &&
                   ((*(byte *)(*(int *)(uVar14 + 0x20) + 0x24) & 0x7f) == (uVar3 & 0x7f))) &&
                  ((bVar1 & 0x7f) != 0)))) {
                if (*(int *)(uVar14 + 0x1c) == 0) {
                  *(byte *)(uVar10 + 0x24) = bVar1 | 0x80;
                }
                else {
                  *(int *)(uVar10 + 0x20) = *(int *)(uVar14 + 0x1c);
                }
                *(uint *)(uVar14 + 0x1c) = uVar10;
                uVar3 = *(byte *)(uVar14 + 0x24) + 1;
                *(char *)(uVar14 + 0x24) = (char)uVar3;
                uVar10 = uVar14;
              }
            }
            puVar16[iVar11] = uVar10;
            if (iVar11 == 0) {
              *(undefined4 *)(iVar8 + 0x678) = *puVar16;
            }
            else {
              uVar3 = iVar12 * 4 + 0x1c;
              *(uint *)(puVar16[iVar11 + -1] + uVar3) = uVar10;
            }
            iVar15 = iVar15 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar15 < iVar5);
        }
        break;
      }
      if (iVar12 != 0) {
        uVar10 = (uint)*(byte *)(iVar9 + 0x24);
      }
      if (iVar12 != 0 && (uVar10 & 0x80) != 0) goto LAB_00118d18;
      iVar9 = iVar6;
      iVar11 = iVar15;
    } while (iVar15 < 0x20);
  }
LAB_00118eb4:
  *(short *)(iVar4 + 0x18) = *(short *)((int)param_3 + 0x6a) + *(short *)(iVar4 + 0x18);
  *(undefined1 *)(iVar4 + 0x1a) = 1;
  return;
}


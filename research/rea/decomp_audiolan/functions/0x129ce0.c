// rea decompile_all
// name: FUN_00129ce0
// address: 0x129ce0
// body: available
// range: 0x118b28-0x118ed3 inclusive
// range: 0x129ce0-0x129d57 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00129ce0(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint extraout_r2;
  uint extraout_r2_00;
  int extraout_r3;
  int extraout_r3_00;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined1 auStack_d0 [172];
  undefined1 auStack_24 [12];
  
  iVar6 = FUN_0010ed7c(param_2);
  if (iVar6 != 4) {
    if (iVar6 == 5) {
      FUN_0012591c(param_1 + 0x98,param_2,param_3);
      goto LAB_00118b28;
    }
    if (iVar6 != 0x7f02) goto LAB_00118b28;
  }
  FUN_0012b550(param_1 + 0x90,param_2,param_3);
LAB_00118b28:
  iVar6 = **(int **)(param_1 + 0x7c);
  if (param_3 == (int *)0x0) {
    return;
  }
  uVar2 = *(uint *)(iVar6 + 0x65c);
  bVar16 = uVar2 == 0;
  if (bVar16) {
    uVar2 = *(uint *)(iVar6 + 0x660);
  }
  bVar18 = uVar2 != 0;
  if (!bVar16 || bVar18) {
    uVar2 = (uint)*(byte *)(param_3 + 0x1b);
  }
  bVar17 = (uVar2 & 1) == 0;
  puVar15 = (undefined4 *)auStack_d0;
  if (bVar16 && !bVar18 || bVar17) {
    puVar15 = (undefined4 *)auStack_24;
  }
  if (bVar16 && !bVar18 || bVar17) {
    return;
  }
  (**(code **)(*param_3 + 0x6c))(puVar15 + 0x26);
  iVar3 = FUN_0010f638(puVar15 + 0x20);
  iVar3 = FUN_0010f638(iVar3 + 0xc);
  FUN_0010f650(iVar3 + -0xc,puVar15 + 0x26);
  *(undefined2 *)(iVar3 + -4) = 0;
  FUN_0010f650(iVar3,param_1 + 0x40);
  *(undefined2 *)(iVar3 + 8) = 0;
  iVar3 = *(int *)(iVar6 + 0x678);
  if (*(int *)(iVar6 + 0x678) != 0) {
    do {
      iVar4 = FUN_0010f4d8(puVar15 + 0x20,iVar3);
      if (iVar4 == 0) {
        iVar4 = FUN_0010f4d8(puVar15 + 0x23,iVar3 + 0xc);
      }
      bVar16 = iVar4 < 0;
      bVar18 = iVar4 == 0;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (bVar16) {
        iVar4 = 0;
      }
      if (bVar18) {
        if (iVar3 != 0) goto LAB_00118eb4;
        break;
      }
      iVar7 = *(int *)(iVar3 + iVar4 * 4 + 0x1c);
      if (iVar7 == 0) break;
      bVar1 = 0;
      if (iVar4 != 0) {
        bVar1 = *(byte *)(iVar3 + 0x24);
      }
      iVar3 = iVar7;
    } while (iVar4 == 0 || (bVar1 & 0x80) == 0);
  }
  iVar3 = FUN_0016d7a4(0x28,DAT_00118ed4);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_0010f638();
  iVar4 = FUN_0010f638(iVar3 + 0xc);
  iVar3 = iVar4 + -0xc;
  FUN_0010f650(iVar3,puVar15 + 0x20);
  FUN_0010f650(iVar4,puVar15 + 0x23);
  *(undefined2 *)(iVar4 + 0xc) = 0;
  *(undefined1 *)(iVar4 + 0xe) = 0;
  *(undefined4 *)(iVar4 + 0x14) = 0;
  piVar13 = (int *)(iVar6 + 0x674);
  *(undefined4 *)(iVar4 + 0x10) = 0;
  if (*(int *)(iVar6 + 0x678) == 0) {
    *piVar13 = *piVar13 + 1;
    *(undefined1 *)(iVar4 + 0x18) = 1;
    *(undefined4 *)(iVar4 + 0x14) = 0;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(int *)(iVar6 + 0x678) = iVar3;
  }
  else {
    iVar7 = *(int *)(iVar6 + 0x678);
    iVar9 = 0;
    do {
      puVar15[iVar9] = iVar7;
      iVar14 = iVar9 + 1;
      uVar19 = FUN_0010f4d8(iVar3,iVar7);
      uVar2 = extraout_r2;
      iVar10 = extraout_r3;
      if ((int)uVar19 == 0) {
        uVar19 = FUN_0010f4d8(iVar4,iVar7 + 0xc);
        uVar2 = extraout_r2_00;
        iVar10 = extraout_r3_00;
      }
      uVar8 = (uint)((ulonglong)uVar19 >> 0x20);
      iVar5 = (int)uVar19;
      if (0 < iVar5) {
        iVar10 = 1;
      }
      if (iVar5 < 0) {
        iVar10 = 0;
      }
      if (iVar5 == 0) break;
      iVar5 = *(int *)(iVar7 + iVar10 * 4 + 0x1c);
      if (iVar5 == 0) {
LAB_00118d18:
        *piVar13 = *piVar13 + 1;
        *(undefined1 *)(iVar4 + 0x18) = 0x81;
        *(undefined4 *)(iVar4 + 0x10) = 0;
        if (iVar10 == 0) {
          *(int *)(iVar4 + 0x14) = iVar7;
        }
        else {
          *(byte *)(iVar7 + 0x24) = *(byte *)(iVar7 + 0x24) & 0x7f;
          *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar7 + iVar10 * 4 + 0x1c);
        }
        iVar4 = iVar9 + 2;
        iVar14 = 1;
        *(int *)(iVar7 + iVar10 * 4 + 0x1c) = iVar3;
        if (1 < iVar4) {
          do {
            if (iVar9 != 0) {
              uVar2 = puVar15[iVar9];
              if (*(uint *)(puVar15[iVar9 + -1] + 0x20) == uVar2) {
                iVar10 = 1;
              }
              else {
                iVar10 = 0;
              }
            }
            uVar8 = puVar15[iVar9];
            if (uVar8 != 0) {
              uVar2 = *(uint *)(uVar8 + 0x1c);
            }
            if (uVar8 != 0 && uVar2 != 0) {
              if (((byte)(*(byte *)(uVar2 + 0x24) * '\x02') ==
                   (byte)(*(byte *)(uVar8 + 0x24) * '\x02')) &&
                 ((*(byte *)(uVar8 + 0x24) & 0x7f) != 0)) {
                if ((*(byte *)(uVar2 + 0x24) & 0x80) == 0) {
                  uVar11 = *(undefined4 *)(uVar2 + 0x20);
                }
                else {
                  uVar11 = 0;
                }
                *(undefined4 *)(uVar8 + 0x1c) = uVar11;
                *(uint *)(uVar2 + 0x20) = uVar8;
                *(byte *)(uVar2 + 0x24) = *(byte *)(uVar2 + 0x24) & 0x7f;
                uVar8 = uVar2;
              }
            }
            puVar15[iVar9] = uVar8;
            if (uVar8 != 0) {
              bVar1 = *(byte *)(uVar8 + 0x24);
              uVar2 = (uint)bVar1;
              if (((((bVar1 & 0x80) == 0) && (uVar12 = *(uint *)(uVar8 + 0x20), uVar12 != 0)) &&
                  ((*(byte *)(uVar12 + 0x24) & 0x80) == 0)) &&
                 (((*(int *)(uVar12 + 0x20) != 0 &&
                   ((*(byte *)(*(int *)(uVar12 + 0x20) + 0x24) & 0x7f) == (uVar2 & 0x7f))) &&
                  ((bVar1 & 0x7f) != 0)))) {
                if (*(int *)(uVar12 + 0x1c) == 0) {
                  *(byte *)(uVar8 + 0x24) = bVar1 | 0x80;
                }
                else {
                  *(int *)(uVar8 + 0x20) = *(int *)(uVar12 + 0x1c);
                }
                *(uint *)(uVar12 + 0x1c) = uVar8;
                uVar2 = *(byte *)(uVar12 + 0x24) + 1;
                *(char *)(uVar12 + 0x24) = (char)uVar2;
                uVar8 = uVar12;
              }
            }
            puVar15[iVar9] = uVar8;
            if (iVar9 == 0) {
              *(undefined4 *)(iVar6 + 0x678) = *puVar15;
            }
            else {
              uVar2 = iVar10 * 4 + 0x1c;
              *(uint *)(puVar15[iVar9 + -1] + uVar2) = uVar8;
            }
            iVar14 = iVar14 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar14 < iVar4);
        }
        break;
      }
      if (iVar10 != 0) {
        uVar8 = (uint)*(byte *)(iVar7 + 0x24);
      }
      if (iVar10 != 0 && (uVar8 & 0x80) != 0) goto LAB_00118d18;
      iVar7 = iVar5;
      iVar9 = iVar14;
    } while (iVar14 < 0x20);
  }
LAB_00118eb4:
  *(short *)(iVar3 + 0x18) = *(short *)((int)param_3 + 0x6a) + *(short *)(iVar3 + 0x18);
  *(undefined1 *)(iVar3 + 0x1a) = 1;
  return;
}


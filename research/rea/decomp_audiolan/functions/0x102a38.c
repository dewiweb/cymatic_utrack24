// rea decompile_all
// name: FUN_00102a38
// address: 0x102a38
// body: available
// range: 0x102a38-0x102f5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00102a38(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int extraout_r2;
  int iVar10;
  int extraout_r3;
  int iVar11;
  uint uVar12;
  int *piVar13;
  undefined1 uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  int aiStack_ac [34];
  
  uVar14 = 0;
  if (0xf0000000 < param_3) {
    return 1;
  }
  FUN_001a0700(param_1 + 0x100);
  uVar12 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x70);
  FUN_001a0d18(param_1 + 0x100);
  uVar9 = *(uint *)(param_1 + 0x184);
  if (*(uint *)(param_1 + 0x184) < uVar12) {
    uVar9 = uVar12;
  }
  *(uint *)(param_1 + 0x184) = uVar9;
  if (0x7f < uVar12) {
    FUN_001a0700(param_1 + 300);
    iVar5 = *(int *)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x48) != 0) {
      do {
        uVar18 = FUN_000ea1e8(param_2,iVar5);
        iVar8 = (int)((ulonglong)uVar18 >> 0x20);
        iVar3 = (int)uVar18;
        if (0 < iVar3) {
          iVar8 = 1;
        }
        if (iVar3 < 0) {
          iVar8 = 0;
        }
        if (iVar3 == 0) {
          if (iVar5 != 0) {
            if (*(char *)(iVar5 + 0x14) == '\0') {
              *(undefined1 *)(iVar5 + 0x14) = 1;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              *(int *)(param_1 + 0xda8) = *(int *)(param_1 + 0xda8) + 1;
            }
            FUN_001a0d18(param_1 + 300);
            return 3;
          }
          break;
        }
        iVar3 = *(int *)(iVar5 + iVar8 * 4 + 0x18);
        if (iVar3 == 0) break;
        bVar2 = 0;
        if (iVar8 != 0) {
          bVar2 = *(byte *)(iVar5 + 0x20);
        }
        iVar5 = iVar3;
      } while (iVar8 == 0 || (bVar2 & 0x80) == 0);
    }
    FUN_001a0d18(param_1 + 300);
    return 1;
  }
  FUN_001a0700(param_1 + 300);
  iVar5 = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x48) != 0) {
    do {
      iVar3 = FUN_000ea1e8(param_2,iVar5);
      bVar16 = iVar3 < 0;
      bVar17 = iVar3 == 0;
      if (0 < iVar3) {
        iVar3 = 1;
      }
      if (bVar16) {
        iVar3 = 0;
      }
      if (bVar17) {
        if (iVar5 != 0) {
          uVar9 = *(int *)(iVar5 + 0xc) + 1;
          uVar9 = uVar9 + (int)((longlong)((ulonglong)uVar9 * (ulonglong)DAT_00102f60) >> 0x3f) *
                          -0x10000000;
          if ((param_4 == 0) && (uVar9 != param_3)) {
            uVar9 = uVar9 - param_3;
            if (uVar9 + (int)((longlong)((ulonglong)uVar9 * (ulonglong)DAT_00102f60) >> 0x3f) *
                        -0x10000000 < 0x80) {
              uVar14 = 4;
            }
            else {
              uVar14 = 1;
            }
          }
          else {
            *(uint *)(iVar5 + 0xc) = param_3;
            uVar6 = FUN_0017bfc0();
            *(undefined4 *)(iVar5 + 0x10) = uVar6;
          }
          goto LAB_00102f48;
        }
        break;
      }
      iVar8 = *(int *)(iVar5 + iVar3 * 4 + 0x18);
      if (iVar8 == 0) break;
      bVar2 = 0;
      if (iVar3 != 0) {
        bVar2 = *(byte *)(iVar5 + 0x20);
      }
      iVar5 = iVar8;
    } while (iVar3 == 0 || (bVar2 & 0x80) == 0);
  }
  if (*(uint *)(param_1 + 0x44) < 0x400) {
    puVar4 = (undefined4 *)FUN_0016d7a4(0x24,DAT_00102f5c);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00102f48;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    iVar5 = FUN_000ea2e0();
  }
  else {
    iVar5 = *(int *)(param_1 + 0x48);
    if (iVar5 == 0) goto LAB_00102f48;
    iVar3 = iVar5;
    iVar8 = *(int *)(iVar5 + 0x18);
    while (iVar11 = iVar3, iVar8 != 0) {
      iVar3 = *(int *)(iVar3 + 0x18);
      iVar8 = *(int *)(iVar3 + 0x18);
    }
    while (iVar11 != 0) {
      if (*(uint *)(iVar11 + 0x10) < *(uint *)(iVar3 + 0x10)) {
        iVar3 = iVar11;
      }
      if (iVar11 == 0) {
        iVar11 = iVar5;
        iVar8 = *(int *)(iVar5 + 0x18);
        if (iVar5 == 0) break;
        while (iVar8 != 0) {
          piVar13 = (int *)(iVar11 + 0x18);
          iVar11 = *piVar13;
          iVar8 = *(int *)(*piVar13 + 0x18);
        }
      }
      else {
        pbVar1 = (byte *)(iVar11 + 0x20);
        iVar11 = *(int *)(iVar11 + 0x1c);
        iVar8 = iVar11;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            iVar11 = iVar8;
            if (iVar11 == 0) goto LAB_00102cf4;
            iVar8 = *(int *)(iVar11 + 0x18);
          } while (*(int *)(iVar11 + 0x18) != 0);
        }
      }
    }
LAB_00102cf4:
    if ((iVar3 == 0) || (iVar5 = FUN_001bf178(param_1 + 0x44,iVar3), iVar5 == 0)) goto LAB_00102f48;
  }
  FUN_000ea348(iVar5,param_2);
  *(uint *)(iVar5 + 0xc) = param_3;
  uVar6 = FUN_0017bfc0();
  *(undefined4 *)(iVar5 + 0x10) = uVar6;
  *(undefined1 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  piVar13 = (int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x48) == 0) {
    *piVar13 = *piVar13 + 1;
    *(undefined1 *)(iVar5 + 0x20) = 1;
    *(undefined4 *)(iVar5 + 0x1c) = 0;
    *(undefined4 *)(iVar5 + 0x18) = 0;
    *(int *)(param_1 + 0x48) = iVar5;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x48);
    iVar8 = 0;
    do {
      aiStack_ac[iVar8 + 1] = iVar3;
      iVar15 = iVar8 + 1;
      uVar18 = FUN_000ea1e8(iVar5,iVar3);
      uVar9 = (uint)((ulonglong)uVar18 >> 0x20);
      iVar7 = (int)uVar18;
      iVar11 = extraout_r3;
      if (0 < iVar7) {
        iVar11 = 1;
      }
      if (iVar7 < 0) {
        iVar11 = 0;
      }
      if (iVar7 == 0) break;
      iVar7 = *(int *)(iVar3 + iVar11 * 4 + 0x18);
      if (iVar7 == 0) {
LAB_00102d8c:
        *piVar13 = *piVar13 + 1;
        *(undefined1 *)(iVar5 + 0x20) = 0x81;
        *(undefined4 *)(iVar5 + 0x18) = 0;
        if (iVar11 == 0) {
          *(int *)(iVar5 + 0x1c) = iVar3;
        }
        else {
          *(byte *)(iVar3 + 0x20) = *(byte *)(iVar3 + 0x20) & 0x7f;
          *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar3 + iVar11 * 4 + 0x18);
        }
        iVar7 = iVar8 + 2;
        iVar15 = 1;
        *(int *)(iVar3 + iVar11 * 4 + 0x18) = iVar5;
        iVar5 = extraout_r2;
        if (1 < iVar7) {
          do {
            if (iVar8 != 0) {
              iVar5 = *(int *)(aiStack_ac[iVar8] + 0x1c);
              if (iVar5 == aiStack_ac[iVar8 + 1]) {
                iVar11 = 1;
              }
              else {
                iVar11 = 0;
              }
            }
            iVar3 = aiStack_ac[iVar8 + 1];
            if (iVar3 != 0) {
              iVar5 = *(int *)(iVar3 + 0x18);
            }
            if (iVar3 != 0 && iVar5 != 0) {
              if (((byte)(*(byte *)(iVar5 + 0x20) * '\x02') ==
                   (byte)(*(byte *)(iVar3 + 0x20) * '\x02')) &&
                 ((*(byte *)(iVar3 + 0x20) & 0x7f) != 0)) {
                if ((*(byte *)(iVar5 + 0x20) & 0x80) == 0) {
                  uVar6 = *(undefined4 *)(iVar5 + 0x1c);
                }
                else {
                  uVar6 = 0;
                }
                *(undefined4 *)(iVar3 + 0x18) = uVar6;
                *(int *)(iVar5 + 0x1c) = iVar3;
                *(byte *)(iVar5 + 0x20) = *(byte *)(iVar5 + 0x20) & 0x7f;
                iVar3 = iVar5;
              }
            }
            aiStack_ac[iVar8 + 1] = iVar3;
            if ((((iVar3 != 0) && (bVar2 = *(byte *)(iVar3 + 0x20), (bVar2 & 0x80) == 0)) &&
                (iVar10 = *(int *)(iVar3 + 0x1c), iVar5 = iVar10, iVar10 != 0)) &&
               ((((*(byte *)(iVar10 + 0x20) & 0x80) == 0 && (*(int *)(iVar10 + 0x1c) != 0)) &&
                (((*(byte *)(*(int *)(iVar10 + 0x1c) + 0x20) & 0x7f) == (bVar2 & 0x7f) &&
                 ((bVar2 & 0x7f) != 0)))))) {
              if (*(int *)(iVar10 + 0x18) == 0) {
                *(byte *)(iVar3 + 0x20) = bVar2 | 0x80;
              }
              else {
                *(int *)(iVar3 + 0x1c) = *(int *)(iVar10 + 0x18);
              }
              *(int *)(iVar10 + 0x18) = iVar3;
              iVar5 = *(byte *)(iVar10 + 0x20) + 1;
              *(char *)(iVar10 + 0x20) = (char)iVar5;
              iVar3 = iVar10;
            }
            aiStack_ac[iVar8 + 1] = iVar3;
            if (iVar8 == 0) {
              *(int *)(param_1 + 0x48) = aiStack_ac[1];
            }
            else {
              iVar5 = iVar11 * 4 + 0x18;
              *(int *)(aiStack_ac[iVar8] + iVar5) = iVar3;
            }
            iVar15 = iVar15 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar15 < iVar7);
        }
        break;
      }
      if (iVar11 != 0) {
        uVar9 = (uint)*(byte *)(iVar3 + 0x20);
      }
      if (iVar11 != 0 && (uVar9 & 0x80) != 0) goto LAB_00102d8c;
      iVar3 = iVar7;
      iVar8 = iVar15;
    } while (iVar15 < 0x20);
  }
LAB_00102f48:
  FUN_001a0d18(param_1 + 300);
  return uVar14;
}


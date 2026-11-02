// rea decompile_all
// name: FUN_0012e37c
// address: 0x12e37c
// body: available
// range: 0x12e37c-0x12eb5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012e37c(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int unaff_r10;
  int in_r12;
  bool bVar15;
  
  iVar14 = *(int *)(param_1 + 4);
  uVar7 = (uint)(*(byte *)(param_1 + 0x8c) >> 3);
  uVar9 = *(uint *)(iVar14 + 0xf54);
  uVar12 = uVar7 - 1;
  uVar8 = *(uint *)(iVar14 + 0xf44) & uVar9;
  uVar6 = *(uint *)(iVar14 + 0xf18) & ~uVar12;
  if (uVar6 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    if (uVar7 == 1) {
      if (uVar6 < 0x80000000) {
        iVar14 = 0;
        for (; 0 < (int)uVar6; uVar6 = uVar6 - 1) {
          puVar10 = *(undefined1 **)(param_1 + 0x98);
          if (puVar10 != (undefined1 *)0x0) {
            iVar14 = *(int *)(param_1 + 0xa0);
          }
          if (puVar10 != (undefined1 *)0x0 && iVar14 != 0) {
            *puVar10 = *(undefined1 *)(*(int *)(param_1 + 4) + 0xe00);
            *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
            *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
          }
        }
      }
      else {
        do {
          uVar1 = *(undefined1 *)(iVar14 + 0xe00);
          puVar10 = *(undefined1 **)(param_1 + 0x98);
          if (puVar10 != (undefined1 *)0x0) {
            uVar9 = *(uint *)(param_1 + 0xa0);
          }
          if (puVar10 != (undefined1 *)0x0 && uVar9 != 0) {
            *(undefined1 **)(param_1 + 0x98) = puVar10 + 1;
            uVar9 = uVar9 - 1;
            *puVar10 = uVar1;
            *(uint *)(param_1 + 0xa0) = uVar9;
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
          }
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else if (uVar7 == 2) {
      iVar14 = 1;
      if (uVar6 < 0x80000000) {
        for (iVar14 = 1; iVar14 < 1 - (int)~uVar6 / 2; iVar14 = iVar14 + 1) {
          puVar10 = *(undefined1 **)(param_1 + 0x98);
          uVar5 = *(undefined2 *)(*(int *)(param_1 + 4) + 0xe00);
          if (puVar10 != (undefined1 *)0x0) {
            in_r12 = *(int *)(param_1 + 0xa0);
          }
          if (puVar10 != (undefined1 *)0x0 && in_r12 != 0) {
            *puVar10 = (char)uVar5;
            in_r12 = *(int *)(param_1 + 0x98);
            *(int *)(param_1 + 0x98) = in_r12 + 1;
            *(char *)(in_r12 + 1) = (char)((ushort)uVar5 >> 8);
            *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
            *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -2;
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 2;
          }
        }
      }
      else {
        do {
          puVar10 = *(undefined1 **)(param_1 + 0x98);
          uVar5 = *(undefined2 *)(*(int *)(param_1 + 4) + 0xe00);
          if (puVar10 != (undefined1 *)0x0) {
            iVar14 = *(int *)(param_1 + 0xa0);
          }
          if (puVar10 != (undefined1 *)0x0 && iVar14 != 0) {
            *puVar10 = (char)uVar5;
            iVar14 = *(int *)(param_1 + 0x98);
            *(int *)(param_1 + 0x98) = iVar14 + 1;
            *(char *)(iVar14 + 1) = (char)((ushort)uVar5 >> 8);
            *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
            *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -2;
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 2;
          }
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
    }
    else if (uVar7 == 4) {
      do {
        puVar10 = *(undefined1 **)(param_1 + 0x98);
        uVar13 = *(undefined4 *)(iVar14 + 0xe00);
        if (puVar10 != (undefined1 *)0x0) {
          unaff_r10 = *(int *)(param_1 + 0xa0);
        }
        if (puVar10 != (undefined1 *)0x0 && unaff_r10 != 0) {
          *puVar10 = (char)uVar13;
          puVar10[1] = (char)((uint)uVar13 >> 8);
          puVar10[2] = (char)((uint)uVar13 >> 0x10);
          *(undefined1 **)(param_1 + 0x98) = puVar10 + 4;
          unaff_r10 = unaff_r10 + -4;
          puVar10[3] = (char)((uint)uVar13 >> 0x18);
          *(int *)(param_1 + 0xa0) = unaff_r10;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 4;
        }
        uVar6 = uVar6 - 4;
      } while (uVar6 != 0);
    }
  }
  if ((uVar8 & 0x400) == 0) {
LAB_0012ea34:
    if ((uVar8 & 0x800) != 0) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0xf54) = 0x800;
      uVar6 = *(uint *)(param_1 + 0xa0);
      uVar9 = *(uint *)(*(int *)(param_1 + 4) + 0xf1c) & ~uVar12;
      if (uVar6 != 0) {
        uVar12 = *(uint *)(param_1 + 0xa8);
      }
      if (uVar6 == 0 || uVar12 == 0) {
        thunk_EXT_FUN_0040010c(param_1 + 0x38);
      }
      else {
        if (uVar6 < uVar9) {
          uVar9 = uVar6;
        }
        if (uVar9 < uVar12) {
          *(uint *)(param_1 + 0xa8) = uVar12 - uVar9;
        }
        else {
          *(undefined4 *)(param_1 + 0xa8) = 0;
        }
        *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar9;
        while (uVar9 != 0) {
          uVar9 = uVar9 - uVar7;
          if (uVar7 == 1) {
            *(char *)(*(int *)(param_1 + 4) + 0xe80) = (char)*(undefined4 *)(param_1 + 0x88);
          }
          else if (uVar7 == 2) {
            *(short *)(*(int *)(param_1 + 4) + 0xe80) = (short)*(undefined4 *)(param_1 + 0x88);
          }
          else if (uVar7 == 4) {
            *(undefined4 *)(*(int *)(param_1 + 4) + 0xe80) = *(undefined4 *)(param_1 + 0x88);
          }
        }
        *(undefined4 *)(*(int *)(param_1 + 4) + 0xf50) = 0x800;
      }
    }
  }
  else {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    uVar9 = *(uint *)(*(int *)(param_1 + 4) + 0xf1c);
    bVar15 = *(int *)(param_1 + 0x94) == 0;
    uVar6 = uVar9 & ~uVar12;
    if (!bVar15) {
      uVar9 = *(uint *)(param_1 + 0x9c);
    }
    if (bVar15 || uVar9 == 0) {
      bVar15 = *(int *)(param_1 + 0x98) != 0;
      uVar9 = 0;
      if (bVar15) {
        uVar9 = *(uint *)(param_1 + 0xa0);
      }
      if (bVar15 && uVar9 != 0) {
        bVar15 = uVar9 < uVar6;
        if (bVar15) {
          uVar6 = uVar9;
        }
        *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar6;
        uVar13 = thunk_EXT_FUN_0040001c();
        if (uVar7 == 1) {
          if (uVar6 < 0x80000000) {
            if ((int)uVar6 < 1) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar6 & 1;
              if (uVar9 == 1) {
                *(char *)(*(int *)(param_1 + 4) + 0xe80) = (char)*(undefined4 *)(param_1 + 0x88);
              }
            }
            for (iVar14 = uVar6 - uVar9; 0 < iVar14; iVar14 = iVar14 + -2) {
              *(char *)(*(int *)(param_1 + 4) + 0xe80) = (char)*(undefined4 *)(param_1 + 0x88);
              *(char *)(*(int *)(param_1 + 4) + 0xe80) = (char)*(undefined4 *)(param_1 + 0x88);
            }
          }
          else {
            do {
              uVar6 = uVar6 - 1;
              *(char *)(*(int *)(param_1 + 4) + 0xe80) = (char)*(undefined4 *)(param_1 + 0x88);
            } while (uVar6 != 0);
          }
        }
        else if (uVar7 == 2) {
          if (uVar6 < 0x80000000) {
            uVar6 = ~uVar6;
            iVar14 = (int)uVar6 / 2;
            if (iVar14 == 0 || -iVar14 < 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = -((int)((uVar6 - ((int)uVar6 >> 0x1f)) * 0x40000000) >> 0x1f);
              if (iVar11 == 1) {
                *(short *)(*(int *)(param_1 + 4) + 0xe80) = (short)*(undefined4 *)(param_1 + 0x88);
              }
            }
            for (iVar11 = iVar11 + 1; iVar11 < 1 - iVar14; iVar11 = iVar11 + 2) {
              *(short *)(*(int *)(param_1 + 4) + 0xe80) = (short)*(undefined4 *)(param_1 + 0x88);
              *(short *)(*(int *)(param_1 + 4) + 0xe80) = (short)*(undefined4 *)(param_1 + 0x88);
            }
          }
          else {
            do {
              uVar6 = uVar6 - 2;
              *(short *)(*(int *)(param_1 + 4) + 0xe80) = (short)*(undefined4 *)(param_1 + 0x88);
            } while (uVar6 != 0);
          }
        }
        else if (uVar7 == 4) {
          if (uVar6 < 0x80000000) {
            iVar11 = (-3 - uVar6) + ((uint)((int)(-3 - uVar6) >> 0x1f) >> 0x1e);
            iVar14 = iVar11 >> 2;
            if (iVar14 == 0 || -iVar14 < 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = -(iVar11 * 0x20000000 >> 0x1f);
              if (iVar11 == 1) {
                *(undefined4 *)(*(int *)(param_1 + 4) + 0xe80) = *(undefined4 *)(param_1 + 0x88);
              }
            }
            for (iVar11 = iVar11 + 1; iVar11 < 1 - iVar14; iVar11 = iVar11 + 2) {
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xe80) = *(undefined4 *)(param_1 + 0x88);
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xe80) = *(undefined4 *)(param_1 + 0x88);
            }
          }
          else {
            do {
              uVar6 = uVar6 - 4;
              *(undefined4 *)(*(int *)(param_1 + 4) + 0xe80) = *(undefined4 *)(param_1 + 0x88);
            } while (uVar6 != 0);
          }
        }
        goto LAB_0012ea10;
      }
    }
    else {
      bVar15 = uVar9 < uVar6;
      if (bVar15) {
        uVar6 = uVar9;
      }
      *(uint *)(param_1 + 0x9c) = uVar9 - uVar6;
      *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar6;
      uVar13 = thunk_EXT_FUN_0040001c();
      if (uVar7 == 1) {
        if (uVar6 < 0x80000000) {
          for (; 0 < (int)uVar6; uVar6 = uVar6 - 1) {
            uVar1 = **(undefined1 **)(param_1 + 0x94);
            *(undefined1 **)(param_1 + 0x94) = *(undefined1 **)(param_1 + 0x94) + 1;
            *(undefined1 *)(*(int *)(param_1 + 4) + 0xe80) = uVar1;
          }
        }
        else {
          do {
            puVar10 = *(undefined1 **)(param_1 + 0x94);
            uVar6 = uVar6 - 1;
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 1;
            *(undefined1 *)(*(int *)(param_1 + 4) + 0xe80) = *puVar10;
          } while (uVar6 != 0);
        }
      }
      else if (uVar7 == 2) {
        if (uVar6 < 0x80000000) {
          for (iVar14 = 1; iVar14 < 1 - (int)~uVar6 / 2; iVar14 = iVar14 + 1) {
            puVar10 = *(undefined1 **)(param_1 + 0x94);
            uVar1 = *puVar10;
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 1;
            uVar2 = puVar10[1];
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 2;
            *(ushort *)(*(int *)(param_1 + 4) + 0xe80) = CONCAT11(uVar2,uVar1);
          }
        }
        else {
          do {
            puVar10 = *(undefined1 **)(param_1 + 0x94);
            uVar6 = uVar6 - 2;
            uVar1 = *puVar10;
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 1;
            uVar2 = puVar10[1];
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 2;
            *(ushort *)(*(int *)(param_1 + 4) + 0xe80) = CONCAT11(uVar2,uVar1);
          } while (uVar6 != 0);
        }
      }
      else if (uVar7 == 4) {
        if (uVar6 < 0x80000000) {
          for (iVar14 = 1;
              iVar14 < 1 - ((int)((-3 - uVar6) + ((uint)((int)(-3 - uVar6) >> 0x1f) >> 0x1e)) >> 2);
              iVar14 = iVar14 + 1) {
            puVar10 = *(undefined1 **)(param_1 + 0x94);
            uVar1 = *puVar10;
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 1;
            uVar2 = puVar10[1];
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 2;
            uVar3 = puVar10[2];
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 3;
            uVar4 = puVar10[3];
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 4;
            *(uint *)(*(int *)(param_1 + 4) + 0xe80) =
                 CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
          }
        }
        else {
          do {
            puVar10 = *(undefined1 **)(param_1 + 0x94);
            uVar6 = uVar6 - 4;
            uVar1 = *puVar10;
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 1;
            uVar2 = puVar10[1];
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 2;
            uVar3 = puVar10[2];
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 3;
            uVar4 = puVar10[3];
            *(undefined1 **)(param_1 + 0x94) = puVar10 + 4;
            *(uint *)(*(int *)(param_1 + 4) + 0xe80) =
                 CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
          } while (uVar6 != 0);
        }
      }
LAB_0012ea10:
      thunk_EXT_FUN_00400034(uVar13);
      if (!bVar15) goto LAB_0012ea34;
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xf54) = 0x400;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xf50) = 0x800;
  }
  uVar7 = *(uint *)(*(int *)(param_1 + 4) + 0x24);
  if ((uVar7 & 3) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  if ((uVar7 & 4) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  }
  if ((uVar7 & 0x10) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  }
  *(uint *)(*(int *)(param_1 + 4) + 0x24) = uVar7;
  return;
}


// rea decompile_all
// name: FUN_00022774
// address: 0x22774
// body: available
// range: 0x22774-0x2304b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00022774(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  uint local_74;
  undefined1 auStack_68 [4];
  undefined1 local_64;
  undefined1 local_63;
  undefined1 auStack_62 [6];
  undefined1 auStack_5c [12];
  undefined4 local_50;
  undefined1 auStack_48 [4];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 auStack_42 [6];
  int local_3c;
  int local_34;
  uint local_2c;
  
  local_34 = 0;
  iVar3 = FUN_00003658(param_3,param_1 + 0x38,6);
  if (iVar3 == 0) {
    *(int *)(param_1 + 0xd70) = *(int *)(param_1 + 0xd70) + 1;
    return;
  }
  if (param_2 < 0xe) {
    *(int *)(param_1 + 0xd50) = *(int *)(param_1 + 0xd50) + 1;
    return;
  }
  if ((param_2 & 3) != 0) {
    *(int *)(param_1 + 0xd60) = *(int *)(param_1 + 0xd60) + 1;
    return;
  }
  if (DAT_0002304c < param_2) {
    *(int *)(param_1 + 0xd54) = *(int *)(param_1 + 0xd54) + 1;
    return;
  }
  puVar9 = (uint *)(param_1 + 0x188);
  iVar13 = *(int *)(param_1 + (param_2 - 4) + 0x188);
  uVar10 = *puVar9;
  iVar3 = FUN_0015d080(DAT_00023050,param_1 + 0x188,param_2 - 4 & 0xffff);
  if (iVar13 != iVar3) {
    *(int *)(param_1 + 0xd5c) = *(int *)(param_1 + 0xd5c) + 1;
    return;
  }
  if ((uVar10 & 0xff000000) == 0x1000000) {
    piVar6 = *(int **)(param_1 + 0x24);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x28))(piVar6,param_1 + 0x188,param_2 - 4,param_3);
      return;
    }
    return;
  }
  if ((uVar10 & 0xff000000) != 0) {
    *(int *)(param_1 + 0xd58) = *(int *)(param_1 + 0xd58) + 1;
    return;
  }
  if ((uVar10 & 0xff) != 0x11) {
    *(int *)(param_1 + 0xd4c) = *(int *)(param_1 + 0xd4c) + 1;
    return;
  }
  local_50 = *(undefined4 *)(param_1 + 0x18c);
  FUN_0014cd58(auStack_5c);
  FUN_0014cd08(auStack_5c,param_3);
  uVar1 = local_50;
  if ((uVar10 & 0x100) != 0) {
    iVar13 = 10;
    FUN_001f00bc(param_1 + 0x9c);
    iVar3 = *(int *)(param_1 + 0x84);
    if (*(int *)(param_1 + 0x84) != 0) {
      do {
        iVar4 = FUN_0014cb20(auStack_5c,iVar3 + 0x10);
        bVar16 = iVar4 < 0;
        bVar17 = iVar4 == 0;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (bVar16) {
          iVar4 = 0;
        }
        if (bVar17) {
          if (iVar3 != 0) {
            FUN_00165940(iVar3,uVar1,uVar10);
            iVar13 = 0;
          }
          break;
        }
        iVar8 = *(int *)(iVar3 + iVar4 * 4);
        if (iVar8 == 0) break;
        bVar7 = 0;
        if (iVar4 != 0) {
          bVar7 = *(byte *)(iVar3 + 8);
        }
        iVar3 = iVar8;
      } while (iVar4 == 0 || (bVar7 & 0x80) == 0);
    }
    FUN_001f06d4(param_1 + 0x9c);
    if (iVar13 != 0) {
      *(int *)(param_1 + 0xd78) = *(int *)(param_1 + 0xd78) + 1;
    }
    thunk_EXT_FUN_0040010c(param_1 + 0xdb0);
    *(int *)(param_1 + 0xd48) = *(int *)(param_1 + 0xd48) + 1;
    FUN_0014cd8c(auStack_5c);
    return;
  }
  if ((uVar10 & 0x200) != 0) {
    FUN_001f00bc(param_1 + 0x9c);
    iVar3 = *(int *)(param_1 + 0x84);
    if (*(int *)(param_1 + 0x84) != 0) {
      do {
        uVar20 = FUN_0014cb20(auStack_5c,iVar3 + 0x10);
        iVar4 = (int)((ulonglong)uVar20 >> 0x20);
        iVar13 = (int)uVar20;
        if (0 < iVar13) {
          iVar4 = 1;
        }
        if (iVar13 < 0) {
          iVar4 = 0;
        }
        if (iVar13 == 0) {
          if (iVar3 != 0) {
            FUN_00165bfc(iVar3,uVar1,uVar10);
          }
          break;
        }
        iVar13 = *(int *)(iVar3 + iVar4 * 4);
        if (iVar13 == 0) break;
        bVar7 = 0;
        if (iVar4 != 0) {
          bVar7 = *(byte *)(iVar3 + 8);
        }
        iVar3 = iVar13;
      } while (iVar4 == 0 || (bVar7 & 0x80) == 0);
    }
    FUN_001f06d4(param_1 + 0x9c);
    thunk_EXT_FUN_0040010c(param_1 + 0xdb0);
    *(int *)(param_1 + 0xd68) = *(int *)(param_1 + 0xd68) + 1;
    FUN_0014cd8c(auStack_5c);
    return;
  }
  bVar17 = false;
  local_2c = (uVar10 & 0x7ff) >> 10;
  bVar16 = false;
  FUN_0014cd58(auStack_48);
  FUN_0014cd58(auStack_68);
  iVar3 = 0;
  if (7 < (int)((int)puVar9 + (param_2 - (param_1 + 400)))) {
    local_44 = *(undefined1 *)(param_1 + 400);
    local_43 = *(undefined1 *)(param_1 + 0x191);
    FUN_000039e0(auStack_42,param_1 + 0x192,6);
    if (7 < (int)((int)puVar9 + (param_2 - (param_1 + 0x198)))) {
      local_64 = *(undefined1 *)(param_1 + 0x198);
      local_63 = *(undefined1 *)(param_1 + 0x199);
      FUN_000039e0(auStack_62,param_1 + 0x19a,6);
      if (local_2c == 0) {
LAB_00022b68:
        local_3c = param_2 - 10;
        puVar11 = (ushort *)(param_1 + 0x1a1U & 0xfffffffe);
        puVar12 = puVar11 + 1;
        uVar10 = (uint)*puVar11;
        iVar13 = FUN_001c6a94(uVar10 << 2,DAT_00023054);
        if (iVar13 == 0) {
LAB_00022c5c:
          bVar16 = true;
        }
        else {
          FUN_00003c58(iVar13,uVar10 << 2);
          uVar1 = DAT_00023058;
          uVar15 = 0;
          if (uVar10 != 0) {
            do {
              puVar5 = (undefined4 *)FUN_001c6b14(0x3c,DAT_00023054);
              iVar4 = 0;
              if (puVar5 != (undefined4 *)0x0) {
                puVar5[1] = 0;
                puVar5[2] = 0;
                *puVar5 = uVar1;
                iVar4 = FUN_0014cd58(puVar5 + 3);
                iVar4 = FUN_0014cd58(iVar4 + 0xc);
                iVar4 = FUN_0014cd58(iVar4 + 0xc);
                *(undefined4 *)(iVar4 + 0xc) = 0;
                *(undefined4 *)(iVar4 + 0x10) = 0;
                *(undefined1 *)(iVar4 + 0x14) = 0;
                iVar4 = iVar4 + -0x24;
              }
              *(int *)(iVar13 + uVar15 * 4) = iVar4;
              if (iVar4 == 0) goto LAB_00022c5c;
              uVar15 = uVar15 + 1 & 0xfffeffff;
            } while (uVar15 < uVar10);
          }
          local_74 = 0;
          if (uVar10 != 0) {
            uVar15 = local_3c - 4;
            do {
              uVar14 = (uint)*puVar12;
              bVar19 = DAT_0002305c <= uVar14;
              bVar18 = uVar14 == DAT_0002305c;
              if (!bVar19 || bVar18) {
                bVar19 = uVar15 <= uVar14;
                bVar18 = uVar14 == uVar15;
              }
              if (bVar19 && !bVar18) {
                bVar17 = true;
                *(int *)(param_1 + 0xd54) = *(int *)(param_1 + 0xd54) + 1;
                break;
              }
              if (uVar14 == 0) {
                bVar17 = true;
                *(int *)(param_1 + 0xd50) = *(int *)(param_1 + 0xd50) + 1;
                break;
              }
              iVar8 = FUN_001c6b14(0x18,DAT_00023054);
              iVar4 = 0;
              if (iVar8 != 0) {
                iVar4 = FUN_00152270();
              }
              *(int *)(*(int *)(iVar13 + local_74 * 4) + 0x30) = iVar4;
              if ((iVar4 == 0) || (iVar4 = FUN_001521d0(iVar4,uVar14), iVar4 == 0)) {
                bVar16 = true;
                *(int *)(param_1 + 0xd6c) = *(int *)(param_1 + 0xd6c) + 1;
                break;
              }
              if ((local_2c == 0) || (local_74 != 0)) {
                uVar2 = 0;
              }
              else {
                uVar2 = 1;
              }
              *(undefined1 *)(*(int *)(iVar13 + local_74 * 4) + 0x38) = uVar2;
              *(undefined4 *)(*(int *)(iVar13 + local_74 * 4) + 0x34) = local_50;
              FUN_0014cdc0(*(int *)(iVar13 + local_74 * 4) + 0x24,auStack_48);
              FUN_0014cdc0(*(int *)(iVar13 + local_74 * 4) + 0x18,auStack_68);
              FUN_0014cdc0(*(int *)(iVar13 + local_74 * 4) + 0xc,auStack_5c);
              FUN_000039e0(*(undefined4 *)(*(int *)(*(int *)(iVar13 + local_74 * 4) + 0x30) + 0x14),
                           puVar12 + 1,uVar14);
              local_74 = local_74 + 1 & 0xfffeffff;
              puVar12 = (ushort *)((int)(puVar12 + 1) + uVar14 + 1 & 0xfffffffe);
            } while (local_74 < uVar10);
          }
        }
        if (!bVar17 && !bVar16) {
          FUN_001f00bc(param_1 + 0x100);
          uVar15 = 0;
          if (uVar10 != 0) {
            do {
              piVar6 = *(int **)(iVar13 + uVar15 * 4);
              if (*(uint *)(piVar6[0xc] + 0x10) < 5) {
LAB_00022de8:
                if (piVar6 != (int *)0x0) {
                  (**(code **)(*piVar6 + 4))();
                }
              }
              else {
                bVar7 = *(byte *)(*(int *)(piVar6[0xc] + 0x14) + 2) & 0xc0;
                if (bVar7 == 0x40) {
                  if (piVar6 != (int *)0x0) {
                    piVar6[1] = 0;
                    piVar6[2] = 0;
                    if (*(int *)(param_1 + 0x6c) == 0) {
                      *(int **)(param_1 + 0x68) = piVar6;
                    }
                    else {
                      piVar6[1] = *(int *)(param_1 + 0x6c);
                      *(int **)(*(int *)(param_1 + 0x6c) + 8) = piVar6;
                    }
                    *(int **)(param_1 + 0x6c) = piVar6;
                    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
                  }
                }
                else if (bVar7 == 0x80) {
                  if (piVar6 != (int *)0x0) {
                    piVar6[1] = 0;
                    piVar6[2] = 0;
                    if (*(int *)(param_1 + 0x60) == 0) {
                      *(int **)(param_1 + 0x5c) = piVar6;
                    }
                    else {
                      piVar6[1] = *(int *)(param_1 + 0x60);
                      *(int **)(*(int *)(param_1 + 0x60) + 8) = piVar6;
                    }
                    *(int **)(param_1 + 0x60) = piVar6;
                    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
                  }
                }
                else {
                  if (bVar7 != 0xc0) goto LAB_00022de8;
                  if (piVar6 != (int *)0x0) {
                    piVar6[1] = 0;
                    piVar6[2] = 0;
                    if (*(int *)(param_1 + 0x54) == 0) {
                      *(int **)(param_1 + 0x50) = piVar6;
                    }
                    else {
                      piVar6[1] = *(int *)(param_1 + 0x54);
                      *(int **)(*(int *)(param_1 + 0x54) + 8) = piVar6;
                    }
                    *(int **)(param_1 + 0x54) = piVar6;
                    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
                  }
                }
                *(int *)(param_1 + 0xd44) = *(int *)(param_1 + 0xd44) + 1;
              }
              *(undefined4 *)(iVar13 + uVar15 * 4) = 0;
              uVar15 = uVar15 + 1 & 0xfffeffff;
            } while (uVar15 < uVar10);
          }
          FUN_001f06d4(param_1 + 0x100);
          local_34 = 1;
        }
        if (iVar13 != 0) {
          uVar15 = 0;
          if (uVar10 != 0) {
            do {
              iVar4 = *(int *)(iVar13 + uVar15 * 4);
              if ((iVar4 != 0) &&
                 ((*(int *)(iVar4 + 0x30) == 0 ||
                  (FUN_0015223c(), *(int *)(iVar13 + uVar15 * 4) != 0)))) {
                (**(code **)(**(int **)(iVar13 + uVar15 * 4) + 4))();
              }
              uVar15 = uVar15 + 1 & 0xfffeffff;
            } while (uVar15 < uVar10);
          }
          FUN_001c6a78(iVar13);
        }
        if (local_2c != 0) goto LAB_00022e90;
      }
      else {
        iVar3 = FUN_001649a8(param_1,auStack_68,local_50,(~uVar10 & 0xc00) == 0);
        if (iVar3 == 1) {
          *(int *)(param_1 + 0xd74) = *(int *)(param_1 + 0xd74) + 1;
          goto LAB_0002302c;
        }
        if (iVar3 == 0) goto LAB_00022b68;
LAB_00022e90:
        if ((iVar3 == 2) || (bVar16)) {
          FUN_0016657c(param_1,auStack_5c,local_50,0x200);
          *(int *)(param_1 + 0xd9c) = *(int *)(param_1 + 0xd9c) + 1;
        }
        else if (iVar3 == 4) {
          FUN_0016657c(param_1,auStack_5c,local_50,0x4200);
          *(int *)(param_1 + 0xd9c) = *(int *)(param_1 + 0xd9c) + 1;
        }
        else if (iVar3 == 3) {
          FUN_0016657c(param_1,auStack_5c,local_50,0x1200);
          *(int *)(param_1 + 0xd9c) = *(int *)(param_1 + 0xd9c) + 1;
        }
        else if (!bVar17) {
          FUN_0016657c(param_1,auStack_5c,local_50,0x100);
          *(int *)(param_1 + 0xd98) = *(int *)(param_1 + 0xd98) + 1;
        }
        FUN_00164f24(param_1);
      }
      if (local_34 != 0) {
        thunk_EXT_FUN_0040010c(*(int *)(param_1 + 8) + 4);
      }
      goto LAB_0002302c;
    }
  }
  FUN_0014ccec();
  *(int *)(param_1 + 0xd50) = *(int *)(param_1 + 0xd50) + 1;
LAB_0002302c:
  FUN_0014cd8c(auStack_68);
  FUN_0014cd8c(auStack_48);
  FUN_0014cd8c(auStack_5c);
  return;
}


// rea decompile_all
// name: FUN_00165e4c
// address: 0x165e4c
// body: available
// range: 0x165e4c-0x166293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00165e4c(int *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int ******ppppppiVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int ******ppppppiVar8;
  int extraout_r3;
  int ****ppppiVar9;
  int *****pppppiVar10;
  int ******ppppppiVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  int iStack_ac;
  int ******local_a8 [33];
  
  iVar12 = 0x14;
  puVar2 = (undefined4 *)FUN_001c6b14(100,DAT_00166294);
  if (puVar2 == (undefined4 *)0x0) {
    return 0x28;
  }
  *puVar2 = 0;
  puVar2[0x15] = 0;
  *(undefined1 *)((int)puVar2 + 0x5a) = 1;
  *(undefined1 *)((int)puVar2 + 0x5b) = 0;
  *(undefined1 *)(puVar2 + 0x17) = 0;
  puVar2[1] = param_3;
  FUN_00152224(param_3);
  iVar13 = 0;
  *(ushort *)(puVar2 + 0x16) = *(short *)(param_3 + 0x10) + 5U & 0xfffc;
  FUN_001f00bc(param_1 + 7);
  iVar7 = param_1[1];
  if (param_1[1] != 0) {
    do {
      iVar3 = FUN_0014cb20(param_2,iVar7 + 0x10);
      bVar14 = iVar3 < 0;
      bVar15 = iVar3 == 0;
      if (0 < iVar3) {
        iVar3 = 1;
      }
      if (bVar14) {
        iVar3 = 0;
      }
      if (bVar15) {
        if (iVar7 != 0) {
          iVar13 = FUN_00165748(iVar7,puVar2);
          iVar12 = 0;
        }
        break;
      }
      iVar5 = *(int *)(iVar7 + iVar3 * 4);
      if (iVar5 == 0) break;
      bVar1 = 0;
      if (iVar3 != 0) {
        bVar1 = *(byte *)(iVar7 + 8);
      }
      iVar7 = iVar5;
    } while (iVar3 == 0 || (bVar1 & 0x80) == 0);
  }
  FUN_001f06d4(param_1 + 7);
  if (iVar13 != 0) {
    (**(code **)(*(int *)param_1[0x12] + 8))((int *)param_1[0x12],1,param_2,0);
  }
  if (iVar12 != 0) {
    iVar12 = FUN_001c6b14(0x58,DAT_00166294);
    if (iVar12 == 0) {
      if (puVar2 == (undefined4 *)0x0) {
        return 0x28;
      }
      uVar6 = 0;
      if (*(char *)((int)puVar2 + 0x5a) != '\0') {
        do {
          FUN_0015223c(puVar2[uVar6 + 1]);
          uVar6 = uVar6 + 1 & 0xfffeffff;
        } while (uVar6 < *(byte *)((int)puVar2 + 0x5a));
      }
      FUN_001c6a78(puVar2);
      return 0x28;
    }
    *(int **)(iVar12 + 0xc) = param_1;
    iVar12 = FUN_0014cd58(iVar12 + 0x10);
    *(undefined4 *)(iVar12 + 0xc) = 0;
    *(undefined4 *)(iVar12 + 0x10) = 0;
    *(undefined4 *)(iVar12 + 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x18) = 0;
    *(undefined4 *)(iVar12 + 0x1c) = 0;
    *(undefined4 *)(iVar12 + 0x20) = 0;
    *(undefined4 *)(iVar12 + 0x24) = 0;
    *(undefined4 *)(iVar12 + 0x28) = 0;
    ppppiVar9 = (int ****)(iVar12 + -0x10);
    *(undefined4 *)(iVar12 + 0x2c) = 0;
    *(undefined2 *)(iVar12 + 0x38) = 1;
    *(undefined1 *)(iVar12 + 0x3a) = 0;
    *(undefined1 *)(iVar12 + 0x3b) = 1;
    *(undefined4 *)(iVar12 + 0x3c) = 0x80;
    *(undefined4 *)(iVar12 + 0x40) = 0x10;
    *(undefined1 *)(iVar12 + 0x44) = 0;
    FUN_0014cdc0(iVar12,param_2);
    *(undefined4 *)(iVar12 + 0x1c) = 0;
    *(undefined4 *)(iVar12 + 0x20) = 0;
    *(undefined4 *)(iVar12 + 0x24) = 0;
    *(undefined4 *)(iVar12 + 0x10) = 0;
    *(undefined1 *)(iVar12 + 0x3b) = 1;
    *(undefined4 *)(iVar12 + 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x28) = 0;
    *(undefined4 *)(iVar12 + 0x2c) = 0;
    FUN_00165748(ppppiVar9,puVar2);
    FUN_001f00bc(param_1 + 7);
    *(undefined4 *)(iVar12 + -0xc) = 0;
    *ppppiVar9 = (int ***)0x0;
    if ((int *****)param_1[1] == (int *****)0x0) {
      *param_1 = *param_1 + 1;
      *(undefined1 *)(iVar12 + -8) = 1;
      *(undefined4 *)(iVar12 + -0xc) = 0;
      *ppppiVar9 = (int ***)0x0;
      param_1[1] = (int)ppppiVar9;
    }
    else {
      pppppiVar10 = (int *****)param_1[1];
      iVar7 = 0;
      do {
        local_a8[iVar7] = (int ******)pppppiVar10;
        iVar5 = iVar7 + 1;
        uVar16 = FUN_0014cb20(iVar12,pppppiVar10 + 4);
        uVar6 = (uint)((ulonglong)uVar16 >> 0x20);
        iVar3 = (int)uVar16;
        iVar13 = extraout_r3;
        if (0 < iVar3) {
          iVar13 = 1;
        }
        if (iVar3 < 0) {
          iVar13 = 0;
        }
        if (iVar3 == 0) break;
        if ((int *****)pppppiVar10[iVar13] == (int *****)0x0) {
LAB_00166068:
          ppppppiVar8 = (int ******)(*param_1 + 1);
          *param_1 = (int)ppppppiVar8;
          *(undefined1 *)(iVar12 + -8) = 0x81;
          *ppppiVar9 = (int ***)0x0;
          if (iVar13 == 0) {
            *(int ******)(iVar12 + -0xc) = pppppiVar10;
          }
          else {
            *(byte *)(pppppiVar10 + 2) = *(byte *)(pppppiVar10 + 2) & 0x7f;
            *(int *****)(iVar12 + -0xc) = pppppiVar10[iVar13];
          }
          pppppiVar10[iVar13] = ppppiVar9;
          iVar3 = iVar7 + 2;
          iVar12 = 1;
          if (1 < iVar3) {
            do {
              if (iVar7 != 0) {
                ppppppiVar8 = local_a8[iVar7];
                if (*(int *******)((&iStack_ac)[iVar7] + 4) == ppppppiVar8) {
                  iVar13 = 1;
                }
                else {
                  iVar13 = 0;
                }
              }
              ppppppiVar4 = local_a8[iVar7];
              if (ppppppiVar4 != (int ******)0x0) {
                ppppppiVar8 = (int ******)*ppppppiVar4;
              }
              if (ppppppiVar4 != (int ******)0x0 && ppppppiVar8 != (int ******)0x0) {
                if (((byte)(*(byte *)(ppppppiVar8 + 2) * '\x02') ==
                     (byte)(*(byte *)(ppppppiVar4 + 2) * '\x02')) &&
                   ((*(byte *)(ppppppiVar4 + 2) & 0x7f) != 0)) {
                  if ((*(byte *)(ppppppiVar8 + 2) & 0x80) == 0) {
                    *ppppppiVar4 = ppppppiVar8[1];
                  }
                  else {
                    *ppppppiVar4 = (int *****)0x0;
                  }
                  ppppppiVar8[1] = (int *****)ppppppiVar4;
                  *(byte *)(ppppppiVar8 + 2) = *(byte *)(ppppppiVar8 + 2) & 0x7f;
                  ppppppiVar4 = ppppppiVar8;
                }
              }
              local_a8[iVar7] = ppppppiVar4;
              if (ppppppiVar4 != (int ******)0x0) {
                bVar1 = *(byte *)(ppppppiVar4 + 2);
                ppppppiVar8 = (int ******)(uint)bVar1;
                if (((((bVar1 & 0x80) == 0) &&
                     (ppppppiVar11 = (int ******)ppppppiVar4[1], ppppppiVar11 != (int ******)0x0))
                    && (((uint)ppppppiVar11[2] & 0x80) == 0)) &&
                   (((ppppppiVar11[1] != (int *****)0x0 &&
                     ((*(byte *)(ppppppiVar11[1] + 2) & 0x7f) == ((uint)ppppppiVar8 & 0x7f))) &&
                    ((bVar1 & 0x7f) != 0)))) {
                  if (*ppppppiVar11 == (int *****)0x0) {
                    *(byte *)(ppppppiVar4 + 2) = bVar1 | 0x80;
                  }
                  else {
                    ppppppiVar4[1] = *ppppppiVar11;
                  }
                  *ppppppiVar11 = (int *****)ppppppiVar4;
                  ppppppiVar8 = (int ******)(*(byte *)(ppppppiVar11 + 2) + 1);
                  *(char *)(ppppppiVar11 + 2) = (char)ppppppiVar8;
                  ppppppiVar4 = ppppppiVar11;
                }
              }
              if (iVar7 != 0) {
                ppppppiVar8 = (int ******)(local_a8 + iVar7);
              }
              local_a8[iVar7] = ppppppiVar4;
              if (iVar7 != 0) {
                ppppppiVar8 = (int ******)ppppppiVar8[-1];
                ppppppiVar8[iVar13] = (int *****)ppppppiVar4;
              }
              else {
                param_1[1] = (int)local_a8[0];
                ppppppiVar8 = local_a8[0];
              }
              iVar12 = iVar12 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar12 < iVar3);
          }
          break;
        }
        if (iVar13 != 0) {
          uVar6 = (uint)*(byte *)(pppppiVar10 + 2);
        }
        if (iVar13 != 0 && (uVar6 & 0x80) != 0) goto LAB_00166068;
        pppppiVar10 = (int *****)pppppiVar10[iVar13];
        iVar7 = iVar5;
      } while (iVar5 < 0x20);
    }
    FUN_001f06d4(param_1 + 7);
  }
  uVar6 = param_1[2];
  if ((uint)param_1[2] <= (uint)param_1[4]) {
    uVar6 = param_1[4];
  }
  param_1[4] = uVar6;
  uVar6 = param_1[5];
  if ((uint)param_1[5] < (uint)param_1[3]) {
    uVar6 = param_1[3];
  }
  param_1[5] = uVar6;
  return 0;
}


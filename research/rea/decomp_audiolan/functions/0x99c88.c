// rea decompile_all
// name: FUN_00099c88
// address: 0x99c88
// body: available
// range: 0x99c88-0x9a2f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00099c88(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [20];
  
  iVar7 = *(int *)(param_1 + 0x230);
  if (*(int *)(param_1 + 0x22c) != iVar7) {
    *(uint *)(param_1 + 0x230) = iVar7 - (iVar7 - *(int *)(param_1 + 0x22c) & 0xfffffffcU);
  }
  iVar7 = *(int *)(param_1 + 0x23c);
  if (*(int *)(param_1 + 0x238) != iVar7) {
    *(uint *)(param_1 + 0x23c) = iVar7 - (iVar7 - *(int *)(param_1 + 0x238) & 0xfffffff0U);
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  if (param_3 == 0) {
    uVar14 = 0;
    if (uVar2 != 0) {
      do {
        piVar13 = (int *)(param_1 + 0x238);
        puVar3 = (undefined4 *)FUN_000a5b38(auStack_38,uVar14,0x40,0,uVar14,2,0);
        puVar12 = *(undefined4 **)(param_1 + 0x23c);
        if (puVar12 == *(undefined4 **)(param_1 + 0x240)) {
          uVar2 = (int)puVar12 - *piVar13 >> 4;
          if (uVar2 < (uint)((int)*(undefined4 **)(param_1 + 0x240) - *piVar13 >> 4)) {
            *(undefined4 **)(param_1 + 0x23c) = puVar12 + 4;
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = puVar12[-4];
              puVar12[1] = puVar12[-3];
              puVar12[2] = puVar12[-2];
              puVar12[3] = puVar12[-1];
            }
            puVar8 = puVar12 + -4;
            iVar7 = (int)puVar8 - (int)puVar12 >> 4;
            iVar9 = 1;
            if (1 < iVar7 + 1) {
              puVar5 = puVar12;
              do {
                puVar5 = puVar5 + -4;
                puVar8 = puVar8 + -4;
                FUN_000037d0(puVar5,puVar8,0xe);
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar7 + 1);
            }
            FUN_000037d0(puVar12,puVar3,0xe);
          }
          else {
            uVar4 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
            if (uVar4 < uVar2 + 1) {
              uVar4 = uVar2 + 1;
            }
            puVar6 = (undefined4 *)FUN_0010f82c(uVar4 << 4,0);
            puVar5 = puVar6;
            for (puVar8 = (undefined4 *)*piVar13; puVar8 != puVar12; puVar8 = puVar8 + 4) {
              if (puVar5 != (undefined4 *)0x0) {
                uVar10 = puVar8[1];
                uVar11 = puVar8[2];
                uVar15 = puVar8[3];
                *puVar5 = *puVar8;
                puVar5[1] = uVar10;
                puVar5[2] = uVar11;
                puVar5[3] = uVar15;
              }
              puVar5 = puVar5 + 4;
            }
            puVar8 = (undefined4 *)(((int)puVar12 - *piVar13 & 0xfffffff0U) + (int)puVar6);
            if (puVar8 != (undefined4 *)0x0) {
              uVar10 = *puVar3;
              uVar11 = puVar3[1];
              uVar15 = puVar3[2];
              puVar8[3] = puVar3[3];
              *puVar8 = uVar10;
              puVar8[1] = uVar11;
              puVar8[2] = uVar15;
            }
            puVar8 = *(undefined4 **)(param_1 + 0x23c);
            puVar3 = (undefined4 *)(((int)puVar12 - *piVar13 & 0xfffffff0U) + (int)puVar6);
            for (; puVar12 != puVar8; puVar12 = puVar12 + 4) {
              puVar5 = puVar3 + 4;
              if (puVar5 != (undefined4 *)0x0) {
                uVar10 = puVar12[1];
                uVar11 = puVar12[2];
                uVar15 = puVar12[3];
                *puVar5 = *puVar12;
                puVar3[5] = uVar10;
                puVar3[6] = uVar11;
                puVar3[7] = uVar15;
              }
              puVar3 = puVar5;
            }
            iVar7 = *piVar13;
            iVar9 = *(int *)(param_1 + 0x23c);
            FUN_0010fa20(iVar7,*(int *)(param_1 + 0x240) - iVar7 >> 4,0);
            *(undefined4 **)(param_1 + 0x240) = puVar6 + uVar4 * 4;
            *(undefined4 **)(param_1 + 0x23c) = puVar6 + (iVar9 - iVar7 >> 4) * 4 + 4;
            *piVar13 = (int)puVar6;
          }
        }
        else {
          *(undefined4 **)(param_1 + 0x23c) = puVar12 + 4;
          if (puVar12 != (undefined4 *)0x0) {
            uVar10 = *puVar3;
            uVar11 = puVar3[1];
            uVar15 = puVar3[2];
            puVar12[3] = puVar3[3];
            *puVar12 = uVar10;
            puVar12[1] = uVar11;
            puVar12[2] = uVar15;
          }
        }
        uVar2 = *(uint *)(param_2 + 0x18);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar2);
    }
  }
  else {
    uVar14 = 0;
    if (uVar2 != 0) {
      do {
        cVar1 = *(char *)(param_3 + uVar14 * 4);
        if (cVar1 != -1) {
          iVar7 = param_3 + uVar14 * 4;
          piVar13 = (int *)(param_1 + 0x238);
          if (*(char *)(iVar7 + 3) == '\0') {
            uVar10 = 0x40;
          }
          else {
            uVar10 = 0x44;
          }
          puVar3 = (undefined4 *)
                   FUN_000a5b38(auStack_38,cVar1,uVar10,0,*(undefined1 *)(iVar7 + 1),
                                *(undefined1 *)(iVar7 + 2),*(char *)(iVar7 + 3));
          puVar12 = *(undefined4 **)(param_1 + 0x23c);
          if (puVar12 == *(undefined4 **)(param_1 + 0x240)) {
            uVar2 = (int)puVar12 - *piVar13 >> 4;
            if (uVar2 < (uint)((int)*(undefined4 **)(param_1 + 0x240) - *piVar13 >> 4)) {
              *(undefined4 **)(param_1 + 0x23c) = puVar12 + 4;
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = puVar12[-4];
                puVar12[1] = puVar12[-3];
                puVar12[2] = puVar12[-2];
                puVar12[3] = puVar12[-1];
              }
              puVar5 = puVar12 + -4;
              iVar7 = (int)puVar5 - (int)puVar12 >> 4;
              iVar9 = 1;
              puVar8 = puVar12;
              if (1 < iVar7 + 1) {
                do {
                  puVar12 = puVar12 + -4;
                  puVar5 = puVar5 + -4;
                  FUN_000037d0(puVar12,puVar5,0xe);
                  iVar9 = iVar9 + 1;
                } while (iVar9 < iVar7 + 1);
              }
              FUN_000037d0(puVar8,puVar3,0xe);
            }
            else {
              uVar4 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
              if (uVar4 < uVar2 + 1) {
                uVar4 = uVar2 + 1;
              }
              puVar6 = (undefined4 *)FUN_0010f82c(uVar4 << 4,0);
              puVar5 = puVar6;
              for (puVar8 = (undefined4 *)*piVar13; puVar8 != puVar12; puVar8 = puVar8 + 4) {
                if (puVar5 != (undefined4 *)0x0) {
                  uVar10 = puVar8[1];
                  uVar11 = puVar8[2];
                  uVar15 = puVar8[3];
                  *puVar5 = *puVar8;
                  puVar5[1] = uVar10;
                  puVar5[2] = uVar11;
                  puVar5[3] = uVar15;
                }
                puVar5 = puVar5 + 4;
              }
              puVar8 = (undefined4 *)(((int)puVar12 - *piVar13 & 0xfffffff0U) + (int)puVar6);
              if (puVar8 != (undefined4 *)0x0) {
                uVar10 = *puVar3;
                uVar11 = puVar3[1];
                uVar15 = puVar3[2];
                puVar8[3] = puVar3[3];
                *puVar8 = uVar10;
                puVar8[1] = uVar11;
                puVar8[2] = uVar15;
              }
              puVar8 = *(undefined4 **)(param_1 + 0x23c);
              puVar3 = (undefined4 *)(((int)puVar12 - *piVar13 & 0xfffffff0U) + (int)puVar6);
              for (; puVar12 != puVar8; puVar12 = puVar12 + 4) {
                puVar5 = puVar3 + 4;
                if (puVar5 != (undefined4 *)0x0) {
                  uVar10 = puVar12[1];
                  uVar11 = puVar12[2];
                  uVar15 = puVar12[3];
                  *puVar5 = *puVar12;
                  puVar3[5] = uVar10;
                  puVar3[6] = uVar11;
                  puVar3[7] = uVar15;
                }
                puVar3 = puVar5;
              }
              iVar7 = *piVar13;
              iVar9 = *(int *)(param_1 + 0x23c);
              FUN_0010fa20(iVar7,*(int *)(param_1 + 0x240) - iVar7 >> 4,0);
              *(undefined4 **)(param_1 + 0x240) = puVar6 + uVar4 * 4;
              *(undefined4 **)(param_1 + 0x23c) = puVar6 + (iVar9 - iVar7 >> 4) * 4 + 4;
              *piVar13 = (int)puVar6;
            }
          }
          else {
            *(undefined4 **)(param_1 + 0x23c) = puVar12 + 4;
            if (puVar12 != (undefined4 *)0x0) {
              uVar10 = *puVar3;
              uVar11 = puVar3[1];
              uVar15 = puVar3[2];
              puVar12[3] = puVar3[3];
              *puVar12 = uVar10;
              puVar12[1] = uVar11;
              puVar12[2] = uVar15;
            }
          }
        }
        uVar2 = *(uint *)(param_2 + 0x18);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar2);
    }
  }
  piVar13 = (int *)(param_1 + 0x22c);
  puVar3 = (undefined4 *)FUN_000a5b10(auStack_3c,uVar2);
  puVar12 = *(undefined4 **)(param_1 + 0x230);
  if (puVar12 == *(undefined4 **)(param_1 + 0x234)) {
    uVar2 = (int)puVar12 - *piVar13 >> 2;
    if (uVar2 < (uint)((int)*(undefined4 **)(param_1 + 0x234) - *piVar13 >> 2)) {
      *(undefined4 **)(param_1 + 0x230) = puVar12 + 1;
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = puVar12[-1];
      }
      puVar8 = puVar12 + -1;
      iVar7 = (int)puVar8 - (int)puVar12;
      if (0 < iVar7 >> 2) {
        puVar5 = puVar12;
        if (iVar7 * 0x20000000 < 0) {
          puVar8 = puVar12 + -2;
          puVar5 = puVar12 + -1;
          *puVar5 = *puVar8;
        }
        for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar5[-1] = puVar8[-1];
          puVar8 = puVar8 + -2;
          puVar5 = puVar5 + -2;
          *puVar5 = *puVar8;
        }
      }
      *puVar12 = *puVar3;
    }
    else {
      uVar14 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
      if (uVar14 < uVar2 + 1) {
        uVar14 = uVar2 + 1;
      }
      puVar6 = (undefined4 *)FUN_0010f82c(uVar14 << 2,0);
      puVar5 = puVar6;
      for (puVar8 = (undefined4 *)*piVar13; puVar8 != puVar12; puVar8 = puVar8 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar8;
        }
        puVar5 = puVar5 + 1;
      }
      puVar8 = (undefined4 *)(((int)puVar12 - *piVar13 & 0xfffffffcU) + (int)puVar6);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar3;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x230);
      puVar3 = (undefined4 *)(((int)puVar12 - *piVar13 & 0xfffffffcU) + (int)puVar6);
      for (; puVar12 != puVar8; puVar12 = puVar12 + 1) {
        puVar3 = puVar3 + 1;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar12;
        }
      }
      iVar7 = *piVar13;
      iVar9 = *(int *)(param_1 + 0x230);
      FUN_0010fa20(iVar7,*(int *)(param_1 + 0x234) - iVar7 >> 2,0);
      *(undefined4 **)(param_1 + 0x234) = puVar6 + uVar14;
      *(undefined4 **)(param_1 + 0x230) = puVar6 + (iVar9 - iVar7 >> 2) + 1;
      *piVar13 = (int)puVar6;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x230) = puVar12 + 1;
    if (puVar12 != (undefined4 *)0x0) {
      *puVar12 = *puVar3;
    }
  }
  *(int *)(param_2 + 0x2c) = param_1 + 0x22c;
  return 1;
}


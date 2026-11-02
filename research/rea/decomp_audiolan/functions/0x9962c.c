// rea decompile_all
// name: FUN_0009962c
// address: 0x9962c
// body: available
// range: 0x9962c-0x99c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0009962c(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_40 [4];
  uint local_3c;
  undefined1 auStack_38 [20];
  
  iVar6 = *(int *)(param_1 + 0x1e8);
  if (*(int *)(param_1 + 0x1e4) != iVar6) {
    *(uint *)(param_1 + 0x1e8) = iVar6 - (iVar6 - *(int *)(param_1 + 0x1e4) & 0xfffffffcU);
  }
  iVar6 = *(int *)(param_1 + 500);
  if (*(int *)(param_1 + 0x1f0) != iVar6) {
    *(uint *)(param_1 + 500) = iVar6 - (iVar6 - *(int *)(param_1 + 0x1f0) & 0xfffffff0U);
  }
  piVar11 = (int *)(param_1 + 0x1e4);
  puVar2 = (undefined4 *)FUN_00099058(auStack_40,*(undefined4 *)(param_2 + 0x20));
  puVar3 = *(undefined4 **)(param_1 + 0x1e8);
  if (puVar3 == *(undefined4 **)(param_1 + 0x1ec)) {
    uVar12 = (int)puVar3 - *piVar11 >> 2;
    if (uVar12 < (uint)((int)*(undefined4 **)(param_1 + 0x1ec) - *piVar11 >> 2)) {
      *(undefined4 **)(param_1 + 0x1e8) = puVar3 + 1;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = puVar3[-1];
      }
      puVar8 = puVar3 + -1;
      iVar6 = (int)puVar8 - (int)puVar3;
      if (0 < iVar6 >> 2) {
        puVar4 = puVar3;
        if (iVar6 * 0x20000000 < 0) {
          puVar8 = puVar3 + -2;
          puVar4 = puVar3 + -1;
          *puVar4 = *puVar8;
        }
        for (iVar6 = iVar6 >> 3; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar4[-1] = puVar8[-1];
          puVar8 = puVar8 + -2;
          puVar4 = puVar4 + -2;
          *puVar4 = *puVar8;
        }
      }
      *puVar3 = *puVar2;
    }
    else {
      uVar13 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
      uVar15 = uVar12 + 1;
      if (uVar12 + 1 <= uVar13) {
        uVar15 = uVar13;
      }
      puVar5 = (undefined4 *)FUN_0010f82c(uVar15 << 2,0);
      puVar4 = puVar5;
      for (puVar8 = (undefined4 *)*piVar11; puVar8 != puVar3; puVar8 = puVar8 + 1) {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar8;
        }
        puVar4 = puVar4 + 1;
      }
      puVar8 = (undefined4 *)(((int)puVar3 - *piVar11 & 0xfffffffcU) + (int)puVar5);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar2;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x1e8);
      puVar2 = (undefined4 *)(((int)puVar3 - *piVar11 & 0xfffffffcU) + (int)puVar5);
      for (; puVar3 != puVar8; puVar3 = puVar3 + 1) {
        puVar2 = puVar2 + 1;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar3;
        }
      }
      iVar6 = *piVar11;
      iVar14 = *(int *)(param_1 + 0x1e8);
      FUN_0010fa20(iVar6,*(int *)(param_1 + 0x1ec) - iVar6 >> 2,0);
      *(undefined4 **)(param_1 + 0x1ec) = puVar5 + uVar15;
      *(undefined4 **)(param_1 + 0x1e8) = puVar5 + (iVar14 - iVar6 >> 2) + 1;
      *piVar11 = (int)puVar5;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x1e8) = puVar3 + 1;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar2;
    }
  }
  if (param_3 == 0) {
    uVar12 = 0;
    if (*(int *)(param_2 + 0x20) != 0) {
      do {
        piVar11 = (int *)(param_1 + 0x1f0);
        puVar2 = (undefined4 *)FUN_00099080(auStack_38,uVar12,0,uVar12,2,0);
        puVar3 = *(undefined4 **)(param_1 + 500);
        if (puVar3 == *(undefined4 **)(param_1 + 0x1f8)) {
          uVar15 = (int)puVar3 - *piVar11 >> 4;
          if (uVar15 < (uint)((int)*(undefined4 **)(param_1 + 0x1f8) - *piVar11 >> 4)) {
            *(undefined4 **)(param_1 + 500) = puVar3 + 4;
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = puVar3[-4];
              puVar3[1] = puVar3[-3];
              puVar3[2] = puVar3[-2];
              puVar3[3] = puVar3[-1];
            }
            puVar8 = puVar3 + -4;
            iVar6 = (int)puVar8 - (int)puVar3 >> 4;
            iVar14 = 1;
            if (1 < iVar6 + 1) {
              puVar4 = puVar3;
              do {
                puVar4 = puVar4 + -4;
                puVar8 = puVar8 + -4;
                FUN_000037d0(puVar4,puVar8,0xe);
                iVar14 = iVar14 + 1;
              } while (iVar14 < iVar6 + 1);
            }
            FUN_000037d0(puVar3,puVar2,0xe);
          }
          else {
            uVar13 = uVar15 + (uVar15 >> 1) + (uVar15 >> 3);
            if (uVar13 < uVar15 + 1) {
              uVar13 = uVar15 + 1;
            }
            puVar5 = (undefined4 *)FUN_0010f82c(uVar13 << 4,0);
            puVar4 = puVar5;
            for (puVar8 = (undefined4 *)*piVar11; puVar8 != puVar3; puVar8 = puVar8 + 4) {
              if (puVar4 != (undefined4 *)0x0) {
                uVar7 = puVar8[1];
                uVar9 = puVar8[2];
                uVar10 = puVar8[3];
                *puVar4 = *puVar8;
                puVar4[1] = uVar7;
                puVar4[2] = uVar9;
                puVar4[3] = uVar10;
              }
              puVar4 = puVar4 + 4;
            }
            puVar8 = (undefined4 *)(((int)puVar3 - *piVar11 & 0xfffffff0U) + (int)puVar5);
            if (puVar8 != (undefined4 *)0x0) {
              uVar7 = *puVar2;
              uVar9 = puVar2[1];
              uVar10 = puVar2[2];
              puVar8[3] = puVar2[3];
              *puVar8 = uVar7;
              puVar8[1] = uVar9;
              puVar8[2] = uVar10;
            }
            puVar8 = *(undefined4 **)(param_1 + 500);
            puVar2 = (undefined4 *)(((int)puVar3 - *piVar11 & 0xfffffff0U) + (int)puVar5);
            for (; puVar3 != puVar8; puVar3 = puVar3 + 4) {
              puVar4 = puVar2 + 4;
              if (puVar4 != (undefined4 *)0x0) {
                uVar7 = puVar3[1];
                uVar9 = puVar3[2];
                uVar10 = puVar3[3];
                *puVar4 = *puVar3;
                puVar2[5] = uVar7;
                puVar2[6] = uVar9;
                puVar2[7] = uVar10;
              }
              puVar2 = puVar4;
            }
            iVar6 = *piVar11;
            iVar14 = *(int *)(param_1 + 500);
            FUN_0010fa20(iVar6,*(int *)(param_1 + 0x1f8) - iVar6 >> 4,0);
            *(undefined4 **)(param_1 + 0x1f8) = puVar5 + uVar13 * 4;
            *(undefined4 **)(param_1 + 500) = puVar5 + (iVar14 - iVar6 >> 4) * 4 + 4;
            *piVar11 = (int)puVar5;
          }
        }
        else {
          *(undefined4 **)(param_1 + 500) = puVar3 + 4;
          if (puVar3 != (undefined4 *)0x0) {
            uVar7 = *puVar2;
            uVar9 = puVar2[1];
            uVar10 = puVar2[2];
            puVar3[3] = puVar2[3];
            *puVar3 = uVar7;
            puVar3[1] = uVar9;
            puVar3[2] = uVar10;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_2 + 0x20));
    }
  }
  else {
    uVar12 = 0;
    if (*(int *)(param_2 + 0x20) != 0) {
      do {
        cVar1 = *(char *)(param_3 + uVar12 * 4);
        if (cVar1 != -1) {
          iVar6 = param_3 + uVar12 * 4;
          piVar11 = (int *)(param_1 + 0x1f0);
          puVar2 = (undefined4 *)
                   FUN_00099080(auStack_38,*(undefined1 *)(iVar6 + 1),0,cVar1,
                                *(undefined1 *)(iVar6 + 2),*(undefined1 *)(iVar6 + 3));
          puVar3 = *(undefined4 **)(param_1 + 500);
          if (puVar3 == *(undefined4 **)(param_1 + 0x1f8)) {
            uVar15 = (int)puVar3 - *piVar11 >> 4;
            if (uVar15 < (uint)((int)*(undefined4 **)(param_1 + 0x1f8) - *piVar11 >> 4)) {
              *(undefined4 **)(param_1 + 500) = puVar3 + 4;
              if (puVar3 != (undefined4 *)0x0) {
                *puVar3 = puVar3[-4];
                puVar3[1] = puVar3[-3];
                puVar3[2] = puVar3[-2];
                puVar3[3] = puVar3[-1];
              }
              puVar4 = puVar3 + -4;
              iVar6 = (int)puVar4 - (int)puVar3 >> 4;
              iVar14 = 1;
              puVar8 = puVar3;
              if (1 < iVar6 + 1) {
                do {
                  puVar3 = puVar3 + -4;
                  puVar4 = puVar4 + -4;
                  FUN_000037d0(puVar3,puVar4,0xe);
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar6 + 1);
              }
              FUN_000037d0(puVar8,puVar2,0xe);
            }
            else {
              local_3c = uVar15 + (uVar15 >> 1) + (uVar15 >> 3);
              if (local_3c < uVar15 + 1) {
                local_3c = uVar15 + 1;
              }
              puVar5 = (undefined4 *)FUN_0010f82c(local_3c << 4,0);
              puVar4 = puVar5;
              for (puVar8 = (undefined4 *)*piVar11; puVar8 != puVar3; puVar8 = puVar8 + 4) {
                if (puVar4 != (undefined4 *)0x0) {
                  uVar7 = puVar8[1];
                  uVar9 = puVar8[2];
                  uVar10 = puVar8[3];
                  *puVar4 = *puVar8;
                  puVar4[1] = uVar7;
                  puVar4[2] = uVar9;
                  puVar4[3] = uVar10;
                }
                puVar4 = puVar4 + 4;
              }
              puVar8 = (undefined4 *)(((int)puVar3 - *piVar11 & 0xfffffff0U) + (int)puVar5);
              if (puVar8 != (undefined4 *)0x0) {
                uVar7 = *puVar2;
                uVar9 = puVar2[1];
                uVar10 = puVar2[2];
                puVar8[3] = puVar2[3];
                *puVar8 = uVar7;
                puVar8[1] = uVar9;
                puVar8[2] = uVar10;
              }
              puVar8 = *(undefined4 **)(param_1 + 500);
              puVar2 = (undefined4 *)(((int)puVar3 - *piVar11 & 0xfffffff0U) + (int)puVar5);
              for (; puVar3 != puVar8; puVar3 = puVar3 + 4) {
                puVar4 = puVar2 + 4;
                if (puVar4 != (undefined4 *)0x0) {
                  uVar7 = puVar3[1];
                  uVar9 = puVar3[2];
                  uVar10 = puVar3[3];
                  *puVar4 = *puVar3;
                  puVar2[5] = uVar7;
                  puVar2[6] = uVar9;
                  puVar2[7] = uVar10;
                }
                puVar2 = puVar4;
              }
              iVar6 = *piVar11;
              iVar14 = *(int *)(param_1 + 500);
              FUN_0010fa20(iVar6,*(int *)(param_1 + 0x1f8) - iVar6 >> 4,0);
              *(undefined4 **)(param_1 + 0x1f8) = puVar5 + local_3c * 4;
              *(undefined4 **)(param_1 + 500) = puVar5 + (iVar14 - iVar6 >> 4) * 4 + 4;
              *piVar11 = (int)puVar5;
            }
          }
          else {
            *(undefined4 **)(param_1 + 500) = puVar3 + 4;
            if (puVar3 != (undefined4 *)0x0) {
              uVar9 = puVar2[1];
              uVar10 = puVar2[2];
              uVar7 = puVar2[3];
              *puVar3 = *puVar2;
              puVar3[3] = uVar7;
              puVar3[1] = uVar9;
              puVar3[2] = uVar10;
            }
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_2 + 0x20));
    }
  }
  *(int *)(param_2 + 0x34) = param_1 + 0x1e4;
  return 1;
}


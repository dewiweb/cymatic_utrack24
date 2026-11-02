// rea decompile_all
// name: FUN_00079b2c
// address: 0x79b2c
// body: available
// range: 0x79b2c-0x79dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00079b2c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  
  iVar1 = FUN_001c0cb4();
  piVar2 = (int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (*piVar2 != iVar1) {
      *(uint *)(param_1 + 0x14) = iVar1 - (iVar1 - *piVar2 & 0xfffffffcU);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  if (param_2 == 0) {
    iVar1 = FUN_001c0994(param_1,0,&DAT_00079dfc);
    if (iVar1 < 0) goto LAB_00079b94;
    iVar1 = iVar1 + 2;
    while( true ) {
      *(int *)(param_1 + 0x20) = iVar1;
LAB_00079b94:
      iVar1 = FUN_001c084e(param_1,*(undefined4 *)(param_1 + 0x20));
      if (iVar1 != 0x2f) break;
      iVar1 = *(int *)(param_1 + 0x20) + 1;
    }
  }
  else {
    iVar1 = FUN_001c0994(param_1,0,param_2);
    if (-1 < iVar1) {
      iVar3 = FUN_00003738(param_2);
      *(int *)(param_1 + 0x20) = iVar3 + iVar1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  do {
    while( true ) {
      iVar3 = FUN_001c0a5c(param_1,iVar1,0x2f);
      if (iVar3 == -1) {
        iVar3 = FUN_001c0b3c(param_1);
        if ((iVar3 != iVar1) && (*(char *)(param_1 + 0x24) != '\0')) {
          uVar5 = FUN_001c0b3c(param_1);
          puVar14 = *(undefined4 **)(param_1 + 0x14);
          if (puVar14 == *(undefined4 **)(param_1 + 0x18)) {
            uVar4 = (int)puVar14 - *piVar2 >> 2;
            if (uVar4 < (uint)((int)*(undefined4 **)(param_1 + 0x18) - *piVar2 >> 2)) {
              *(undefined4 **)(param_1 + 0x14) = puVar14 + 1;
              if (puVar14 != (undefined4 *)0x0) {
                *puVar14 = puVar14[-1];
              }
              puVar7 = puVar14 + -1;
              iVar1 = (int)puVar7 - (int)puVar14;
              uVar4 = iVar1 >> 2;
              if (0 < (int)uVar4) {
                puVar10 = puVar14;
                if ((uVar4 & 1) != 0) {
                  puVar7 = puVar14 + -2;
                  puVar10 = puVar14 + -1;
                  *puVar10 = *puVar7;
                }
                for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
                  puVar6 = puVar7 + -1;
                  puVar7 = puVar7 + -2;
                  puVar10[-1] = *puVar6;
                  puVar10 = puVar10 + -2;
                  *puVar10 = *puVar7;
                }
              }
              *puVar14 = uVar5;
            }
            else {
              uVar11 = (uVar4 >> 1) + uVar4 + (uVar4 >> 3);
              uVar8 = uVar4 + 1;
              if (uVar4 + 1 <= uVar11) {
                uVar8 = uVar11;
              }
              puVar6 = (undefined4 *)FUN_00173860(uVar8 * 4,0);
              puVar10 = puVar6;
              for (puVar7 = (undefined4 *)*piVar2; puVar7 != puVar14; puVar7 = puVar7 + 1) {
                if (puVar10 != (undefined4 *)0x0) {
                  *puVar10 = *puVar7;
                }
                puVar10 = puVar10 + 1;
              }
              puVar7 = (undefined4 *)(((int)puVar14 - *piVar2 & 0xfffffffcU) + (int)puVar6);
              if (puVar7 != (undefined4 *)0x0) {
                *puVar7 = uVar5;
              }
              puVar10 = *(undefined4 **)(param_1 + 0x14);
              puVar7 = (undefined4 *)(((int)puVar14 - *piVar2 & 0xfffffffcU) + (int)puVar6);
              for (; puVar14 != puVar10; puVar14 = puVar14 + 1) {
                puVar7 = puVar7 + 1;
                if (puVar7 != (undefined4 *)0x0) {
                  *puVar7 = *puVar14;
                }
              }
              iVar3 = *(int *)(param_1 + 0x14);
              iVar1 = *piVar2;
              FUN_00173a54(iVar1,*(int *)(param_1 + 0x18) - iVar1 >> 2,0);
              *piVar2 = (int)puVar6;
              *(undefined4 **)(param_1 + 0x14) = puVar6 + (iVar3 - iVar1 >> 2) + 1;
              *(undefined4 **)(param_1 + 0x18) = puVar6 + uVar8;
            }
          }
          else {
            *(undefined4 **)(param_1 + 0x14) = puVar14 + 1;
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = uVar5;
            }
          }
          uVar5 = FUN_001c0b3c(param_1);
          *(undefined4 *)(param_1 + 0x1c) = uVar5;
          return;
        }
        *(int *)(param_1 + 0x1c) = iVar1;
        return;
      }
      piVar16 = *(int **)(param_1 + 0x14);
      iVar1 = *(int *)(param_1 + 0x10);
      uVar4 = (int)piVar16 - iVar1 >> 2;
      if ((uVar4 == 0) || (piVar13 = (int *)(iVar1 + (uVar4 - 1) * 4), *piVar13 + 1 != iVar3))
      break;
      iVar1 = iVar3 + 1;
      *piVar13 = iVar3;
    }
    if (piVar16 == *(int **)(param_1 + 0x18)) {
      if (uVar4 < (uint)((int)*(int **)(param_1 + 0x18) - iVar1 >> 2)) {
        *(int **)(param_1 + 0x14) = piVar16 + 1;
        if (piVar16 != (int *)0x0) {
          *piVar16 = piVar16[-1];
        }
        piVar13 = piVar16 + -1;
        iVar1 = (int)piVar13 - (int)piVar16;
        uVar4 = iVar1 >> 2;
        if (0 < (int)uVar4) {
          piVar15 = piVar16;
          if ((uVar4 & 1) != 0) {
            piVar13 = piVar16 + -2;
            piVar15 = piVar16 + -1;
            *piVar15 = *piVar13;
          }
          for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
            piVar9 = piVar13 + -1;
            piVar13 = piVar13 + -2;
            piVar15[-1] = *piVar9;
            piVar15 = piVar15 + -2;
            *piVar15 = *piVar13;
          }
        }
        goto LAB_00079d62;
      }
      uVar11 = (uVar4 >> 1) + uVar4 + (uVar4 >> 3);
      uVar8 = uVar4 + 1;
      if (uVar4 + 1 <= uVar11) {
        uVar8 = uVar11;
      }
      piVar9 = (int *)FUN_00173860(uVar8 * 4,0);
      piVar15 = piVar9;
      for (piVar13 = (int *)*piVar2; piVar13 != piVar16; piVar13 = piVar13 + 1) {
        if (piVar15 != (int *)0x0) {
          *piVar15 = *piVar13;
        }
        piVar15 = piVar15 + 1;
      }
      piVar13 = (int *)(((int)piVar16 - *piVar2 & 0xfffffffcU) + (int)piVar9);
      if (piVar13 != (int *)0x0) {
        *piVar13 = iVar3;
      }
      piVar15 = *(int **)(param_1 + 0x14);
      piVar13 = (int *)(((int)piVar16 - *piVar2 & 0xfffffffcU) + (int)piVar9);
      for (; piVar16 != piVar15; piVar16 = piVar16 + 1) {
        piVar13 = piVar13 + 1;
        if (piVar13 != (int *)0x0) {
          *piVar13 = *piVar16;
        }
      }
      iVar12 = *(int *)(param_1 + 0x14);
      iVar1 = *piVar2;
      FUN_00173a54(iVar1,*(int *)(param_1 + 0x18) - iVar1 >> 2,0);
      *piVar2 = (int)piVar9;
      *(int **)(param_1 + 0x14) = piVar9 + (iVar12 - iVar1 >> 2) + 1;
      *(int **)(param_1 + 0x18) = piVar9 + uVar8;
    }
    else {
      *(int **)(param_1 + 0x14) = piVar16 + 1;
      if (piVar16 != (int *)0x0) {
LAB_00079d62:
        *piVar16 = iVar3;
      }
    }
    iVar1 = iVar3 + 1;
  } while( true );
}


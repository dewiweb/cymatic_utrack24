// rea decompile_all
// name: FUN_0007039c
// address: 0x7039c
// body: available
// range: 0x7039c-0x7055d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0007039c(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                undefined2 param_5,undefined1 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = param_4;
  uVar2 = DAT_00070564;
  param_1[3] = param_2;
  uVar1 = DAT_00070560;
  param_1[4] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = param_1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = param_5;
  *(undefined1 *)((int)param_1 + 0x2a) = param_6;
  iVar3 = FUN_00144470(param_1 + 0xb,0);
  piVar4 = (int *)(iVar3 + 0x10);
  *piVar4 = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  if (param_7 != (undefined4 *)0x0) {
    puVar7 = (undefined1 *)param_7[1];
    for (puVar13 = (undefined1 *)*param_7; puVar13 != puVar7; puVar13 = puVar13 + 2) {
      puVar11 = *(undefined1 **)(iVar3 + 0x14);
      if (puVar11 == *(undefined1 **)(iVar3 + 0x18)) {
        uVar12 = (int)puVar11 - *piVar4 >> 1;
        if (uVar12 < (uint)((int)*(undefined1 **)(iVar3 + 0x18) - *piVar4 >> 1)) {
          *(undefined1 **)(iVar3 + 0x14) = puVar11 + 2;
          if (puVar11 != (undefined1 *)0x0) {
            *puVar11 = 0;
            puVar11[1] = 0;
            *puVar11 = puVar11[-2];
            puVar11[1] = puVar11[-1];
          }
          iVar14 = 1;
          iVar15 = ((int)(puVar11 + -2) - (int)puVar11 >> 1) + 1;
          puVar10 = puVar11 + -2;
          puVar6 = puVar11;
          if (1 < iVar15) {
            do {
              puVar8 = puVar6 + -2;
              puVar5 = puVar10 + -2;
              if (puVar8 != puVar5) {
                *puVar8 = *puVar5;
                puVar6[-1] = puVar10[-1];
              }
              iVar14 = iVar14 + 1;
              puVar10 = puVar5;
              puVar6 = puVar8;
            } while (iVar14 < iVar15);
          }
          if (puVar11 != puVar13) {
            *puVar11 = *puVar13;
            puVar11[1] = puVar13[1];
          }
        }
        else {
          uVar9 = (uVar12 >> 1) + uVar12 + (uVar12 >> 3);
          if (uVar9 < uVar12 + 1) {
            uVar9 = uVar12 + 1;
          }
          puVar5 = (undefined1 *)FUN_00173860(uVar9 * 2,0);
          puVar6 = puVar5;
          for (puVar10 = (undefined1 *)*piVar4; puVar10 != puVar11; puVar10 = puVar10 + 2) {
            if (puVar6 != (undefined1 *)0x0) {
              *puVar6 = 0;
              puVar6[1] = 0;
              if (puVar6 != puVar10) {
                *puVar6 = *puVar10;
                puVar6[1] = puVar10[1];
              }
            }
            puVar6 = puVar6 + 2;
          }
          puVar10 = puVar5 + ((int)puVar11 - *piVar4 & 0xfffffffe);
          if (puVar10 != (undefined1 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = 0;
            if (puVar10 != puVar13) {
              *puVar10 = *puVar13;
              puVar10[1] = puVar13[1];
            }
          }
          puVar6 = *(undefined1 **)(iVar3 + 0x14);
          puVar10 = puVar5 + ((int)puVar11 - *piVar4 & 0xfffffffe);
          for (; puVar11 != puVar6; puVar11 = puVar11 + 2) {
            puVar8 = puVar10 + 2;
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = 0;
              puVar10[3] = 0;
              if (puVar8 != puVar11) {
                *puVar8 = *puVar11;
                puVar10[3] = puVar11[1];
              }
            }
            puVar10 = puVar8;
          }
          iVar15 = *(int *)(iVar3 + 0x14);
          iVar14 = *piVar4;
          FUN_00173a54(iVar14,*(int *)(iVar3 + 0x18) - iVar14 >> 1,0);
          *piVar4 = (int)puVar5;
          *(undefined1 **)(iVar3 + 0x14) = puVar5 + (iVar15 - iVar14 >> 1) * 2 + 2;
          *(undefined1 **)(iVar3 + 0x18) = puVar5 + uVar9 * 2;
        }
      }
      else {
        *(undefined1 **)(iVar3 + 0x14) = puVar11 + 2;
        if (puVar11 != (undefined1 *)0x0) {
          *puVar11 = 0;
          puVar11[1] = 0;
          if (puVar11 != puVar13) {
            *puVar11 = *puVar13;
            puVar11[1] = puVar13[1];
          }
        }
      }
    }
  }
  return iVar3 + -0x2c;
}


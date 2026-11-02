// rea decompile_all
// name: FUN_0012a248
// address: 0x12a248
// body: available
// range: 0x12a248-0x12a45b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012a248(int param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  ushort *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  puVar9 = *(ushort **)(param_1 + 0x148);
  iVar14 = 1;
  iVar6 = *(int *)(param_1 + 0x14c) - (int)puVar9 >> 2;
  iVar12 = iVar6 + 1;
  iVar10 = 1;
  if (1 < iVar12) {
    iVar14 = iVar6 + 1;
  }
  *(short *)(param_1 + 0x154) = *(short *)(param_1 + 0x154) + 1;
  if (1 < iVar12) {
    do {
      if (*puVar9 == param_2) {
        puVar9[1] = puVar9[1] + 1;
        return;
      }
      iVar10 = iVar10 + 1;
      puVar9 = puVar9 + 2;
    } while (iVar10 < iVar14);
  }
  piVar11 = (int *)(param_1 + 0x148);
  puVar3 = *(undefined2 **)(param_1 + 0x14c);
  uVar2 = (undefined2)param_2;
  if (puVar3 == *(undefined2 **)(param_1 + 0x150)) {
    uVar1 = (int)puVar3 - *piVar11 >> 2;
    if ((uint)((int)*(undefined2 **)(param_1 + 0x150) - *piVar11 >> 2) <= uVar1) {
      uVar13 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar13 < uVar1 + 1) {
        uVar13 = uVar1 + 1;
      }
      puVar4 = (undefined2 *)FUN_00173860(uVar13 << 2,0);
      puVar8 = puVar4;
      for (puVar7 = (undefined2 *)*piVar11; puVar7 != puVar3; puVar7 = puVar7 + 2) {
        if (puVar8 != (undefined2 *)0x0) {
          *puVar8 = *puVar7;
          puVar8[1] = puVar7[1];
        }
        puVar8 = puVar8 + 2;
      }
      puVar7 = (undefined2 *)(((int)puVar3 - *piVar11 & 0xfffffffcU) + (int)puVar4);
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = uVar2;
        puVar7[1] = 1;
      }
      puVar8 = *(undefined2 **)(param_1 + 0x14c);
      puVar7 = (undefined2 *)(((int)puVar3 - *piVar11 & 0xfffffffcU) + (int)puVar4);
      for (; puVar3 != puVar8; puVar3 = puVar3 + 2) {
        puVar5 = puVar7 + 2;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = *puVar3;
          puVar7[3] = puVar3[1];
        }
        puVar7 = puVar5;
      }
      iVar6 = *piVar11;
      iVar10 = *(int *)(param_1 + 0x14c);
      FUN_00173a54(iVar6,*(int *)(param_1 + 0x150) - iVar6 >> 2,0);
      *(undefined2 **)(param_1 + 0x150) = puVar4 + uVar13 * 2;
      *(undefined2 **)(param_1 + 0x14c) = puVar4 + (iVar10 - iVar6 >> 2) * 2 + 2;
      *piVar11 = (int)puVar4;
      return;
    }
    *(undefined2 **)(param_1 + 0x14c) = puVar3 + 2;
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = puVar3[-2];
      puVar3[1] = puVar3[-1];
    }
    puVar7 = puVar3;
    puVar8 = puVar3 + -2;
    while (puVar3 != puVar8) {
      puVar7[-2] = puVar8[-2];
      puVar7[-1] = puVar8[-1];
      puVar7 = puVar7 + -2;
      puVar8 = puVar8 + -2;
    }
    *puVar3 = uVar2;
    puVar3[1] = 1;
    return;
  }
  *(undefined2 **)(param_1 + 0x14c) = puVar3 + 2;
  if (puVar3 != (undefined2 *)0x0) {
    *puVar3 = uVar2;
    puVar3[1] = 1;
    return;
  }
  return;
}


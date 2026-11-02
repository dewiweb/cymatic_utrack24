// rea decompile_all
// name: FUN_001a7860
// address: 0x1a7860
// body: available
// range: 0x1a7860-0x1a794b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001a78a4) */
/* WARNING: Removing unreachable block (ram,0x001a78a8) */

undefined4 FUN_001a7860(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  piVar1 = (int *)(param_1 + 0x14);
  puVar10 = *(undefined4 **)(param_1 + 0x18);
  if (puVar10 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar9 = (int)puVar10 - *piVar1 >> 2;
    if ((uint)((int)*(undefined4 **)(param_1 + 0x1c) - *piVar1 >> 2) <= uVar9) {
      uVar5 = (uVar9 >> 1) + uVar9 + (uVar9 >> 3);
      uVar2 = uVar9 + 1;
      if (uVar9 + 1 <= uVar5) {
        uVar2 = uVar5;
      }
      puVar3 = (undefined4 *)FUN_00173860(uVar2 * 4,0);
      puVar7 = puVar3;
      for (puVar6 = (undefined4 *)*piVar1; puVar6 != puVar10; puVar6 = puVar6 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar6;
        }
        puVar7 = puVar7 + 1;
      }
      puVar6 = (undefined4 *)(((int)puVar10 - *piVar1 & 0xfffffffcU) + (int)puVar3);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = param_2;
      }
      puVar7 = *(undefined4 **)(param_1 + 0x18);
      puVar6 = (undefined4 *)(((int)puVar10 - *piVar1 & 0xfffffffcU) + (int)puVar3);
      for (; puVar10 != puVar7; puVar10 = puVar10 + 1) {
        puVar6 = puVar6 + 1;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar10;
        }
      }
      iVar8 = *(int *)(param_1 + 0x18);
      iVar4 = *piVar1;
      FUN_00173a54(iVar4,*(int *)(param_1 + 0x1c) - iVar4 >> 2,0);
      *piVar1 = (int)puVar3;
      *(undefined4 **)(param_1 + 0x18) = puVar3 + (iVar8 - iVar4 >> 2) + 1;
      *(undefined4 **)(param_1 + 0x1c) = puVar3 + uVar2;
      return 0;
    }
    *(undefined4 **)(param_1 + 0x18) = puVar10 + 1;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = puVar10[-1];
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x18) = puVar10 + 1;
    if (puVar10 == (undefined4 *)0x0) {
      return 0;
    }
  }
  *puVar10 = param_2;
  return 0;
}


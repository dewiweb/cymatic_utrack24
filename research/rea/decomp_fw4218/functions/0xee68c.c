// rea decompile_all
// name: FUN_000ee68c
// address: 0xee68c
// body: available
// range: 0xee68c-0xee77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000ee6d4) */
/* WARNING: Removing unreachable block (ram,0x000ee6d8) */

undefined4 FUN_000ee68c(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  piVar1 = (int *)(param_1 + 0x1a0);
  puVar10 = *(undefined4 **)(param_1 + 0x1a4);
  if (puVar10 == *(undefined4 **)(param_1 + 0x1a8)) {
    uVar5 = (int)puVar10 - *piVar1 >> 2;
    if (uVar5 < (uint)((int)*(undefined4 **)(param_1 + 0x1a8) - *piVar1 >> 2)) {
      *(undefined4 **)(param_1 + 0x1a4) = puVar10 + 1;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = puVar10[-1];
      }
      *puVar10 = param_2;
    }
    else {
      uVar6 = (uVar5 >> 1) + uVar5 + (uVar5 >> 3);
      uVar2 = uVar5 + 1;
      if (uVar5 + 1 <= uVar6) {
        uVar2 = uVar6;
      }
      puVar3 = (undefined4 *)FUN_00173860(uVar2 * 4,0);
      puVar8 = puVar3;
      for (puVar7 = (undefined4 *)*piVar1; puVar7 != puVar10; puVar7 = puVar7 + 1) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *puVar7;
        }
        puVar8 = puVar8 + 1;
      }
      puVar7 = (undefined4 *)(((int)puVar10 - *piVar1 & 0xfffffffcU) + (int)puVar3);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = param_2;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x1a4);
      puVar7 = (undefined4 *)(((int)puVar10 - *piVar1 & 0xfffffffcU) + (int)puVar3);
      for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
        puVar7 = puVar7 + 1;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar10;
        }
      }
      iVar9 = *(int *)(param_1 + 0x1a4);
      iVar4 = *piVar1;
      FUN_00173a54(iVar4,*(int *)(param_1 + 0x1a8) - iVar4 >> 2,0);
      *piVar1 = (int)puVar3;
      *(undefined4 **)(param_1 + 0x1a4) = puVar3 + (iVar9 - iVar4 >> 2) + 1;
      *(undefined4 **)(param_1 + 0x1a8) = puVar3 + uVar2;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x1a4) = puVar10 + 1;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = param_2;
    }
  }
  return 1;
}


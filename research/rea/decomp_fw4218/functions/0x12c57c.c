// rea decompile_all
// name: FUN_0012c57c
// address: 0x12c57c
// body: available
// range: 0x12c57c-0x12c6f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0012c5f0) */
/* WARNING: Removing unreachable block (ram,0x0012c5fc) */

void FUN_0012c57c(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  
  piVar8 = (int *)(param_1 + 0x14);
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  if (puVar7 != *(undefined4 **)(param_1 + 0x1c)) {
    *(undefined4 **)(param_1 + 0x18) = puVar7 + 1;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_2;
    }
    return;
  }
  uVar1 = (int)puVar7 - *piVar8 >> 2;
  if ((uint)((int)*(undefined4 **)(param_1 + 0x1c) - *piVar8 >> 2) <= uVar1) {
    uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    if (uVar9 < uVar1 + 1) {
      uVar9 = uVar1 + 1;
    }
    puVar2 = (undefined4 *)FUN_00173860(uVar9 << 2,0);
    puVar4 = puVar2;
    for (puVar6 = (undefined4 *)*piVar8; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar6;
      }
      puVar4 = puVar4 + 1;
    }
    puVar6 = (undefined4 *)(((int)puVar7 - *piVar8 & 0xfffffffcU) + (int)puVar2);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = param_2;
    }
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    puVar6 = (undefined4 *)(((int)puVar7 - *piVar8 & 0xfffffffcU) + (int)puVar2);
    for (; puVar7 != puVar4; puVar7 = puVar7 + 1) {
      puVar6 = puVar6 + 1;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar7;
      }
    }
    iVar3 = *piVar8;
    iVar5 = *(int *)(param_1 + 0x18);
    FUN_00173a54(iVar3,*(int *)(param_1 + 0x1c) - iVar3 >> 2,0);
    *(undefined4 **)(param_1 + 0x1c) = puVar2 + uVar9;
    *(undefined4 **)(param_1 + 0x18) = puVar2 + (iVar5 - iVar3 >> 2) + 1;
    *piVar8 = (int)puVar2;
    return;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar7 + 1;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = puVar7[-1];
  }
  *puVar7 = param_2;
  return;
}


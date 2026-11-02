// rea decompile_all
// name: FUN_0005cd04
// address: 0x5cd04
// body: available
// range: 0x5cd04-0x5cddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_0005cd04(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int local_18 [2];
  
  piVar7 = (int *)(param_1 + 0x10);
  *param_1 = *param_2;
  piVar8 = (int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[0xc] = param_2[0xc];
  *piVar7 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_18[0] = *(int *)(param_2 + 0x14) - *piVar8 >> 2;
  piVar1 = local_18;
  if (local_18[0] == 0) {
    piVar1 = local_18 + 1;
  }
  local_18[1] = 1;
  iVar9 = *piVar1;
  puVar2 = (undefined4 *)FUN_00173860(iVar9 << 2,0);
  *piVar7 = (int)puVar2;
  puVar6 = *(undefined4 **)(param_2 + 0x14);
  for (puVar4 = (undefined4 *)*piVar8; puVar4 != puVar6; puVar4 = puVar4 + 1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar4;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = *(int *)(param_2 + 0x14);
  iVar5 = *piVar8;
  *(int *)(param_1 + 0x18) = *piVar7 + iVar9 * 4;
  *(uint *)(param_1 + 0x14) = (iVar3 - iVar5 & 0xfffffffcU) + *piVar7;
  return param_1;
}


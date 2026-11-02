// rea decompile_all
// name: FUN_001ee6b8
// address: 0x1ee6b8
// body: available
// range: 0x1ee6b8-0x1ee777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001ee6b8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  
  puVar1 = (undefined4 *)(param_1 + 0x34);
  for (puVar2 = *(undefined4 **)(param_1 + 0x34); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    puVar1 = puVar2;
  }
  *puVar1 = param_2;
  *param_2 = 0;
  puVar6 = (uint *)param_2[1];
  iVar8 = *(int *)(param_1 + 0x20);
  iVar3 = param_2[2];
  puVar4 = (uint *)((int)puVar6 + iVar8 + 4);
  iVar9 = 0;
  puVar7 = puVar6;
  if (puVar4 <= (uint *)((int)puVar6 + iVar3)) {
    do {
      puVar5 = puVar4;
      *puVar7 = (uint)puVar5;
      puVar4 = (uint *)((int)puVar5 + iVar8 + 4);
      iVar9 = iVar9 + 1;
      puVar7 = puVar5;
    } while (puVar4 <= (uint *)((int)puVar6 + iVar3));
    if (iVar9 != 0) {
      thunk_EXT_FUN_0040001c();
      *(undefined4 *)((int)puVar5 + (-4 - iVar8)) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = param_2[1];
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar9;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar9;
      thunk_EXT_FUN_00400034();
      return 0;
    }
  }
  return 0;
}


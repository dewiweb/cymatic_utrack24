// rea decompile_all
// name: FUN_0020bb54
// address: 0x20bb54
// body: available
// range: 0x20bb54-0x20bb9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0020bb54(int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)FUN_001c6a8c(param_2 << 2);
  uVar4 = param_1[1];
  if (param_2 <= (uint)param_1[1]) {
    uVar4 = param_2;
  }
  puVar3 = puVar1;
  for (puVar2 = (undefined4 *)*param_1; (undefined4 *)(*param_1 + uVar4 * 4) != puVar2;
      puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  for (; uVar4 < param_2; uVar4 = uVar4 + 1) {
    puVar1[uVar4] = *param_3;
  }
  FUN_001c6a64(*param_1);
  *param_1 = (int)puVar1;
  param_1[1] = param_2;
  return CONCAT44(param_1,puVar1);
}


// rea decompile_all
// name: FUN_000a3b94
// address: 0xa3b94
// body: available
// range: 0xa3b94-0xa3c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_000a3b94(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_000a3c2c;
  FUN_001a0700(param_1 + 1);
  puVar1 = (undefined4 *)param_1[0xb];
  if ((undefined4 *)param_1[0xc] != puVar1) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1,param_1);
      puVar1 = puVar1 + 1;
    } while ((undefined4 *)param_1[0xc] != puVar1);
  }
  FUN_001a0d18(param_1 + 1);
  FUN_0010fa20(param_1[0xb],(int)(param_1[0xd] - param_1[0xb]) >> 2,0);
  FUN_001a07f0(param_1 + 1);
  return param_1;
}


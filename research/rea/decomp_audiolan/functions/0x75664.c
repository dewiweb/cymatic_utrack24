// rea decompile_all
// name: FUN_00075664
// address: 0x75664
// body: available
// range: 0x75664-0x75707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00075664(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0xff;
  *(undefined1 *)((int)param_1 + 9) = 0xff;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  FUN_0017a1c4(param_1 + 4,DAT_00075708,1,0);
  thunk_EXT_FUN_0040010c(param_1 + 4);
  puVar1 = param_1 + 0xb;
  *puVar1 = 0;
  FUN_0017a1c4(puVar1,DAT_0007570c,1,0);
  thunk_EXT_FUN_0040010c(puVar1);
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  FUN_0016d8f0(param_1 + 0x18);
  FUN_0004037c(DAT_00075714,*(undefined4 *)(*(int *)(DAT_00075710 + 4) + 0xff8));
  return param_1;
}


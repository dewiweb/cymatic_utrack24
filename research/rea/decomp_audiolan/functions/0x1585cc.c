// rea decompile_all
// name: FUN_001585cc
// address: 0x1585cc
// body: available
// range: 0x1585cc-0x158713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x158710 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001585cc(int param_1)

{
  FUN_000028a4(DAT_00158714);
  FUN_000028a4(DAT_00158718);
  FUN_000028a4(DAT_0015871c,param_1);
  FUN_000028a4(DAT_00158720,*(undefined4 *)(param_1 + 0x10));
  FUN_000028a4(DAT_00158724,*(undefined4 *)(param_1 + 0x14));
  FUN_000028a4(DAT_00158728,*(undefined4 *)(param_1 + 0x18));
  FUN_000028a4(DAT_0015872c,*(undefined4 *)(param_1 + 0x1c));
  FUN_000028a4(DAT_00158730,*(undefined4 *)(param_1 + 0x20));
  FUN_000028a4(DAT_00158734,*(undefined4 *)(param_1 + 0x24));
  FUN_000028a4(DAT_00158738,*(undefined4 *)(param_1 + 0x28));
  thunk_FUN_000028a4(DAT_0015873c,*(undefined4 *)(param_1 + 0x2c));
  return;
}


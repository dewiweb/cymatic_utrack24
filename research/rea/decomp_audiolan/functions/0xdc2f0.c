// rea decompile_all
// name: FUN_000dc2f0
// address: 0xdc2f0
// body: available
// range: 0xdc2f0-0xdc363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xdc360 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000dc2f0(undefined4 *param_1)

{
  FUN_000028a4(s_Framer_Statistics__000dc364);
  FUN_000028a4(s_ISO_Header__0x_08x_000dc37c,*param_1);
  FUN_000028a4(s_CIP1__0x_08x_000dc398,param_1[1]);
  FUN_000028a4(s_CIP2__0x_08x_000dc3b4,param_1[2]);
  FUN_000028a4(s_DBS___d_000dc3d0,param_1[3]);
  FUN_000028a4(s_DBC__0x_08x_000dc3e8,*(undefined1 *)(param_1 + 8));
  FUN_000028a4(s_SYT_interval___d_000dc404,param_1[4]);
  FUN_000028a4(s_AHB_Sync_quadlet__0x_08x_000dc41c,param_1[5]);
  thunk_FUN_000028a4(s_Number_of_routes___d_000dc438,param_1[6]);
  return;
}


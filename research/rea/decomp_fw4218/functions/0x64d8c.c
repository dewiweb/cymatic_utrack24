// rea decompile_all
// name: FUN_00064d8c
// address: 0x64d8c
// body: available
// range: 0x64d8c-0x64dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64dd4 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00064d8c(int param_1)

{
  FUN_00002898(&DAT_00064dd8);
  FUN_00002898(s_DSPStreaming_statistics__00064ddc);
  FUN_00002898(s_AV_input_packets___u_00064df8,*(undefined4 *)(param_1 + 0xc4));
  FUN_00002898(s_Output_block_alloc___u_00064e10,*(undefined4 *)(param_1 + 200));
  FUN_00002898(s_No_output_packet____u_00064e28,*(undefined4 *)(param_1 + 0xcc));
  thunk_FUN_00002898(s_No_bus_input_packet____u_00064e44,*(undefined4 *)(param_1 + 0xd0));
  return;
}


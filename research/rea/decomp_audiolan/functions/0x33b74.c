// rea decompile_all
// name: FUN_00033b74
// address: 0x33b74
// body: available
// range: 0x33b74-0x33c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00033b74(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_00029e84(s_____Parent_data_set_______00033c18);
  FUN_00029e84(s_Parent_port_identity__00033c34);
  FUN_00029e84(s_Clock_identity__00033c4c);
  do {
    FUN_00029e84(&DAT_00033c60,*(undefined1 *)(param_1 + iVar2));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  FUN_00029e84(s_Port_number___d_00033c64,
               CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)));
  if (*(char *)(param_1 + 10) == '\0') {
    pcVar1 = s_FALSE_00033c80;
  }
  else {
    pcVar1 = &DAT_00033c78;
  }
  FUN_00029e84(s_Parent_stats___s_00033c88,pcVar1);
  FUN_00029e84(s_Observed_parent_offset_scaled_lo_00033c9c,*(undefined2 *)(param_1 + 0xc));
  FUN_00029e84(s_Observed_parent_clock_phase_chan_00033cd0,*(undefined4 *)(param_1 + 0x10));
  FUN_00029e84(s_Grandmaster_identity__00033d00);
  iVar2 = 0;
  do {
    FUN_00029e84(&DAT_00033c60,*(undefined1 *)(param_1 + iVar2 + 0x1c));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  FUN_00029e84(s_Grandmaster_clock_quality__00033d18);
  FUN_00029e84(s_Clock_class___d_00033d38,*(undefined1 *)(param_1 + 0x18));
  FUN_00029e84(s_Clock_accuracy__0x_x_00033d4c,*(undefined1 *)(param_1 + 0x19));
  FUN_00029e84(s_Offset_scaled_log_variance___i_00033d64,*(undefined2 *)(param_1 + 0x1a));
  FUN_00029e84(s_Grandmaster_priority_1___i_00033d88,*(undefined1 *)(param_1 + 0x14));
  FUN_00029e84(s_Grandmaster_priority_2___i_00033da8,*(undefined1 *)(param_1 + 0x15));
  FUN_00029e84(&DAT_00033dc8);
  return;
}


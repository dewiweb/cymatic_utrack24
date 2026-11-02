// rea decompile_all
// name: FUN_00039710
// address: 0x39710
// body: available
// range: 0x39710-0x397b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00039710(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_0002f9d4(s_____Parent_data_set_______000397b4);
  FUN_0002f9d4(s_Parent_port_identity__000397d0);
  FUN_0002f9d4(s_Clock_identity__000397e8);
  do {
    FUN_0002f9d4(&DAT_000397fc,*(undefined1 *)(param_1 + iVar2));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  FUN_0002f9d4(s_Port_number___d_00039800,
               CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)));
  if (*(char *)(param_1 + 10) == '\0') {
    pcVar1 = s_FALSE_0003981c;
  }
  else {
    pcVar1 = &DAT_00039814;
  }
  FUN_0002f9d4(s_Parent_stats___s_00039824,pcVar1);
  FUN_0002f9d4(s_Observed_parent_offset_scaled_lo_00039838,*(undefined2 *)(param_1 + 0xc));
  FUN_0002f9d4(s_Observed_parent_clock_phase_chan_0003986c,*(undefined4 *)(param_1 + 0x10));
  FUN_0002f9d4(s_Grandmaster_identity__0003989c);
  iVar2 = 0;
  do {
    FUN_0002f9d4(&DAT_000397fc,*(undefined1 *)(param_1 + iVar2 + 0x1c));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  FUN_0002f9d4(s_Grandmaster_clock_quality__000398b4);
  FUN_0002f9d4(s_Clock_class___d_000398d4,*(undefined1 *)(param_1 + 0x18));
  FUN_0002f9d4(s_Clock_accuracy__0x_x_000398e8,*(undefined1 *)(param_1 + 0x19));
  FUN_0002f9d4(s_Offset_scaled_log_variance___i_00039900,*(undefined2 *)(param_1 + 0x1a));
  FUN_0002f9d4(s_Grandmaster_priority_1___i_00039924,*(undefined1 *)(param_1 + 0x14));
  FUN_0002f9d4(s_Grandmaster_priority_2___i_00039944,*(undefined1 *)(param_1 + 0x15));
  FUN_0002f9d4(&DAT_00039964);
  return;
}


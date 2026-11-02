// rea decompile_all
// name: FUN_00036224
// address: 0x36224
// body: available
// range: 0x36224-0x362b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00036224(short *param_1)

{
  char *pcVar1;
  
  FUN_00029e84(s_____Global_time_Properties_data_s_000362b4);
  FUN_00029e84(s_Current_UTC_offset___d_000362e0,(int)*param_1);
  if ((char)param_1[2] == '\0') {
    pcVar1 = s_FALSE_00036304;
  }
  else {
    pcVar1 = &DAT_000362fc;
  }
  FUN_00029e84(s_Current_UTC_offset_valid___s_0003630c,pcVar1);
  if (*(char *)((int)param_1 + 3) == '\0') {
    pcVar1 = s_FALSE_00036304;
  }
  else {
    pcVar1 = &DAT_000362fc;
  }
  FUN_00029e84(s_Leap_59___s_0003632c,pcVar1);
  if ((char)param_1[1] == '\0') {
    pcVar1 = s_FALSE_00036304;
  }
  else {
    pcVar1 = &DAT_000362fc;
  }
  FUN_00029e84(s_Leap_61___s_0003633c,pcVar1);
  if ((char)param_1[3] == '\0') {
    pcVar1 = s_FALSE_00036304;
  }
  else {
    pcVar1 = &DAT_000362fc;
  }
  FUN_00029e84(s_Time_traceable___s_0003634c,pcVar1);
  if (*(char *)((int)param_1 + 7) == '\0') {
    pcVar1 = s_FALSE_00036304;
  }
  else {
    pcVar1 = &DAT_000362fc;
  }
  FUN_00029e84(s_Frequency_traceable___s_00036364,pcVar1);
  if (*(char *)((int)param_1 + 5) == '\0') {
    pcVar1 = s_FALSE_00036304;
  }
  else {
    pcVar1 = &DAT_000362fc;
  }
  FUN_00029e84(s_PTP_timescale___s_00036380,pcVar1);
  FUN_00029e84(s_Time_source__0x_X_00036394,(char)param_1[4]);
  FUN_00029e84(&DAT_000363a8);
  return;
}


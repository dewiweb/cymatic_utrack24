// rea decompile_all
// name: FUN_0002c210
// address: 0x2c210
// body: available
// range: 0x2c210-0x2c29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0002c210(char *param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_0002f9d4(s_____Default_data_set_______0002c29c);
  if (*param_1 == '\0') {
    pcVar1 = s_FALSE_0002c2c0;
  }
  else {
    pcVar1 = &DAT_0002c2b8;
  }
  FUN_0002f9d4(s_Two_step_clock___s_0002c2c8,pcVar1);
  FUN_0002f9d4(s_Clock_identity__0002c2e0);
  do {
    FUN_0002f9d4(&DAT_0002c2f4,param_1[iVar2 + 0xb]);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  FUN_0002f9d4(s_Number_of_ports___d_0002c2f8,*(undefined2 *)(param_1 + 2));
  FUN_0002f9d4(s_Clock_quality__0002c310);
  FUN_0002f9d4(s_Clock_class___d_0002c324,param_1[6]);
  FUN_0002f9d4(s_Clock_accuracy__0x_x_0002c338,param_1[7]);
  FUN_0002f9d4(s_Offset_scaled_log_variance___i_0002c350,*(undefined2 *)(param_1 + 8));
  FUN_0002f9d4(s_Priority_1___i_0002c374,param_1[4]);
  FUN_0002f9d4(s_Priority_2___i_0002c388,param_1[10]);
  FUN_0002f9d4(s_Domain_number___i_0002c39c,param_1[0x13]);
  if (param_1[0x14] == '\0') {
    pcVar1 = s_FALSE_0002c2c0;
  }
  else {
    pcVar1 = &DAT_0002c2b8;
  }
  FUN_0002f9d4(s_Slave_only___s_0002c3b0,pcVar1);
  FUN_0002f9d4(&DAT_0002c3c4);
  return;
}


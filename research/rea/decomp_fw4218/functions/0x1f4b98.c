// rea decompile_all
// name: FUN_001f4b98
// address: 0x1f4b98
// body: available
// range: 0x1f4b98-0x1f4cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f4ca8 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f4b98(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_001f4cac;
  if (param_1 != 0) {
    return;
  }
  FUN_00002898(s_AV_common_registers__001f4cb0);
  FUN_00002898(s______________________001f4cc8);
  FUN_00002898(s_0x_08x__avActivate___0x_08x_001f4ce0,puVar1,*puVar1);
  FUN_00002898(s_0x_08x__avCUUnitOn___0x_08x_001f4d08,DAT_001f4d04,puVar1[1]);
  FUN_00002898(s_0x_08x__avComConfig0___0x_08x_001f4d30,DAT_001f4d2c,puVar1[4]);
  FUN_00002898(s_0x_08x__avCUConfig_0____0x_08x_001f4d58,DAT_001f4d54,puVar1[8]);
  FUN_00002898(s_0x_08x__avCUConfig_1____0x_08x_001f4d80,DAT_001f4d7c,puVar1[9]);
  FUN_00002898(s_0x_08x__avAllAvOn___0x_08x_001f4da8,DAT_001f4da4,puVar1[0x40]);
  FUN_00002898(s_0x_08x__prtIsAvPort___0x_08x_001f4dd0,DAT_001f4dcc,*DAT_001f4dcc);
  FUN_00002898(s_0x_08x__prtIsPresent___0x_08x_001f4df8,DAT_001f4df4,*DAT_001f4df4);
  FUN_00002898(s_0x_08x__prtHasAdat___0x_08x_001f4e20,DAT_001f4e1c,*DAT_001f4e1c);
  FUN_00002898(s_0x_08x__prtHasPwm___0x_08x_001f4e48,DAT_001f4e44,*DAT_001f4e44);
  FUN_00002898(s_0x_08x__prtHasAes___0x_08x_001f4e70,DAT_001f4e6c,*DAT_001f4e6c);
  FUN_00002898(s_0x_08x__avIntSet___0x_08x_001f4e98,DAT_001f4e94,*DAT_001f4e94);
  FUN_00002898(s_0x_08x__avIntClr___0x_08x_001f4ec0,DAT_001f4ebc,*DAT_001f4ebc);
  FUN_00002898(s_0x_08x__avIntMaskSet___0x_08x_001f4ee8,DAT_001f4ee4,*DAT_001f4ee4);
  thunk_FUN_00002898(s_0x_08x__avIntMaskClr___0x_08x_001f4f10,DAT_001f4f0c,*DAT_001f4f0c);
  return;
}


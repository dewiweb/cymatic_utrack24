// rea decompile_all
// name: FUN_0007a098
// address: 0x7a098
// body: available
// range: 0x7a098-0x7a157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7a154 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0007a098(int param_1)

{
  char *pcVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0x14c) == '\0') {
    pcVar1 = s_Playback_0007a164;
  }
  else {
    pcVar1 = s_Recording_0007a158;
  }
  FUN_00002898(s_Cycle___s_0007a170,pcVar1);
  FUN_00002898(s_CurrentCycle___u_0007a190,*(undefined4 *)(param_1 + 0x144));
  FUN_00002898(s_CurrentFile___u_0007a1b0,*(undefined4 *)(param_1 + 0x148));
  if (*(char *)(param_1 + 0x14d) == '\0') {
    puVar2 = &DAT_0007a1d4;
  }
  else {
    puVar2 = &DAT_0007a1d0;
  }
  FUN_00002898(s_SetupNextFile___s_0007a1d8,puVar2);
  FUN_00002898(s_TotalSamplesRecorded___u_0007a1f8,*(undefined4 *)(param_1 + 0x150));
  FUN_00002898(s_TotalSamplesPlayed___u_0007a218,*(undefined4 *)(param_1 + 0x154));
  FUN_00002898(s_SamplesRecorded___u_0007a238,*(undefined4 *)(param_1 + 0x158));
  FUN_00002898(s_SamplesPlayed___u_0007a258,*(undefined4 *)(param_1 + 0x15c));
  FUN_00002898(s_SetupNextFileSampleNumber___u_0007a278,*(undefined4 *)(param_1 + 0x160));
  FUN_00002898(s_MaxFileSize16Bits___u_0007a298,*(undefined4 *)(param_1 + 0x164));
  FUN_00002898(s_MaxFileSize24Bits___u_0007a2b8,*(undefined4 *)(param_1 + 0x168));
  FUN_00002898(s_DropOuts___u_0007a2d8,*(undefined4 *)(param_1 + 0x16c));
  thunk_FUN_00002898(s_WriteErrors___u_0007a2f8,*(undefined4 *)(param_1 + 0x170));
  return;
}


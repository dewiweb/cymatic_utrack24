// rea decompile_all
// name: FUN_001ac970
// address: 0x1ac970
// body: available
// range: 0x1ac970-0x1aca83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1aca80 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001ac970(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_001aca84;
  if (param_1 != 0) {
    return;
  }
  FUN_000028a4(s_AV_common_registers__001aca88);
  FUN_000028a4(s______________________001acaa0);
  FUN_000028a4(s_0x_08x__avActivate___0x_08x_001acab8,puVar1,*puVar1);
  FUN_000028a4(s_0x_08x__avCUUnitOn___0x_08x_001acae0,DAT_001acadc,puVar1[1]);
  FUN_000028a4(s_0x_08x__avComConfig0___0x_08x_001acb08,DAT_001acb04,puVar1[4]);
  FUN_000028a4(s_0x_08x__avCUConfig_0____0x_08x_001acb30,DAT_001acb2c,puVar1[8]);
  FUN_000028a4(s_0x_08x__avCUConfig_1____0x_08x_001acb58,DAT_001acb54,puVar1[9]);
  FUN_000028a4(s_0x_08x__avAllAvOn___0x_08x_001acb80,DAT_001acb7c,puVar1[0x40]);
  FUN_000028a4(s_0x_08x__prtIsAvPort___0x_08x_001acba8,DAT_001acba4,*DAT_001acba4);
  FUN_000028a4(s_0x_08x__prtIsPresent___0x_08x_001acbd0,DAT_001acbcc,*DAT_001acbcc);
  FUN_000028a4(s_0x_08x__prtHasAdat___0x_08x_001acbf8,DAT_001acbf4,*DAT_001acbf4);
  FUN_000028a4(s_0x_08x__prtHasPwm___0x_08x_001acc20,DAT_001acc1c,*DAT_001acc1c);
  FUN_000028a4(s_0x_08x__prtHasAes___0x_08x_001acc48,DAT_001acc44,*DAT_001acc44);
  FUN_000028a4(s_0x_08x__avIntSet___0x_08x_001acc70,DAT_001acc6c,*DAT_001acc6c);
  FUN_000028a4(s_0x_08x__avIntClr___0x_08x_001acc98,DAT_001acc94,*DAT_001acc94);
  FUN_000028a4(s_0x_08x__avIntMaskSet___0x_08x_001accc0,DAT_001accbc,*DAT_001accbc);
  thunk_FUN_000028a4(s_0x_08x__avIntMaskClr___0x_08x_001acce8,DAT_001acce4,*DAT_001acce4);
  return;
}


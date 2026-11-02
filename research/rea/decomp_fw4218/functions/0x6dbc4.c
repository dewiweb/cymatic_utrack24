// rea decompile_all
// name: FUN_0006dbc4
// address: 0x6dbc4
// body: available
// range: 0x6dbc4-0x6dc93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006dbc4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  FUN_0009175c();
  FUN_001b52ec();
  iVar1 = FUN_001fff90(&local_14,s_sds___cne_AppSettings_Sync_Mode_0006dc94);
  if (iVar1 == 0) {
    FUN_00002898(_DAT_0006dcb4);
  }
  *(char *)(param_1 + 0x38) = (char)local_14;
  iVar1 = FUN_001fff90(&local_18,s___sds___cne_AppSettings_Sync_Sla_0006dcb6 + 2);
  if (iVar1 == 0) {
    FUN_00002898(_DAT_0006dce0);
  }
  *(char *)(param_1 + 0x39) = (char)local_18;
  iVar1 = FUN_002003e0(param_1 + 0x3c,s___sds___cne_AppSettings_Sync_Gro_0006dce2 + 2);
  if (iVar1 == 0) {
    FUN_00002898(_DAT_0006dd08);
  }
  iVar1 = FUN_001fff90(param_1 + 0x40,s___sds___cne_AppSettings_Sync_Sla_0006dd0a + 2);
  if (iVar1 == 0) {
    FUN_00002898(_DAT_0006dd34);
  }
  iVar1 = FUN_001fff90(param_1 + 0x44,s___sds___cne_AppSettings_Sync_Sla_0006dd36 + 2);
  if (iVar1 == 0) {
    FUN_00002898(_DAT_0006dd34);
  }
  iVar1 = FUN_001fff90(param_1 + 0x48,s_sds___cne_AppSettings_Sync_Slave_0006dd60);
  if (iVar1 == 0) {
    FUN_00002898(_DAT_0006dd34);
  }
  return;
}


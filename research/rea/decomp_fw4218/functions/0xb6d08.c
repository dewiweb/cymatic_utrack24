// rea decompile_all
// name: FUN_000b6d08
// address: 0xb6d08
// body: available
// range: 0xb6d08-0xb6e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000b6d08(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_00091838(param_1,s_PlaybackSettings_000b6e9c);
  iVar2 = FUN_001fff90(&local_10,s_sds___cne_AppSettings_Playback_P_000b6eb0);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__PlaybackSettings__Could_n_000b6edc);
  }
  *(char *)(iVar1 + 0x30) = (char)local_10;
  if ('\x03' < *(char *)(iVar1 + 0x30)) {
    *(undefined1 *)(iVar1 + 0x30) = 0;
  }
  iVar2 = FUN_001fff90(iVar1 + 0x34,s_sds___cne_AppSettings_Playback_S_000b6f1c);
  if (iVar2 == 0) {
    FUN_00002898(_DAT_000b6f4c);
  }
  if ((*(int *)(iVar1 + 0x34) < 1) || (7 < *(int *)(iVar1 + 0x34))) {
    *(undefined4 *)(iVar1 + 0x34) = 1;
  }
  iVar2 = FUN_001fff90(iVar1 + 0x38,s___sds___cne_AppSettings_Playback_000b6f4e + 2);
  if (iVar2 == 0) {
    FUN_00002898(_DAT_000b6f80);
  }
  if ((*(int *)(iVar1 + 0x38) < 1) || (0x17 < *(int *)(iVar1 + 0x38))) {
    *(undefined4 *)(iVar1 + 0x38) = 1;
  }
  iVar2 = FUN_001fff90(iVar1 + 0x2c,s___sds___cne_AppSettings_Playback_000b6f82 + 2);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__PlaybackSettings__Could_n_000b6fb4);
  }
  if ((*(int *)(iVar1 + 0x2c) < -1000) || (1000 < *(int *)(iVar1 + 0x2c))) {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  iVar2 = FUN_001fff90(iVar1 + 0x28,s_sds___cne_AppSettings_Playback_O_000b6ff4);
  if (iVar2 == 0) {
    FUN_00002898(_DAT_000b7028);
  }
  iVar2 = FUN_001ffb40(iVar1 + 0x24,s___sds___cne_AppSettings_Playback_000b702a + 2);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__PlaybackSettings__Could_n_000b7054);
  }
  *(undefined1 *)(iVar1 + 0x3d) = 0;
  *(undefined1 *)(iVar1 + 0x3c) = 1;
  iVar2 = FUN_001ffb40(iVar1 + 0x3d,s_sds___cne_AppSettings_Playback_M_000b7090);
  if (iVar2 == 0) {
    FUN_00002898(_DAT_000b70cc);
  }
  iVar2 = FUN_001ffb40(iVar1 + 0x3c,s___sds___cne_AppSettings_Playback_000b70ce + 2);
  if (iVar2 == 0) {
    FUN_00002898(DAT_000b7108);
  }
  return iVar1;
}


// rea decompile_all
// name: FUN_00095fec
// address: 0x95fec
// body: available
// range: 0x95fec-0x96123 inclusive
// range: 0x962c8-0x96387 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x96384 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00095fec(int param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined *puVar6;
  
  bVar2 = *(byte *)(*(int *)(param_1 + 0x4c8) + 0x60);
  bVar3 = *(byte *)(*(int *)(param_1 + 0x4c8) + 1);
  FUN_000028a4(s__________________________________00096124);
  puVar4 = *(undefined1 **)(param_1 + 0x4c8);
  FUN_000028a4(s_FADDR_0x_08x__0x_02x_0009614c,puVar4,*puVar4);
  FUN_000028a4(s__________________________________00096124);
  FUN_000028a4(s_POWER_Register_0x_08x__0x_02x_00096164,*(int *)(param_1 + 0x4c8) + 1,bVar3);
  if ((bVar3 & 0x80) == 0) {
    pcVar5 = s_disabled_0009618c;
  }
  else {
    pcVar5 = s_enabled_00096184;
  }
  FUN_000028a4(s_ISO_Update___s_00096198,pcVar5);
  if ((bVar3 & 0x40) == 0) {
    pcVar5 = s_disabled_0009618c;
  }
  else {
    pcVar5 = s_enabled_00096184;
  }
  FUN_000028a4(s_SoftConn___s_000961b0,pcVar5);
  if ((bVar3 & 0x20) == 0) {
    pcVar5 = s_disabled_0009618c;
  }
  else {
    pcVar5 = s_enabled_00096184;
  }
  FUN_000028a4(s_HSEnab___s_000961c8,pcVar5);
  if ((bVar3 & 0x10) == 0) {
    puVar6 = &DAT_000961e4;
  }
  else {
    puVar6 = &DAT_000961e0;
  }
  FUN_000028a4(s_HSMode___s_000961e8,puVar6);
  if ((bVar3 & 8) == 0) {
    pcVar5 = s_inactive_00096208;
  }
  else {
    pcVar5 = s_active_00096200;
  }
  FUN_000028a4(s_Reset___s_00096214,pcVar5);
  if ((bVar3 & 4) == 0) {
    pcVar5 = s_inactive_00096208;
  }
  else {
    pcVar5 = s_active_00096200;
  }
  FUN_000028a4(s_Resume___s_0009622c,pcVar5);
  if ((bVar3 & 2) == 0) {
    pcVar5 = s_inactive_00096208;
  }
  else {
    pcVar5 = s_active_00096200;
  }
  FUN_000028a4(s_Suspend___s_00096244,pcVar5);
  if ((bVar3 & 1) == 0) {
    pcVar5 = s_disabled_0009618c;
  }
  else {
    pcVar5 = s_enabled_00096184;
  }
  FUN_000028a4(s_SuspendM___s_0009625c,pcVar5);
  FUN_000028a4(s__________________________________00096124);
  FUN_000028a4(s_DEVCTL_Register_0x_08x__0x_02x_00096274,*(int *)(param_1 + 0x4c8) + 0x60,
               (uint)bVar2);
  FUN_000028a4(s_Operation__00096298);
  if ((bVar2 & 1) == 0) {
    FUN_000028a4(s_N_A__no_session__00096388);
  }
  else {
    if ((bVar2 & 0x80) == 0) {
      pcVar5 = s_A_Device_000962bc;
    }
    else {
      pcVar5 = s_B_Device_000962b0;
    }
    FUN_000028a4(s_ISO_Update___s_00096198 + 0x14,pcVar5);
  }
  FUN_000028a4(s_Bus_device__0009639c);
  if ((bVar2 & 4) == 0) {
    pcVar5 = &DAT_000963b4;
  }
  else if ((bVar2 & 0x40) == 0) {
    if ((bVar2 & 0x20) == 0) {
      pcVar5 = s_none_00096460;
    }
    else {
      pcVar5 = (char *)0x9645c;
    }
  }
  else {
    pcVar5 = s_FS_HS_000963bc;
  }
  FUN_000028a4(pcVar5);
  FUN_000028a4(s_VBus__000963c4);
  uVar1 = (bVar2 & 0x1f) >> 3;
  if (uVar1 == 0) {
    pcVar5 = s_below_SessionEnd__00__000963dc;
  }
  else if (uVar1 == 1) {
    pcVar5 = s_above_SessionEnd__below_AValid___000963f4;
  }
  else if (uVar1 == 2) {
    pcVar5 = s_above_AValid__below_VBus_valid___0009641c;
  }
  else {
    if (uVar1 != 3) goto LAB_00096348;
    pcVar5 = s_above_VBus_valid__11__00096444;
  }
  FUN_000028a4(pcVar5);
LAB_00096348:
  if ((bVar2 & 4) == 0) {
    puVar6 = &DAT_000961e4;
  }
  else {
    puVar6 = &DAT_000961e0;
  }
  FUN_000028a4(s_HostMode___s_00096468,puVar6);
  if ((bVar2 & 2) == 0) {
    pcVar5 = s_inactive_00096208;
  }
  else {
    pcVar5 = s_active_00096200;
  }
  FUN_000028a4(s_HostReq___s_00096480,pcVar5);
  if ((bVar2 & 1) == 0) {
    puVar6 = &DAT_000961e4;
  }
  else {
    puVar6 = &DAT_000961e0;
  }
  thunk_FUN_000028a4(s_Session___s_00096498,puVar6);
  return;
}


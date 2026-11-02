// rea decompile_all
// name: FUN_000c2438
// address: 0xc2438
// body: available
// range: 0xc2438-0xc256f inclusive
// range: 0xc2714-0xc27d3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc27d0 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000c2438(int param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined *puVar6;
  
  bVar2 = *(byte *)(*(int *)(param_1 + 0x4c8) + 0x60);
  bVar3 = *(byte *)(*(int *)(param_1 + 0x4c8) + 1);
  FUN_00002898(s__________________________________000c2570);
  puVar4 = *(undefined1 **)(param_1 + 0x4c8);
  FUN_00002898(s_FADDR_0x_08x__0x_02x_000c2598,puVar4,*puVar4);
  FUN_00002898(s__________________________________000c2570);
  FUN_00002898(s_POWER_Register_0x_08x__0x_02x_000c25b0,*(int *)(param_1 + 0x4c8) + 1,bVar3);
  if ((bVar3 & 0x80) == 0) {
    pcVar5 = s_disabled_000c25d8;
  }
  else {
    pcVar5 = s_enabled_000c25d0;
  }
  FUN_00002898(s_ISO_Update___s_000c25e4,pcVar5);
  if ((bVar3 & 0x40) == 0) {
    pcVar5 = s_disabled_000c25d8;
  }
  else {
    pcVar5 = s_enabled_000c25d0;
  }
  FUN_00002898(s_SoftConn___s_000c25fc,pcVar5);
  if ((bVar3 & 0x20) == 0) {
    pcVar5 = s_disabled_000c25d8;
  }
  else {
    pcVar5 = s_enabled_000c25d0;
  }
  FUN_00002898(s_HSEnab___s_000c2614,pcVar5);
  if ((bVar3 & 0x10) == 0) {
    puVar6 = &DAT_000c2630;
  }
  else {
    puVar6 = &DAT_000c262c;
  }
  FUN_00002898(s_HSMode___s_000c2634,puVar6);
  if ((bVar3 & 8) == 0) {
    pcVar5 = s_inactive_000c2654;
  }
  else {
    pcVar5 = s_active_000c264c;
  }
  FUN_00002898(s_Reset___s_000c2660,pcVar5);
  if ((bVar3 & 4) == 0) {
    pcVar5 = s_inactive_000c2654;
  }
  else {
    pcVar5 = s_active_000c264c;
  }
  FUN_00002898(s_Resume___s_000c2678,pcVar5);
  if ((bVar3 & 2) == 0) {
    pcVar5 = s_inactive_000c2654;
  }
  else {
    pcVar5 = s_active_000c264c;
  }
  FUN_00002898(s_Suspend___s_000c2690,pcVar5);
  if ((bVar3 & 1) == 0) {
    pcVar5 = s_disabled_000c25d8;
  }
  else {
    pcVar5 = s_enabled_000c25d0;
  }
  FUN_00002898(s_SuspendM___s_000c26a8,pcVar5);
  FUN_00002898(s__________________________________000c2570);
  FUN_00002898(s_DEVCTL_Register_0x_08x__0x_02x_000c26c0,*(int *)(param_1 + 0x4c8) + 0x60,
               (uint)bVar2);
  FUN_00002898(s_Operation__000c26e4);
  if ((bVar2 & 1) == 0) {
    FUN_00002898(s_N_A__no_session__000c27d4);
  }
  else {
    if ((bVar2 & 0x80) == 0) {
      pcVar5 = s_A_Device_000c2708;
    }
    else {
      pcVar5 = s_B_Device_000c26fc;
    }
    FUN_00002898(s_ISO_Update___s_000c25e4 + 0x14,pcVar5);
  }
  FUN_00002898(s_Bus_device__000c27e8);
  if ((bVar2 & 4) == 0) {
    pcVar5 = &DAT_000c2800;
  }
  else if ((bVar2 & 0x40) == 0) {
    if ((bVar2 & 0x20) == 0) {
      pcVar5 = s_none_000c28ac;
    }
    else {
      pcVar5 = (char *)0xc28a8;
    }
  }
  else {
    pcVar5 = s_FS_HS_000c2808;
  }
  FUN_00002898(pcVar5);
  FUN_00002898(s_VBus__000c2810);
  uVar1 = (bVar2 & 0x1f) >> 3;
  if (uVar1 == 0) {
    pcVar5 = s_below_SessionEnd__00__000c2828;
  }
  else if (uVar1 == 1) {
    pcVar5 = s_above_SessionEnd__below_AValid___000c2840;
  }
  else if (uVar1 == 2) {
    pcVar5 = s_above_AValid__below_VBus_valid___000c2868;
  }
  else {
    if (uVar1 != 3) goto LAB_000c2794;
    pcVar5 = s_above_VBus_valid__11__000c2890;
  }
  FUN_00002898(pcVar5);
LAB_000c2794:
  if ((bVar2 & 4) == 0) {
    puVar6 = &DAT_000c2630;
  }
  else {
    puVar6 = &DAT_000c262c;
  }
  FUN_00002898(s_HostMode___s_000c28b4,puVar6);
  if ((bVar2 & 2) == 0) {
    pcVar5 = s_inactive_000c2654;
  }
  else {
    pcVar5 = s_active_000c264c;
  }
  FUN_00002898(s_HostReq___s_000c28cc,pcVar5);
  if ((bVar2 & 1) == 0) {
    puVar6 = &DAT_000c2630;
  }
  else {
    puVar6 = &DAT_000c262c;
  }
  thunk_FUN_00002898(s_Session___s_000c28e4,puVar6);
  return;
}


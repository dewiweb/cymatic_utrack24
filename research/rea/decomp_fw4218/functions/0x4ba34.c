// rea decompile_all
// name: FUN_0004ba34
// address: 0x4ba34
// body: available
// range: 0x4ba34-0x4bb67 inclusive
// range: 0x4bd74-0x4bfef inclusive
// range: 0x4c398-0x4c517 inclusive
// range: 0x4c8ec-0x4c9df inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4c9dc to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004ba34(int param_1)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  FUN_00002898(s_SDRAM_settings__________________0004bb68);
  puVar1 = DAT_0004bb8c;
  FUN_00002898(s_AhbProtCfg__0x_08x____0x_08x_0004bb90,DAT_0004bb8c,*DAT_0004bb8c);
  if (param_1 != 0) {
    FUN_00002898(s_SDRAM_no_burst_access___d_0004bbb4,(*puVar1 & 3) >> 1);
    FUN_00002898(s_AHB_bus_protocol_failure_correct_0004bbe0,*puVar1 & 1);
    FUN_00002898(s_AhbProtCfg__0x_08x____0x_08x_0004bb90 + 0x20);
  }
  FUN_00002898(s_S_SDRamCfg__0x_08x____0x_08x_0004bc14,DAT_0004bc10,puVar1[1]);
  if (param_1 == 0) goto LAB_0004bee0;
  uVar3 = DAT_0004bc38;
  if (-1 < (int)puVar1[1]) {
    uVar3 = _DAT_0004bc3c;
  }
  FUN_00002898(s___SDRAM_refresh___s_0004bc3e + 2,uVar3);
  if ((puVar1[1] & 0x40000000) == 0) {
    uVar3 = 3;
  }
  else {
    uVar3 = 2;
  }
  FUN_00002898(s_SDRAM_precharge_to_active__tRP__t_0004bc6c,uVar3);
  FUN_00002898(s_SDRAM_auto_refresh_command_perio_0004bca0,((puVar1[1] & 0x3fffffff) >> 0x1b) + 3);
  FUN_00002898(s_SDRAM_CAS_latency___d_cycles_0004bcd4,2 - ((int)(puVar1[1] << 5) >> 0x1f));
  FUN_00002898(s_<__SD_bank_size:__s_0004bd09 + 3,
               *(undefined4 *)(_DAT_0004bd08 + (puVar1[1] >> 0x15 & 0x1c)));
  FUN_00002898(s_SD_column_size__0004bd38);
  if ((puVar1[1] & 0x600000) == 0) {
    FUN_00002898(&DAT_0004bff0);
  }
  else {
    if ((puVar1[1] & 0x7fffff) >> 0x15 == 1) {
      pcVar2 = &DAT_0004bd64;
    }
    else if ((puVar1[1] & 0x7fffff) >> 0x15 == 2) {
      pcVar2 = s_1024_0004bd6c;
    }
    else if (((puVar1[1] & 0x7fffff) >> 0x15 == 3) && ((puVar1[1] & 0x3ffffff) >> 0x17 != 7)) {
      pcVar2 = &DAT_0004bff8;
    }
    else {
      if (((puVar1[1] & 0x7fffff) >> 0x15 != 3) || ((puVar1[1] & 0x3ffffff) >> 0x17 != 7))
      goto LAB_0004bdcc;
      pcVar2 = s_4096_0004c000;
    }
    FUN_00002898(pcVar2);
  }
LAB_0004bdcc:
  FUN_00002898(s_<__SDRAM_command:__s_0004c009 + 3,
               *(undefined4 *)(_DAT_0004c008 + (puVar1[1] >> 0x11 & 0xc)));
  uVar3 = DAT_0004bc38;
  if (-1 < (int)(puVar1[1] << 0x11)) {
    uVar3 = _DAT_0004bc3c;
  }
  FUN_00002898(s_SDRAM_enable_disable___s_0004c038,uVar3);
  uVar3 = DAT_0004bc38;
  if (-1 < (int)(puVar1[1] << 0x12)) {
    uVar3 = _DAT_0004bc3c;
  }
  FUN_00002898(s_SRAM_enable_disable___s_0004c064,uVar3);
  FUN_00002898(s_<__SRAM_bank_size:__s_0004c091 + 3,
               *(undefined4 *)(_DAT_0004c090 + (puVar1[1] >> 7 & 0x3c)));
  uVar3 = DAT_0004bc38;
  if (-1 < (int)(puVar1[1] << 0x18)) {
    uVar3 = _DAT_0004bc3c;
  }
  FUN_00002898(s_SRAM_B1_wait__external_wait__s_0004c0c0,uVar3);
  uVar3 = DAT_0004bc38;
  if (-1 < (int)(puVar1[1] << 0x19)) {
    uVar3 = _DAT_0004bc3c;
  }
  FUN_00002898(s_SRAM_RmW__read_modify_write____s_0004c0fc,uVar3);
  FUN_00002898(s_IFWidth___d_0004c128,(puVar1[1] & 0x3f) >> 4);
  uVar3 = DAT_0004bc38;
  if (-1 < (int)(puVar1[1] << 0x1d)) {
    uVar3 = _DAT_0004bc3c;
  }
  FUN_00002898(s_SRAM_B3_wait__external_wait__s_0004c154,uVar3);
  uVar3 = DAT_0004bc38;
  if (-1 < (int)(puVar1[1] << 0x1e)) {
    uVar3 = _DAT_0004bc3c;
  }
  FUN_00002898(s_SRAM_B2_wait__external_wait__s_0004c190,uVar3);
  uVar3 = DAT_0004bc38;
  if ((puVar1[1] & 1) == 0) {
    uVar3 = _DAT_0004bc3c;
  }
  FUN_00002898(s_SRAM_B0_wait__external_wait__s_0004c1cc,uVar3);
  FUN_00002898(&DAT_0004bffc);
LAB_0004bee0:
  FUN_00002898(s_RefreshTHD__0x_08x____0x_08x_0004c20c,DAT_0004c208,puVar1[2]);
  if (param_1 != 0) {
    FUN_00002898(s_Refresh_counter_threshold___d_0004c230,(puVar1[2] & 0x7ffffff) >> 0xc);
    FUN_00002898(&DAT_0004bffc);
  }
  FUN_00002898(s_SDRamCfgSet__0x_08x____0x_08x_0004c260,DAT_0004c25c,puVar1[3]);
  if (param_1 != 0) {
    if ((puVar1[3] & 0x1000000) == 0) {
      pcVar2 = s_OEN_is_equal_CSN_for_all_SDRAM_c_0004c2c4;
    }
    else {
      pcVar2 = s_OEN_controlled_by_read_activatio_0004c284;
    }
    FUN_00002898(s_SDRam_read_mode___s_0004c2f0,pcVar2);
    uVar3 = DAT_0004c320;
    if (-1 < (int)(puVar1[3] << 0xb)) {
      uVar3 = DAT_0004c324;
    }
    FUN_00002898(DAT_0004c328,uVar3);
    uVar3 = DAT_0004c320;
    if (-1 < (int)(puVar1[3] << 0xd)) {
      uVar3 = DAT_0004c324;
    }
    FUN_00002898(DAT_0004c32c,uVar3);
    uVar3 = DAT_0004c320;
    if (-1 < (int)(puVar1[3] << 0xe)) {
      uVar3 = DAT_0004c324;
    }
    FUN_00002898(DAT_0004c330,uVar3);
    uVar3 = DAT_0004c320;
    if (-1 < (int)(puVar1[3] << 0xf)) {
      uVar3 = DAT_0004c324;
    }
    FUN_00002898(_DAT_0004c334,uVar3);
    uVar3 = DAT_0004c320;
    if (-1 < (int)(puVar1[3] << 0x15)) {
      uVar3 = DAT_0004c324;
    }
    FUN_00002898(s___SDRam_refresh_priority___s_0004c336 + 2,uVar3);
    uVar3 = DAT_0004bc38;
    if (-1 < (int)(puVar1[3] << 0x18)) {
      uVar3 = _DAT_0004bc3c;
    }
    FUN_00002898(s_dynamic_power_down_mode___s_0004c368,uVar3);
    uVar3 = DAT_0004bc38;
    if (-1 < (int)(puVar1[3] << 0x19)) {
      uVar3 = _DAT_0004bc3c;
    }
    FUN_00002898(s_CKE___s_0004c518,uVar3);
    if ((puVar1[3] & 0x20) == 0) {
      pcVar2 = s_not_delayed_0004c550;
    }
    else {
      pcVar2 = s_delayed_0004c548;
    }
    FUN_00002898(s_Delay_AHB_hready_generation___s_0004c55c,pcVar2);
    FUN_00002898(s_SD_read_data_sampling_clock___d_0004c58c,(puVar1[3] & 0x1f) >> 4);
    if ((puVar1[3] & 4) == 0) {
      pcVar2 = s_positive_0004c5c8;
    }
    else {
      pcVar2 = s_negative_0004c5bc;
    }
    FUN_00002898(s_SDram_read_data_selector___s_edg_0004c5d4,pcVar2);
    FUN_00002898(s_Delay_read_access_to_SDRam___d_c_0004c614,(puVar1[3] & 3) >> 1);
    FUN_00002898(s_Delay_write_access_to_SDRam___d_c_0004c654,puVar1[3] & 1);
    FUN_00002898(s_Delay_read_access_to_SDRam___d_c_0004c614 + 0x3c);
  }
  FUN_00002898(s_Status__0x_08x____0x_08x_0004c698,DAT_0004c694,puVar1[5]);
  FUN_00002898(s_TestBusAddr__0x_08x____0x_08x_0004c6c0,DAT_0004c6bc,puVar1[6]);
  FUN_00002898(s_SelfRefreshTHD__0x_08x____0x_08x_0004c6e8,DAT_0004c6e4,puVar1[7]);
  FUN_00002898(s_RdWSBank0__0x_08x____0x_08x_0004c710,DAT_0004c70c,puVar1[8]);
  FUN_00002898(s_RdWSBank2__0x_08x____0x_08x_0004c738,DAT_0004c734,puVar1[9]);
  FUN_00002898(s_RdWSBank3__0x_08x____0x_08x_0004c760,DAT_0004c75c,puVar1[10]);
  FUN_00002898(s_RdWSBank1__0x_08x____0x_08x_0004c788,DAT_0004c784,puVar1[0xc]);
  FUN_00002898(s_WrWSBank0__0x_08x____0x_08x_0004c7b0,DAT_0004c7ac,puVar1[0xd]);
  FUN_00002898(s_WrWSBank2__0x_08x____0x_08x_0004c7d8,DAT_0004c7d4,puVar1[0xe]);
  FUN_00002898(s_WrWSBank3__0x_08x____0x_08x_0004c800,DAT_0004c7fc,puVar1[0xf]);
  FUN_00002898(s_WrWSBank1__0x_08x____0x_08x_0004c828,DAT_0004c824,puVar1[0x11]);
  FUN_00002898(s_WrActBank0__0x_08x____0x_08x_0004c850,DAT_0004c84c,puVar1[0x12]);
  FUN_00002898(s_WrActBank2__0x_08x____0x_08x_0004c878,DAT_0004c874,puVar1[0x13]);
  FUN_00002898(s_WrActBank3__0x_08x____0x_08x_0004c8a0,DAT_0004c89c,puVar1[0x14]);
  FUN_00002898(s_WrActBank1__0x_08x____0x_08x_0004c8c8,DAT_0004c8c4,puVar1[0x16]);
  FUN_00002898(s_WrDctBank0__0x_08x____0x_08x_0004c9e4,DAT_0004c9e0,puVar1[0x17]);
  FUN_00002898(s_WrDctBank2__0x_08x____0x_08x_0004ca0c,DAT_0004ca08,puVar1[0x18]);
  FUN_00002898(s_WrDctBank3__0x_08x____0x_08x_0004ca34,DAT_0004ca30,puVar1[0x19]);
  FUN_00002898(s_WrDctBank1__0x_08x____0x_08x_0004ca5c,DAT_0004ca58,puVar1[0x1b]);
  FUN_00002898(s_RdActBank0__0x_08x____0x_08x_0004ca84,DAT_0004ca80,puVar1[0x1c]);
  FUN_00002898(s_RdActBank2__0x_08x____0x_08x_0004caac,DAT_0004caa8,puVar1[0x1d]);
  FUN_00002898(s_RdActBank3__0x_08x____0x_08x_0004cad4,DAT_0004cad0,puVar1[0x1e]);
  FUN_00002898(s_RdActBank1__0x_08x____0x_08x_0004cafc,DAT_0004caf8,puVar1[0x20]);
  FUN_00002898(s_RdDctBank0__0x_08x____0x_08x_0004cb24,DAT_0004cb20,puVar1[0x21]);
  FUN_00002898(s_RdDctBank2__0x_08x____0x_08x_0004cb4c,DAT_0004cb48,puVar1[0x22]);
  FUN_00002898(s_RdDctBank3__0x_08x____0x_08x_0004cb74,DAT_0004cb70,puVar1[0x23]);
  FUN_00002898(s_RdDctBank1__0x_08x____0x_08x_0004cb9c,DAT_0004cb98,puVar1[0x25]);
  FUN_00002898(s_SupCfg__0x_08x____0x_08x_0004cbc4,DAT_0004cbc0,puVar1[0x40]);
  FUN_00002898(s_SupCnt__0x_08x____0x_08x_0004cbec,DAT_0004cbe8,puVar1[0x41]);
  thunk_FUN_00002898(s_SupRefCnt__0x_08x____0x_08x_0004cc14,DAT_0004cc10,puVar1[0x42]);
  return;
}


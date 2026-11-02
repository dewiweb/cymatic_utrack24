// rea decompile_all
// name: FUN_0004537c
// address: 0x4537c
// body: available
// range: 0x4537c-0x454af inclusive
// range: 0x456bc-0x45937 inclusive
// range: 0x45ce0-0x45e5f inclusive
// range: 0x46234-0x46327 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x46324 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004537c(int param_1)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  FUN_000028a4(s_SDRAM_settings__________________000454b0);
  puVar1 = DAT_000454d4;
  FUN_000028a4(s_AhbProtCfg__0x_08x____0x_08x_000454d8,DAT_000454d4,*DAT_000454d4);
  if (param_1 != 0) {
    FUN_000028a4(s_SDRAM_no_burst_access___d_000454fc,(*puVar1 & 3) >> 1);
    FUN_000028a4(s_AHB_bus_protocol_failure_correct_00045528,*puVar1 & 1);
    FUN_000028a4(s_AhbProtCfg__0x_08x____0x_08x_000454d8 + 0x20);
  }
  FUN_000028a4(s_S_SDRamCfg__0x_08x____0x_08x_0004555c,DAT_00045558,puVar1[1]);
  if (param_1 == 0) goto LAB_00045828;
  uVar3 = DAT_00045580;
  if (-1 < (int)puVar1[1]) {
    uVar3 = _DAT_00045584;
  }
  FUN_000028a4(s___SDRAM_refresh___s_00045586 + 2,uVar3);
  if ((puVar1[1] & 0x40000000) == 0) {
    uVar3 = 3;
  }
  else {
    uVar3 = 2;
  }
  FUN_000028a4(s_SDRAM_precharge_to_active__tRP__t_000455b4,uVar3);
  FUN_000028a4(s_SDRAM_auto_refresh_command_perio_000455e8,((puVar1[1] & 0x3fffffff) >> 0x1b) + 3);
  FUN_000028a4(s_SDRAM_CAS_latency___d_cycles_0004561c,2 - ((int)(puVar1[1] << 5) >> 0x1f));
  FUN_000028a4(s_h___SD_bank_size___s_00045650 + 4,
               *(undefined4 *)(s_h___SD_bank_size___s_00045650._0_4_ + (puVar1[1] >> 0x15 & 0x1c)));
  FUN_000028a4(s_SD_column_size__00045680);
  if ((puVar1[1] & 0x600000) == 0) {
    FUN_000028a4(&DAT_00045938);
  }
  else {
    if ((puVar1[1] & 0x7fffff) >> 0x15 == 1) {
      pcVar2 = &DAT_000456ac;
    }
    else if ((puVar1[1] & 0x7fffff) >> 0x15 == 2) {
      pcVar2 = s_1024_000456b4;
    }
    else if (((puVar1[1] & 0x7fffff) >> 0x15 == 3) && ((puVar1[1] & 0x3ffffff) >> 0x17 != 7)) {
      pcVar2 = &DAT_00045940;
    }
    else {
      if (((puVar1[1] & 0x7fffff) >> 0x15 != 3) || ((puVar1[1] & 0x3ffffff) >> 0x17 != 7))
      goto LAB_00045714;
      pcVar2 = s_4096_00045948;
    }
    FUN_000028a4(pcVar2);
  }
LAB_00045714:
  FUN_000028a4(s____SDRAM_command___s_00045951 + 3,
               *(undefined4 *)(_DAT_00045950 + (puVar1[1] >> 0x11 & 0xc)));
  uVar3 = DAT_00045580;
  if (-1 < (int)(puVar1[1] << 0x11)) {
    uVar3 = _DAT_00045584;
  }
  FUN_000028a4(s_SDRAM_enable_disable___s_00045980,uVar3);
  uVar3 = DAT_00045580;
  if (-1 < (int)(puVar1[1] << 0x12)) {
    uVar3 = _DAT_00045584;
  }
  FUN_000028a4(s_SRAM_enable_disable___s_000459ac,uVar3);
  FUN_000028a4(s____SRAM_bank_size___s_000459d9 + 3,
               *(undefined4 *)(_DAT_000459d8 + (puVar1[1] >> 7 & 0x3c)));
  uVar3 = DAT_00045580;
  if (-1 < (int)(puVar1[1] << 0x18)) {
    uVar3 = _DAT_00045584;
  }
  FUN_000028a4(s_SRAM_B1_wait__external_wait__s_00045a08,uVar3);
  uVar3 = DAT_00045580;
  if (-1 < (int)(puVar1[1] << 0x19)) {
    uVar3 = _DAT_00045584;
  }
  FUN_000028a4(s_SRAM_RmW__read_modify_write____s_00045a44,uVar3);
  FUN_000028a4(s_IFWidth___d_00045a70,(puVar1[1] & 0x3f) >> 4);
  uVar3 = DAT_00045580;
  if (-1 < (int)(puVar1[1] << 0x1d)) {
    uVar3 = _DAT_00045584;
  }
  FUN_000028a4(s_SRAM_B3_wait__external_wait__s_00045a9c,uVar3);
  uVar3 = DAT_00045580;
  if (-1 < (int)(puVar1[1] << 0x1e)) {
    uVar3 = _DAT_00045584;
  }
  FUN_000028a4(s_SRAM_B2_wait__external_wait__s_00045ad8,uVar3);
  uVar3 = DAT_00045580;
  if ((puVar1[1] & 1) == 0) {
    uVar3 = _DAT_00045584;
  }
  FUN_000028a4(s_SRAM_B0_wait__external_wait__s_00045b14,uVar3);
  FUN_000028a4(&DAT_00045944);
LAB_00045828:
  FUN_000028a4(s_RefreshTHD__0x_08x____0x_08x_00045b54,DAT_00045b50,puVar1[2]);
  if (param_1 != 0) {
    FUN_000028a4(s_Refresh_counter_threshold___d_00045b78,(puVar1[2] & 0x7ffffff) >> 0xc);
    FUN_000028a4(&DAT_00045944);
  }
  FUN_000028a4(s_SDRamCfgSet__0x_08x____0x_08x_00045ba8,DAT_00045ba4,puVar1[3]);
  if (param_1 != 0) {
    if ((puVar1[3] & 0x1000000) == 0) {
      pcVar2 = s_OEN_is_equal_CSN_for_all_SDRAM_c_00045c0c;
    }
    else {
      pcVar2 = s_OEN_controlled_by_read_activatio_00045bcc;
    }
    FUN_000028a4(s_SDRam_read_mode___s_00045c38,pcVar2);
    uVar3 = DAT_00045c68;
    if (-1 < (int)(puVar1[3] << 0xb)) {
      uVar3 = DAT_00045c6c;
    }
    FUN_000028a4(DAT_00045c70,uVar3);
    uVar3 = DAT_00045c68;
    if (-1 < (int)(puVar1[3] << 0xd)) {
      uVar3 = DAT_00045c6c;
    }
    FUN_000028a4(DAT_00045c74,uVar3);
    uVar3 = DAT_00045c68;
    if (-1 < (int)(puVar1[3] << 0xe)) {
      uVar3 = DAT_00045c6c;
    }
    FUN_000028a4(DAT_00045c78,uVar3);
    uVar3 = DAT_00045c68;
    if (-1 < (int)(puVar1[3] << 0xf)) {
      uVar3 = DAT_00045c6c;
    }
    FUN_000028a4(_DAT_00045c7c,uVar3);
    uVar3 = DAT_00045c68;
    if (-1 < (int)(puVar1[3] << 0x15)) {
      uVar3 = DAT_00045c6c;
    }
    FUN_000028a4(s___SDRam_refresh_priority___s_00045c7e + 2,uVar3);
    uVar3 = DAT_00045580;
    if (-1 < (int)(puVar1[3] << 0x18)) {
      uVar3 = _DAT_00045584;
    }
    FUN_000028a4(s_dynamic_power_down_mode___s_00045cb0,uVar3);
    uVar3 = DAT_00045580;
    if (-1 < (int)(puVar1[3] << 0x19)) {
      uVar3 = _DAT_00045584;
    }
    FUN_000028a4(s_CKE___s_00045e60,uVar3);
    if ((puVar1[3] & 0x20) == 0) {
      pcVar2 = s_not_delayed_00045e98;
    }
    else {
      pcVar2 = s_delayed_00045e90;
    }
    FUN_000028a4(s_Delay_AHB_hready_generation___s_00045ea4,pcVar2);
    FUN_000028a4(s_SD_read_data_sampling_clock___d_00045ed4,(puVar1[3] & 0x1f) >> 4);
    if ((puVar1[3] & 4) == 0) {
      pcVar2 = s_positive_00045f10;
    }
    else {
      pcVar2 = s_negative_00045f04;
    }
    FUN_000028a4(s_SDram_read_data_selector___s_edg_00045f1c,pcVar2);
    FUN_000028a4(s_Delay_read_access_to_SDRam___d_c_00045f5c,(puVar1[3] & 3) >> 1);
    FUN_000028a4(s_Delay_write_access_to_SDRam___d_c_00045f9c,puVar1[3] & 1);
    FUN_000028a4(s_Delay_read_access_to_SDRam___d_c_00045f5c + 0x3c);
  }
  FUN_000028a4(s_Status__0x_08x____0x_08x_00045fe0,DAT_00045fdc,puVar1[5]);
  FUN_000028a4(s_TestBusAddr__0x_08x____0x_08x_00046008,DAT_00046004,puVar1[6]);
  FUN_000028a4(s_SelfRefreshTHD__0x_08x____0x_08x_00046030,DAT_0004602c,puVar1[7]);
  FUN_000028a4(s_RdWSBank0__0x_08x____0x_08x_00046058,DAT_00046054,puVar1[8]);
  FUN_000028a4(s_RdWSBank2__0x_08x____0x_08x_00046080,DAT_0004607c,puVar1[9]);
  FUN_000028a4(s_RdWSBank3__0x_08x____0x_08x_000460a8,DAT_000460a4,puVar1[10]);
  FUN_000028a4(s_RdWSBank1__0x_08x____0x_08x_000460d0,DAT_000460cc,puVar1[0xc]);
  FUN_000028a4(s_WrWSBank0__0x_08x____0x_08x_000460f8,DAT_000460f4,puVar1[0xd]);
  FUN_000028a4(s_WrWSBank2__0x_08x____0x_08x_00046120,DAT_0004611c,puVar1[0xe]);
  FUN_000028a4(s_WrWSBank3__0x_08x____0x_08x_00046148,DAT_00046144,puVar1[0xf]);
  FUN_000028a4(s_WrWSBank1__0x_08x____0x_08x_00046170,DAT_0004616c,puVar1[0x11]);
  FUN_000028a4(s_WrActBank0__0x_08x____0x_08x_00046198,DAT_00046194,puVar1[0x12]);
  FUN_000028a4(s_WrActBank2__0x_08x____0x_08x_000461c0,DAT_000461bc,puVar1[0x13]);
  FUN_000028a4(s_WrActBank3__0x_08x____0x_08x_000461e8,DAT_000461e4,puVar1[0x14]);
  FUN_000028a4(s_WrActBank1__0x_08x____0x_08x_00046210,DAT_0004620c,puVar1[0x16]);
  FUN_000028a4(s_WrDctBank0__0x_08x____0x_08x_0004632c,DAT_00046328,puVar1[0x17]);
  FUN_000028a4(s_WrDctBank2__0x_08x____0x_08x_00046354,DAT_00046350,puVar1[0x18]);
  FUN_000028a4(s_WrDctBank3__0x_08x____0x_08x_0004637c,DAT_00046378,puVar1[0x19]);
  FUN_000028a4(s_WrDctBank1__0x_08x____0x_08x_000463a4,DAT_000463a0,puVar1[0x1b]);
  FUN_000028a4(s_RdActBank0__0x_08x____0x_08x_000463cc,DAT_000463c8,puVar1[0x1c]);
  FUN_000028a4(s_RdActBank2__0x_08x____0x_08x_000463f4,DAT_000463f0,puVar1[0x1d]);
  FUN_000028a4(s_RdActBank3__0x_08x____0x_08x_0004641c,DAT_00046418,puVar1[0x1e]);
  FUN_000028a4(s_RdActBank1__0x_08x____0x_08x_00046444,DAT_00046440,puVar1[0x20]);
  FUN_000028a4(s_RdDctBank0__0x_08x____0x_08x_0004646c,DAT_00046468,puVar1[0x21]);
  FUN_000028a4(s_RdDctBank2__0x_08x____0x_08x_00046494,DAT_00046490,puVar1[0x22]);
  FUN_000028a4(s_RdDctBank3__0x_08x____0x_08x_000464bc,DAT_000464b8,puVar1[0x23]);
  FUN_000028a4(s_RdDctBank1__0x_08x____0x_08x_000464e4,DAT_000464e0,puVar1[0x25]);
  FUN_000028a4(s_SupCfg__0x_08x____0x_08x_0004650c,DAT_00046508,puVar1[0x40]);
  FUN_000028a4(s_SupCnt__0x_08x____0x_08x_00046534,DAT_00046530,puVar1[0x41]);
  thunk_FUN_000028a4(s_SupRefCnt__0x_08x____0x_08x_0004655c,DAT_00046558,puVar1[0x42]);
  return;
}


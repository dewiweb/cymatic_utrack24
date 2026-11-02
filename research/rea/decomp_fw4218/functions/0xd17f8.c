// rea decompile_all
// name: FUN_000d17f8
// address: 0xd17f8
// body: available
// range: 0xd17f8-0xd1b73 inclusive
// range: 0xd1c90-0xd207b inclusive
// range: 0xd2170-0xd21fb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d17f8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_328;
  undefined4 local_324;
  char local_320;
  undefined1 local_31f;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined1 auStack_2d8 [4];
  undefined1 auStack_2d4 [128];
  undefined1 auStack_254 [4];
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248 [50];
  undefined1 auStack_180 [256];
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_00173e3c(local_248);
  local_24c = FUN_00176758(local_248,s_song_settings_000d1b74);
  local_2c = FUN_00176758(&local_24c,s_version_000d1b84);
  local_28 = FUN_001766f8(&local_2c,3);
  FUN_0017683e(&local_28,&DAT_000d1b8c);
  local_34 = FUN_00176758(&local_24c,s_creator_000d1b90);
  local_30 = FUN_001766f8(&local_34,3);
  FUN_0017683e(&local_30,s_cymatic_audio_uTrack24_000d1b98);
  local_3c = FUN_00176758(&local_24c,s_target_device_000d1bb0);
  local_38 = FUN_001766f8(&local_3c,3);
  FUN_0017683e(&local_38,s_uTrack24_000d1bc0);
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  uVar2 = FUN_001b5ae8(uVar1);
  FUN_000028cc(auStack_180,s_Take_04d_000d1bcc,uVar2);
  local_44 = FUN_00176758(&local_24c,s_song_name_000d1bd8);
  local_40 = FUN_001766f8(&local_44,3);
  FUN_0017683e(&local_40,auStack_180);
  FUN_000f4e84();
  uVar2 = FUN_000f4fb4();
  iVar3 = FUN_0006d818(uVar2);
  uVar2 = FUN_0006db64(uVar2);
  if (iVar3 == 1) {
    FUN_000028cc(auStack_180,s_Master_000d1be4);
  }
  else if (iVar3 == 2) {
    FUN_000028cc(auStack_180,s_Slave_d_000d1bec,uVar2);
  }
  else {
    FUN_000028cc(auStack_180,s_Standalone_000d1bf4);
  }
  local_4c = FUN_00176758(&local_24c,s_sync_device_000d1c00);
  local_48 = FUN_001766f8(&local_4c,3);
  FUN_0017683e(&local_48,auStack_180);
  iVar3 = FUN_0022ef74(param_1 + 200);
  FUN_000028cc(auStack_180,&DAT_000d1c0c,iVar3 + 1);
  local_54 = FUN_00176758(&local_24c,s_wave_file_count_000d1c10);
  local_50 = FUN_001766f8(&local_54,3);
  FUN_0017683e(&local_50,auStack_180);
  if (param_2 == 0) {
    iVar3 = FUN_000bdc24(param_1 + 0x14);
    FUN_000028cc(auStack_180,&DAT_000d1c0c,iVar3 * *(int *)(param_1 + 0xa4));
  }
  else {
    FUN_000028cc(auStack_180,&DAT_000d1c0c,param_2);
  }
  local_5c = FUN_00176758(&local_24c,s_total_sample_count_000d1c20);
  local_58 = FUN_001766f8(&local_5c,3);
  FUN_0017683e(&local_58,auStack_180);
  uVar2 = FUN_000bdc24(param_1 + 0x14);
  FUN_000028cc(auStack_180,&DAT_000d1c0c,uVar2);
  local_64 = FUN_00176758(&local_24c,s_sampling_rate_000d1c34);
  local_60 = FUN_001766f8(&local_64,3);
  FUN_0017683e(&local_60,auStack_180);
  uVar2 = FUN_000bda98(param_1 + 0x14);
  FUN_000028cc(auStack_180,&DAT_000d1c0c,uVar2);
  local_6c = FUN_00176758(&local_24c,s_resolution_000d1c44);
  local_68 = FUN_001766f8(&local_6c,3);
  FUN_0017683e(&local_68,auStack_180);
  uVar2 = FUN_000bfe18(param_1 + 0x14);
  FUN_000028cc(auStack_180,&DAT_000d1c0c,uVar2);
  local_74 = FUN_00176758(&local_24c,s_channel_count_000d1c50);
  local_70 = FUN_001766f8(&local_74,3);
  FUN_0017683e(&local_70,auStack_180);
  local_7c = FUN_00176758(&local_24c,s_playback_type_000d1c60);
  local_78 = FUN_001766f8(&local_7c,3);
  FUN_0017683e(&local_78,s_multitrack_000d1c70);
  iVar3 = FUN_0022ef74(param_1 + 200);
  if (iVar3 != 0) {
    local_2e4 = FUN_00176758(&local_24c,s_wave_file_switches_000d1c7c);
    for (puVar4 = (undefined4 *)FUN_0024456c(param_1 + 200);
        puVar5 = (undefined4 *)FUN_0024453c(param_1 + 200), puVar5 != puVar4; puVar4 = puVar4 + 1) {
      FUN_000028cc(auStack_180,&DAT_000d1c0c,*puVar4);
      local_2ec = FUN_00176758(&local_2e4,s_switch_000d207c);
      local_2e8 = FUN_001766f8(&local_2ec,3);
      FUN_0017683e(&local_2e8,auStack_180);
    }
  }
  local_250 = FUN_00176758(&local_24c,s_channels_000d2084);
  for (uVar7 = 0; uVar6 = FUN_000bfe18(param_1 + 0x14), uVar7 < uVar6; uVar7 = uVar7 + 1) {
    FUN_001282fc(&local_324,0,0);
    FUN_000f8ee0();
    uVar2 = FUN_000f6910();
    iVar3 = FUN_00069ed4(uVar2,uVar7 & 0xff,&local_324);
    if (iVar3 == 0) break;
    FUN_000028cc(auStack_180,&DAT_000d2090,uVar7);
    local_328 = FUN_00176758(&local_250,s_channel_000d2094);
    local_2e4 = FUN_001767d0(&local_328,&DAT_000d209c);
    FUN_00173e5c(&local_2e4,auStack_180);
    FUN_000028cc(auStack_180,&DAT_000d2090,0);
    local_2ec = FUN_00176758(&local_328,s_output_level_000d20a0);
    local_2e8 = FUN_001766f8(&local_2ec,3);
    FUN_0017683e(&local_2e8,auStack_180);
    FUN_000028cc(auStack_180,&DAT_000d2090,0);
    local_2f4 = FUN_00176758(&local_328,s_output_mute_000d20b0);
    local_2f0 = FUN_001766f8(&local_2f4,3);
    FUN_0017683e(&local_2f0,auStack_180);
    FUN_000028cc(auStack_180,&DAT_000d2090,uVar7);
    local_2fc = FUN_00176758(&local_328,s_output_channel_000d20bc);
    local_2f8 = FUN_001766f8(&local_2fc,3);
    FUN_0017683e(&local_2f8,auStack_180);
    FUN_000028cc(auStack_180,s_Channel__d_000d20cc,uVar7 + 1);
    local_304 = FUN_00176758(&local_328,s_track_name_000d20d8);
    local_300 = FUN_001766f8(&local_304,3);
    FUN_0017683e(&local_300,auStack_180);
    uVar2 = FUN_00249e8c(local_324);
    FUN_000028cc(auStack_180,&DAT_000d2090,uVar2);
    local_30c = FUN_00176758(&local_328,s_monitor_volume_000d20e4);
    local_308 = FUN_001766f8(&local_30c,3);
    FUN_0017683e(&local_308,auStack_180);
    FUN_000028cc(auStack_180,&DAT_000d2090,local_31f);
    local_314 = FUN_00176758(&local_328,s_monitor_mute_000d20f4);
    local_310 = FUN_001766f8(&local_314,3);
    FUN_0017683e(&local_310,auStack_180);
    FUN_000028cc(auStack_180,&DAT_000d2090,(int)local_320);
    local_31c = FUN_00176758(&local_328,s_monitor_pan_000d2104);
    local_318 = FUN_001766f8(&local_31c,3);
    FUN_0017683e(&local_318,auStack_180);
  }
  for (puVar4 = (undefined4 *)FUN_002399d0(param_1 + 0xbc);
      puVar5 = (undefined4 *)FUN_00239990(param_1 + 0xbc), puVar5 != puVar4; puVar4 = puVar4 + 3) {
    local_304 = *puVar4;
    local_300 = puVar4[1];
    local_2fc = puVar4[2];
    local_308 = FUN_00176758(&local_24c,s_marker_000d2110);
    FUN_000028cc(auStack_180,&DAT_000d1c0c,local_304);
    local_2e8 = FUN_00176758(&local_308,s_global_time_in_samples_000d2118);
    local_2e4 = FUN_001766f8(&local_2e8,3);
    FUN_0017683e(&local_2e4,auStack_180);
    FUN_000028cc(auStack_180,&DAT_000d1c0c,local_300);
    local_2f0 = FUN_00176758(&local_308,s_file_number_000d2130);
    local_2ec = FUN_001766f8(&local_2f0,3);
    FUN_0017683e(&local_2ec,auStack_180);
    FUN_000028cc(auStack_180,&DAT_000d1c0c,local_2fc);
    local_2f8 = FUN_00176758(&local_308,s_local_time_in_samples_000d213c);
    local_2f4 = FUN_001766f8(&local_2f8,3);
    FUN_0017683e(&local_2f4,auStack_180);
  }
  uVar2 = FUN_001b5ae8(uVar1);
  FUN_000bddec(auStack_254,param_1 + 0x14,uVar2);
  uVar1 = FUN_001b5ae8(uVar1);
  FUN_00002934(auStack_2d4,0x40,u__Take_04d_set_000d2154,uVar1);
  uVar1 = FUN_00230e4c(auStack_80);
  FUN_00231ef4(auStack_2d8,auStack_2d4,uVar1);
  FUN_00231530(auStack_254,auStack_2d8);
  local_2dc = FUN_000bdc58(param_1 + 0x14,local_248[0]);
  local_2e0 = FUN_000bb52c(param_1 + 0x14,auStack_254);
  uVar1 = FUN_00003738(local_2dc);
  FUN_000c1358(param_1 + 0x14,local_2e0,local_2dc,uVar1);
  FUN_000c1220(param_1 + 0x14,local_2e0);
  FUN_001c6a64(local_2dc);
  FUN_00232190(auStack_2d8);
  FUN_00232190(auStack_254);
  FUN_00173e50(local_248);
  return;
}


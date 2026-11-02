// rea decompile_all
// name: FUN_000be0ac
// address: 0xbe0ac
// body: available
// range: 0xbe0ac-0xbe45b inclusive
// range: 0xbe590-0xbe93b inclusive
// range: 0xbe9fc-0xbeb23 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000be0ac(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  int local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 *local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined1 auStack_198 [4];
  undefined1 auStack_194 [4];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 auStack_118 [4];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  uint local_fc;
  uint local_f8;
  byte local_f4 [12];
  undefined1 auStack_e8 [200];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_2;
  local_10 = FUN_0022cefc(param_2,&DAT_000be45c,0xffffffff);
  FUN_0022d1b0(auStack_14,local_8,local_10 + 1,0xffffffff);
  FUN_00232084(auStack_18,local_8);
  FUN_00231500(auStack_18,&DAT_000be45c);
  FUN_0023223c(local_8 + 0xc,auStack_18);
  FUN_00231530(auStack_18,auStack_14);
  FUN_0023223c(local_8 + 8,auStack_18);
  FUN_00231500(local_8 + 8,u__0001__wav_000be460);
  FUN_00231500(auStack_18,u__set_000be478);
  FUN_002399e8(local_8 + 0x5c);
  FUN_00244584(local_8 + 0x68);
  *(undefined4 *)(local_8 + 0x4c) = 0;
  iVar2 = FUN_000c0d94(local_c,auStack_18,&local_20,&local_1c);
  if (iVar2 == 0) {
    local_f8 = FUN_0022d168(auStack_18);
    FUN_00002898(s_ERROR__Error_in_reading_Settings_000be484,local_f8);
    FUN_00232190(auStack_18);
    FUN_00232190(auStack_14);
    uVar3 = 0x11;
  }
  else {
    FUN_00173e3c(auStack_e8);
    local_22c = 0;
    FUN_00173d40(local_f4,auStack_e8,local_20,local_1c,0x74);
    FUN_001c6a64(local_20);
    if (local_f4[0] == 0) {
      local_18c = FUN_001bf0ea(auStack_e8,s_song_settings_000be4b0);
      local_104 = FUN_001bf0ea(&local_18c,s_playback_type_000be4c0);
      local_100 = local_104;
      local_fc = FUN_001bf0e6(&local_100);
      local_f8 = local_fc;
      local_190 = FUN_001bf204(&local_f8);
      iVar2 = FUN_00003d18(local_190,s_multitrack_000be4d0);
      if (iVar2 == 0) {
        local_1a4 = auStack_118;
        local_114 = FUN_001bf0ea(&local_18c,s_target_device_000be518);
        local_110 = local_114;
        local_10c = FUN_001bf0e6(&local_110);
        local_108 = local_10c;
        local_1a8 = FUN_001bf332(&local_108,u__0001__wav_000be460 + 10);
        FUN_00232964(auStack_194,local_1a8,local_1a4);
        iVar2 = FUN_0022d4a8(auStack_194);
        if ((iVar2 == 0) || (iVar2 = FUN_0022d4cc(auStack_194,s_uTrack24_000be528), iVar2 == 0)) {
          *(undefined1 *)(local_8 + 0x89) = 1;
        }
        else {
          *(undefined1 *)(local_8 + 0x89) = 0;
        }
        local_128 = FUN_001bf0ea(&local_18c,s_sampling_rate_000be534);
        local_124 = local_128;
        local_120 = FUN_001bf0e6(&local_124);
        local_11c = local_120;
        uVar3 = FUN_001bf2b0(&local_11c,0);
        *(undefined4 *)(local_8 + 0x1c) = uVar3;
        local_138 = FUN_001bf0ea(&local_18c,s_resolution_000be544);
        local_134 = local_138;
        local_130 = FUN_001bf0e6(&local_134);
        local_12c = local_130;
        uVar1 = FUN_001bf2b0(&local_12c,0);
        *(undefined2 *)(local_8 + 0x26) = uVar1;
        local_148 = FUN_001bf0ea(&local_18c,s_channel_count_000be550);
        local_144 = local_148;
        local_140 = FUN_001bf0e6(&local_144);
        local_13c = local_140;
        uVar1 = FUN_001bf2b0(&local_13c,0);
        *(undefined2 *)(local_8 + 0x1a) = uVar1;
        local_158 = FUN_001bf0ea(&local_18c,s_total_sample_count_000be560);
        local_154 = local_158;
        local_150 = FUN_001bf0e6(&local_154);
        local_14c = local_150;
        uVar3 = FUN_001bf2b0(&local_14c,0);
        *(undefined4 *)(local_8 + 0x8c) = uVar3;
        local_168 = FUN_001bf0ea(&local_18c,s_wave_file_count_000be574);
        local_164 = local_168;
        local_160 = FUN_001bf0e6(&local_164);
        local_15c = local_160;
        uVar3 = FUN_001bf2b0(&local_15c,0);
        *(undefined4 *)(local_8 + 0x58) = uVar3;
        local_178 = FUN_001bf0ea(&local_18c,s_midi_length_000be584);
        local_174 = local_178;
        local_170 = FUN_001bf0e6(&local_174);
        local_16c = local_170;
        uVar3 = FUN_001bf2b0(&local_16c,0);
        *(undefined4 *)(local_8 + 0x4c) = uVar3;
        local_1a4 = auStack_118;
        local_188 = FUN_001bf0ea(&local_18c,s_midi_file_000be93c);
        local_184 = local_188;
        local_180 = FUN_001bf0e6(&local_184);
        local_17c = local_180;
        local_1a8 = FUN_001bf332(&local_17c,u__0001__wav_000be460 + 10);
        FUN_00232964(auStack_198,local_1a8,local_1a4);
        iVar2 = FUN_0022d4a8(auStack_198);
        if (iVar2 == 0) {
          FUN_0023219c(local_8 + 0xc,u__0001__wav_000be460 + 10);
        }
        else {
          local_1b4 = FUN_00230e4c(&local_1a8);
          local_1b8 = FUN_002324aa(auStack_198);
          local_1bc = FUN_002324bc(auStack_198);
          local_1b0 = FUN_00232174(&local_1a4,local_1bc,local_1b8,local_1b4);
          local_1ac = FUN_00231530(local_8 + 0xc,local_1b0);
          FUN_00232190(&local_1a4);
          *(int *)(local_8 + 0x4c) = *(int *)(local_8 + 0x4c) + 1;
        }
        local_1a4 = (undefined1 *)FUN_001bf0ea(&local_18c,s_marker_000be948);
        while (iVar2 = FUN_001bf1f4(&local_1a4), iVar2 != 0) {
          local_1b4 = FUN_001bf0ea(&local_1a4,s_global_time_in_samples_000be950);
          local_1b0 = local_1b4;
          local_1ac = FUN_001bf0e6(&local_1b0);
          local_1a8 = local_1ac;
          local_1e0 = FUN_001bf2b0(&local_1a8,0);
          local_1c4 = FUN_001bf0ea(&local_1a4,s_file_number_000be968);
          local_1c0 = local_1c4;
          local_1bc = FUN_001bf0e6(&local_1c0);
          local_1b8 = local_1bc;
          local_1dc = FUN_001bf2b0(&local_1b8,0);
          local_1d4 = FUN_001bf0ea(&local_1a4,s_local_time_in_samples_000be974);
          local_1d0 = local_1d4;
          local_1cc = FUN_001bf0e6(&local_1d0);
          local_1c8 = local_1cc;
          local_1d8 = FUN_001bf2b0(&local_1c8,0);
          FUN_00239ac8(local_8 + 0x5c,&local_1e0);
          local_1a4 = (undefined1 *)FUN_001bf0b0(&local_1a4,s_marker_000be948);
        }
        local_19c = FUN_001bf0ea(&local_18c,s_wave_file_switches_000be98c);
        local_1a4 = (undefined1 *)FUN_001bf0ea(&local_19c,s_switch_000be9a0);
        while (iVar2 = FUN_001bf1f4(&local_1a4), iVar2 != 0) {
          local_1ac = FUN_001bf0e6(&local_1a4);
          local_1a8 = local_1ac;
          local_1b4 = FUN_001bf2b0(&local_1a8,0);
          local_1b0 = local_1b4;
          FUN_0024477c(local_8 + 0x68,&local_1b0);
          local_1a4 = (undefined1 *)FUN_001bf0b0(&local_1a4,s_switch_000be9a0);
        }
        local_1a0 = FUN_001bf0ea(&local_18c,s_channels_000be9a8);
        FUN_0023b8d0(local_8 + 0x74);
        iVar2 = FUN_001bf1f4(&local_1a0);
        if (iVar2 != 0) {
          FUN_00078a30(&local_1bc);
          FUN_0023b988(local_8 + 0x74,0x18,&local_1bc);
        }
        local_1a4 = (undefined1 *)FUN_001bf0ea(&local_1a0,s_channel_000be9b4);
        while (iVar2 = FUN_001bf1f4(&local_1a4), iVar2 != 0) {
          local_1ac = FUN_001bf1bc(&local_1a4,&DAT_000be9bc);
          local_1a8 = local_1ac;
          local_210 = FUN_001bf058(&local_1a8,0);
          if (0x17 < local_210) {
            FUN_0023b8d0(local_8 + 0x74);
            break;
          }
          FUN_00078a30(&local_22c);
          local_22c = CONCAT31(local_22c._1_3_,1);
          local_1bc = FUN_001bf0ea(&local_1a4,s_output_level_000be9c0);
          local_1b8 = local_1bc;
          local_1b4 = FUN_001bf0e6(&local_1b8);
          local_1b0 = local_1b4;
          local_228 = FUN_001bf30c(&local_1b0,0);
          local_1cc = FUN_001bf0ea(&local_1a4,s_output_mute_000be9d0);
          local_1c8 = local_1cc;
          local_1c4 = FUN_001bf0e6(&local_1c8);
          local_1c0 = local_1c4;
          local_224 = FUN_001bf254(&local_1c0,0);
          local_1dc = FUN_001bf0ea(&local_1a4,s_output_channel_000be9dc);
          local_1d8 = local_1dc;
          local_1d4 = FUN_001bf0e6(&local_1d8);
          local_1d0 = local_1d4;
          local_220 = FUN_001bf254(&local_1d0,0);
          local_1ec = FUN_001bf0ea(&local_1a4,s_monitor_volume_000be9ec);
          local_1e8 = local_1ec;
          local_1e4 = FUN_001bf0e6(&local_1e8);
          local_1e0 = local_1e4;
          local_21c = FUN_001bf30c(&local_1e0,0);
          local_1fc = FUN_001bf0ea(&local_1a4,s_monitor_mute_000beb24);
          local_1f8 = local_1fc;
          local_1f4 = FUN_001bf0e6(&local_1f8);
          local_1f0 = local_1f4;
          local_218 = FUN_001bf254(&local_1f0,0);
          local_20c = FUN_001bf0ea(&local_1a4,s_monitor_pan_000beb34);
          local_208 = local_20c;
          local_204 = FUN_001bf0e6(&local_208);
          local_200 = local_204;
          local_214 = FUN_001bf254(&local_200,0);
          uVar3 = FUN_0023bdc8(local_8 + 0x74,local_210);
          FUN_00003b88(uVar3,&local_22c,0x1c);
          local_1a4 = (undefined1 *)FUN_001bf0b0(&local_1a4,s_channel_000be9b4);
        }
        FUN_002329f0(auStack_198);
        FUN_002329f0(auStack_194);
        FUN_00173e50(auStack_e8);
        FUN_00232190(auStack_18);
        FUN_00232190(auStack_14);
        uVar3 = 0;
      }
      else {
        FUN_00002898(s_ERROR__playback_type_in_settings_000be4dc);
        FUN_00173e50(auStack_e8);
        FUN_00232190(auStack_18);
        FUN_00232190(auStack_14);
        uVar3 = 0x11;
      }
    }
    else {
      local_f8 = (uint)local_f4[0];
      FUN_00002898(s_ERROR__XML_parse_result___d_000beb40,local_f8);
      FUN_00173e50(auStack_e8);
      FUN_00232190(auStack_18);
      FUN_00232190(auStack_14);
      uVar3 = 0x11;
    }
  }
  return uVar3;
}


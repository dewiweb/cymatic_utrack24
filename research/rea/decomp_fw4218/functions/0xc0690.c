// rea decompile_all
// name: FUN_000c0690
// address: 0xc0690
// body: available
// range: 0xc0690-0xc091b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c0690(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 local_168;
  undefined4 local_164;
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
  char local_118 [12];
  undefined1 auStack_10c [200];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [28];
  
  FUN_0023b8d0(param_2 + 0x74);
  FUN_00078a30(auStack_38);
  FUN_0023b988(param_2 + 0x74,0x18,auStack_38);
  *(undefined1 *)(param_2 + 0x89) = 1;
  FUN_00232084(auStack_3c,param_2);
  uVar1 = FUN_00231330(auStack_3c);
  iVar2 = FUN_00231330(auStack_3c);
  FUN_002313ec(auStack_3c,iVar2 + -8,uVar1);
  FUN_00231500(auStack_3c,u__set_000c091c);
  iVar2 = FUN_000c0d94(param_1,auStack_3c,&local_44,&local_40);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__Settings_file_probably_no_000c0928);
    puVar3 = (undefined1 *)FUN_0023bdc8(param_2 + 0x74,0);
    *puVar3 = 1;
    if (param_3 == 2) {
      puVar3 = (undefined1 *)FUN_0023bdc8(param_2 + 0x74);
      *puVar3 = 1;
    }
    uVar1 = FUN_00232190(auStack_3c);
  }
  else {
    FUN_00173e3c(auStack_10c);
    local_164 = 0;
    local_168 = 0x74;
    FUN_00173d40(local_118,auStack_10c,local_44,local_40);
    FUN_001c6a64(local_44);
    if (local_118[0] == '\0') {
      local_12c = FUN_001bf0ea(auStack_10c,s_song_settings_000c0954);
      local_128 = FUN_001bf0ea(&local_12c,s_playback_type_000c0964);
      local_124 = local_128;
      local_120 = FUN_001bf0e6(&local_124);
      local_11c = local_120;
      uVar1 = FUN_001bf204(&local_11c);
      iVar2 = FUN_00003d18(uVar1,s_stereo_000c0974);
      if (iVar2 != 0) {
        FUN_00002898(s_ERROR__playback_type_in_settings_000c097c);
        FUN_00173e50(auStack_10c);
        uVar1 = FUN_00232190(auStack_3c);
        return uVar1;
      }
      local_130 = FUN_001bf0ea(&local_12c,s_channels_000c09b4);
      local_134 = FUN_001bf0ea(&local_130,s_channel_000c09c0);
      while (iVar2 = FUN_001bf1f4(&local_134), iVar2 != 0) {
        local_13c = FUN_001bf1bc(&local_134,&DAT_000c09c8);
        local_138 = local_13c;
        iVar2 = FUN_001bf058(&local_138,0);
        if (1 < iVar2) {
          FUN_0023b8d0(param_2 + 0x74);
          break;
        }
        FUN_00078a30(&local_168);
        local_168 = CONCAT31(local_168._1_3_,1);
        local_14c = FUN_001bf0ea(&local_134,s_output_level_000c09cc);
        local_148 = local_14c;
        local_144 = FUN_001bf0e6(&local_148);
        local_140 = local_144;
        FUN_001bf254(&local_140,0);
        local_164 = FUN_00249f24();
        uVar1 = FUN_0023bdc8(param_2 + 0x74,iVar2);
        FUN_00003b88(uVar1,&local_168,0x1c);
        local_134 = FUN_001bf0b0(&local_134,s_channel_000c09c0);
      }
    }
    FUN_00173e50(auStack_10c);
    uVar1 = FUN_00232190(auStack_3c);
  }
  return uVar1;
}


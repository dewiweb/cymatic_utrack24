// rea decompile_all
// name: FUN_000bba3c
// address: 0xbba3c
// body: available
// range: 0xbba3c-0xbbd83 inclusive
// range: 0xbbe1c-0xbbf8b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bba3c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_198;
  int local_194;
  undefined1 local_190;
  undefined4 local_18c;
  undefined1 auStack_188 [4];
  undefined1 auStack_184 [4];
  undefined1 local_180;
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
  undefined1 auStack_13c [4];
  undefined1 auStack_138 [4];
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  undefined4 local_11c;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [4];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  char local_100 [12];
  undefined1 auStack_f4 [200];
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_00095224(uVar1,DAT_000bbd84);
  iVar2 = FUN_000c0d94(param_1,param_2,&local_2c,&local_28);
  if (iVar2 == 0) {
    uVar3 = FUN_0022d168(param_2);
    FUN_00002898(s_ERROR__Error_in_reading_Playlist_000bbd88,uVar3);
    FUN_00095224(uVar1,DAT_000bbdb4);
    uVar1 = 0;
  }
  else {
    FUN_00173e3c(auStack_f4);
    FUN_00173d40(local_100,auStack_f4,local_2c,local_28,0x74,0);
    FUN_001c6a64(local_2c);
    if (local_100[0] == '\0') {
      local_11c = FUN_001bf0ea(auStack_f4,s_playlist_000bbdb8);
      local_120 = 0;
      local_110 = FUN_001bf0ea(&local_11c,s_playlistname_000bbdc4);
      local_10c = local_110;
      local_108 = FUN_001bf0e6(&local_10c);
      local_104 = local_108;
      iVar2 = FUN_001bf204(&local_104);
      local_124 = FUN_00230e4c(auStack_118);
      iVar4 = FUN_00003738(iVar2);
      uVar3 = FUN_00232108(auStack_114,iVar2,iVar4 + iVar2,local_124);
      iVar2 = FUN_00093a08(uVar1);
      FUN_0023223c(iVar2 + 0x2c,uVar3);
      FUN_00232190(auStack_114);
      iVar2 = FUN_00093a08(uVar1);
      FUN_0023a600(iVar2 + 0x30);
      local_124 = FUN_001bf0ea(&local_11c,&DAT_000bbdd4);
      while (iVar2 = FUN_001bf1f4(&local_124), iVar2 != 0) {
        FUN_0006b674(&local_194);
        local_194 = local_120 + 1;
        local_120 = local_194;
        local_134 = FUN_001bf0ea(&local_124,s_location_000bbddc);
        local_130 = local_134;
        local_12c = FUN_001bf0e6(&local_130);
        local_128 = local_12c;
        iVar2 = FUN_001bf204(&local_128);
        uVar3 = FUN_00230e4c(auStack_13c);
        iVar4 = FUN_00003738(iVar2);
        uVar3 = FUN_00232108(auStack_138,iVar2,iVar4 + iVar2,uVar3);
        local_198 = FUN_0023223c(auStack_184,uVar3);
        FUN_00232190(auStack_138);
        local_14c = FUN_001bf0ea(&local_124,s_playlistname_000bbdc4 + 8);
        local_148 = local_14c;
        local_144 = FUN_001bf0e6(&local_148);
        local_140 = local_144;
        iVar2 = FUN_001bf204(&local_140);
        uVar3 = FUN_00230e4c(auStack_13c);
        iVar4 = FUN_00003738(iVar2);
        uVar3 = FUN_00232108(auStack_138,iVar2,iVar4 + iVar2,uVar3);
        local_198 = FUN_0023223c(auStack_188,uVar3);
        FUN_00232190(auStack_138);
        local_164 = FUN_001bf0ea(&local_124,s_pause_mode_000bbde8);
        local_160 = local_164;
        local_15c = FUN_001bf0ea(&local_160,&DAT_000bbdf4);
        local_158 = local_15c;
        local_154 = FUN_001bf0e6(&local_158);
        local_150 = local_154;
        uVar3 = FUN_001bf204(&local_150);
        local_190 = FUN_000bb9dc(param_1,uVar3);
        local_17c = FUN_001bf0ea(&local_124,s_pause_mode_000bbde8);
        local_178 = local_17c;
        local_174 = FUN_001bf0ea(&local_178,&DAT_000bbdfc);
        local_170 = local_174;
        local_16c = FUN_001bf0e6(&local_170);
        local_168 = local_16c;
        local_18c = FUN_001bf2b0(&local_168,0);
        iVar2 = FUN_0022d2f0(auStack_184,0,10,u_MultiTrack_000bbe04);
        if (iVar2 == 0) {
          local_180 = 4;
        }
        else {
          local_180 = 2;
        }
        iVar2 = FUN_0022d19c(auStack_188);
        if (iVar2 == 0) {
          iVar2 = FUN_0022cefc(auStack_184,&DAT_000bbf8c,0xffffffff);
          FUN_0022d1b0(&local_198,auStack_184,iVar2 + 1,0xffffffff);
          FUN_0023223c(auStack_188,&local_198);
          FUN_00232190(&local_198);
        }
        iVar2 = FUN_00093a08(uVar1);
        FUN_0023a774(iVar2 + 0x30,&local_194);
        FUN_0006b6e8(&local_194);
        local_124 = FUN_001bf0b0(&local_124,&DAT_000bbdd4);
      }
      iVar2 = FUN_00093a08(uVar1);
      iVar2 = FUN_0022e14c(iVar2 + 0x30);
      if (iVar2 == 0) {
        FUN_00002898(s_ERROR__XML_parse_No_Songs_found_000bbfb0);
        FUN_00095224(uVar1,DAT_000bbdb4);
        FUN_00173e50(auStack_f4);
        uVar1 = 0;
      }
      else {
        FUN_00093a08(uVar1);
        FUN_0007eaa4();
        FUN_00093a74(uVar1,1);
        FUN_00093a14(uVar1,0xffffffff);
        FUN_000935f4(uVar1,param_2);
        iVar2 = FUN_00093a08(uVar1);
        FUN_00092bb8(uVar1,iVar2 + 0x30);
        FUN_00095224(uVar1,DAT_000bbfd4);
        FUN_00173e50(auStack_f4);
        uVar1 = 1;
      }
    }
    else {
      FUN_00002898(s_ERROR__XML_parse_result___d_000bbf90,local_100[0]);
      FUN_00095224(uVar1,DAT_000bbdb4);
      FUN_00173e50(auStack_f4);
      uVar1 = 0;
    }
  }
  return uVar1;
}


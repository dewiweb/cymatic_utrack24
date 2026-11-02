// rea decompile_all
// name: FUN_00083688
// address: 0x83688
// body: available
// range: 0x83688-0x839c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00083688(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_254;
  char local_250;
  undefined1 local_24f;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  char local_208 [12];
  undefined4 local_1fc [50];
  undefined4 local_134;
  undefined4 local_130;
  undefined1 auStack_12c [4];
  undefined1 auStack_128 [4];
  undefined1 auStack_124 [256];
  
  FUN_00232084(auStack_128,DAT_000839c8);
  iVar2 = FUN_0022cefc(DAT_000839c8,&DAT_000839cc,0xffffffff);
  FUN_0022d1b0(auStack_12c,DAT_000839c8,iVar2 + 1,0xffffffff);
  FUN_00231500(auStack_128,&DAT_000839cc);
  FUN_00231530(auStack_128,auStack_12c);
  FUN_00231500(auStack_128,u__set_000839d0);
  iVar2 = FUN_000c0d94(param_1,auStack_128,&local_134,&local_130);
  if (iVar2 == 0) {
    uVar3 = FUN_0022d168(auStack_128);
    FUN_00002898(s_ERROR__Error_in_reading_Settings_000839dc,uVar3);
    FUN_00232190(auStack_12c);
    uVar3 = FUN_00232190(auStack_128);
  }
  else {
    FUN_00173e3c(local_1fc);
    local_254 = 0;
    FUN_00173d40(local_208,local_1fc,local_134,local_130,0x74);
    FUN_001c6a64(local_134);
    if (local_208[0] == '\0') {
      FUN_000f8ee0();
      uVar3 = FUN_000f6910();
      local_210 = FUN_001bf0ea(local_1fc,s_song_settings_00083a08);
      local_20c = local_210;
      local_214 = FUN_001bf0ea(&local_20c,s_channels_00083a18);
      local_218 = FUN_001bf0ea(&local_214,s_channel_00083a24);
      while (iVar2 = FUN_001bf1f4(&local_218), iVar2 != 0) {
        local_220 = FUN_001bf1bc(&local_218,&DAT_00083a2c);
        local_21c = local_220;
        local_24c = FUN_001bf058(&local_21c,0);
        local_230 = FUN_001bf0ea(&local_218,s_output_channel_00083a30);
        local_22c = local_230;
        local_228 = FUN_001bf0e6(&local_22c);
        local_224 = local_228;
        uVar1 = FUN_001bf254(&local_224,0);
        FUN_001282fc(&local_254,0,0);
        FUN_00069ed4(uVar3,uVar1,&local_254);
        uVar6 = FUN_00249b28(local_254);
        FUN_000028cc(auStack_124,&DAT_00083a40,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
        FUN_00176770(&local_218,s_monitor_volume_00083a48);
        local_238 = FUN_00176758(&local_218,s_monitor_volume_00083a48);
        local_234 = FUN_001766f8(&local_238,3);
        FUN_0017683e(&local_234,auStack_124);
        FUN_000028cc(auStack_124,&DAT_00083a58,local_24f);
        FUN_00176770(&local_218,s_monitor_mute_00083a5c);
        local_240 = FUN_00176758(&local_218,s_monitor_mute_00083a5c);
        local_23c = FUN_001766f8(&local_240,3);
        FUN_0017683e(&local_23c,auStack_124);
        FUN_000028cc(auStack_124,&DAT_00083a58,(int)local_250);
        FUN_00176770(&local_218,s_monitor_pan_00083a6c);
        local_248 = FUN_00176758(&local_218,s_monitor_pan_00083a6c);
        local_244 = FUN_001766f8(&local_248,3);
        FUN_0017683e(&local_244,auStack_124);
        local_218 = FUN_001bf0b0(&local_218,s_channel_00083a24);
      }
      FUN_000bd954(param_1,auStack_128);
      uVar3 = FUN_000bdc58(param_1,local_1fc[0]);
      uVar4 = FUN_000bb52c(param_1,auStack_128);
      uVar5 = FUN_00003738(uVar3);
      FUN_000c1358(param_1,uVar4,uVar3,uVar5);
      FUN_000c1220(param_1,uVar4);
      FUN_001c6a64(uVar3);
    }
    FUN_00173e50(local_1fc);
    FUN_00232190(auStack_12c);
    uVar3 = FUN_00232190(auStack_128);
  }
  return uVar3;
}


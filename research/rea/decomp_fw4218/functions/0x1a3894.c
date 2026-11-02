// rea decompile_all
// name: FUN_001a3894
// address: 0x1a3894
// body: available
// range: 0x1a3894-0x1a39cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a3894(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uStack_10;
  uint local_c;
  
  uStack_10 = param_3;
  local_c = param_4;
  FUN_00002898(s____________________________RTC_S_001a39cc);
  iVar1 = FUN_001a3d9c(param_1,0,&uStack_10,3);
  uVar4 = 0;
  if (iVar1 != 0) {
    if ((uStack_10 & 0x2000) == 0) {
      pcVar2 = s_running_001a3a08;
    }
    else {
      pcVar2 = s_stopped_001a3a00;
    }
    FUN_00002898(s____s_001a3a10,pcVar2);
    if ((uStack_10 & 0x8800) == 0) {
      pcVar2 = s_normal_001a3a20;
    }
    else {
      pcVar2 = &DAT_001a3a18;
    }
    FUN_00002898(s___in__s_mode_001a3a28,pcVar2);
    FUN_00002898(s___alarm_flags__0x_02X_001a3a38,uStack_10._2_1_);
    iVar1 = FUN_001a3d9c(param_1,2,&uStack_10,4);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if ((uStack_10 & 0x8000) == 0) {
        puVar3 = &DAT_001a3a54;
      }
      else {
        puVar3 = &DAT_001a3a50;
      }
      FUN_00002898(s___time_is_svalid__m_bIsValid__d__001a3a58,puVar3,
                   *(undefined1 *)(param_1 + 0x44));
      FUN_00002898(s___time___02X__02X__02X_001a3a7c,uStack_10._3_1_ & 0x3f,uStack_10._2_1_ & 0x7f,
                   uStack_10._1_1_ & 0x7f);
      iVar1 = FUN_001a3d9c(param_1,5,&uStack_10);
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        FUN_00002898(s___date___02X__02X_20_02X_001a3a98,uStack_10._1_1_ & 0x3f,
                     uStack_10._3_1_ & 0x1f,local_c & 0xff);
        uVar4 = FUN_00002898(s____________________________001a3ab4);
      }
    }
  }
  return uVar4;
}


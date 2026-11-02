// rea decompile_all
// name: FUN_00146a10
// address: 0x146a10
// body: available
// range: 0x146a10-0x146ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00146a10(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_3 == 0) {
    FUN_00002898(s_channel_modes___u__24_In___26_Ou_00146ad8,0);
    FUN_00002898(s__u__24_In___2_Out_00146afc,1);
    FUN_00002898(s__u__8_In___26_Out_00146b20,2);
    FUN_00002898(s__u__8_In___10_Out_00146b44,3);
    uVar1 = 6;
  }
  else {
    uVar2 = FUN_000032fc(*param_2,0);
    if (uVar2 < 4) {
      uVar1 = FUN_000f8ee0();
      iVar3 = FUN_000f87ec(uVar1,uVar2 & 0xff,0xff);
      if (iVar3 == 0) {
        pcVar4 = s_false_00146b70;
      }
      else {
        pcVar4 = &DAT_00146b68;
      }
      FUN_00002898(s_Change_streaming_channel_mode_re_00146b78,pcVar4);
      uVar1 = 0;
    }
    else {
      uVar1 = 6;
    }
  }
  return uVar1;
}


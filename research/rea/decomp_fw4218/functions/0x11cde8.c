// rea decompile_all
// name: FUN_0011cde8
// address: 0x11cde8
// body: available
// range: 0x11cde8-0x11d007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011cde8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000950d0(uVar1,2);
  FUN_00093c78(uVar1,0);
  FUN_00002898(_DAT_0011d008,param_2);
  *(int *)(param_1 + 0x9c) = param_2;
  param_2 = param_2 + -0xd;
  switch(param_2) {
  case 0:
    uVar2 = FUN_0011eda0(param_2);
    FUN_0011ff88(uVar2,s_Song_Play_Error__0011d024,s___Bit_Depth_not_supported_0011d00a + 2);
    uVar1 = FUN_000932c4(uVar1,0xd);
    break;
  case 1:
    uVar2 = FUN_0011eda0(param_2);
    FUN_0011ff88(uVar2,s_Song_Play_Error__0011d024,s_Sample_Rate_Mismatch_0011d038);
    uVar1 = FUN_000932c4(uVar1,0xe);
    break;
  case 2:
    uVar2 = FUN_0011eda0(param_2);
    FUN_0011ff88(uVar2,s_Song_Play_Error__0011d024,s_Channel_in_Files_Incorrect_0011d050);
    uVar1 = FUN_000932c4(uVar1,0xf);
    break;
  case 3:
    uVar2 = FUN_0011eda0(param_2);
    FUN_0011ff88(uVar2,s_Song_Play_Error__0011d024,s_Clock_not_in_Sync_0011d06c);
    uVar1 = FUN_000932c4(uVar1,0x10);
    break;
  case 4:
    uVar2 = FUN_0011eda0(param_2);
    FUN_0011ff88(uVar2,s_Song_Play_Error__0011d024,s_Settings_file_error_0011d080);
    uVar1 = FUN_000932c4(uVar1,0x11);
    break;
  case 5:
    uVar2 = FUN_0011eda0(param_2);
    FUN_0011ff88(uVar2,s_Song_Play_Error__0011d024,s_Parsing_problem_0011d094);
    uVar1 = FUN_000932c4(uVar1,0x12);
    break;
  case 6:
  default:
switchD_0011ce34_default:
    uVar2 = FUN_0011eda0(param_2);
    FUN_0011ff88(uVar2,s_Song_Play_Error__0011d024,s_Playback_failed_0011d0cc);
    uVar1 = FUN_000932c4(uVar1,6);
    break;
  case 7:
    goto switchD_0011ce34_default;
  case 8:
    goto switchD_0011ce34_default;
  case 9:
    goto switchD_0011ce34_default;
  case 10:
    goto switchD_0011ce34_default;
  case 0xb:
    uVar2 = FUN_0011eda0(param_2);
    FUN_0011ff88(uVar2,s_Song_Play_Error__0011d024,s_Decoders_not_ready_0011d0a4);
    uVar1 = FUN_000932c4(uVar1,0x18);
    break;
  case 0xc:
    uVar2 = FUN_0011eda0(param_2);
    FUN_0011ff88(uVar2,s_Song_Play_Error__0011d024,s_Loading_timed_out_0011d0b8);
    uVar1 = FUN_000932c4(uVar1,0x18);
  }
  uVar1 = FUN_0011eda0(uVar1);
  FUN_000a1000(uVar1,0x1c);
  FUN_001d0130(2000);
  FUN_001a48f0(param_1,0x26,0);
  return;
}


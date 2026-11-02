// rea decompile_all
// name: FUN_001b640c
// address: 0x1b640c
// body: available
// range: 0x1b640c-0x1b666b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b6668 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b640c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  FUN_00002898(_DAT_001b6678,param_1,s_m_iPLLFbDiv_001b666c,*param_1);
  FUN_00002898(_DAT_001b6678,param_1 + 1,s___m_iPLLRefDiv_001b667a + 2,param_1[1]);
  uVar1 = param_1[2];
  FUN_00002898(_DAT_001b6678,param_1 + 2,s_m_iPLLLockThres_001b668c,uVar1);
  if (param_2 != 0) {
    FUN_00002898(_DAT_001b66a4,s_lockLow_001b669c,uVar1 & 0xf);
    FUN_00002898(_DAT_001b66a4,s___lockHigh_001b66a6 + 2,(uVar1 & 0xff) >> 4);
    FUN_00002898(_DAT_001b66a4,s_lockCnt_001b66b4,(uVar1 & 0xfff) >> 8);
  }
  uVar1 = param_1[4];
  FUN_00002898(_DAT_001b6678,param_1 + 4,s_m_iPLLMisc_001b66bc,uVar1);
  if (param_2 != 0) {
    FUN_00002898(_DAT_001b66a4,s_refType_001b66c8,uVar1 & 7);
    FUN_00002898(_DAT_001b66a4,s_sourceSel_001b66d0,(uVar1 & 0x7ff) >> 8);
    FUN_00002898(_DAT_001b66a4,s_clear441_001b66dc,(uVar1 & 0x7fff) >> 0xe);
    FUN_00002898(_DAT_001b66a4,s_clear_001b66e8,(uVar1 & 0xffff) >> 0xf);
    FUN_00002898(_DAT_001b66a4,s_pllType_001b66f0,uVar1 >> 0x1f);
  }
  FUN_00002898(_DAT_001b6678,param_1 + 5,s_m_iPLLSytQueue_001b66f8,param_1[5]);
  FUN_00002898(_DAT_001b6678,param_1 + 8,s_m_iIIRCoeffA1_001b6708,param_1[8]);
  FUN_00002898(_DAT_001b6678,param_1 + 9,s_m_iIIRCoeffB0_001b6718,param_1[9]);
  FUN_00002898(_DAT_001b6678,param_1 + 10,s_m_iIIRCoeffB1_001b6728,param_1[10]);
  FUN_00002898(_DAT_001b6678,param_1 + 0xb,s_m_iIIRAccu_001b6738,param_1[0xb]);
  FUN_00002898(_DAT_001b6678,param_1 + 0x10,s_m_iDCOPhaseInc_001b6744,param_1[0x10]);
  uVar1 = param_1[0x11];
  FUN_00002898(_DAT_001b6678,param_1 + 0x11,s_m_iDCOCalib_001b6754,uVar1);
  if (param_2 != 0) {
    FUN_00002898(_DAT_001b66a4,s_overall_001b6760,uVar1 & 0xf);
    FUN_00002898(_DAT_001b66a4,&DAT_001b6768,(uVar1 & 0xfff) >> 8);
    FUN_00002898(_DAT_001b66a4,s_coarse_001b6770,(uVar1 & 0x7fffff) >> 0x10);
    FUN_00002898(_DAT_001b66a4,s_fineType_001b6778,(uVar1 & 0x3fffffff) >> 0x1c);
  }
  uVar1 = param_1[0x12];
  FUN_00002898(_DAT_001b6678,param_1 + 0x12,s_m_iDCOMisc_001b6784,uVar1);
  if (param_2 == 0) {
    return;
  }
  FUN_00002898(_DAT_001b66a4,s_postDiv_001b6790,uVar1 & 0x3fff);
  FUN_00002898(_DAT_001b66a4,s_freqRange_001b6798,(uVar1 & 0x3ffff) >> 0x10);
  FUN_00002898(_DAT_001b66a4,s_enable_001b67a4,(uVar1 & 0x1fffff) >> 0x14);
  thunk_FUN_00002898(_DAT_001b66a4,s_stepMode_001b67ac,(uVar1 & 0x1ffffff) >> 0x18);
  return;
}


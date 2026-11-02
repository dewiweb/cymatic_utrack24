// rea decompile_all
// name: FUN_00157c10
// address: 0x157c10
// body: available
// range: 0x157c10-0x157e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x157e6c to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00157c10(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  FUN_000028a4(s__L__m_iPLLRefDiv_00157e7c._0_4_,param_1,s_m_iPLLFbDiv_00157e70,*param_1);
  FUN_000028a4(s__L__m_iPLLRefDiv_00157e7c._0_4_,param_1 + 1,s__L__m_iPLLRefDiv_00157e7c + 4,
               param_1[1]);
  uVar1 = param_1[2];
  FUN_000028a4(s__L__m_iPLLRefDiv_00157e7c._0_4_,param_1 + 2,s_m_iPLLLockThres_00157e90,uVar1);
  if (param_2 != 0) {
    FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_lockLow_00157ea0,uVar1 & 0xf);
    FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_HL__lockHigh_00157ea8 + 4,(uVar1 & 0xff) >> 4);
    FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_lockCnt_00157eb8,(uVar1 & 0xfff) >> 8);
  }
  uVar1 = param_1[4];
  FUN_000028a4(s__L__m_iPLLRefDiv_00157e7c._0_4_,param_1 + 4,s_m_iPLLMisc_00157ec0,uVar1);
  if (param_2 != 0) {
    FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_refType_00157ecc,uVar1 & 7);
    FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_sourceSel_00157ed4,(uVar1 & 0x7ff) >> 8);
    FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_clear441_00157ee0,(uVar1 & 0x7fff) >> 0xe);
    FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_clear_00157eec,(uVar1 & 0xffff) >> 0xf);
    FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_pllType_00157ef4,uVar1 >> 0x1f);
  }
  FUN_000028a4(s__L__m_iPLLRefDiv_00157e7c._0_4_,param_1 + 5,s_m_iPLLSytQueue_00157efc,param_1[5]);
  FUN_000028a4(s__L__m_iPLLRefDiv_00157e7c._0_4_,param_1 + 8,s_m_iIIRCoeffA1_00157f0c,param_1[8]);
  FUN_000028a4(s__L__m_iPLLRefDiv_00157e7c._0_4_,param_1 + 9,s_m_iIIRCoeffB0_00157f1c,param_1[9]);
  FUN_000028a4(s__L__m_iPLLRefDiv_00157e7c._0_4_,param_1 + 10,s_m_iIIRCoeffB1_00157f2c,param_1[10]);
  FUN_000028a4(s__L__m_iPLLRefDiv_00157e7c._0_4_,param_1 + 0xb,s_m_iIIRAccu_00157f3c,param_1[0xb]);
  FUN_000028a4(s__L__m_iPLLRefDiv_00157e7c._0_4_,param_1 + 0x10,s_m_iDCOPhaseInc_00157f48,
               param_1[0x10]);
  uVar1 = param_1[0x11];
  FUN_000028a4(s__L__m_iPLLRefDiv_00157e7c._0_4_,param_1 + 0x11,s_m_iDCOCalib_00157f58,uVar1);
  if (param_2 != 0) {
    FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_overall_00157f64,uVar1 & 0xf);
    FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,&DAT_00157f6c,(uVar1 & 0xfff) >> 8);
    FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_coarse_00157f74,(uVar1 & 0x7fffff) >> 0x10);
    FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_fineType_00157f7c,(uVar1 & 0x3fffffff) >> 0x1c);
  }
  uVar1 = param_1[0x12];
  FUN_000028a4(s__L__m_iPLLRefDiv_00157e7c._0_4_,param_1 + 0x12,s_m_iDCOMisc_00157f88,uVar1);
  if (param_2 == 0) {
    return;
  }
  FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_postDiv_00157f94,uVar1 & 0x3fff);
  FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_freqRange_00157f9c,(uVar1 & 0x3ffff) >> 0x10);
  FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_enable_00157fa8,(uVar1 & 0x1fffff) >> 0x14);
  thunk_FUN_000028a4(s_HL__lockHigh_00157ea8._0_4_,s_stepMode_00157fb0,(uVar1 & 0x1ffffff) >> 0x18);
  return;
}


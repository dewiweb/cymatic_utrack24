// rea decompile_all
// name: FUN_00159310
// address: 0x159310
// body: available
// range: 0x159310-0x1596af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1596ac to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00159310(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  FUN_000028a4(DAT_001596bc,param_1,s_m_iSysPLL_001596b0);
  if (param_2 != 0) {
    FUN_000028a4(DAT_001596c4,&DAT_001596c0,uVar2 & 3);
    FUN_000028a4(DAT_001596c4,&DAT_001596c8,(uVar2 & 0xffff) >> 8);
    FUN_000028a4(DAT_001596c4,&DAT_001596cc,(uVar2 & 0x1fffff) >> 0x10);
    FUN_000028a4(DAT_001596c4,&DAT_001596d0,uVar2 >> 0x1f);
  }
  FUN_000028a4(DAT_001596bc,param_1 + 1,s_m_iRootClkSel_001596d4,param_1[1] & 7);
  FUN_000028a4(DAT_001596bc,param_1 + 4,s_m_iAHBDiv_001596e4,param_1[4] & 0x3f);
  uVar2 = param_1[5];
  FUN_000028a4(DAT_001596bc,param_1 + 5,s_m_iCPUMult_001596f0,uVar2);
  if (param_2 != 0) {
    FUN_000028a4(DAT_001596c4,&DAT_001596fc,uVar2 & 0xf);
    FUN_000028a4(DAT_001596c4,s_warp0_00159700,(uVar2 & 0xff) >> 4);
    FUN_000028a4(DAT_001596c4,s_sdram_00159708,(uVar2 & 0xfff) >> 8);
    uVar1 = (uVar2 & 0xffff) >> 0xc;
    FUN_000028a4(DAT_001596c4,s_avSys_00159710,uVar1);
    FUN_000028a4(DAT_001596c4,s_avSys_00159710,uVar1);
    FUN_000028a4(DAT_001596c4,s_hvSys_00159718,(uVar2 & 0xfffff) >> 0x10);
    FUN_000028a4(DAT_001596c4,s_avOvSmpl_00159720,(uVar2 & 0xffffff) >> 0x14);
    FUN_000028a4(DAT_001596c4,s_warp1_0015972c,(uVar2 & 0xfffffff) >> 0x18);
    FUN_000028a4(DAT_001596c4,&DAT_00159734,uVar2 >> 0x1c);
  }
  uVar2 = param_1[7];
  FUN_000028a4(DAT_001596bc,param_1 + 7,s_m_iMemClkDel_00159738);
  if (param_2 != 0) {
    FUN_000028a4(DAT_001596c4,&DAT_00159748,uVar2 & 0x3f);
    FUN_000028a4(DAT_001596c4,s_clkEn_0015974c,(uVar2 & 0x1ff) >> 8);
  }
  FUN_000028a4(DAT_001596bc,param_1 + 8,s_m_iResetSet_00159754,param_1[8]);
  FUN_000028a4(DAT_001596bc,param_1 + 10,s_m_iClkEnableSet_00159760,param_1[10]);
  uVar2 = param_1[0x10];
  FUN_000028a4(DAT_001596bc,param_1 + 0x10,s_m_iMisc_00159770,uVar2);
  if (param_2 != 0) {
    FUN_000028a4(DAT_001596c4,s_measureSel_00159778,uVar2 & 0x3f);
    FUN_000028a4(DAT_001596c4,s_measureEn_00159784,(uVar2 & 0xff) >> 7);
    FUN_000028a4(DAT_001596c4,s_hissClkSel_00159790,(uVar2 & 0xffff) >> 0xf);
    FUN_000028a4(DAT_001596c4,s_ethPhyClkSel_0015979c,(uVar2 & 0xffffff) >> 0x14);
    FUN_000028a4(DAT_001596c4,s_ethPhyDiv_001597ac,(uVar2 & 0x1fffffff) >> 0x18);
  }
  uVar2 = param_1[0x11];
  FUN_000028a4(DAT_001596bc,param_1 + 0x11,s_m_iSyncOut_001597b8,uVar2);
  if (param_2 != 0) {
    FUN_000028a4(DAT_001596c4,s_syncOutDiv_001597c4,uVar2 & 0xfff);
    FUN_000028a4(DAT_001596c4,s_syncOutSel_001597d0,(uVar2 & 0x7ffffff) >> 0x18);
    FUN_000028a4(DAT_001596c4,s_syncOutEn_001597dc,uVar2 >> 0x1f);
  }
  uVar2 = param_1[0x12];
  FUN_000028a4(DAT_001596bc,param_1 + 0x12,s_m_iDARSSamples_001597e8,uVar2);
  if (param_2 != 0) {
    FUN_000028a4(DAT_001596c4,&DAT_001597f8,uVar2 & 0x7f);
    FUN_000028a4(DAT_001596c4,&DAT_001597fc,(uVar2 & 0x3fff) >> 8);
    FUN_000028a4(DAT_001596c4,&DAT_00159800,(uVar2 & 0x3fffff) >> 0x10);
    FUN_000028a4(DAT_001596c4,&DAT_00159804,(uVar2 & 0xfffffff) >> 0x18);
  }
  FUN_000028a4(DAT_001596bc,param_1 + 0x13,s_m_iRTCDiv_00159808,param_1[0x13]);
  FUN_000028a4(DAT_001596bc,param_1 + 0x14,s_m_iAuxPLLDiv_00159814,param_1[0x14]);
  uVar2 = param_1[0x3c];
  FUN_000028a4(DAT_001596bc,param_1 + 0x3c,s_m_iCalibConfig_00159824,uVar2);
  if (param_2 == 0) {
    return;
  }
  FUN_000028a4(DAT_001596c4,s_delay_00159834,uVar2 & 0x3f);
  FUN_000028a4(DAT_001596c4,s_fineType_0015983c,(uVar2 & 0x3ff) >> 8);
  thunk_FUN_000028a4(DAT_001596c4,s_trigger_00159848,uVar2 >> 0x1f);
  return;
}


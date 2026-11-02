// rea decompile_all
// name: FUN_001b8c68
// address: 0x1b8c68
// body: available
// range: 0x1b8c68-0x1b9007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b9004 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b8c68(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  FUN_00002898(DAT_001b9014,param_1,s_m_iSysPLL_001b9008);
  if (param_2 != 0) {
    FUN_00002898(DAT_001b901c,&DAT_001b9018,uVar2 & 3);
    FUN_00002898(DAT_001b901c,&DAT_001b9020,(uVar2 & 0xffff) >> 8);
    FUN_00002898(DAT_001b901c,&DAT_001b9024,(uVar2 & 0x1fffff) >> 0x10);
    FUN_00002898(DAT_001b901c,&DAT_001b9028,uVar2 >> 0x1f);
  }
  FUN_00002898(DAT_001b9014,param_1 + 1,s_m_iRootClkSel_001b902c,param_1[1] & 7);
  FUN_00002898(DAT_001b9014,param_1 + 4,s_m_iAHBDiv_001b903c,param_1[4] & 0x3f);
  uVar2 = param_1[5];
  FUN_00002898(DAT_001b9014,param_1 + 5,s_m_iCPUMult_001b9048,uVar2);
  if (param_2 != 0) {
    FUN_00002898(DAT_001b901c,&DAT_001b9054,uVar2 & 0xf);
    FUN_00002898(DAT_001b901c,s_warp0_001b9058,(uVar2 & 0xff) >> 4);
    FUN_00002898(DAT_001b901c,s_sdram_001b9060,(uVar2 & 0xfff) >> 8);
    uVar1 = (uVar2 & 0xffff) >> 0xc;
    FUN_00002898(DAT_001b901c,s_avSys_001b9068,uVar1);
    FUN_00002898(DAT_001b901c,s_avSys_001b9068,uVar1);
    FUN_00002898(DAT_001b901c,s_hvSys_001b9070,(uVar2 & 0xfffff) >> 0x10);
    FUN_00002898(DAT_001b901c,s_avOvSmpl_001b9078,(uVar2 & 0xffffff) >> 0x14);
    FUN_00002898(DAT_001b901c,s_warp1_001b9084,(uVar2 & 0xfffffff) >> 0x18);
    FUN_00002898(DAT_001b901c,&DAT_001b908c,uVar2 >> 0x1c);
  }
  uVar2 = param_1[7];
  FUN_00002898(DAT_001b9014,param_1 + 7,s_m_iMemClkDel_001b9090);
  if (param_2 != 0) {
    FUN_00002898(DAT_001b901c,&DAT_001b90a0,uVar2 & 0x3f);
    FUN_00002898(DAT_001b901c,s_clkEn_001b90a4,(uVar2 & 0x1ff) >> 8);
  }
  FUN_00002898(DAT_001b9014,param_1 + 8,s_m_iResetSet_001b90ac,param_1[8]);
  FUN_00002898(DAT_001b9014,param_1 + 10,s_m_iClkEnableSet_001b90b8,param_1[10]);
  uVar2 = param_1[0x10];
  FUN_00002898(DAT_001b9014,param_1 + 0x10,s_m_iMisc_001b90c8,uVar2);
  if (param_2 != 0) {
    FUN_00002898(DAT_001b901c,s_measureSel_001b90d0,uVar2 & 0x3f);
    FUN_00002898(DAT_001b901c,s_measureEn_001b90dc,(uVar2 & 0xff) >> 7);
    FUN_00002898(DAT_001b901c,s_hissClkSel_001b90e8,(uVar2 & 0xffff) >> 0xf);
    FUN_00002898(DAT_001b901c,s_ethPhyClkSel_001b90f4,(uVar2 & 0xffffff) >> 0x14);
    FUN_00002898(DAT_001b901c,s_ethPhyDiv_001b9104,(uVar2 & 0x1fffffff) >> 0x18);
  }
  uVar2 = param_1[0x11];
  FUN_00002898(DAT_001b9014,param_1 + 0x11,s_m_iSyncOut_001b9110,uVar2);
  if (param_2 != 0) {
    FUN_00002898(DAT_001b901c,s_syncOutDiv_001b911c,uVar2 & 0xfff);
    FUN_00002898(DAT_001b901c,s_syncOutSel_001b9128,(uVar2 & 0x7ffffff) >> 0x18);
    FUN_00002898(DAT_001b901c,s_syncOutEn_001b9134,uVar2 >> 0x1f);
  }
  uVar2 = param_1[0x12];
  FUN_00002898(DAT_001b9014,param_1 + 0x12,s_m_iDARSSamples_001b9140,uVar2);
  if (param_2 != 0) {
    FUN_00002898(DAT_001b901c,&DAT_001b9150,uVar2 & 0x7f);
    FUN_00002898(DAT_001b901c,&DAT_001b9154,(uVar2 & 0x3fff) >> 8);
    FUN_00002898(DAT_001b901c,&DAT_001b9158,(uVar2 & 0x3fffff) >> 0x10);
    FUN_00002898(DAT_001b901c,&DAT_001b915c,(uVar2 & 0xfffffff) >> 0x18);
  }
  FUN_00002898(DAT_001b9014,param_1 + 0x13,s_m_iRTCDiv_001b9160,param_1[0x13]);
  FUN_00002898(DAT_001b9014,param_1 + 0x14,s_m_iAuxPLLDiv_001b916c,param_1[0x14]);
  uVar2 = param_1[0x3c];
  FUN_00002898(DAT_001b9014,param_1 + 0x3c,s_m_iCalibConfig_001b917c,uVar2);
  if (param_2 == 0) {
    return;
  }
  FUN_00002898(DAT_001b901c,s_delay_001b918c,uVar2 & 0x3f);
  FUN_00002898(DAT_001b901c,s_fineType_001b9194,(uVar2 & 0x3ff) >> 8);
  thunk_FUN_00002898(DAT_001b901c,s_trigger_001b91a0,uVar2 >> 0x1f);
  return;
}


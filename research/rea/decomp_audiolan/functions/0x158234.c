// rea decompile_all
// name: FUN_00158234
// address: 0x158234
// body: available
// range: 0x158234-0x15844f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x15844c to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00158234(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x10);
    FUN_000028a4(DAT_00158450 + -0xe0,puVar2,DAT_00158450,*puVar2);
    uVar1 = puVar2[1];
    FUN_000028a4(_DAT_00158454 + -0xd0,puVar2 + 1);
    if (param_2 != 0) {
      FUN_000028a4(s_L__0M___M__<M__HM__m_iMeasureSta_00158455._3_4_ + -0xe8,
                   s_L__0M___M__<M__HM__m_iMeasureSta_00158455._3_4_,uVar1 & 0xffff);
      FUN_000028a4(s_L__0M___M__<M__HM__m_iMeasureSta_00158455._7_4_ + -0xd8,
                   s_L__0M___M__<M__HM__m_iMeasureSta_00158455._7_4_,uVar1 >> 0x1f);
    }
    FUN_000028a4(s_L__0M___M__<M__HM__m_iMeasureSta_00158455._11_4_ + -0x110,puVar2 + 2,
                 s_L__0M___M__<M__HM__m_iMeasureSta_00158455._11_4_,puVar2[2]);
    FUN_000028a4(s_L__0M___M__<M__HM__m_iMeasureSta_00158455._15_4_);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  FUN_000028a4(s__L__m_iCalibStat_00158478._0_4_,param_1 + 0x40,
               s_L__0M___M__<M__HM__m_iMeasureSta_00158455 + 0x13,*(undefined4 *)(param_1 + 0x40));
  uVar1 = *(uint *)(param_1 + 0x44);
  FUN_000028a4(s__L__m_iCalibStat_00158478._0_4_,param_1 + 0x44,s__L__m_iCalibStat_00158478 + 4,
               uVar1);
  if (param_2 != 0) {
    FUN_000028a4(DAT_00158494,s_overall_0015848c,uVar1 & 0xf);
    FUN_000028a4(DAT_00158494,&DAT_00158498,(uVar1 & 0xfff) >> 8);
    FUN_000028a4(DAT_00158494,s_coarse_001584a0,(uVar1 & 0x3fffff) >> 0x10);
    FUN_000028a4(DAT_00158494,&DAT_001584a8,(uVar1 & 0x1fffffff) >> 0x1c);
    FUN_000028a4(DAT_00158494,&DAT_001584b0,(uVar1 & 0x3fffffff) >> 0x1d);
    FUN_000028a4(DAT_00158494,&DAT_001584b8,(uVar1 & 0x7fffffff) >> 0x1e);
    FUN_000028a4(DAT_00158494,s_complete_001584c0,uVar1 >> 0x1f);
  }
  FUN_000028a4(s__L__m_iCalibStat_00158478._0_4_,param_1 + 0x48,s_m_iDARSStat_001584cc,
               *(undefined4 *)(param_1 + 0x48));
  FUN_000028a4(s__L__m_iCalibStat_00158478._0_4_,param_1 + 0x400,s_m_iIRQ0Set_001584d8,
               *(undefined4 *)(param_1 + 0x400));
  FUN_000028a4(s__L__m_iCalibStat_00158478._0_4_,param_1 + 0x408,s_m_iIRQ1Set_001584e4,
               *(undefined4 *)(param_1 + 0x408));
  FUN_000028a4(s__L__m_iCalibStat_00158478._0_4_,param_1 + 0x404,s_m_iIRQ0Clr_001584f0,
               *(undefined4 *)(param_1 + 0x404));
  FUN_000028a4(s__L__m_iCalibStat_00158478._0_4_,param_1 + 0x40c,s_m_iIRQ1Clr_001584fc,
               *(undefined4 *)(param_1 + 0x40c));
  FUN_000028a4(s__L__m_iCalibStat_00158478._0_4_,param_1 + 0x410,s_m_iIRQ0MaskSet_00158508,
               *(undefined4 *)(param_1 + 0x410));
  FUN_000028a4(s__L__m_iCalibStat_00158478._0_4_,param_1 + 0x418,s_m_iIRQ1MaskSet_00158518,
               *(undefined4 *)(param_1 + 0x418));
  FUN_000028a4(s__L__m_iCalibStat_00158478._0_4_,param_1 + 0x7f4,s_m_iTestbus_00158528,
               *(undefined4 *)(param_1 + 0x7f4));
  thunk_FUN_000028a4(s__L__m_iCalibStat_00158478._0_4_,param_1 + 0x7f8,s_m_iRevision_00158534,
                     *(undefined4 *)(param_1 + 0x7f8));
  return;
}


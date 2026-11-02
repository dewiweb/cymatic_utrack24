// rea decompile_all
// name: FUN_001b6fc4
// address: 0x1b6fc4
// body: available
// range: 0x1b6fc4-0x1b71df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b71dc to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b6fc4(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x10);
    FUN_00002898(DAT_001b71e0 + -0xe0,puVar2,DAT_001b71e0,*puVar2);
    uVar1 = puVar2[1];
    FUN_00002898(DAT_001b71e4 + -0xd0,puVar2 + 1);
    if (param_2 != 0) {
      FUN_00002898(DAT_001b71e8 + -0xe8,DAT_001b71e8,uVar1 & 0xffff);
      FUN_00002898(DAT_001b71ec + -0xd8,DAT_001b71ec,uVar1 >> 0x1f);
    }
    FUN_00002898(DAT_001b71f0 + -0x110,puVar2 + 2,DAT_001b71f0,puVar2[2]);
    FUN_00002898(_DAT_001b71f4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  FUN_00002898(_DAT_001b7208,param_1 + 0x40,s___m_iMeasureStat_001b71f6 + 2,
               *(undefined4 *)(param_1 + 0x40));
  uVar1 = *(uint *)(param_1 + 0x44);
  FUN_00002898(_DAT_001b7208,param_1 + 0x44,s___m_iCalibStat_001b720a + 2,uVar1);
  if (param_2 != 0) {
    FUN_00002898(DAT_001b7224,s_overall_001b721c,uVar1 & 0xf);
    FUN_00002898(DAT_001b7224,&DAT_001b7228,(uVar1 & 0xfff) >> 8);
    FUN_00002898(DAT_001b7224,s_coarse_001b7230,(uVar1 & 0x3fffff) >> 0x10);
    FUN_00002898(DAT_001b7224,&DAT_001b7238,(uVar1 & 0x1fffffff) >> 0x1c);
    FUN_00002898(DAT_001b7224,&DAT_001b7240,(uVar1 & 0x3fffffff) >> 0x1d);
    FUN_00002898(DAT_001b7224,&DAT_001b7248,(uVar1 & 0x7fffffff) >> 0x1e);
    FUN_00002898(DAT_001b7224,s_complete_001b7250,uVar1 >> 0x1f);
  }
  FUN_00002898(_DAT_001b7208,param_1 + 0x48,s_m_iDARSStat_001b725c,*(undefined4 *)(param_1 + 0x48));
  FUN_00002898(_DAT_001b7208,param_1 + 0x400,s_m_iIRQ0Set_001b7268,*(undefined4 *)(param_1 + 0x400))
  ;
  FUN_00002898(_DAT_001b7208,param_1 + 0x408,s_m_iIRQ1Set_001b7274,*(undefined4 *)(param_1 + 0x408))
  ;
  FUN_00002898(_DAT_001b7208,param_1 + 0x404,s_m_iIRQ0Clr_001b7280,*(undefined4 *)(param_1 + 0x404))
  ;
  FUN_00002898(_DAT_001b7208,param_1 + 0x40c,s_m_iIRQ1Clr_001b728c,*(undefined4 *)(param_1 + 0x40c))
  ;
  FUN_00002898(_DAT_001b7208,param_1 + 0x410,s_m_iIRQ0MaskSet_001b7298,
               *(undefined4 *)(param_1 + 0x410));
  FUN_00002898(_DAT_001b7208,param_1 + 0x418,s_m_iIRQ1MaskSet_001b72a8,
               *(undefined4 *)(param_1 + 0x418));
  FUN_00002898(_DAT_001b7208,param_1 + 0x7f4,s_m_iTestbus_001b72b8,*(undefined4 *)(param_1 + 0x7f4))
  ;
  thunk_FUN_00002898(_DAT_001b7208,param_1 + 0x7f8,s_m_iRevision_001b72c4,
                     *(undefined4 *)(param_1 + 0x7f8));
  return;
}


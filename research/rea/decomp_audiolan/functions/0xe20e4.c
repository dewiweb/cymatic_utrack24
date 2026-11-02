// rea decompile_all
// name: FUN_000e20e4
// address: 0xe20e4
// body: available
// range: 0xe20e4-0xe22df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_000e20e4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_18;
  undefined1 local_14 [4];
  
  *(undefined1 *)(param_1 + 4) = 0;
  iVar1 = FUN_00041c14(s__cfg_AppSettings_CopperLan_000e22e0,&local_18);
  if (iVar1 == 0) {
    FUN_000028a4(_DAT_000e2314);
    return 0;
  }
  iVar1 = FUN_00048ef8(local_18,s_BrandID_000e22fc,local_14);
  if (iVar1 != 0) {
    *(short *)(param_1 + 0xe) = local_14._0_2_;
  }
  else {
    FUN_000028a4(s___ERROR__CopperLanConfigurationB_000e2316 + 2,s_BrandID_000e22fc);
  }
  iVar2 = FUN_00048ef8(local_18,s_ModelID_000e2304,local_14);
  if (iVar2 != 0) {
    *(short *)(param_1 + 0x10) = local_14._0_2_;
  }
  else {
    FUN_000028a4(s___ERROR__CopperLanConfigurationB_000e2316 + 2,s_ModelID_000e2304);
  }
  iVar3 = FUN_00043278(local_18,s_Enabled_000e230c,param_1 + 4);
  if (iVar3 == 0) {
    FUN_000028a4(s___ERROR__CopperLanConfigurationB_000e2316 + 2,s_Enabled_000e230c);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  iVar4 = FUN_00048ef8(local_18,s_DuplicateNumber_000e2354,param_1 + 8);
  if (iVar4 == 0) {
    FUN_000028a4(s___ERROR__CopperLanConfigurationB_000e2316 + 2,s_DuplicateNumber_000e2354);
  }
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00084950();
    uVar5 = FUN_0015788c();
    *(undefined4 *)(param_1 + 8) = uVar5;
    FUN_00048f94(local_18,s_DuplicateNumber_000e2354,uVar5);
  }
  iVar6 = FUN_00048ef8(local_18,s_DuplicateMode_000e2364,local_14);
  if (iVar6 != 0) {
    *(undefined1 *)(param_1 + 0xc) = local_14[0];
  }
  else {
    FUN_000028a4(s___ERROR__CopperLanConfigurationB_000e2316 + 2,s_DuplicateMode_000e2364);
  }
  iVar7 = FUN_00042a00(local_18,s_BrandName_000e2374,param_1 + 0x14);
  if (iVar7 == 0) {
    FUN_000028a4(s___ERROR__CopperLanConfigurationB_000e2316 + 2,s_BrandName_000e2374);
  }
  iVar8 = FUN_00042a00(local_18,s_Contact_000e2380,param_1 + 0x1c);
  if (iVar8 == 0) {
    FUN_000028a4(s___ERROR__CopperLanConfigurationB_000e2316 + 2,s_Contact_000e2380);
  }
  FUN_00041dd4(local_18);
  iVar9 = FUN_000429cc(s__cfg_Config_Name_000e2388,param_1 + 0x18);
  if (iVar9 == 0) {
    FUN_000028a4(s_ERROR__CopperLanConfigurationBas_000e239c);
  }
  else if (iVar8 != 0 &&
           (iVar7 != 0 && (iVar6 != 0 && (iVar4 != 0 && (iVar3 != 0 && (iVar2 != 0 && iVar1 != 0))))
           )) {
    return 1;
  }
  FUN_000028a4(DAT_000e23dc);
  *(undefined1 *)(param_1 + 4) = 0;
  return 0;
}


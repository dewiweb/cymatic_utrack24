// rea decompile_all
// name: FUN_0013a3cc
// address: 0x13a3cc
// body: available
// range: 0x13a3cc-0x13a5c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0013a3cc(int param_1)

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
  iVar1 = FUN_000466b0(s__cfg_AppSettings_CopperLan_0013a5c8,&local_18);
  if (iVar1 == 0) {
    FUN_00002898(_DAT_0013a5fc);
    return 0;
  }
  iVar1 = FUN_0004febc(local_18,s_BrandID_0013a5e4,local_14);
  if (iVar1 != 0) {
    *(short *)(param_1 + 0xe) = local_14._0_2_;
  }
  else {
    FUN_00002898(s___ERROR__CopperLanConfigurationB_0013a5fe + 2,s_BrandID_0013a5e4);
  }
  iVar2 = FUN_0004febc(local_18,s_ModelID_0013a5ec,local_14);
  if (iVar2 != 0) {
    *(short *)(param_1 + 0x10) = local_14._0_2_;
  }
  else {
    FUN_00002898(s___ERROR__CopperLanConfigurationB_0013a5fe + 2,s_ModelID_0013a5ec);
  }
  iVar3 = FUN_00049674(local_18,s_Enabled_0013a5f4,param_1 + 4);
  if (iVar3 == 0) {
    FUN_00002898(s___ERROR__CopperLanConfigurationB_0013a5fe + 2,s_Enabled_0013a5f4);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  iVar4 = FUN_0004febc(local_18,s_DuplicateNumber_0013a63c,param_1 + 8);
  if (iVar4 == 0) {
    FUN_00002898(s___ERROR__CopperLanConfigurationB_0013a5fe + 2,s_DuplicateNumber_0013a63c);
  }
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0009175c();
    uVar5 = FUN_001b52ec();
    *(undefined4 *)(param_1 + 8) = uVar5;
    FUN_0004ffa4(local_18,s_DuplicateNumber_0013a63c,uVar5);
  }
  iVar6 = FUN_0004febc(local_18,s_DuplicateMode_0013a64c,local_14);
  if (iVar6 != 0) {
    *(undefined1 *)(param_1 + 0xc) = local_14[0];
  }
  else {
    FUN_00002898(s___ERROR__CopperLanConfigurationB_0013a5fe + 2,s_DuplicateMode_0013a64c);
  }
  iVar7 = FUN_00048bd4(local_18,s_BrandName_0013a65c,param_1 + 0x14);
  if (iVar7 == 0) {
    FUN_00002898(s___ERROR__CopperLanConfigurationB_0013a5fe + 2,s_BrandName_0013a65c);
  }
  iVar8 = FUN_00048bd4(local_18,s_Contact_0013a668,param_1 + 0x1c);
  if (iVar8 == 0) {
    FUN_00002898(s___ERROR__CopperLanConfigurationB_0013a5fe + 2,s_Contact_0013a668);
  }
  FUN_00046b8c(local_18);
  iVar9 = FUN_00048ba0(s__cfg_Config_Name_0013a670,param_1 + 0x18);
  if (iVar9 == 0) {
    FUN_00002898(s_ERROR__CopperLanConfigurationBas_0013a684);
  }
  else if (iVar8 != 0 &&
           (iVar7 != 0 && (iVar6 != 0 && (iVar4 != 0 && (iVar3 != 0 && (iVar2 != 0 && iVar1 != 0))))
           )) {
    return 1;
  }
  FUN_00002898(DAT_0013a6c4);
  *(undefined1 *)(param_1 + 4) = 0;
  return 0;
}


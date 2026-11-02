// rea decompile_all
// name: FUN_001b5fe8
// address: 0x1b5fe8
// body: available
// range: 0x1b5fe8-0x1b60b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_001b5fe8(undefined4 param_1,char *param_2,undefined4 *param_3,undefined1 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 auStack_2c [8];
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  FUN_00204508(auStack_2c);
  *param_4 = 0;
  uVar1 = FUN_0011a068();
  FUN_001daa48(0,&local_20);
  *param_5 = local_20;
  FUN_00002898(s_ResourceManager__getResourceLoca_001b60b4);
  uVar2 = FUN_000b4964();
  iVar3 = FUN_000b4840(uVar2,s_UserResourceRetrieverService_001b60f4,auStack_2c);
  if (iVar3 == 0) {
    FUN_00002898(DAT_001b6114 + -0x54);
    local_54 = _DAT_001b6118;
    local_50 = 0;
    uVar2 = FUN_00118f64(uVar1,s___Application_001b611a + 2);
    iVar3 = FUN_001194f4(uVar1,uVar2,auStack_58);
    uVar2 = s__x__Bootloader_Second_Level_001b6128._0_4_;
    if (iVar3 == 0) {
      uVar5 = FUN_00118f64(uVar1,s__x__Bootloader_Second_Level_001b6128 + 4);
      iVar3 = FUN_001194f4(uVar1,uVar5,auStack_58);
      if (iVar3 == 0) {
        FUN_00071f44(auStack_58);
        goto LAB_001b60aa;
      }
    }
    *(undefined4 *)param_2 = uVar2;
    *param_3 = local_48;
    FUN_00071f44(auStack_58);
  }
  else {
    iVar4 = (**(code **)(*local_24 + 0x18))(local_24,local_1c,param_3,0);
    iVar3 = DAT_001b6114;
    if (iVar4 == 0) {
      FUN_00002898(s_could_not_load_EFIGS_FFS__d_001b6148,DAT_001b6144);
LAB_001b60aa:
      FUN_000b1228(auStack_2c);
      return 0;
    }
    *(undefined4 *)param_2 = local_1c[0];
    FUN_00002898(iVar3,local_1c[0],*param_3);
  }
  FUN_000b1228(auStack_2c);
  return 1;
}


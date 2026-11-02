// rea decompile_all
// name: FUN_000490b4
// address: 0x490b4
// body: available
// range: 0x490b4-0x49157 inclusive
// range: 0x4925c-0x4934b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000490b4(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_r3;
  int local_10;
  
  local_10 = in_r3;
  if (*_DAT_00049158 == '\0') {
    FUN_00013244(s_Configuration_from_RAM_not_suppo_0004934c);
  }
  else {
    FUN_00013244(s____Configuration_from_FLASH_00049159 + 3);
    iVar4 = FUN_001db900(s_AEnCERROR__Could_not_read_attrNa_00049178._0_4_,&local_10);
    if (iVar4 == 0) {
      *DAT_00049374 = local_10;
    }
    else {
      FUN_00013244(s_AEnCERROR__Could_not_read_attrNa_00049178 + 4);
    }
    iVar4 = FUN_001db900(DAT_000491b8,&local_10);
    piVar1 = _DAT_000491bc;
    if (iVar4 == 0) {
      *_DAT_000491bc = local_10;
    }
    else {
      FUN_00013244();
    }
    iVar4 = FUN_001db900(DAT_000491f8,&local_10);
    piVar2 = _DAT_000491fc;
    if (iVar4 == 0) {
      *DAT_00049378 = local_10;
      *piVar2 = local_10 << 1;
    }
    else {
      FUN_00013244(s____ERROR__Could_not_read_flashSe_000491fd + 3);
    }
    iVar4 = FUN_001da98c(0,*piVar1,*piVar2);
    if (iVar4 != 0) {
      FUN_00013244(s_ERROR__Could_not_add_r_w_area_in_00049234);
      return 1;
    }
    iVar5 = FUN_001f01c4(DAT_0004937c,1);
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar4 = FUN_00055784(iVar5,0x40);
    }
    uVar3 = s__C__ERROR__Could_not_allocate_co_00049380._0_4_;
    *(int *)s__C__ERROR__Could_not_allocate_co_00049380._0_4_ = iVar4;
    if (iVar4 == 0) {
      FUN_00013244(s__C__ERROR__Could_not_allocate_co_00049380 + 4);
      return 2;
    }
    iVar4 = FUN_000530c8();
    if ((iVar4 == 0) && (iVar4 = FUN_000530c8(*(undefined4 *)uVar3), iVar4 == 0)) {
      iVar4 = FUN_00054e54(*(undefined4 *)uVar3);
      if (iVar4 == 0) {
        FUN_00013244(s_ERROR__Could_not_program_factory_000493b4);
      }
      FUN_0003fe6c(s_New_factory_configuration_000493e4);
    }
    iVar4 = FUN_000552b4(*(undefined4 *)uVar3);
    if (iVar4 == 0) {
      iVar4 = FUN_00054e54(*(undefined4 *)uVar3);
      if (iVar4 == 0) {
        FUN_00013244(s_ERROR__Could_not_program_factory_000493b4);
      }
      iVar4 = FUN_000549d4(*(undefined4 *)uVar3);
      if (iVar4 == 0) {
        FUN_00013244(s_ERROR__Could_not_erase_user_conf_00049400);
      }
      FUN_0003fe6c(s_Configuration_check_failed_0004942c);
    }
  }
  return 0;
}


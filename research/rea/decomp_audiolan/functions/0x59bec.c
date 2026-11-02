// rea decompile_all
// name: FUN_00059bec
// address: 0x59bec
// body: available
// range: 0x59bec-0x59e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00059bec(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uStack_2c;
  uint *puStack_28;
  char *apcStack_24 [2];
  
  iVar2 = 4;
  if (param_3 != 0) {
    iVar1 = FUN_00003960(*param_2,&DAT_00059e04);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x14) != '\0') {
        FUN_000028a4(s_disable_MMU_check_00059e44);
        *(undefined1 *)(param_1 + 0x14) = 0;
        return 0;
      }
      FUN_000028a4(s_enable_MMU_check_00059e58);
      *(undefined1 *)(param_1 + 0x14) = 1;
      return 0;
    }
    iVar1 = FUN_00003960(*param_2,&DAT_00059e08);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x15) != '\0') {
        FUN_000028a4(s_quiet_mode_enabled_00059e6c);
        *(undefined1 *)(param_1 + 0x15) = 0;
        return 0;
      }
      FUN_000028a4(s_verbose_mode_enabled_00059e80);
      *(undefined1 *)(param_1 + 0x15) = 1;
      return 0;
    }
  }
  iVar1 = FUN_001ac85c(param_2,param_3,2,_DAT_00059e0c);
  if (iVar1 != 0) {
    return 2;
  }
  if (2 < param_3) {
    apcStack_24[0] = (char *)0x0;
    iVar1 = FUN_0017dda8(param_2,param_3,2,apcStack_24);
    if (iVar1 == 0) {
      return 6;
    }
    if (*apcStack_24[0] == 'b') {
      iVar2 = 1;
    }
    else if (*apcStack_24[0] == 'h') {
      iVar2 = 2;
    }
  }
  iVar1 = FUN_0017de98(param_2,param_3,0,&puStack_28);
  if ((iVar1 != 0) && (iVar1 = FUN_0017de98(param_2,param_3,1,&uStack_2c), iVar1 != 0)) {
    if ((*(char *)(param_1 + 0x14) != '\0') && (iVar1 = FUN_0018a474(puStack_28), iVar1 == 0)) {
      FUN_000028a4(s_access_denied_by_MMU_00059e98);
      return 0;
    }
    if (iVar2 == 1) {
      *(char *)puStack_28 = (char)uStack_2c;
      uStack_2c = uStack_2c & 0xff;
    }
    else if (iVar2 == 2) {
      *(short *)puStack_28 = (short)uStack_2c;
      uStack_2c = uStack_2c & 0xffff;
    }
    else {
      *puStack_28 = uStack_2c;
    }
    if (*(char *)(param_1 + 0x15) == '\0') {
      FUN_000028a4(s_Address_0x_08x_set_to_value_0x_0_00059eb0,puStack_28,uStack_2c,iVar2);
    }
    return 0;
  }
  return 6;
}


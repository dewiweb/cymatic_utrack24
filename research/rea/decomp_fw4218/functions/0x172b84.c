// rea decompile_all
// name: FUN_00172b84
// address: 0x172b84
// body: available
// range: 0x172b84-0x172c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00172b84(undefined4 param_1,char *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = FUN_00172e00(param_1,*(uint *)(_DAT_00172c14 + 0x20) & 0xff,&local_18,2);
  FUN_00002898(s____Byte_0__x_and_Byte_1__x_00172c16 + 2,local_18 & 0xff,local_18._1_1_);
  if (iVar1 == 0) {
    FUN_00002898(s_MADI__getMadiLock_Status_Registe_00172c5c);
    uVar3 = 0;
  }
  else {
    *param_2 = (char)((int)(local_18 >> 8 & 2) >> 1);
    if (*param_2 == '\0') {
      pcVar2 = s_not_locked_00172c3c;
    }
    else {
      pcVar2 = s_locked_00172c34;
    }
    FUN_00002898(s_Madi_lock_is__s_00172c48,pcVar2);
    uVar3 = 1;
  }
  return uVar3;
}


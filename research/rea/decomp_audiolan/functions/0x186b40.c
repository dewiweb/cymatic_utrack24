// rea decompile_all
// name: FUN_00186b40
// address: 0x186b40
// body: available
// range: 0x186b40-0x186c79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00186b40(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_24;
  int local_20;
  undefined4 local_1c [2];
  
  local_20 = 0;
  local_1c[0] = 0;
  if (param_3 == 0) {
    return -2;
  }
  if ((param_2 < 1) || (*(int *)(param_3 + 8) == 0)) {
    FUN_001a52e0(param_3);
    return -2;
  }
  FUN_00171fdc(param_1,param_2,local_1c,&local_20);
  if (local_20 == 0) {
    FUN_001a52e0(param_3);
    return -6;
  }
  local_24 = 0;
  iVar2 = FUN_001a6f04(*(undefined4 *)(param_3 + 8),s_INVITE_00186c7c);
  if (iVar2 == 0) {
    local_24 = FUN_00174584(local_1c[0],local_20);
  }
  else {
    local_24 = FUN_0017477e(local_1c[0],local_20,*(undefined4 *)(param_3 + 8));
  }
  if (local_24 != 0) {
    iVar2 = FUN_001a6f04(*(undefined4 *)(param_3 + 8),s_INVITE_00186c7c);
    if (iVar2 == 0) {
      cVar1 = *(char *)(local_24 + 0x2c);
      if ((((cVar1 != '\x04') && (cVar1 != '\t')) && (cVar1 != '\b')) && (cVar1 != '\x03'))
      goto LAB_00186bf2;
    }
    else {
      cVar1 = *(char *)(local_24 + 0x2c);
      if (((cVar1 != '\x0e') && (cVar1 != '\x13')) && ((cVar1 != '\r' && (cVar1 != '\x12')))) {
LAB_00186bf2:
        FUN_001a52e0(param_3);
        return -3;
      }
    }
  }
  local_24 = 0;
  iVar2 = FUN_001a6f04(*(undefined4 *)(param_3 + 8),s_INVITE_00186c7c);
  if (iVar2 == 0) {
    iVar2 = FUN_0017994c(param_1,&local_24,0,*(undefined4 *)(param_1 + 0xa4),param_3);
  }
  else {
    iVar2 = FUN_0017994c(param_1,&local_24,2,*(undefined4 *)(param_1 + 0xa4),param_3);
  }
  if (iVar2 == 0) {
    FUN_001a4a80(*(undefined4 *)(local_20 + 0x2c),local_24,0);
    iVar2 = FUN_001a688c(param_3);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(local_24 + 4);
    FUN_001a77d8(local_24,local_1c[0]);
    FUN_001a77ee(local_24,local_20);
    FUN_001a7216(local_24,iVar2);
    FUN_00179b24(param_1);
    return 0;
  }
  FUN_001a52e0(param_3);
  return iVar2;
}


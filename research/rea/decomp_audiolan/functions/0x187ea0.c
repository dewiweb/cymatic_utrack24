// rea decompile_all
// name: FUN_00187ea0
// address: 0x187ea0
// body: available
// range: 0x187ea0-0x187f71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00187ea0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 0;
  if (param_2 < 1) {
    return -2;
  }
  FUN_001794d8(param_1,param_2,&local_18,&local_14);
  if (local_14 != 0) {
    local_1c = 0;
    local_1c = FUN_001746cc(local_18);
    if (local_1c != 0) {
      cVar1 = *(char *)(local_1c + 0x2c);
      if ((((cVar1 != '\x0e') && (cVar1 != '\x13')) && (cVar1 != '\r')) && (cVar1 != '\x12')) {
        FUN_001a52e0(param_3);
        return -3;
      }
      local_1c = 0;
    }
    iVar2 = FUN_0017994c(param_1,&local_1c,2,*(undefined4 *)(param_1 + 0xa4),param_3);
    if (iVar2 != 0) {
      FUN_001a52e0(param_3);
      return iVar2;
    }
    *(undefined4 *)(local_18 + 0xc) = 0xe10;
    FUN_00179838(local_18,param_3);
    FUN_001a4a80(*(undefined4 *)(local_14 + 0x2c),local_1c,0);
    iVar2 = FUN_001a688c(param_3);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(local_1c + 4);
    FUN_001a781a(local_1c,local_18);
    FUN_001a77ee(local_1c,local_14);
    FUN_001a7216(local_1c,iVar2);
    FUN_00179b24(param_1);
    return 0;
  }
  FUN_001a52e0(param_3);
  return -6;
}


// rea decompile_all
// name: FUN_00075a08
// address: 0x75a08
// body: available
// range: 0x75a08-0x75b37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00075a08(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 1000;
  iVar2 = 0;
  if (param_3 == 0) {
    return 6;
  }
  iVar1 = FUN_00003570(param_2[param_3 - 1],&DAT_00075b38,2);
  if (iVar1 == 0) {
    if (*(char *)(param_2[param_3 - 1] + 2) != '\0') {
      iVar3 = FUN_0000317c();
      iVar3 = iVar3 * 1000;
    }
    param_3 = param_3 - 1;
    iVar2 = 1;
    if (param_3 == 0) {
      return 6;
    }
  }
  iVar1 = FUN_00003960(*param_2,&DAT_00075b3c);
  if (iVar1 == 0) {
    uVar4 = 0;
    if (1 < param_3) {
      uVar4 = FUN_0000317c(param_2[1]);
    }
    if (iVar2 == 0) {
      if ((2 < param_3) && (iVar3 = FUN_00003960(param_2[2],s_reset_00075b4c), iVar3 == 0)) {
        FUN_001ab988(uVar4);
        return 0;
      }
    }
    else {
      FUN_001ab988(uVar4);
      FUN_0017b9f8(iVar3);
    }
    FUN_001ac970(iVar2);
    FUN_001acd0c(uVar4,iVar2);
  }
  else {
    iVar3 = FUN_00003960(*param_2,&DAT_00075b44);
    if (iVar3 == 0) {
      FUN_001ada5c(iVar2);
    }
    else {
      iVar3 = FUN_00003960(*param_2,&DAT_00075b48);
      if (iVar3 != 0) {
        return 6;
      }
      FUN_001ada4c();
    }
  }
  return 0;
}


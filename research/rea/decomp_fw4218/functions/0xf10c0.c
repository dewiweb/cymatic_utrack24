// rea decompile_all
// name: FUN_000f10c0
// address: 0xf10c0
// body: available
// range: 0xf10c0-0xf117b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000f10c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  if (((*(char *)(param_1 + 0x38) != '\0') || (iVar1 = FUN_001c0cb4(param_2), iVar1 != 0)) ||
     (iVar1 = FUN_001c0b3c(param_2), 0x100 < iVar1)) {
    return 0;
  }
  FUN_00079e00(auStack_58,param_2,0);
  FUN_001b3cd8(auStack_20,auStack_58);
  FUN_001ab1a2(param_1 + 0x1c,auStack_20);
  FUN_001aafac(auStack_20);
  iVar1 = FUN_001c0cb4(param_1 + 0x1c);
  if ((iVar1 == 0) && (iVar1 = FUN_0011c364(), iVar1 != 0)) {
    FUN_0013879c(auStack_30);
    iVar2 = FUN_0011bc9c(iVar1,auStack_58,auStack_30);
    if ((iVar2 != 0) && (iVar1 = FUN_0011c034(iVar1,auStack_30,param_1), iVar1 != 0)) {
      FUN_001387bc(param_1 + 0x2c,auStack_30);
      *(undefined1 *)(param_1 + 0x38) = 1;
      FUN_001387a8(auStack_30);
      FUN_00079e26(auStack_58);
      return 1;
    }
    FUN_001387a8(auStack_30);
  }
  FUN_00079e26(auStack_58);
  return 0;
}


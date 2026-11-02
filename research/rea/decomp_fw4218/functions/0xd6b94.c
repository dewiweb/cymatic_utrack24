// rea decompile_all
// name: FUN_000d6b94
// address: 0xd6b94
// body: available
// range: 0xd6b94-0xd6bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_000d6b94(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_0013565c(&uStack_18);
  iVar1 = FUN_001c0d74(&uStack_18);
  if ((((iVar1 != 0) && (iVar1 = FUN_00135628(&uStack_18,1), iVar1 != 0)) &&
      (iVar1 = FUN_00135642(&uStack_18,0), iVar1 != 0)) &&
     (iVar1 = FUN_000a1ba6(&uStack_18,0x12), iVar1 != 0)) {
    iVar1 = FUN_000e8928(param_1 + 0x18,&uStack_18);
    FUN_000a1c14(&uStack_18);
    return CONCAT44(uStack_18,(uint)(iVar1 == 0));
  }
  FUN_000a1c14(&uStack_18);
  return (ulonglong)uStack_18 << 0x20;
}


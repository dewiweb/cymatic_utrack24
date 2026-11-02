// rea decompile_all
// name: FUN_000f4e84
// address: 0xf4e84
// body: available
// range: 0xf4e84-0xf4f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000f4e84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*DAT_000f4f20 == 0) {
    uStack_10 = param_3;
    uStack_c = param_4;
    FUN_001a2920(&uStack_10,DAT_000f4f24);
    if (*DAT_000f4f20 == 0) {
      iVar1 = FUN_001c6b14(1000,DAT_000f4f28);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_000f540c(iVar1);
      }
      *DAT_000f4f20 = iVar1;
    }
    if (*DAT_000f4f20 == 0) {
      FUN_0003fe6c(DAT_000f4f2c);
    }
    FUN_001a2938(&uStack_10);
    iVar1 = *DAT_000f4f20;
  }
  else {
    iVar1 = *DAT_000f4f20;
  }
  return iVar1;
}


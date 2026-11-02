// rea decompile_all
// name: FUN_001a48c0
// address: 0x1a48c0
// body: available
// range: 0x1a48c0-0x1a492d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a48c0(int *param_1)

{
  int iVar1;
  
  if (*DAT_001a4930 == 0) {
    *DAT_001a4930 = 1;
    FUN_001a9430();
  }
  if ((code *)*DAT_001a4934 == entry) {
    iVar1 = FUN_0019b388(0x15c);
  }
  else {
    iVar1 = (*(code *)*DAT_001a4934)(0x15c);
  }
  *param_1 = iVar1;
  if (iVar1 != 0) {
    FUN_000038a0(iVar1,0x15c);
    FUN_001a4c50(*param_1 + 0x20);
    FUN_001a4c50(*param_1 + 0x28);
    FUN_001a4c50(*param_1 + 0x30);
    FUN_001a4c50(*param_1 + 0x38);
    FUN_001a4c50(*param_1 + 0x40);
    *(undefined4 *)(*param_1 + 0x1c) = 1;
    return 0;
  }
  return 0xfffffffc;
}


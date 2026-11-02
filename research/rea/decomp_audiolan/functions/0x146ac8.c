// rea decompile_all
// name: FUN_00146ac8
// address: 0x146ac8
// body: available
// range: 0x146ac8-0x146b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00146ac8(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x15c) == '\0') {
    iVar1 = FUN_000faf98(param_1 + 0x48,param_1,1,param_1 + 0x460);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x68) = 0xfa;
      FUN_000fb0dc(param_1 + 0x48);
      FUN_001339ac(param_1 + 0x8a4,param_1);
      FUN_00148710(param_1,1);
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      *(undefined1 *)(param_1 + 0x15c) = 1;
    }
    return iVar1;
  }
  return 1;
}


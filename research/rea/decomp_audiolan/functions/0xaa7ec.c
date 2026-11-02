// rea decompile_all
// name: FUN_000aa7ec
// address: 0xaa7ec
// body: available
// range: 0xaa7ec-0xaa85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000aa7ec(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 3;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xf54) = 0x400;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xf00) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xf04) = 0;
    return;
  }
  iVar1 = FUN_00075760();
  iVar1 = FUN_00006158(iVar1 << 1,*(undefined4 *)(param_1 + 0x84));
  *(int *)(*(int *)(param_1 + 4) + 8) = iVar1 + -2;
  **(undefined4 **)(param_1 + 4) = 3;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xf50) = 0x400;
  return;
}


// rea decompile_all
// name: FUN_000bb2b0
// address: 0xbb2b0
// body: available
// range: 0xbb2b0-0xbb337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000bb2b0(int param_1,undefined4 *param_2)

{
  int aiStack_20 [2];
  undefined1 auStack_18 [16];
  
  if (*(char *)(param_1 + 0x289) == '\0') {
    *(undefined4 *)(param_1 + 0x284) = *param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x280) = *param_2;
  FUN_0018e4b4(param_1 + 0x280,auStack_18,0x10);
  aiStack_20[0] = *(int *)(*(int *)(param_1 + 0x270) + 8);
  if (aiStack_20[0] != *(int *)(param_1 + 0x270)) {
    do {
      (**(code **)(**(int **)(aiStack_20[0] + 0x10) + 8))
                (*(int **)(aiStack_20[0] + 0x10),auStack_18);
      FUN_001c03bc(aiStack_20);
    } while (aiStack_20[0] != *(int *)(param_1 + 0x270));
    return;
  }
  return;
}


// rea decompile_all
// name: FUN_0009ba3c
// address: 0x9ba3c
// body: available
// range: 0x9ba3c-0x9baeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9bae8 to 0x9ac58 FUN_0009ac58 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0009ba3c(int param_1)

{
  FUN_0005f148();
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(int **)(param_1 + 0x1ec) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1ec) + 4))();
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  if (*(int **)(param_1 + 0x1f0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1f0) + 4))();
    *(undefined4 *)(param_1 + 0x1f0) = 0;
  }
  if (*(int **)(param_1 + 0x1e8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1e8) + 4))();
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  if (*(int **)(param_1 + 500) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 500) + 4))();
    *(undefined4 *)(param_1 + 500) = 0;
  }
  if (*(int *)(param_1 + 0x218) != 0) {
    FUN_0005f2d8(param_1);
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  FUN_0009b6fc(param_1);
  FUN_0009ac58(param_1);
  return;
}


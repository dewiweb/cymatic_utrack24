// rea decompile_all
// name: FUN_001ed7e4
// address: 0x1ed7e4
// body: available
// range: 0x1ed7e4-0x1ed841 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ed7fa to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1ed812 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1ed828 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001ed7e4(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00013290(DAT_001ed850,DAT_001ed84c,DAT_001ed848,DAT_001ed844);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if (*(int *)(param_1 + 0x2c) == DAT_001ed854) {
    FUN_00013290(DAT_001ed850,DAT_001ed85c,DAT_001ed858,DAT_001ed844);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if (*(int *)(param_1 + 0x6c) == DAT_001ed854) {
    FUN_00013290(DAT_001ed850,DAT_001ed864,DAT_001ed860,DAT_001ed844);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  FUN_001f9344(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_001ecfbc(6,param_1);
  return;
}


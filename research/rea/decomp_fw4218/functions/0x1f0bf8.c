// rea decompile_all
// name: FUN_001f0bf8
// address: 0x1f0bf8
// body: available
// range: 0x1f0bf8-0x1f0c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f0c2c to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f0bf8(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    FUN_00013290(DAT_001f0c54,DAT_001f0c5c,DAT_001f0c58,DAT_001f0c48);
    return;
  }
  iVar1 = *param_1;
  while (iVar1 != 0) {
    *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + *(short *)(param_2 + 8);
    param_1 = (int *)*param_1;
    iVar1 = *param_1;
  }
  if (*(short *)(param_1 + 2) == *(short *)((int)param_1 + 10)) {
    *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + *(short *)(param_2 + 8);
    *param_1 = param_2;
    return;
  }
  FUN_00013290(DAT_001f0c54,DAT_001f0c50,DAT_001f0c4c,DAT_001f0c48);
                    /* WARNING: Subroutine does not return */
  FUN_00003538();
}


// rea decompile_all
// name: FUN_001d0658
// address: 0x1d0658
// body: available
// range: 0x1d0658-0x1d06b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d06b0 to 0x1cfeb8 FUN_001cfeb8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d0658(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0x3c) == 4) {
    thunk_EXT_FUN_0040001c();
    *DAT_001d06b4 = *DAT_001d06b4 + 1;
    thunk_EXT_FUN_00400034();
    FUN_001cfeb8(param_1);
    return;
  }
  thunk_EXT_FUN_0040001c();
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x74);
  thunk_EXT_FUN_00400034();
  if (UNRECOVERED_JUMPTABLE == entry) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001d068c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


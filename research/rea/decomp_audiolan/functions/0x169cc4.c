// rea decompile_all
// name: FUN_00169cc4
// address: 0x169cc4
// body: available
// range: 0x169cc4-0x169d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x169d20 to 0x135044 FUN_00135044 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00169cc4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  if (param_3 == 0x84 || param_3 == 0x87) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    return;
  }
  if (param_3 == 0x81) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  FUN_00136ec4(param_1 + 0x9c,param_4,param_6,param_5);
  if (param_3 == 0x81) {
    FUN_00135044(*(undefined4 *)(param_1 + 0x40),
                 *(int *)(*(int *)(param_1 + -0x44) + -0x14) + param_1 + -0x44,5);
    return;
  }
  return;
}


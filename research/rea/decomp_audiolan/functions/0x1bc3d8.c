// rea decompile_all
// name: FUN_001bc3d8
// address: 0x1bc3d8
// body: available
// range: 0x1bc3d8-0x1bc417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bc414 to 0x1a43c <EXTERNAL>::thunk_EXT_FUN_0040010c (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001bc3d8(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_1 + 8);
  piVar2 = (int *)(*(int *)(param_1 + 4) + ((int)*(uint *)(param_1 + 0xc) >> 1));
  if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *piVar2);
  }
  uVar1 = (*pcVar3)(piVar2,*(undefined2 *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  thunk_EXT_FUN_0040010c(param_1 + 0x18);
  return;
}


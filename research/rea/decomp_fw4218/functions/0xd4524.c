// rea decompile_all
// name: FUN_000d4524
// address: 0xd4524
// body: available
// range: 0xd4524-0xd45b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d4524(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_000d45b8;
  *param_1 = DAT_000d45b8;
  param_1[0x1fce] = iVar1 + 0x44;
  param_1[0x1fcf] = iVar1 + 0x58;
  FUN_001213f8(param_1);
  iVar1 = DAT_000d45bc;
  FUN_00071c88((int)param_1 + DAT_000d45bc);
  iVar2 = FUN_00078968((int)param_1 + DAT_000d45c0);
  iVar2 = FUN_000a1a90(iVar2 + -0x1c);
  iVar2 = FUN_00236dee(iVar2 + DAT_000d45c4 + DAT_000d45c0 + -0x38);
  iVar2 = FUN_00079844(iVar2 + DAT_000d45c4 + DAT_000d45c0 + -0x20);
  iVar2 = iVar2 + DAT_000d45c4 + DAT_000d45c0 + -0x40;
  FUN_001f01ac(iVar2);
  iVar2 = FUN_000b1228(iVar2 + DAT_000d45c4 + DAT_000d45c0 + -0x28);
  iVar2 = FUN_000710f8(iVar2 + DAT_000d45c4 + 0x50 + iVar1);
  FUN_001214a0(iVar2 - iVar1);
  return;
}


// rea decompile_all
// name: FUN_000c99b0
// address: 0xc99b0
// body: available
// range: 0xc99b0-0xc9a47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c99b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = DAT_000c9a48;
  FUN_000c90d8(param_1);
  iVar1 = FUN_0012c4a8(param_1 + 0x94);
  iVar1 = FUN_000d6400(iVar1 + -0x18);
  iVar1 = FUN_000d6498(iVar1 + -0x30);
  iVar1 = FUN_000c7eb8(iVar1 + -0x1c);
  iVar1 = FUN_000c7f58(iVar1 + -0x38);
  iVar1 = FUN_000eacc8(iVar1 + -0x28);
  iVar1 = FUN_001c156c(iVar1 + -0x1c);
  iVar1 = FUN_00122828(iVar1 + -0x24);
  iVar1 = FUN_00122588(iVar1 + -0x58);
  uVar2 = FUN_00057758(iVar1 + -0xf4);
  return uVar2;
}


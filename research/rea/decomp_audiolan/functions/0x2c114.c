// rea decompile_all
// name: FUN_0002c114
// address: 0x2c114
// body: available
// range: 0x2c114-0x2c16b inclusive
// range: 0x2c1e2-0x2c1eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002c114(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r7;
  
  FUN_00029fda(4);
  uVar2 = _DAT_0002c250;
  iVar1 = FUN_00030b90(_DAT_0002c250);
  if (iVar1 != 0) {
    FUN_00029e6c(uVar2);
    FUN_00029eac(6,s___MM__PRIORITY2_management_messa_0002c396 + 2);
  }
  FUN_000358f6(*(undefined2 *)(unaff_r7 + 0x1e));
  FUN_000301c0();
  iVar1 = FUN_00030b90(uVar2);
  if (iVar1 == 0) {
    FUN_00030aa4();
    return;
  }
  uVar2 = FUN_00029e6c(uVar2);
  FUN_0002a2ae(uVar2,s_MM__PRIORITY2_response_managemen_0002c3f8);
  return;
}


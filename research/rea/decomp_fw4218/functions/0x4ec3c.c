// rea decompile_all
// name: FUN_0004ec3c
// address: 0x4ec3c
// body: available
// range: 0x4ec3c-0x4eccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0004ec3c(void)

{
  int iVar1;
  
  FUN_00002898(s__0004ecd0);
  iVar1 = FUN_001c6b14(0x630,_DAT_0004ed10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_000f8fcc(iVar1);
  }
  if (iVar1 != 0) {
    FUN_00002898(s__________________________________0004ed44);
    FUN_00002898(s_LibraryVersion___s_0004ed9c,s_uTRACK_24_App__Release__0004ed84);
    FUN_00002898(s_LibraryBuildVersion___s_0004ede4,s_04218__Sep_25_2018_15_19__0004edb8);
    FUN_00002898(s_LibraryCVSTag___s_0004ee2c,s_trunk_04218_0004ee00);
    FUN_00002898(s__________________________________0004ee48);
    FUN_000b054c(iVar1);
  }
  else {
    FUN_00002898(s____Could_NOT_allocate_BeBob_Appl_0004ed11 + 3);
  }
  return iVar1 != 0;
}


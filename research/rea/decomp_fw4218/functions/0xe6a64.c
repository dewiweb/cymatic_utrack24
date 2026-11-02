// rea decompile_all
// name: FUN_000e6a64
// address: 0xe6a64
// body: available
// range: 0xe6a64-0xe6afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000e6a64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00002898(s_TRACE__UIState_IdlePlayer__prepa_000e6afc);
  iVar1 = FUN_000e2cf0(param_1);
  if (iVar1 != 0) {
    FUN_000aa570();
    uVar2 = FUN_000aa88c();
    FUN_000bc410(param_1 + 0x14,3);
    FUN_0008bb88(uVar2,*(undefined4 *)(DAT_000e6b64 + 0x1c),DAT_000e6b64,0);
    FUN_000f4e84();
    uVar2 = FUN_000f4fb4();
    FUN_0006d908(uVar2,3);
    FUN_001a48f0(param_1,0x23,0);
  }
  else {
    FUN_00002898(s_ERROR__All_the_clocks_are_not_re_000e6b3c);
  }
  return iVar1 != 0;
}


// rea decompile_all
// name: FUN_0008a2bc
// address: 0x8a2bc
// body: available
// range: 0x8a2bc-0x8a34f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0008a2bc(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = _DAT_0008a350;
  iVar2 = *_DAT_0008a350;
  if (iVar2 == 0) {
    FUN_000028a4(s_No_timer_created_0008a3a8);
  }
  else {
    FUN_000028a4(s__2s_25s_15s_15s_0008a37c,&DAT_0008a378,&DAT_0008a370,s_remaining__ms__0008a360,
                 s____reInit__ms__0008a351 + 3);
    iVar3 = 1;
    do {
      FUN_000028a4(&DAT_0008a390,iVar3);
      FUN_000028a4(&DAT_0008a394,*(undefined4 *)(iVar2 + 4));
      FUN_000028a4(s__15ld_0008a39c,*(undefined4 *)(iVar2 + 8));
      FUN_000028a4(s__15ld_0008a39c,*(undefined4 *)(iVar2 + 0xc));
      FUN_000028a4(&DAT_0008a3a4);
      iVar2 = *(int *)(iVar2 + 0x24);
      iVar3 = iVar3 + 1;
    } while (*piVar1 != iVar2);
  }
  return 0;
}


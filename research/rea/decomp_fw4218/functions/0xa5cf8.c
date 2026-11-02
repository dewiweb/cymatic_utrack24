// rea decompile_all
// name: FUN_000a5cf8
// address: 0xa5cf8
// body: available
// range: 0xa5cf8-0xa5d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a5cf8(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = _DAT_000a5d8c;
  iVar2 = *_DAT_000a5d8c;
  if (iVar2 == 0) {
    FUN_00002898(s_No_timer_created_000a5de4);
  }
  else {
    FUN_00002898(s__2s_25s_15s_15s_000a5db8,&DAT_000a5db4,&DAT_000a5dac,s_remaining__ms__000a5d9c,
                 s_P__reInit__ms__000a5d8d + 3);
    iVar3 = 1;
    do {
      FUN_00002898(&DAT_000a5dcc,iVar3);
      FUN_00002898(&DAT_000a5dd0,*(undefined4 *)(iVar2 + 4));
      FUN_00002898(s__15ld_000a5dd8,*(undefined4 *)(iVar2 + 8));
      FUN_00002898(s__15ld_000a5dd8,*(undefined4 *)(iVar2 + 0xc));
      FUN_00002898(&DAT_000a5de0);
      iVar2 = *(int *)(iVar2 + 0x24);
      iVar3 = iVar3 + 1;
    } while (*piVar1 != iVar2);
  }
  return 0;
}


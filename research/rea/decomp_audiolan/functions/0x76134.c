// rea decompile_all
// name: FUN_00076134
// address: 0x76134
// body: available
// range: 0x76134-0x7623b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00076134(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = _DAT_0007623c;
  iVar5 = 0;
  iVar3 = *_DAT_0007623c;
  iVar6 = 0;
  if (iVar3 == 0) {
    FUN_000028a4(s_No_block_pool_created__000762dc);
  }
  else {
    FUN_000028a4(s__2s__42s__7s__7s__8s__9s__9s__10_0007627c,&DAT_00076278,&DAT_00076270,
                 s_blocks_00076268,s_avail_00076260,s_bSize_00076258,&DAT_00076250,s_total_00076248,
                 s____start_0007623d + 3);
    iVar4 = 1;
    do {
      FUN_000028a4(&DAT_000762a0,iVar4);
      FUN_000028a4(s__42s_000762a8,*(undefined4 *)(iVar3 + 4));
      FUN_000028a4(s__7ld_000762b0,*(undefined4 *)(iVar3 + 0x10));
      FUN_000028a4(s__7ld_000762b0,*(undefined4 *)(iVar3 + 8));
      FUN_000028a4(s__8ld_000762b8,*(undefined4 *)(iVar3 + 0x20));
      iVar2 = *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x20) * *(int *)(iVar3 + 8);
      iVar5 = iVar5 + iVar2;
      FUN_000028a4(s__9ld_000762c0,iVar2);
      FUN_000028a4(s__9ld_000762c0,*(undefined4 *)(iVar3 + 0x1c));
      iVar6 = iVar6 + *(int *)(iVar3 + 0x1c);
      FUN_000028a4(s_0x_08x_000762c8,*(undefined4 *)(iVar3 + 0x18));
      iVar3 = *(int *)(iVar3 + 0x2c);
      iVar4 = iVar4 + 1;
    } while (*piVar1 != iVar3);
    FUN_000028a4(s__80ld__9ld_000762d0,iVar5,iVar6);
  }
  return 0;
}


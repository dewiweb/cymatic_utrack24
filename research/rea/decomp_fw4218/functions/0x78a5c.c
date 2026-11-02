// rea decompile_all
// name: FUN_00078a5c
// address: 0x78a5c
// body: available
// range: 0x78a5c-0x78b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00078a5c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = _DAT_00078b64;
  iVar5 = 0;
  iVar3 = *_DAT_00078b64;
  iVar6 = 0;
  if (iVar3 == 0) {
    FUN_00002898(s_No_block_pool_created__00078c04);
  }
  else {
    FUN_00002898(s__2s__42s__7s__7s__8s__9s__9s__10_00078ba4,&DAT_00078ba0,&DAT_00078b98,
                 s_blocks_00078b90,s_avail_00078b88,s_bSize_00078b80,&DAT_00078b78,s_total_00078b70,
                 s_P__start_00078b65 + 3);
    iVar4 = 1;
    do {
      FUN_00002898(&DAT_00078bc8,iVar4);
      FUN_00002898(s__42s_00078bd0,*(undefined4 *)(iVar3 + 4));
      FUN_00002898(s__7ld_00078bd8,*(undefined4 *)(iVar3 + 0x10));
      FUN_00002898(s__7ld_00078bd8,*(undefined4 *)(iVar3 + 8));
      FUN_00002898(s__8ld_00078be0,*(undefined4 *)(iVar3 + 0x20));
      iVar2 = *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x20) * *(int *)(iVar3 + 8);
      iVar5 = iVar5 + iVar2;
      FUN_00002898(s__9ld_00078be8,iVar2);
      FUN_00002898(s__9ld_00078be8,*(undefined4 *)(iVar3 + 0x1c));
      iVar6 = iVar6 + *(int *)(iVar3 + 0x1c);
      FUN_00002898(s_0x_08x_00078bf0,*(undefined4 *)(iVar3 + 0x18));
      iVar3 = *(int *)(iVar3 + 0x2c);
      iVar4 = iVar4 + 1;
    } while (*piVar1 != iVar3);
    FUN_00002898(s__80ld__9ld_00078bf8,iVar5,iVar6);
  }
  return 0;
}


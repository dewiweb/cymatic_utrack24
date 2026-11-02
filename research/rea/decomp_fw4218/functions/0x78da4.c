// rea decompile_all
// name: FUN_00078da4
// address: 0x78da4
// body: available
// range: 0x78da4-0x78e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00078da4(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = _DAT_00078e5c;
  iVar2 = *_DAT_00078e5c;
  if (iVar2 == 0) {
    FUN_00002898(s_No_event_flags_group_created__00078e98);
  }
  else {
    FUN_00002898(s__2s_25s_10s_00078e74,&DAT_00078e70,&DAT_00078e68,s_P__threads_00078e5d + 3);
    iVar4 = 1;
    do {
      FUN_00002898(&DAT_00078e84,iVar4);
      FUN_00002898(&DAT_00078e88,*(undefined4 *)(iVar2 + 4));
      if (*(int *)(iVar2 + 0x10) == 0) {
        FUN_00002898(&DAT_00078ec0,s___00078eb8);
      }
      else {
        FUN_00002898(&DAT_00078e90);
        iVar3 = *(int *)(iVar2 + 0x10);
        do {
          FUN_00002898(&DAT_00078e94,*(undefined4 *)(iVar3 + 0x34));
          iVar3 = *(int *)(iVar3 + 0x7c);
        } while (*(int *)(iVar2 + 0x10) != iVar3);
      }
      FUN_00002898(&LAB_00078ec8);
      iVar2 = *(int *)(iVar2 + 0x18);
      iVar4 = iVar4 + 1;
    } while (*piVar1 != iVar2);
  }
  return 0;
}


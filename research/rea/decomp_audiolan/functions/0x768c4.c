// rea decompile_all
// name: FUN_000768c4
// address: 0x768c4
// body: available
// range: 0x768c4-0x769b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000768c4(void)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = s_8___suspended_000769b8._0_4_;
  iVar4 = *(int *)s_8___suspended_000769b8._0_4_;
  if (iVar4 == 0) {
    FUN_000028a4(s_No_semaphores_created__00076a38);
  }
  else {
    FUN_000028a4(s__3s_30s_4s_20s_20s_000769ec,&DAT_000769e8,&DAT_000769e0,&DAT_000769dc,
                 s_locked_by_000769cc,s_8___suspended_000769b8 + 4);
    iVar6 = 1;
    do {
      FUN_000028a4(&DAT_00076a00,iVar6);
      FUN_000028a4(&DAT_00076a04,*(undefined4 *)(iVar4 + 4));
      FUN_000028a4(&DAT_00076a0c,*(undefined4 *)(iVar4 + 8));
      if (*(int *)(iVar4 + 0x1c) == 0) {
        pcVar3 = s___00076a1c;
        pcVar2 = &DAT_00076a28;
      }
      else {
        pcVar3 = *(char **)(*(int *)(iVar4 + 0x1c) + 0x34);
        pcVar2 = s___20s_00076a14;
      }
      FUN_000028a4(pcVar2,pcVar3);
      if (*(int *)(iVar4 + 0xc) == 0) {
        FUN_000028a4(&DAT_00076a50,s___00076a1c);
      }
      else {
        FUN_000028a4(&DAT_00076a30);
        iVar5 = *(int *)(iVar4 + 0xc);
        do {
          FUN_000028a4(&DAT_00076a34,*(undefined4 *)(iVar5 + 0x34));
          iVar5 = *(int *)(iVar5 + 0x7c);
        } while (*(int *)(iVar4 + 0xc) != iVar5);
      }
      FUN_000028a4(&LAB_00076a58);
      iVar4 = *(int *)(iVar4 + 0x14);
      iVar6 = iVar6 + 1;
    } while (*(int *)uVar1 != iVar4);
  }
  return 0;
}


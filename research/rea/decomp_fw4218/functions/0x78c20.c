// rea decompile_all
// name: FUN_00078c20
// address: 0x78c20
// body: available
// range: 0x78c20-0x78d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00078c20(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = s__P__suspended_00078d10._0_4_;
  iVar3 = *(int *)s__P__suspended_00078d10._0_4_;
  if (iVar3 == 0) {
    FUN_00002898(s_No_events_created__00078d80);
  }
  else {
    FUN_00002898(s__2s_30s_4s_10s_10s_00078d38,&DAT_00078d34,&DAT_00078d2c,&DAT_00078d28,
                 s_reset_00078d20,s__P__suspended_00078d10 + 4);
    iVar5 = 1;
    do {
      FUN_00002898(&DAT_00078d4c,iVar5);
      FUN_00002898(&DAT_00078d50,*(undefined4 *)(iVar3 + 4));
      FUN_00002898(&DAT_00078d58,*(undefined2 *)(iVar3 + 8));
      if (*(short *)(iVar3 + 10) == 1) {
        pcVar2 = &DAT_00078d5c;
      }
      else {
        pcVar2 = s_manual_00078d64;
      }
      FUN_00002898(&DAT_00078d6c,pcVar2);
      if (*(int *)(iVar3 + 0xc) == 0) {
        FUN_00002898(&DAT_00078d6c,s___00078d94);
      }
      else {
        FUN_00002898(&DAT_00078d74);
        iVar4 = *(int *)(iVar3 + 0xc);
        do {
          FUN_00002898(&DAT_00078d78,*(undefined4 *)(iVar4 + 0x34));
          iVar4 = *(int *)(iVar4 + 0x7c);
        } while (*(int *)(iVar3 + 0xc) != iVar4);
      }
      FUN_00002898(&LAB_00078d9c);
      iVar3 = *(int *)(iVar3 + 0x14);
      iVar5 = iVar5 + 1;
    } while (*(int *)uVar1 != iVar3);
  }
  return 0;
}


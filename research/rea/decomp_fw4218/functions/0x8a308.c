// rea decompile_all
// name: FUN_0008a308
// address: 0x8a308
// body: available
// range: 0x8a308-0x8a40f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008a308(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20;
  int iStack_1c;
  
  iVar5 = *(int *)(DAT_0008a410 + 0x34);
  iVar6 = 0;
  if (iVar5 == 0) {
    FUN_00002898(s_No_heaps_created__0008a4b0);
  }
  else {
    FUN_00002898(s__2s_20s_10s_10s_10s_0008a438,&DAT_0008a434,&DAT_0008a42c,&DAT_0008a424,
                 s_avail_0008a41c,&DAT_0008a414);
    iVar3 = 1;
    do {
      iVar1 = FUN_001efad4(iVar5);
      iVar2 = FUN_001ef9c0(iVar5);
      iVar4 = iVar3 + 1;
      FUN_00002898(&DAT_0008a450,iVar3);
      FUN_00002898(&DAT_0008a454,*(undefined4 *)(iVar5 + 0xc));
      FUN_00002898(s__10lu_0008a45c,iVar1);
      FUN_00002898(s__10lu_0008a45c,iVar2);
      iVar6 = iVar6 + (iVar1 - iVar2);
      FUN_00002898(s__10ld_0008a464,iVar1 - iVar2);
      FUN_00002898(&DAT_0008a46c);
      iVar5 = *(int *)(iVar5 + 0x34);
      iVar3 = iVar4;
    } while (iVar5 != 0);
    FUN_001db9a4(&iStack_1c,&local_20);
    FUN_00002898(s__2d_20s_10d_10d_10d_0008a47c,iVar4,s_SmallObj_0008a470,iStack_1c,local_20,
                 iStack_1c - local_20);
    FUN_00002898(s_total_used____39ld_bytes__0008a494,iVar6 - local_20);
  }
  FUN_00044ab0();
  return 0;
}


// rea decompile_all
// name: FUN_00081a08
// address: 0x81a08
// body: available
// range: 0x81a08-0x81b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00081a08(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20;
  int iStack_1c;
  
  iVar5 = *(int *)(DAT_00081b10 + 0x34);
  iVar6 = 0;
  if (iVar5 == 0) {
    FUN_000028a4(s_No_heaps_created__00081bb0);
  }
  else {
    FUN_000028a4(s__2s_20s_10s_10s_10s_00081b38,&DAT_00081b34,&DAT_00081b2c,&DAT_00081b24,
                 s_avail_00081b1c,&DAT_00081b14);
    iVar3 = 1;
    do {
      iVar1 = FUN_001a0118(iVar5);
      iVar2 = FUN_001a0004(iVar5);
      iVar4 = iVar3 + 1;
      FUN_000028a4(&DAT_00081b50,iVar3);
      FUN_000028a4(&DAT_00081b54,*(undefined4 *)(iVar5 + 0xc));
      FUN_000028a4(s__10lu_00081b5c,iVar1);
      FUN_000028a4(s__10lu_00081b5c,iVar2);
      iVar6 = iVar6 + (iVar1 - iVar2);
      FUN_000028a4(s__10ld_00081b64,iVar1 - iVar2);
      FUN_000028a4(&DAT_00081b6c);
      iVar5 = *(int *)(iVar5 + 0x34);
      iVar3 = iVar4;
    } while (iVar5 != 0);
    FUN_0018ae54(&iStack_1c,&local_20);
    FUN_000028a4(s__2d_20s_10d_10d_10d_00081b7c,iVar4,s_SmallObj_00081b70,iStack_1c,local_20,
                 iStack_1c - local_20);
    FUN_000028a4(s_total_used____39ld_bytes__00081b94,iVar6 - local_20);
  }
  FUN_0003fe50();
  return 0;
}


// rea decompile_all
// name: FUN_000426d8
// address: 0x426d8
// body: available
// range: 0x426d8-0x427f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000426d8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 auStack_7c [40];
  undefined1 uStack_54;
  undefined1 auStack_53 [35];
  undefined1 auStack_30 [12];
  
  bVar1 = true;
  FUN_00188860();
  FUN_00188a28(200);
  iVar3 = FUN_00188404(0x30,0,0,0,0,0,0,0,0,0x27,auStack_7c,7,auStack_30);
  iVar2 = _DAT_00042828;
  if (iVar3 == 0) {
    uVar5 = 0;
    do {
      iVar3 = iVar2 + uVar5 * 0x40;
      FUN_00188404(8,0,uVar5 & 0xffff,0x20,iVar3,0,0,0,0,0x27,auStack_7c,0x23,&uStack_54);
      iVar3 = FUN_0000339c(auStack_53,iVar3 + 0x20,0x20);
      if (iVar3 != 0) {
        bVar1 = false;
        FUN_000028a4(s___ECC108_SHA204_key__d_verificat_0004282a + 2,uVar5);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x10);
    if (bVar1) {
      pcVar4 = (char *)0x42858;
      goto LAB_000427e4;
    }
  }
  else {
    FUN_000028a4(s_ECC108_SHA204_info_failed__CHIP_N_000427f8);
  }
  pcVar4 = s_FAILED_0004285c;
LAB_000427e4:
  FUN_000028a4(s_CRYPTO_test__s_00042864,pcVar4);
  return 1;
}


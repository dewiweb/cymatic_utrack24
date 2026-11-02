// rea decompile_all
// name: FUN_000450d8
// address: 0x450d8
// body: available
// range: 0x450d8-0x45183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000450d8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00045184;
  *(undefined4 *)(DAT_00045184 + 0x108) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x10c) = 1;
  *(undefined4 *)(iVar2 + 0x114) = 0;
  iVar1 = FUN_001f01c4(*(undefined4 *)(iVar2 + 0x1d0),1);
  *(int *)(iVar2 + 0x110) = iVar1;
  if (iVar1 == 0) {
    FUN_00002898(s_ERROR__UDPB_Init__Failed_to_Crea_0004519c);
  }
  else {
    FUN_00003c08(iVar1,*(undefined4 *)(iVar2 + 0x1d0),0x32);
    iVar2 = FUN_001cf8e8(iVar2 + 0x114,s__VnmUdpListener_0004518b + 1,_DAT_00045188,0,
                         *(undefined4 *)(iVar2 + 0x110),*(undefined4 *)(iVar2 + 0x1d0),
                         *(undefined4 *)(iVar2 + 0x1cc),*(undefined4 *)(iVar2 + 0x1cc),1,1);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_00002898(s_ERROR__UDPB_Init__Failed_to_Crea_0004519c);
    FUN_0004639c();
  }
  return 1;
}


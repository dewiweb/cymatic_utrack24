// rea decompile_all
// name: FUN_0022c068
// address: 0x22c068
// body: available
// range: 0x22c068-0x22c0cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0022c068(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar4 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  do {
    iVar2 = FUN_00172670(param_2,iVar4 + 0x40);
    bVar5 = iVar2 < 0;
    bVar6 = iVar2 == 0;
    if (0 < iVar2) {
      iVar2 = 1;
    }
    if (bVar5) {
      iVar2 = 0;
    }
    if (bVar6) {
      return iVar4;
    }
    iVar3 = *(int *)(iVar4 + iVar2 * 4 + 0x15c);
    if (iVar3 == 0) {
      return 0;
    }
    bVar1 = 0;
    if (iVar2 != 0) {
      bVar1 = *(byte *)(iVar4 + 0x164);
    }
    iVar4 = iVar3;
  } while (iVar2 == 0 || (bVar1 & 0x80) == 0);
  return 0;
}


// rea decompile_all
// name: FUN_000c15ec
// address: 0xc15ec
// body: available
// range: 0xc15ec-0xc170b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000c15ec(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x398) == 0) {
    iVar1 = FUN_001f01c4(0x54,1);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_001ad814();
      FUN_001ad784(iVar2,1,8,1);
    }
    *(int *)(param_1 + 0x398) = iVar2;
    if (iVar2 == 0) {
      return false;
    }
  }
  if (*(int *)(param_1 + 0x394) == 0) {
    iVar1 = FUN_001f01c4(0x54,1);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_001ad814();
      FUN_001ad784(iVar2,1,8,1);
    }
    *(int *)(param_1 + 0x394) = iVar2;
    if (iVar2 == 0) {
      return false;
    }
  }
  iVar2 = FUN_00060cd4(param_1 + 0x39c,DAT_000c1714,8);
  if (iVar2 != 0) {
    iVar2 = FUN_00060cd4(param_1 + 0x3e0,DAT_000c1718,8);
    return iVar2 != 0;
  }
  return false;
}


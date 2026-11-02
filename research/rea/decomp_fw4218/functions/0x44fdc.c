// rea decompile_all
// name: FUN_00044fdc
// address: 0x44fdc
// body: available
// range: 0x44fdc-0x450a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00044fdc(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((*DAT_000450a8 & 1) == 0) &&
     (iVar2 = FUN_001c7162(DAT_000450a8), puVar1 = DAT_000450ac, iVar2 != 0)) {
    iVar3 = 0;
    iVar2 = DAT_000450b0 + -0x20;
    DAT_000450ac[1] = DAT_000450b0;
    puVar1[2] = iVar2;
    puVar1[3] = 0;
    puVar1[4] = 0;
    iVar2 = 0;
    *puVar1 = DAT_000450b4;
    do {
      iVar4 = iVar3 + 1;
      iVar2 = iVar2 + 2;
      puVar1[iVar3 * 2 + 5] = 0;
      iVar3 = iVar3 + 2;
      puVar1[iVar4 * 2 + 5] = 0;
    } while (iVar2 < 0x14);
    FUN_001c70ac(puVar1,DAT_000450bc,DAT_000450b8);
  }
  puVar1 = DAT_000450ac;
  if (param_2 == 0) {
    return;
  }
  iVar2 = 0;
  do {
    if (DAT_000450ac[iVar2 * 2 + 5] == 0) {
      DAT_000450ac[iVar2 * 2 + 5] = param_1;
      puVar1[iVar2 * 2 + 6] = param_2;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  return;
}


// rea decompile_all
// name: FUN_0003fe50
// address: 0x3fe50
// body: available
// range: 0x3fe50-0x3fef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0003fe50(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)*DAT_0003fef8;
  FUN_000028a4(DAT_0003fefc + -0x70,DAT_0003fefc + -0x48,DAT_0003fefc + -0x40,DAT_0003fefc + -0x38);
  uVar2 = 0;
  if (piVar3[2] != 0) {
    do {
      puVar1 = *(undefined4 **)(*piVar3 + uVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_000028a4(DAT_0003ff00,*puVar1,puVar1[5],puVar1[6]);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)piVar3[2]);
    return;
  }
  return;
}


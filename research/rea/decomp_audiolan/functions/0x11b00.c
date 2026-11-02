// rea decompile_all
// name: FUN_00011b00
// address: 0x11b00
// body: available
// range: 0x11b00-0x11bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00011b00(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(DAT_00011c28 + *DAT_00011c24 * 4);
  iVar1 = *DAT_00011c20 + 8;
  iVar3 = iVar1 - (int)&stack0x00000000;
  do {
    puVar2 = puVar2 + -1;
    *puVar2 = *(undefined4 *)(iVar1 + -4);
    iVar1 = iVar1 + -4;
    iVar3 = iVar3 + -4;
  } while (iVar3 != 0);
  FUN_0017eae4(0xd3);
  FUN_001824f0();
  thunk_FUN_000752f8();
  FUN_001b7178(DAT_00011c00,0);
  return;
}


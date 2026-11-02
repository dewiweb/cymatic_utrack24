// rea decompile_all
// name: FUN_00047454
// address: 0x47454
// body: available
// range: 0x47454-0x47583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00047454(uint param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xf8;
  if ((param_1 & 0x80) == 0) {
    FUN_0009682c(*DAT_00047584);
  }
  else {
    FUN_000967ec(*DAT_00047584);
  }
  for (bVar1 = 0; bVar1 < 8; bVar1 = bVar1 + 1) {
    FUN_0009682c(*DAT_00047588);
    if ((param_1 & 0x80) == 0) {
      FUN_0009682c(*DAT_00047584);
    }
    else {
      FUN_000967ec(*DAT_00047584);
    }
    FUN_000173f4(2);
    FUN_000967ec(*DAT_00047588);
    param_1 = (param_1 & 0x7f) << 1;
    FUN_000173f4(2);
  }
  FUN_0009682c(*DAT_00047588);
  FUN_000967ec(*DAT_00047584);
  FUN_000173f4(2);
  FUN_000967ec(*DAT_00047588);
  bVar1 = 0;
  do {
    if (7 < bVar1) {
LAB_0004756c:
      FUN_0009682c(*DAT_00047588);
      return uVar3;
    }
    iVar2 = FUN_000967b8(*DAT_00047584);
    if (iVar2 != 1) {
      uVar3 = 0;
      FUN_000173f4(2);
      goto LAB_0004756c;
    }
    bVar1 = bVar1 + 1;
  } while( true );
}


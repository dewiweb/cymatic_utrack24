// rea decompile_all
// name: FUN_000e2cf0
// address: 0xe2cf0
// body: available
// range: 0xe2cf0-0xe2d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000e2cf0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fb4();
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  if (*DAT_000e2da0 != '\0') {
    iVar3 = FUN_001b54cc(uVar2);
    if ((iVar3 != 0) && (iVar3 = FUN_001b2744(uVar1), iVar3 != 0)) {
      return 1;
    }
    iVar3 = FUN_001b54cc(uVar2);
    if (iVar3 == 0) {
      return 1;
    }
  }
  uVar1 = FUN_001b2744(uVar1);
  uVar2 = FUN_001b54cc(uVar2);
  FUN_00002898(DAT_000e2da4,*DAT_000e2da0,uVar2,uVar1);
  return 0;
}


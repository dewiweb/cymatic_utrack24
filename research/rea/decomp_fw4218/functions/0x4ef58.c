// rea decompile_all
// name: FUN_0004ef58
// address: 0x4ef58
// body: available
// range: 0x4ef58-0x4efa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0004ef58(uint param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = 0xc3000000;
  uVar2 = DAT_0004efa4;
  if (((int)param_1 < (int)DAT_0004efa4) &&
     ((0xc3000000 < param_1 || (uVar3 = param_1, uVar2 = param_1, (int)param_1 < 0x800000)))) {
    FUN_0024a490(uVar3,8);
    uVar4 = FUN_00249b28();
    FUN_00249928((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,DAT_0004efa8);
    sVar1 = FUN_00249124();
    return (int)sVar1;
  }
  FUN_0024a490(uVar2,8);
  sVar1 = FUN_00249e8c();
  return (int)sVar1;
}


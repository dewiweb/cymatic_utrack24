// rea decompile_all
// name: FUN_000ac918
// address: 0xac918
// body: available
// range: 0xac918-0xaca6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000ac918(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_000f4e84();
  uVar1 = FUN_000f5144();
  switch(param_2) {
  case 0:
    uVar1 = FUN_001b6eac(uVar1);
    uVar1 = FUN_000aa3f8(param_1,uVar1);
    break;
  case 1:
    uVar1 = FUN_001b6ee8(uVar1);
    uVar1 = FUN_000ab11c(param_1,uVar1);
    break;
  case 2:
    uVar1 = FUN_001b6eb8(uVar1);
    uVar1 = FUN_000aa66c(param_1,uVar1);
    break;
  case 3:
    uVar1 = FUN_001b6ec4(uVar1);
    uVar1 = FUN_000aaa7c(param_1,uVar1);
    break;
  case 4:
    uVar1 = FUN_001b6edc(uVar1);
    uVar1 = FUN_000aa51c(param_1,uVar1);
    break;
  case 5:
    uVar1 = FUN_001b6ed0(uVar1);
    uVar1 = FUN_000aa4c8(param_1,uVar1);
    break;
  case 6:
    uVar1 = FUN_001b6ef4(uVar1);
    uVar1 = FUN_000acb70(param_1,uVar1);
    break;
  case 7:
    uVar1 = FUN_001b6f00(uVar1);
    uVar1 = FUN_000ad704(param_1,uVar1);
  }
  return uVar1;
}


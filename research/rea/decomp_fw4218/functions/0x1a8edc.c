// rea decompile_all
// name: FUN_001a8edc
// address: 0x1a8edc
// body: available
// range: 0x1a8edc-0x1a8f87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a8edc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  int *local_10;
  
  puVar1 = (undefined4 *)FUN_000b1210(auStack_18);
  *puVar1 = DAT_001a8f88;
  uVar2 = FUN_000b4964();
  FUN_000b4840(uVar2,DAT_001a8f8c,auStack_18);
  iVar3 = FUN_001b6c4c(auStack_18);
  if (iVar3 == 0) {
    FUN_000028b4(DAT_001a8f94,DAT_001a8f90);
    FUN_000b1228(auStack_18);
    return 0;
  }
  iVar3 = (**(code **)(*local_10 + 0x1c))(local_10,param_2);
  if (iVar3 != 0) {
    FUN_000b1228(auStack_18);
    return 1;
  }
  FUN_000028b4(DAT_001a8f94,DAT_001a8f98);
  FUN_000b1228(auStack_18);
  return 0;
}


// rea decompile_all
// name: FUN_0006eb90
// address: 0x6eb90
// body: available
// range: 0x6eb90-0x6ec0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0006eb90(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_001a2920(&uStack_20,param_1 + 4);
  puVar1 = (undefined4 *)FUN_00241928(param_1 + 0x28);
  while( true ) {
    puVar3 = (undefined4 *)FUN_00241910(param_1 + 0x28);
    if (puVar3 == puVar1) {
      FUN_001a2938(&uStack_20);
      return 0;
    }
    uVar4 = *puVar1;
    uVar2 = FUN_0015e464(uVar4);
    if (uVar2 == (param_2 & 0xffff)) break;
    puVar1 = puVar1 + 1;
  }
  FUN_001a2938(&uStack_20);
  return uVar4;
}


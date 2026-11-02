// rea decompile_all
// name: FUN_001e2f1c
// address: 0x1e2f1c
// body: available
// range: 0x1e2f1c-0x1e2f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001e2f1c(uint param_1,uint param_2)

{
  uint extraout_r1;
  uint uVar1;
  bool bVar2;
  
  uVar1 = (param_2 & 0x7fffffff) + 0xc8000000;
  bVar2 = uVar1 == 0x100000;
  if (0xfffff < uVar1) {
    bVar2 = uVar1 == 0xff00000;
  }
  if ((0xfffff < uVar1 && uVar1 < 0xff00001) && !bVar2) {
    bVar2 = (bool)((byte)(param_1 >> 0x1c) & 1);
    uVar1 = (param_2 & 0x80000000 | uVar1 * 8) + (param_1 >> 0x1d) + (uint)bVar2;
    if ((param_1 & 0xfffffff) != 0) {
      return uVar1;
    }
    if (bVar2) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return uVar1;
  }
  if ((int)uVar1 < 0x100000) {
    return param_2 & 0x80000000;
  }
  if (0xffdfffff < param_2 * 2) {
    FUN_001e3904(param_1);
    param_2 = extraout_r1;
  }
  return (param_2 >> 0x17 | 0xff) << 0x17;
}


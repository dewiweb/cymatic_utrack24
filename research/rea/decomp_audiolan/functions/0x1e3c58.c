// rea decompile_all
// name: FUN_001e3c58
// address: 0x1e3c58
// body: available
// range: 0x1e3c58-0x1e3cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_001e3c58(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte extraout_var;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = param_1 & 0x80000000;
  uVar2 = (param_1 & 0x7fffffff) >> 3;
  uVar4 = param_1 << 1 ^ param_1;
  if (uVar4 != 0) {
    param_1 = param_1 << 0x1d;
    param_2 = (uVar1 | uVar2) + 0x38000000;
  }
  if (uVar4 == 0 || (uVar4 & 0x7f000000) == 0) {
    bVar6 = false;
    bVar5 = (uVar2 & 0x8000000) == 0;
    if (!bVar5) {
      FUN_001e410c(uVar1 | param_1 >> 0x1d | uVar2 << 3,param_2);
      bVar3 = extraout_var;
      if (!bVar6 || bVar5) {
        bVar3 = 0;
      }
      return (ulonglong)((uint)(bVar3 >> 7) << 0x1f | 0x7ff00000) << 0x20;
    }
    return (ulonglong)uVar1 << 0x20;
  }
  return CONCAT44(param_2,param_1);
}


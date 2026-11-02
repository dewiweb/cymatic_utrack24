// rea decompile_all
// name: FUN_001dafe4
// address: 0x1dafe4
// body: available
// range: 0x1dafe4-0x1db0a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001dafe4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*DAT_001db0a8 + (param_1 >> 0x14) * 4);
  uVar2 = uVar1 & 3;
  if (uVar2 == 1) {
    uVar1 = *(uint *)((uVar1 & 0xfffff000) + ((param_1 & 0xfffff) >> 0xc) * 4);
    if ((uVar1 & 3) != 1) {
      return 0;
    }
    uVar2 = (param_1 & 0xffff) >> 0xe;
    if (uVar2 == 0) {
      uVar1 = (uVar1 & 0x3f) >> 4;
    }
    else {
      if (uVar2 == 1) {
        if ((uVar1 & 0xff) >> 6 == 3) {
          return 1;
        }
        return 0;
      }
      if (uVar2 != 2) {
        if (uVar2 == 3) {
          uVar1 = uVar1 << 0x14;
        }
        if (uVar2 != 3 || uVar1 >> 0x1e != 3) {
          return 0;
        }
        return 1;
      }
      uVar1 = (uVar1 & 0x3ff) >> 8;
    }
    if (uVar1 == 3) {
      return 1;
    }
  }
  else {
    if (uVar2 == 2) {
      param_1 = uVar1 << 0x14;
    }
    if (uVar2 == 2 && param_1 >> 0x1e == 3) {
      return 1;
    }
  }
  return 0;
}


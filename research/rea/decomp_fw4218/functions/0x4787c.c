// rea decompile_all
// name: FUN_0004787c
// address: 0x4787c
// body: available
// range: 0x4787c-0x47947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004787c(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 4;
  if (param_1 == 0) {
    _DAT_ffff0204 = 1;
    _DAT_ffff0210 = 0;
    if ((param_2 & 0xff000000) == 0) {
      _DAT_ffff0204 = 0x100;
    }
    else {
      _DAT_ffff0200 = 0x100;
      param_2 = uVar1;
    }
    _DAT_ffff0220 = param_2;
    return;
  }
  if (param_1 == 1) {
    _DAT_ffff0204 = 2;
    uRamffff0214 = 0;
    if ((param_2 & 0xff000000) == 0) {
      _DAT_ffff0204 = 0x200;
    }
    else {
      _DAT_ffff0200 = 0x200;
      param_2 = uVar1;
    }
    uRamffff0224 = param_2;
    return;
  }
  if (param_1 == 2) {
    _DAT_ffff0204 = 4;
    uRamffff0218 = 0;
    if ((param_2 & 0xff000000) == 0) {
      _DAT_ffff0204 = 0x400;
    }
    else {
      _DAT_ffff0200 = 0x400;
      param_2 = uVar1;
    }
    uRamffff0228 = param_2;
    return;
  }
  if (param_1 == 3) {
    _DAT_ffff0204 = 0x1000;
    _DAT_ffff0230 = 0;
    return;
  }
  return;
}


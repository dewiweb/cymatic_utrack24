// rea decompile_all
// name: FUN_00249318
// address: 0x249318
// body: available
// range: 0x249318-0x2493af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00249318(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = LZCOUNT(param_2);
  uVar5 = uVar4 - 0xb;
  if (uVar4 < 0xb) {
    uVar1 = -uVar5 & 0xff;
    uVar2 = param_2 << uVar4 + 0x15 | param_1 >> uVar1;
    iVar3 = (param_2 >> (-uVar5 & 0xff)) + (0x432 - uVar5) * 0x100000;
    if (uVar1 == 0 || !(bool)((byte)(param_1 >> uVar1 - 1) & 1)) {
      return CONCAT44(iVar3,uVar2);
    }
    uVar5 = uVar2 + 1;
    if ((param_1 << uVar4 + 0x15 & 0x7fffffff) == 0) {
      uVar5 = uVar5 & 0xfffffffe;
    }
    return CONCAT44(iVar3 + (uint)(0xfffffffe < uVar2),uVar5);
  }
  param_2 = param_2 << (uVar5 & 0xff);
  if (param_2 == 0) {
    uVar4 = param_1 << LZCOUNT(param_1);
    if (uVar4 == 0) {
      return (ulonglong)param_1;
    }
    return CONCAT44((uVar4 >> 0xb) + (0x41d - LZCOUNT(param_1)) * 0x100000,uVar4 << 0x15);
  }
  return CONCAT44((param_2 | param_1 >> (0x20 - uVar5 & 0xff)) + (0x432 - uVar5) * 0x100000,
                  param_1 << (uVar5 & 0xff));
}


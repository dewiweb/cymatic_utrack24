// rea decompile_all
// name: FUN_0024a428
// address: 0x24a428
// body: available
// range: 0x24a428-0x24a48f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0024a500) */
/* WARNING: Removing unreachable block (ram,0x0024a514) */
/* WARNING: Removing unreachable block (ram,0x0024a3ec) */
/* WARNING: Removing unreachable block (ram,0x0024a3e8) */
/* WARNING: Removing unreachable block (ram,0x0024a3f0) */
/* WARNING: Removing unreachable block (ram,0x0024a3bc) */
/* WARNING: Removing unreachable block (ram,0x0024a3d4) */
/* WARNING: Removing unreachable block (ram,0x0024a3d8) */
/* WARNING: Removing unreachable block (ram,0x0024a3dc) */
/* WARNING: Removing unreachable block (ram,0x0024a3f4) */
/* WARNING: Removing unreachable block (ram,0x0024a3fc) */
/* WARNING: Removing unreachable block (ram,0x0024a410) */
/* WARNING: Removing unreachable block (ram,0x0024a4f8) */
/* WARNING: Removing unreachable block (ram,0x0024a52c) */
/* WARNING: Removing unreachable block (ram,0x0024a508) */

longlong FUN_0024a428(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char in_OV;
  bool bVar3;
  bool bVar4;
  
  uVar2 = 0x7ff;
  uVar1 = param_2 >> 0x14 & 0x7ff;
  bVar3 = uVar1 == 0;
  if (!bVar3) {
    uVar2 = uVar1 ^ 0x7ff;
    bVar3 = uVar2 == 0;
  }
  bVar4 = bVar3;
  if (!bVar3) {
    in_OV = SBORROW4(uVar2,param_3);
    bVar4 = uVar2 == param_3;
  }
  bVar3 = !bVar3 && (int)(uVar2 - param_3) < 0;
  if (!bVar4 && bVar3 == (bool)in_OV) {
    in_OV = SCARRY4(param_3,uVar1);
    bVar3 = (int)(param_3 + uVar1) < 0;
    bVar4 = param_3 + uVar1 == 0;
  }
  if (!bVar4 && bVar3 == (bool)in_OV) {
    return CONCAT44(param_2 + param_3 * 0x100000,param_1);
  }
  if (uVar1 == 0) {
    return (ulonglong)(param_2 & 0x80000000) << 0x20;
  }
  if (uVar2 == 0) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return CONCAT44(param_2,param_1);
    }
    return (ulonglong)uRam00248da0 << 0x20;
  }
  param_2 = param_2 & 0x80000000;
  if (-1 < (int)param_3) {
    param_2 = param_2 | 0x7ff00000;
  }
  return (ulonglong)param_2 << 0x20;
}


// rea decompile_all
// name: FUN_001e4420
// address: 0x1e4420
// body: available
// range: 0x1e4420-0x1e447b inclusive
// range: 0x1e4488-0x1e44c3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001e4490) */
/* WARNING: Removing unreachable block (ram,0x001e44a4) */
/* WARNING: Removing unreachable block (ram,0x001e437c) */
/* WARNING: Removing unreachable block (ram,0x001e4378) */
/* WARNING: Removing unreachable block (ram,0x001e4380) */
/* WARNING: Removing unreachable block (ram,0x001e434c) */
/* WARNING: Removing unreachable block (ram,0x001e4364) */
/* WARNING: Removing unreachable block (ram,0x001e4368) */
/* WARNING: Removing unreachable block (ram,0x001e436c) */
/* WARNING: Removing unreachable block (ram,0x001e4384) */
/* WARNING: Removing unreachable block (ram,0x001e438c) */
/* WARNING: Removing unreachable block (ram,0x001e43a0) */
/* WARNING: Removing unreachable block (ram,0x001e4488) */
/* WARNING: Removing unreachable block (ram,0x001e44bc) */
/* WARNING: Removing unreachable block (ram,0x001e4498) */

ulonglong FUN_001e4420(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  char in_OV;
  bool bVar2;
  bool bVar3;
  
  uVar1 = param_1 >> 0x17 & 0xff;
  bVar2 = uVar1 == 0;
  if (!bVar2) {
    param_4 = uVar1 ^ 0xff;
    bVar2 = param_4 == 0;
  }
  bVar3 = bVar2;
  if (!bVar2) {
    in_OV = SBORROW4(param_4,param_2);
    bVar3 = param_4 == param_2;
  }
  bVar2 = !bVar2 && (int)(param_4 - param_2) < 0;
  if (!bVar3 && bVar2 == (bool)in_OV) {
    in_OV = SCARRY4(param_2,uVar1);
    bVar2 = (int)(param_2 + uVar1) < 0;
    bVar3 = param_2 + uVar1 == 0;
  }
  if (!bVar3 && bVar2 == (bool)in_OV) {
    return CONCAT44(param_2,param_1 + param_2 * 0x800000);
  }
  if (uVar1 == 0) {
    return CONCAT44(param_2,param_1) & 0xffffffff80000000;
  }
  if (param_4 == 0) {
    if ((param_1 & 0x7fffff) == 0) {
      return CONCAT44(param_2,param_1);
    }
    return CONCAT44(param_2,DAT_001e3d88);
  }
  param_1 = param_1 & 0x80000000;
  if (-1 < (int)param_2) {
    param_1 = param_1 | 0x7f800000;
  }
  return CONCAT44(param_2,param_1);
}


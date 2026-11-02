// rea decompile_all
// name: FUN_000125c8
// address: 0x125c8
// body: available
// range: 0x125c8-0x1266f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000125c8(int *param_1,short *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    iVar2 = param_1[2];
    FUN_00006604(param_4,iVar2);
    iVar1 = param_1[1];
    uVar3 = iVar2 - extraout_r1;
    iVar2 = (int)param_2 + (ushort)param_2[-1] + 0x14;
    iVar4 = iVar4 + iVar1 * extraout_r1 * 4;
    if (uVar3 < param_3) {
      FUN_0001b760(iVar4,iVar2,iVar1 * uVar3);
      iVar4 = *param_1;
      iVar1 = (param_3 - uVar3) * param_1[1];
      iVar2 = iVar2 + param_1[1] * uVar3 * 4;
    }
    else {
      iVar1 = iVar1 * param_3;
    }
    FUN_0001b760(iVar4,iVar2,iVar1);
    *param_2 = (short)param_3 * (short)param_1[1] * 4 + 0x10;
    return 1;
  }
  return 0;
}


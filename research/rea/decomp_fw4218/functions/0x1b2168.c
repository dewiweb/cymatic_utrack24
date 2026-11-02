// rea decompile_all
// name: FUN_001b2168
// address: 0x1b2168
// body: available
// range: 0x1b2168-0x1b221f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001b2168(int *param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar2;
  int *piVar3;
  uint local_28;
  
  *param_4 = 0;
  local_28 = 0;
  if ((param_3 != 0) &&
     ((iVar1 = FUN_00003d18(*param_2,DAT_001b2220), iVar1 == 0 ||
      (iVar1 = FUN_00003d18(*param_2,DAT_001b2224), iVar1 == 0)))) {
    *param_4 = *param_4 + 1;
    return 0;
  }
  do {
    if (param_3 <= *param_4) {
      return local_28;
    }
    iVar1 = *param_1;
    FUN_001c6e90(param_1[1] - iVar1);
    if (extraout_r1 <= local_28) {
      return 0;
    }
    uVar2 = *(uint *)(iVar1 + local_28 * 0x14 + 0x10);
    while( true ) {
      if (uVar2 == 0) goto LAB_001b21fc;
      iVar1 = *param_1;
      FUN_001c6e90(param_1[1] - iVar1);
      if (extraout_r1_00 <= uVar2) {
        return 0;
      }
      piVar3 = (int *)(iVar1 + uVar2 * 0x14);
      iVar1 = FUN_00003d18(*(undefined4 *)(*piVar3 + 4),param_2[*param_4]);
      if (iVar1 == 0) break;
      uVar2 = piVar3[2];
    }
    *param_4 = *param_4 + 1;
    local_28 = uVar2;
  } while (uVar2 != 0);
LAB_001b21fc:
  FUN_001c6e90(param_1[1] - *param_1);
  if (local_28 < extraout_r1_01) {
    return local_28;
  }
  return 0;
}


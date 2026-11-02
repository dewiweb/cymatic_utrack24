// rea decompile_all
// name: FUN_001e82f0
// address: 0x1e82f0
// body: available
// range: 0x1e82f0-0x1e8379 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001e82f0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  
  iVar2 = *DAT_001e837c;
  uVar3 = iVar2 * 0x28;
  if (param_3 <= uVar3 && uVar3 - param_3 != 0) {
    param_3 = uVar3;
  }
  if (0x10000000 < param_3) {
    param_3 = 0x10000000;
  }
  FUN_001c6fc4(param_3 << 2);
  if (extraout_r1 <
      (*(int *)(param_2 + 0x30) + iVar2 * *(int *)(param_2 + 0xc)) - *(int *)(param_1 + 0xdc)) {
    if (*(int *)(param_1 + 0x10c) == 0) {
      iVar2 = FUN_001e5af4(DAT_001e8380);
      *(int *)(param_1 + 0x10c) = iVar2 + 1;
    }
    FUN_001c6fc4(param_3);
    FUN_00006604(*(undefined4 *)(param_1 + 0x10c),extraout_r1_00 + 1);
    piVar1 = DAT_001e837c;
    *(uint *)(param_2 + 0x30) = *(int *)(param_1 + 0xdc) + (extraout_r1_01 + param_3) * -3;
    uVar4 = FUN_00006604((extraout_r1_01 + param_3) * 4 + *piVar1 + -1);
    *(undefined4 *)(param_2 + 0xc) = uVar4;
    FUN_0004419c(param_1,param_2);
  }
  return 0;
}


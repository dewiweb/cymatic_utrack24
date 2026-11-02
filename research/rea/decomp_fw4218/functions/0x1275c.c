// rea decompile_all
// name: FUN_0001275c
// address: 0x1275c
// body: available
// range: 0x1275c-0x127eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0001275c(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int extraout_r1;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_00012c20();
  uVar2 = param_1[2] + uVar1;
  uVar3 = param_2[1] + param_3;
  if (uVar2 < uVar1) {
    bVar5 = uVar2 <= uVar3;
    bVar4 = uVar3 == uVar2;
    if (bVar5 && !bVar4) {
      bVar5 = uVar3 <= uVar1;
      bVar4 = uVar1 == uVar3;
    }
    if (!bVar5 || bVar4) goto LAB_000127b4;
  }
  else if (uVar1 <= uVar3 && uVar3 <= uVar2) {
LAB_000127b4:
    uVar2 = uVar3 - uVar1;
    if ((uint)param_2[2] <= uVar3 - uVar1) {
      uVar2 = param_2[2];
    }
    param_2[2] = uVar2;
    FUN_00006604(uVar3,param_1[2]);
    *param_2 = extraout_r1;
    return *param_1 + extraout_r1 * param_1[1] * 4;
  }
  return 0;
}


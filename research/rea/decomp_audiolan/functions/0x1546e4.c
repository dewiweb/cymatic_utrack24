// rea decompile_all
// name: FUN_001546e4
// address: 0x1546e4
// body: available
// range: 0x1546e4-0x154731 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001546e4(int *param_1,uint param_2)

{
  int iVar1;
  uint extraout_r1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = *param_1;
  FUN_0016db0c(param_1[1] - iVar2);
  if (param_2 < extraout_r1) {
    piVar3 = (int *)(iVar2 + param_2 * 0x14);
    iVar2 = 0;
    if ((piVar3[1] != 0) && (iVar2 = FUN_001546e4(param_1), iVar2 != 0)) {
      FUN_000028a4(DAT_00154734);
      iVar2 = iVar2 + 1;
    }
    uVar4 = *(undefined4 *)(*piVar3 + 4);
    FUN_000028a4(DAT_00154738,uVar4);
    iVar1 = FUN_000034d0(uVar4);
    return iVar1 + iVar2;
  }
  return 0;
}


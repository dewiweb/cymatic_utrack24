// rea decompile_all
// name: FUN_001220e0
// address: 0x1220e0
// body: available
// range: 0x1220e0-0x1221c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001220e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = *(int **)(param_1 + 8);
  uVar4 = 0;
  if (piVar3 != (int *)0x0) {
    for (piVar2 = (int *)piVar3[0x57]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x57]) {
      piVar3 = piVar2;
    }
    while (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x38))(piVar3);
      iVar1 = FUN_0013eb4c(piVar3 + 0x2a,param_2);
      if (iVar1 != 0) {
        FUN_00129060(piVar3);
        FUN_0012d338(piVar3 + 0x20,param_2);
        FUN_0012d338(piVar3 + 0x22,param_2);
        uVar4 = 1;
      }
      iVar1 = FUN_0012b470(piVar3 + 0x24,param_2);
      if (iVar1 != 0) {
        FUN_00128798(piVar3);
        uVar4 = 1;
      }
      FUN_001255ec(piVar3 + 0x26,param_2);
      piVar2 = (int *)FUN_001d79fc(param_1 + 4,piVar3);
      (**(code **)(*piVar3 + 0x3c))(piVar3);
      piVar3 = piVar2;
    }
  }
  return uVar4;
}


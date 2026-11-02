// rea decompile_all
// name: FUN_000f1560
// address: 0xf1560
// body: available
// range: 0xf1560-0xf160f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000f1560(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = DAT_000f1610;
  FUN_001f00bc();
  iVar2 = DAT_000f1614;
  if ((0x27 < param_2) || (piVar4 = *(int **)(DAT_000f1614 + param_2 * 4), piVar4 == (int *)0x0)) {
    FUN_001f06d4(uVar1);
    return 0;
  }
  iVar3 = 0;
  do {
    if (*(int **)(DAT_000f1614 + iVar3 * 4) == piVar4) {
      (**(code **)(*piVar4 + 0x14))(piVar4,param_2);
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x28);
  (**(code **)(*piVar4 + 0x10))(piVar4,param_2);
  *(undefined4 *)(iVar2 + param_2 * 4) = 0;
  FUN_001f06d4(uVar1);
  return 1;
}


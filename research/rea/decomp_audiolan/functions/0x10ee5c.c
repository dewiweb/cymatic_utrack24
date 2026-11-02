// rea decompile_all
// name: FUN_0010ee5c
// address: 0x10ee5c
// body: available
// range: 0x10ee5c-0x10eeaf inclusive
// range: 0x1339b4-0x1339db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010ee5c(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (**(code **)(*param_1 + 400))();
  piVar3 = (int *)FUN_0016d7a4(0xc,DAT_0010eeb0);
  iVar1 = DAT_0010eeb4;
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    *piVar3 = iVar1;
    piVar3[2] = 0;
  }
  if (*(int *)(iVar2 + 0x8a8) != 0) {
    return;
  }
  *(int **)(iVar2 + 0x8a8) = piVar3;
                    /* WARNING: Could not recover jumptable at 0x001339d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 8))(piVar3,*(undefined4 *)(iVar2 + 0x8a4));
  return;
}


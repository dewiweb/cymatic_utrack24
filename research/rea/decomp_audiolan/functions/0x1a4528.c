// rea decompile_all
// name: FUN_001a4528
// address: 0x1a4528
// body: available
// range: 0x1a4528-0x1a458d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a4528(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0xfffffffe;
  *param_2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if ((code *)*DAT_001a4590 == entry) {
      piVar2 = (int *)FUN_0019b388(8);
    }
    else {
      piVar2 = (int *)(*(code *)*DAT_001a4590)(8);
    }
    if (piVar2 == (int *)0x0) {
      return 0xfffffffc;
    }
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar3 = FUN_001a6f50(*param_1);
    *piVar2 = iVar3;
    if (iVar3 == 0) {
LAB_001a4582:
      FUN_001a4594(piVar2);
      return 0xfffffffc;
    }
    if (param_1[1] != 0) {
      iVar3 = FUN_001a6f50();
      piVar2[1] = iVar3;
      if (iVar3 == 0) goto LAB_001a4582;
    }
    uVar1 = 0;
    *param_2 = piVar2;
  }
  return uVar1;
}


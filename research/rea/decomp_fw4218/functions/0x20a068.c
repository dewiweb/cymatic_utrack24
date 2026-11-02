// rea decompile_all
// name: FUN_0020a068
// address: 0x20a068
// body: available
// range: 0x20a068-0x20a14f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0020a068(int *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  pcVar1 = (char *)FUN_0020b8b0(*param_1);
  if (*pcVar1 == '\0') {
    puVar2 = (undefined4 *)FUN_0020b8cc(*param_1);
    piVar3 = (int *)FUN_0020b8cc(*puVar2);
    if (*piVar3 == *param_1) {
      piVar3 = (int *)FUN_0020b8b4(*param_1);
      *param_1 = *piVar3;
      return param_1;
    }
  }
  piVar3 = (int *)FUN_0020b8a4(*param_1);
  if (*piVar3 == 0) {
    piVar3 = (int *)FUN_0020b8cc(*param_1);
    iVar4 = *piVar3;
    while (piVar3 = (int *)FUN_0020b8a4(iVar4), *piVar3 == *param_1) {
      *param_1 = iVar4;
      piVar3 = (int *)FUN_0020b8cc(iVar4);
      iVar4 = *piVar3;
    }
    *param_1 = iVar4;
  }
  else {
    piVar3 = (int *)FUN_0020b8a4(*param_1);
    iVar4 = *piVar3;
    while (piVar3 = (int *)FUN_0020b8b4(iVar4), *piVar3 != 0) {
      piVar3 = (int *)FUN_0020b8b4(iVar4);
      iVar4 = *piVar3;
    }
    *param_1 = iVar4;
  }
  return param_1;
}


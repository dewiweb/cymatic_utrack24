// rea decompile_all
// name: FUN_00019208
// address: 0x19208
// body: available
// range: 0x19208-0x19257 inclusive
// range: 0x192b8-0x192b9 inclusive
// range: 0x1932a-0x19337 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00019208(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00019180(param_1,param_2);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x2d) == '\0') {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x30))
                        (*(int **)(param_1 + 0x24),param_2,param_3);
      return uVar2;
    }
    if (*(char *)(param_1 + 6) == '\x01') {
      puVar3 = &DAT_00019630;
    }
    else if (*(char *)(param_1 + 6) == '\0') {
      puVar3 = &DAT_00019634;
    }
    else {
      puVar3 = &DAT_0001961c;
    }
    FUN_00002898(s_Log__sEp__d__00019620,puVar3,*(undefined1 *)(param_1 + 4));
    FUN_001c0d3c(param_2);
    iVar1 = FUN_001c6f34();
    *(short *)(iVar1 + 0x14) = (short)iVar1;
  }
  return 4;
}


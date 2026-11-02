// rea decompile_all
// name: FUN_001210c6
// address: 0x1210c6
// body: available
// range: 0x1210c6-0x121111 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001210c6(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_001a2920(&uStack_18,param_1 + 4);
  if (*(char *)(param_2 + 0x1e) != '\0') {
    if ((1 < *(int *)(param_2 + 0x28)) ||
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x54))
                          (*(int **)(param_1 + 0x30),*(undefined4 *)(param_2 + 8),
                           *(undefined1 *)(param_2 + 4),*(undefined1 *)(param_2 + 6)), iVar1 == 0))
    {
      FUN_001a2938(&uStack_18);
      return 0;
    }
    *(undefined1 *)(param_2 + 0x1e) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_2 + 0x2c) = 0;
  }
  FUN_001a2938(&uStack_18);
  return 1;
}


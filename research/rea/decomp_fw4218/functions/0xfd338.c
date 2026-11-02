// rea decompile_all
// name: FUN_000fd338
// address: 0xfd338
// body: available
// range: 0xfd338-0xfd3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000fd338(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uStack_18;
  int aiStack_14 [2];
  
  param_2 = param_2 & 0xff;
  if (*(uint *)(param_1 + 0x21c) != param_2) {
    iVar1 = FUN_0004eb44(*(undefined4 *)(param_1 + 0x114),DAT_000fd3f4,&uStack_18);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_0004ffa4(uStack_18,DAT_000fd3f8,param_2);
    if (iVar1 == 0) {
      FUN_00046b8c(uStack_18);
      return 0;
    }
    FUN_00046b8c(uStack_18);
    *(uint *)(param_1 + 0x21c) = param_2;
    aiStack_14[0] = *(int *)(*(int *)(param_1 + 0x274) + 8);
    if (aiStack_14[0] != *(int *)(param_1 + 0x274)) {
      do {
        (**(code **)(**(int **)(aiStack_14[0] + 0x10) + 0x44))
                  (*(int **)(aiStack_14[0] + 0x10),param_2);
        FUN_00209818(aiStack_14);
      } while (aiStack_14[0] != *(int *)(param_1 + 0x274));
    }
  }
  return 1;
}


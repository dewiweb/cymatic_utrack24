// rea decompile_all
// name: FUN_001c29e4
// address: 0x1c29e4
// body: available
// range: 0x1c29e4-0x1c2aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001c29e4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_18;
  int local_14 [2];
  
  if (*(int *)(param_2 + 4) == 0) {
    FUN_00002898(DAT_001c2ab0);
    return 4;
  }
  local_18 = param_2;
  iVar1 = thunk_EXT_FUN_004005e0(param_1 + 0x38,&local_18);
  if (iVar1 != 0) {
    FUN_00002898(DAT_001c2aac);
    return 2;
  }
  do {
    iVar1 = thunk_EXT_FUN_004002f0(*(int *)(param_2 + 4) + 0x10,local_14,param_4);
    if (iVar1 != 0) {
      FUN_00002898(DAT_001c2ab4);
      return 3;
    }
  } while (local_14[0] != param_2);
  if (*(char *)(param_2 + 0x11) == '\0') {
    FUN_00002898(DAT_001c2ab8,*(undefined1 *)(param_2 + 0x12));
    return 1;
  }
  return 0;
}


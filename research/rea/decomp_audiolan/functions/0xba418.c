// rea decompile_all
// name: FUN_000ba418
// address: 0xba418
// body: available
// range: 0xba418-0xba4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000ba418(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;
  
  if (*(byte *)(param_1 + 0x252) == param_2) {
    return 1;
  }
  local_10 = param_4;
  if ((param_2 == 0x10 || param_2 == 0x18) || (iVar1 = DAT_000ba4c4, param_2 == 0x20)) {
    iVar1 = FUN_00048f94(*(undefined4 *)(param_1 + 0x114),DAT_000ba4c8,param_2);
    if (iVar1 != 0) {
      *(char *)(param_1 + 0x252) = (char)param_2;
      local_10 = *(int *)(*(int *)(param_1 + 0x270) + 8);
      if (local_10 == *(int *)(param_1 + 0x270)) {
        return 1;
      }
      do {
        (**(code **)(**(int **)(local_10 + 0x10) + 0x20))
                  (*(int **)(local_10 + 0x10),*(undefined1 *)(param_1 + 0x252));
        FUN_001c03bc(&local_10);
      } while (local_10 != *(int *)(param_1 + 0x270));
      return 1;
    }
    iVar1 = DAT_000ba4c8 + -0x1dc;
  }
  FUN_000028a4(iVar1);
  return 0;
}


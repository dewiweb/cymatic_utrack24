// rea decompile_all
// name: FUN_0013f8b8
// address: 0x13f8b8
// body: available
// range: 0x13f8b8-0x13f977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0013f8b8(int param_1,undefined2 *param_2)

{
  int iVar1;
  char local_10;
  char local_f;
  
  local_10 = (char)*param_2;
  if ((local_10 == '\x02') && (*(char *)(param_1 + 0x194) == '\x01')) {
    local_f = (char)((ushort)*param_2 >> 8);
    if (local_f == '\x01') {
      iVar1 = FUN_000bf368(param_1 + 0x114);
      if (iVar1 != 0) {
        (**(code **)(**(int **)(param_1 + 400) + 8))(*(int **)(param_1 + 400),0x15,0);
      }
    }
    else {
      iVar1 = FUN_000c0b54(param_1 + 0x114,local_f);
      if (iVar1 == 0) {
        FUN_00002898(s_ERROR__UIState_PrepareNextRecord_0013f978);
        (**(code **)(**(int **)(param_1 + 400) + 8))(*(int **)(param_1 + 400),0x30,0);
      }
      else {
        (**(code **)(**(int **)(param_1 + 400) + 8))(*(int **)(param_1 + 400),0x10,0);
      }
    }
  }
  return;
}


// rea decompile_all
// name: FUN_001a6fa4
// address: 0x1a6fa4
// body: available
// range: 0x1a6fa4-0x1a6fd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a6fa4(int param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*(byte *)(param_1 + 0x2d) != param_2) {
    *(char *)(param_1 + 0x2d) = (char)param_2;
    if (param_2 == 0) {
      pcVar2 = s_disabled_001a6fe4;
    }
    else {
      pcVar2 = s_enabled_001a6fdc;
    }
    if (*(char *)(param_1 + 6) == '\x01') {
      pcVar1 = &DAT_001a700c;
    }
    else if (*(char *)(param_1 + 6) == '\0') {
      pcVar1 = &DAT_001a7010;
    }
    else {
      pcVar1 = s_disabled_001a6fe4 + 8;
    }
    FUN_00002898(s_Logging_for__sEp__d__s__001a6ff0,pcVar1,*(undefined1 *)(param_1 + 4),pcVar2);
  }
  return;
}


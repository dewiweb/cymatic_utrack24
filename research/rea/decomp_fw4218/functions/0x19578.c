// rea decompile_all
// name: FUN_00019578
// address: 0x19578
// body: available
// range: 0x19578-0x195b1 inclusive
// range: 0x195b8-0x195bf inclusive
// range: 0x19618-0x1961b inclusive
// range: 0x198e4-0x198ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

void FUN_00019578(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(char *)(param_1 + 0x2d) != '\0') {
      if (*(char *)(param_1 + 6) == '\x01') {
        puVar1 = &DAT_00019630;
      }
      else if (*(char *)(param_1 + 6) == '\0') {
        puVar1 = &DAT_00019634;
      }
      else {
        puVar1 = &DAT_0001961c;
      }
      FUN_00002898(s_Log__sEp__d__00019620,puVar1,*(undefined1 *)(param_1 + 4));
      FUN_001c0d3c(param_2);
      FUN_001c6f34();
      coprocessor_function(0xc,0xd,7,in_cr14,in_cr11,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (**(code **)(**(int **)(param_1 + 0x20) + 8))(*(int **)(param_1 + 0x20),param_2);
  }
  return;
}


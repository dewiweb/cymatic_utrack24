// rea decompile_all
// name: FUN_004fe0e5
// address: 0x4fe0e5
// body: available
// range: 0x4fe0e5-0x4fe139 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004fe0e5(void)

{
  int in_EDX;
  int extraout_EDX;
  
  *(undefined8 *)(in_EDX + 200) = 0x3ff0000000000000;
  *(undefined4 *)(in_EDX + 0xc0) = 0;
  *(undefined4 *)(in_EDX + 0xc4) = 0;
  *(undefined4 *)(in_EDX + 0xd0) = 0;
  FUN_004fcb02();
  *(undefined4 *)(extraout_EDX + 0x100) = 0;
  *(undefined4 *)(extraout_EDX + 0x104) = 0;
  *(undefined1 *)(extraout_EDX + 0x10d) = 0;
  *(undefined1 *)(extraout_EDX + 0x10e) = 0;
  *(undefined4 *)(extraout_EDX + 0x108) = 0x800000;
  *(undefined1 *)(extraout_EDX + 0x10c) = 1;
  return extraout_EDX;
}


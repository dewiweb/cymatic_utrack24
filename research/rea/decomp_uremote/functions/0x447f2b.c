// rea decompile_all
// name: FUN_00447f2b
// address: 0x447f2b
// body: available
// range: 0x447f2b-0x447f6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00447f2b(void)

{
  undefined4 *in_EDX;
  int extraout_EDX;
  
  *in_EDX = 0;
  FUN_004652cd();
  *(undefined4 *)(extraout_EDX + 8) = 0;
  *(undefined4 *)(extraout_EDX + 0xc) = 2;
  *(undefined4 *)(extraout_EDX + 0x10) = 0x18;
  *(undefined4 *)(extraout_EDX + 0x14) = 0;
  *(undefined4 *)(extraout_EDX + 0x18) = 0;
  *(undefined4 *)(extraout_EDX + 0x1c) = 0;
  *(undefined4 *)(extraout_EDX + 0x20) = 0;
  *(undefined4 *)(extraout_EDX + 0x24) = 0;
  *(undefined4 *)(extraout_EDX + 0x28) = 0;
  *(undefined4 *)(extraout_EDX + 0x34) = 0;
  *(undefined4 *)(extraout_EDX + 0x38) = 0;
  *(undefined4 *)(extraout_EDX + 0x3c) = 0;
  *(undefined4 *)(extraout_EDX + 0x40) = 0;
  return extraout_EDX;
}


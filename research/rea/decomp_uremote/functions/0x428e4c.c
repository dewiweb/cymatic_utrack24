// rea decompile_all
// name: FUN_00428e4c
// address: 0x428e4c
// body: available
// range: 0x428e4c-0x428ef2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00428e4c(void)

{
  int unaff_EDI;
  
  if (*(char *)(unaff_EDI + 0x124) != '\0') {
    *(undefined4 *)(unaff_EDI + 0x128) = 0;
    *(char *)(unaff_EDI + 0x124) = '\0';
  }
  FUN_00411a5c(*(undefined4 *)(unaff_EDI + 0xf4));
  *(undefined4 *)(unaff_EDI + 0xf4) = 0;
  *(undefined4 *)(unaff_EDI + 0xf0) = 0;
  FUN_00411a5c(*(undefined4 *)(unaff_EDI + 0xfc));
  *(undefined4 *)(unaff_EDI + 0xfc) = 0;
  *(undefined2 *)(unaff_EDI + 0xf8) = 0;
  FUN_004286a7();
  FUN_00411a5c(*(undefined4 *)(unaff_EDI + 0x7c));
  *(undefined4 *)(unaff_EDI + 0x7c) = 0;
  FUN_00411a5c(*(undefined4 *)(unaff_EDI + 0x88));
  *(undefined4 *)(unaff_EDI + 0x88) = 0;
  *(undefined4 *)(unaff_EDI + 0x74) = 0;
  *(undefined4 *)(unaff_EDI + 0x78) = 0;
  *(undefined4 *)(unaff_EDI + 0x80) = 0;
  *(undefined4 *)(unaff_EDI + 0x84) = 0;
  *(undefined4 *)(unaff_EDI + 0x8c) = 0;
  *(undefined4 *)(unaff_EDI + 0x90) = 0;
  *(undefined1 *)(unaff_EDI + 300) = 0;
  *(undefined1 *)(unaff_EDI + 0x12d) = 0;
  return;
}


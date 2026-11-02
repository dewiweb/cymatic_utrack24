// rea decompile_all
// name: FUN_004fbd85
// address: 0x4fbd85
// body: available
// range: 0x4fbd85-0x4fbe24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fbd85(int param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_EDI;
  
  FUN_00500ee4(unaff_EDI + 0x78);
  FUN_00500fa2(unaff_EDI + 0x78);
  FUN_004fb4ce();
  if ((char)param_3 == '\0') {
    FUN_004fb80a(unaff_EDI + 0x5c);
  }
  else {
    FUN_004fb80a(unaff_EDI + 0x5c);
  }
  FUN_004fb29d(param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               (float)*(int *)(unaff_EDI + 8),(float)*(int *)(unaff_EDI + 0xc),param_3);
  return;
}


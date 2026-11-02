// rea decompile_all
// name: FUN_0049b8c6
// address: 0x49b8c6
// body: available
// range: 0x49b8c6-0x49b8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049b8c6(void)

{
  undefined4 in_ECX;
  int unaff_EBX;
  undefined4 uStack_8;
  
  uStack_8 = in_ECX;
  if (3 < unaff_EBX) {
    FUN_00491216();
  }
  uStack_8 = CONCAT13((char)unaff_EBX,(undefined3)uStack_8);
  FUN_0049adf3((int)&uStack_8 + 3,1);
  return;
}


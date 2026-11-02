// rea decompile_all
// name: FUN_0044ea4b
// address: 0x44ea4b
// body: available
// range: 0x44ea4b-0x44ea7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044ea4b(void)

{
  int iVar1;
  undefined4 *unaff_EDI;
  
  iVar1 = 0;
  if (0 < (int)unaff_EDI[2]) {
    do {
      FUN_004652d6();
      FUN_004652d6();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)unaff_EDI[2]);
  }
  _free((void *)*unaff_EDI);
  return;
}


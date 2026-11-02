// rea decompile_all
// name: FUN_00472252
// address: 0x472252
// body: available
// range: 0x472252-0x4722b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00472252(void)

{
  char cVar1;
  int *unaff_EBX;
  int *unaff_EDI;
  
  cVar1 = FUN_004733c7();
  if (cVar1 != '\0') {
    if (unaff_EDI[3] == 0) {
      FUN_0043949d();
    }
    else {
      if (*unaff_EDI != 0) {
        FUN_00472f03(unaff_EDI);
      }
      if (*unaff_EBX != 0) {
        FUN_00472e9e(*unaff_EBX + 0x24,&stack0xfffffff8);
      }
      FUN_0043949d();
      FUN_004733d3(&LAB_004734ba,unaff_EDI);
    }
  }
  return;
}


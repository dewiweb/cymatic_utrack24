// rea decompile_all
// name: FUN_004efada
// address: 0x4efada
// body: available
// range: 0x4efada-0x4efb06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004efada(void)

{
  char cVar1;
  undefined4 in_ECX;
  
  FUN_004ef786();
  cVar1 = FUN_004c30fb(in_ECX,1);
  if (cVar1 == '\0') {
    FUN_0047479c();
  }
  else {
    FUN_004ef7c3();
  }
  return;
}


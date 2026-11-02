// rea decompile_all
// name: FUN_00411199
// address: 0x411199
// body: available
// range: 0x411199-0x4111b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00411199(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  
  if ((in_EAX != 0) && (*(int *)(in_EAX + 0x14) != 0)) {
    FUN_00411a5c(*unaff_ESI);
    *unaff_ESI = 0;
  }
  *unaff_ESI = 0;
  return;
}


// rea decompile_all
// name: FUN_0046e245
// address: 0x46e245
// body: available
// range: 0x46e245-0x46e270 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046e245(size_t param_1,char param_2)

{
  void *pvVar1;
  undefined4 *unaff_ESI;
  
  _free((void *)*unaff_ESI);
  if (param_2 == '\0') {
    pvVar1 = _malloc(param_1);
  }
  else {
    pvVar1 = _calloc(param_1,1);
  }
  *unaff_ESI = pvVar1;
  return;
}


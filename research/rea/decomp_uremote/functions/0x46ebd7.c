// rea decompile_all
// name: FUN_0046ebd7
// address: 0x46ebd7
// body: available
// range: 0x46ebd7-0x46ec12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046ebd7(void)

{
  void *pvVar1;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  if (unaff_ESI[1] != unaff_EDI) {
    if (unaff_EDI < 1) {
      _free((void *)*unaff_ESI);
      *unaff_ESI = 0;
    }
    else {
      if ((void *)*unaff_ESI == (void *)0x0) {
        pvVar1 = _malloc(unaff_EDI << 4);
      }
      else {
        pvVar1 = _realloc((void *)*unaff_ESI,unaff_EDI << 4);
      }
      *unaff_ESI = pvVar1;
    }
    unaff_ESI[1] = unaff_EDI;
  }
  return;
}


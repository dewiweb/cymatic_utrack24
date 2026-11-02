// rea decompile_all
// name: FUN_0045b4eb
// address: 0x45b4eb
// body: available
// range: 0x45b4eb-0x45b52a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045b4eb(void)

{
  void *pvVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_ESI + 0x1c) != unaff_EDI) {
    if (unaff_EDI < 1) {
      _free(*(void **)(unaff_ESI + 0x18));
      *(undefined4 *)(unaff_ESI + 0x18) = 0;
    }
    else {
      if (*(void **)(unaff_ESI + 0x18) == (void *)0x0) {
        pvVar1 = _malloc(unaff_EDI << 2);
      }
      else {
        pvVar1 = _realloc(*(void **)(unaff_ESI + 0x18),unaff_EDI << 2);
      }
      *(void **)(unaff_ESI + 0x18) = pvVar1;
    }
    *(int *)(unaff_ESI + 0x1c) = unaff_EDI;
  }
  return;
}


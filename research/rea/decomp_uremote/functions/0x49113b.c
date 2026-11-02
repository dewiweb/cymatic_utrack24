// rea decompile_all
// name: FUN_0049113b
// address: 0x49113b
// body: available
// range: 0x49113b-0x491165 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049113b(void)

{
  uint in_EAX;
  char cVar1;
  uint in_ECX;
  char *in_EDX;
  int unaff_ESI;
  
  if ((unaff_ESI != 0) && (in_EAX < in_ECX)) {
    if ((in_EDX != (char *)0x0) && (cVar1 = *in_EDX, cVar1 != '\0')) {
      do {
        if (in_ECX - 1 <= in_EAX) break;
        *(char *)(unaff_ESI + in_EAX) = cVar1;
        in_EAX = in_EAX + 1;
        in_EDX = in_EDX + 1;
        cVar1 = *in_EDX;
      } while (cVar1 != '\0');
    }
    *(undefined1 *)(unaff_ESI + in_EAX) = 0;
  }
  return;
}


// rea decompile_all
// name: FUN_004e566b
// address: 0x4e566b
// body: available
// range: 0x4e566b-0x4e56db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e566b(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xa8) != '\0') {
    *(char *)(in_ECX + 0xa8) = '\0';
    FUN_004c1613();
    FUN_004c6c2a();
    FUN_004c6d53();
    cVar1 = FUN_004c0ee2(1);
    if (cVar1 != '\0') {
      if ((*(int *)(param_1 + 0x14) != in_ECX) && (cVar1 = FUN_004bf53c(), cVar1 != '\0')) {
        return;
      }
      FUN_004e53cb();
    }
  }
  return;
}


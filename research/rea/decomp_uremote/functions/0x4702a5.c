// rea decompile_all
// name: FUN_004702a5
// address: 0x4702a5
// body: available
// range: 0x4702a5-0x4702e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004702a5(void)

{
  int iVar1;
  char cVar2;
  int unaff_EBX;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBX + 8);
  if (iVar1 != *(int *)(unaff_EDI + 8)) {
    return 0;
  }
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 1;
    }
    cVar2 = thunk_FUN_00461868();
  } while (cVar2 != '\0');
  return 0;
}


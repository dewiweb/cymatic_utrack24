// rea decompile_all
// name: FUN_004dfc56
// address: 0x4dfc56
// body: available
// range: 0x4dfc56-0x4dfcc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dfc56(void)

{
  char cVar1;
  int in_ECX;
  undefined1 local_58 [84];
  
  FUN_004c6c2a();
  FUN_004c6d53();
  FUN_004df993();
  if (*(int *)(in_ECX + 0xac) < 0) {
    FUN_004c2047(local_58);
    cVar1 = FUN_004f5c96();
    if (cVar1 != '\0') {
      FUN_004df959();
      FUN_004e27eb();
    }
  }
  return;
}


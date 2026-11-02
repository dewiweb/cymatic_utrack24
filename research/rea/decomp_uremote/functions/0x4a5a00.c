// rea decompile_all
// name: FUN_004a5a00
// address: 0x4a5a00
// body: available
// range: 0x4a5a00-0x4a5a2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a5a00(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  
  iVar3 = *in_EAX;
  iVar2 = in_EAX[2] * 0x10 + iVar3;
  while( true ) {
    if (iVar3 == iVar2) {
      return 0;
    }
    cVar1 = FUN_004a6c8c();
    if (cVar1 != '\0') break;
    iVar3 = iVar3 + 0x10;
  }
  return 1;
}


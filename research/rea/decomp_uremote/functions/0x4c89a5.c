// rea decompile_all
// name: FUN_004c89a5
// address: 0x4c89a5
// body: available
// range: 0x4c89a5-0x4c89d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004c89a5(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int unaff_ESI;
  
  cVar1 = FUN_004bf38c(unaff_ESI);
  if ((cVar1 == '\0') ||
     ((iVar3 = *(int *)(unaff_ESI + 0xf4), iVar3 == 0 &&
      (iVar3 = *(int *)(unaff_ESI + 0xf0), iVar3 == 0)))) {
    piVar2 = (int *)(unaff_ESI + 0xe4);
    if (*piVar2 == 0) {
      piVar2 = (int *)(unaff_ESI + 0xe0);
    }
    iVar3 = *piVar2;
  }
  return iVar3;
}


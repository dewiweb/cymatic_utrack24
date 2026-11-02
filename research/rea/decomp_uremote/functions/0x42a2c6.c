// rea decompile_all
// name: FUN_0042a2c6
// address: 0x42a2c6
// body: available
// range: 0x42a2c6-0x42a2ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a2c6(void)

{
  char cVar1;
  int unaff_ESI;
  int iVar2;
  
  iVar2 = 1;
  do {
    cVar1 = FUN_0042a209();
    if (cVar1 == '\x01') {
      return;
    }
    if (*(char *)(unaff_ESI + 0x170) == 'X') {
      iVar2 = iVar2 + 1;
    }
    else if (*(char *)(unaff_ESI + 0x170) == 'Y') {
      iVar2 = iVar2 + -1;
    }
  } while (iVar2 != 0);
  return;
}


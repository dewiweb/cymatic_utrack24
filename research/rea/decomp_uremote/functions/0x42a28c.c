// rea decompile_all
// name: FUN_0042a28c
// address: 0x42a28c
// body: available
// range: 0x42a28c-0x42a2c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a28c(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int unaff_EDI;
  bool bVar3;
  
  if (*in_EAX == 0) {
    iVar2 = 1;
LAB_0042a295:
    do {
      cVar1 = FUN_0042a209();
      if (cVar1 == '\x01') {
        return;
      }
      cVar1 = *(char *)(unaff_EDI + 0x170);
      if (cVar1 == '\x1b') {
        bVar3 = iVar2 == 1;
      }
      else {
        if (cVar1 == 'X') {
          iVar2 = iVar2 + 1;
          goto LAB_0042a295;
        }
        if (cVar1 != 'Y') goto LAB_0042a295;
        iVar2 = iVar2 + -1;
        bVar3 = iVar2 == 0;
      }
    } while (!bVar3);
  }
  return;
}


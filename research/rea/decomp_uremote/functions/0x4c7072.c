// rea decompile_all
// name: FUN_004c7072
// address: 0x4c7072
// body: available
// range: 0x4c7072-0x4c7091 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004c7072(void)

{
  char cVar1;
  int in_EAX;
  int extraout_ECX;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  
  iVar2 = *(int *)(in_EAX + 0xc);
  iVar3 = 0;
  if (iVar2 != 0) {
    do {
      if (*(int *)(iVar2 + 0xc) == 0) {
        return iVar2;
      }
      cVar1 = FUN_004c2e18();
      iVar2 = extraout_EDX;
      iVar3 = extraout_ECX;
    } while (cVar1 == '\0');
  }
  return iVar3;
}


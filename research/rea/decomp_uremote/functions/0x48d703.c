// rea decompile_all
// name: FUN_0048d703
// address: 0x48d703
// body: available
// range: 0x48d703-0x48d725 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0048d703(void)

{
  int in_EAX;
  int *piVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)0x0;
  if (0 < in_EAX) {
    piVar2 = (int *)(in_ECX + 0x18);
    do {
      if (iVar3 < *piVar2) {
        piVar1 = piVar2 + -6;
        iVar3 = *piVar2;
      }
      piVar2 = piVar2 + 8;
      in_EAX = in_EAX + -1;
    } while (in_EAX != 0);
  }
  return piVar1;
}


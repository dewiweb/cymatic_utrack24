// rea decompile_all
// name: FUN_0043e047
// address: 0x43e047
// body: available
// range: 0x43e047-0x43e078 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043e047(void)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  int in_ECX;
  undefined1 local_8 [4];
  
  if (in_ECX != 0) {
    piVar2 = *(int **)(in_EAX + 0x78);
    piVar1 = piVar2 + *(int *)(in_EAX + 0x80);
    for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
      if (in_ECX == *piVar2) {
        return;
      }
    }
    FUN_00450daf(local_8);
  }
  return;
}


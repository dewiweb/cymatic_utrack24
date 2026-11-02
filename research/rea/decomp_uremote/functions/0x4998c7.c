// rea decompile_all
// name: FUN_004998c7
// address: 0x4998c7
// body: available
// range: 0x4998c7-0x499923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004998c7(void)

{
  int in_EAX;
  int iVar1;
  byte *pbVar2;
  byte *in_EDX;
  
  if (*(char *)(in_EAX + 8) == '\0') {
    iVar1 = *(int *)(in_EAX + 4);
    if (iVar1 != 0) {
      do {
        *in_EDX = ~*in_EDX;
        in_EDX = in_EDX + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      return;
    }
  }
  else if (*(char *)(in_EAX + 8) == '\x04') {
    if (*(char *)(in_EAX + 9) == '\b') {
      if (*(int *)(in_EAX + 4) != 0) {
        iVar1 = (*(int *)(in_EAX + 4) - 1U >> 1) + 1;
        do {
          *in_EDX = ~*in_EDX;
          in_EDX = in_EDX + 2;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        return;
      }
    }
    else if ((*(char *)(in_EAX + 9) == '\x10') && (*(int *)(in_EAX + 4) != 0)) {
      pbVar2 = in_EDX + 1;
      iVar1 = (*(int *)(in_EAX + 4) - 1U >> 2) + 1;
      do {
        pbVar2[-1] = ~pbVar2[-1];
        *pbVar2 = ~*pbVar2;
        pbVar2 = pbVar2 + 4;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}


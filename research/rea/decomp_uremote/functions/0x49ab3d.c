// rea decompile_all
// name: FUN_0049ab3d
// address: 0x49ab3d
// body: available
// range: 0x49ab3d-0x49abbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049ab3d(void)

{
  int *in_EAX;
  int iVar1;
  undefined1 *in_ECX;
  undefined1 *puVar2;
  
  if ((char)in_EAX[2] == '\x06') {
    iVar1 = *in_EAX;
    if (*(char *)((int)in_EAX + 9) == '\b') {
      if (iVar1 != 0) {
        do {
          in_ECX[3] = -1 - in_ECX[3];
          in_ECX = in_ECX + 4;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        return;
      }
    }
    else if (iVar1 != 0) {
      do {
        in_ECX[6] = -1 - in_ECX[6];
        in_ECX[7] = -1 - in_ECX[7];
        in_ECX = in_ECX + 8;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      return;
    }
  }
  else if ((char)in_EAX[2] == '\x04') {
    iVar1 = *in_EAX;
    if (*(char *)((int)in_EAX + 9) == '\b') {
      puVar2 = in_ECX;
      if (iVar1 != 0) {
        do {
          *in_ECX = *puVar2;
          in_ECX[1] = -1 - puVar2[1];
          in_ECX = in_ECX + 2;
          iVar1 = iVar1 + -1;
          puVar2 = puVar2 + 2;
        } while (iVar1 != 0);
        return;
      }
    }
    else {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        in_ECX[2] = -1 - in_ECX[2];
        in_ECX[3] = -1 - in_ECX[3];
        in_ECX = in_ECX + 4;
      }
    }
  }
  return;
}


// rea decompile_all
// name: FUN_00493578
// address: 0x493578
// body: available
// range: 0x493578-0x493614 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00493578(void)

{
  int *in_EAX;
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int in_ECX;
  int iVar4;
  undefined1 *puVar5;
  
  iVar4 = *in_EAX;
  if ((char)in_EAX[2] == '\x06') {
    if (*(char *)((int)in_EAX + 9) == '\b') {
      iVar1 = in_EAX[1] + in_ECX;
      if (iVar4 != 0) {
        do {
          *(char *)(iVar1 + -1) = -1 - *(char *)(iVar1 + -1);
          iVar1 = iVar1 + -4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        return;
      }
    }
    else {
      iVar1 = in_EAX[1] + in_ECX;
      if (iVar4 != 0) {
        do {
          *(char *)(iVar1 + -1) = -1 - *(char *)(iVar1 + -1);
          iVar4 = iVar4 + -1;
          *(char *)(iVar1 + -2) = -1 - *(char *)(iVar1 + -2);
          iVar1 = iVar1 + -8;
        } while (iVar4 != 0);
        return;
      }
    }
  }
  else if ((char)in_EAX[2] == '\x04') {
    if (*(char *)((int)in_EAX + 9) == '\b') {
      puVar2 = (undefined1 *)(in_EAX[1] + in_ECX);
      puVar5 = puVar2;
      if (iVar4 != 0) {
        do {
          pcVar3 = puVar2 + -1;
          puVar2 = puVar2 + -2;
          puVar5[-1] = -1 - *pcVar3;
          iVar4 = iVar4 + -1;
          puVar5[-2] = *puVar2;
          puVar5 = puVar5 + -2;
        } while (iVar4 != 0);
        return;
      }
    }
    else {
      iVar1 = in_EAX[1] + in_ECX;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(char *)(iVar1 + -1) = -1 - *(char *)(iVar1 + -1);
        *(char *)(iVar1 + -2) = -1 - *(char *)(iVar1 + -2);
        iVar1 = iVar1 + -4;
      }
    }
  }
  return;
}


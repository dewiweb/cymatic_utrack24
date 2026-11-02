// rea decompile_all
// name: FUN_0049aa65
// address: 0x49aa65
// body: available
// range: 0x49aa65-0x49ab3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049aa65(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *in_EAX;
  int *in_EDX;
  int iVar4;
  
  if ((char)in_EDX[2] == '\x06') {
    iVar4 = *in_EDX;
    puVar3 = in_EAX;
    if (*(char *)((int)in_EDX + 9) == '\b') {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *in_EAX;
        *puVar3 = in_EAX[1];
        puVar3[1] = in_EAX[2];
        puVar3[2] = in_EAX[3];
        in_EAX = in_EAX + 4;
        puVar3[3] = uVar1;
        puVar3 = puVar3 + 4;
      }
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *in_EAX;
        uVar2 = in_EAX[1];
        *puVar3 = in_EAX[2];
        puVar3[1] = in_EAX[3];
        puVar3[2] = in_EAX[4];
        puVar3[3] = in_EAX[5];
        puVar3[4] = in_EAX[6];
        puVar3[5] = in_EAX[7];
        puVar3[6] = uVar1;
        in_EAX = in_EAX + 8;
        puVar3[7] = uVar2;
        puVar3 = puVar3 + 8;
      }
    }
  }
  else if ((char)in_EDX[2] == '\x04') {
    iVar4 = *in_EDX;
    puVar3 = in_EAX;
    if (*(char *)((int)in_EDX + 9) == '\b') {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *in_EAX;
        *puVar3 = in_EAX[1];
        in_EAX = in_EAX + 2;
        puVar3[1] = uVar1;
        puVar3 = puVar3 + 2;
      }
    }
    else {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *in_EAX;
        uVar2 = in_EAX[1];
        *puVar3 = in_EAX[2];
        puVar3[1] = in_EAX[3];
        puVar3[2] = uVar1;
        in_EAX = in_EAX + 4;
        puVar3[3] = uVar2;
        puVar3 = puVar3 + 4;
      }
    }
  }
  return;
}


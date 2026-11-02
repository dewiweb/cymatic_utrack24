// rea decompile_all
// name: FUN_0049348a
// address: 0x49348a
// body: available
// range: 0x49348a-0x493577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049348a(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int *in_EAX;
  undefined1 *puVar3;
  int in_ECX;
  undefined1 *puVar4;
  int iVar5;
  
  iVar5 = *in_EAX;
  if ((char)in_EAX[2] == '\x06') {
    if (*(char *)((int)in_EAX + 9) == '\b') {
      puVar3 = (undefined1 *)(in_EAX[1] + in_ECX);
      puVar4 = puVar3;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar1 = puVar3[-1];
        puVar4[-1] = puVar3[-2];
        puVar4[-2] = puVar3[-3];
        puVar3 = puVar3 + -4;
        puVar4[-3] = *puVar3;
        puVar4 = puVar4 + -4;
        *puVar4 = uVar1;
      }
    }
    else {
      puVar3 = (undefined1 *)(in_EAX[1] + in_ECX);
      puVar4 = puVar3;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar1 = puVar3[-1];
        uVar2 = puVar3[-2];
        puVar4[-1] = puVar3[-3];
        puVar4[-2] = puVar3[-4];
        puVar4[-3] = puVar3[-5];
        puVar4[-4] = puVar3[-6];
        puVar4[-5] = puVar3[-7];
        puVar3 = puVar3 + -8;
        puVar4[-6] = *puVar3;
        puVar4[-7] = uVar1;
        puVar4 = puVar4 + -8;
        *puVar4 = uVar2;
      }
    }
  }
  else if ((char)in_EAX[2] == '\x04') {
    if (*(char *)((int)in_EAX + 9) == '\b') {
      puVar3 = (undefined1 *)(in_EAX[1] + in_ECX);
      puVar4 = puVar3;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar1 = puVar3[-1];
        puVar3 = puVar3 + -2;
        puVar4[-1] = *puVar3;
        puVar4 = puVar4 + -2;
        *puVar4 = uVar1;
      }
    }
    else {
      puVar3 = (undefined1 *)(in_EAX[1] + in_ECX);
      puVar4 = puVar3;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar1 = puVar3[-1];
        uVar2 = puVar3[-2];
        puVar4[-1] = puVar3[-3];
        puVar3 = puVar3 + -4;
        puVar4[-2] = *puVar3;
        puVar4[-3] = uVar1;
        puVar4 = puVar4 + -4;
        *puVar4 = uVar2;
      }
    }
  }
  return;
}


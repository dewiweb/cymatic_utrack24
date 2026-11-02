// rea decompile_all
// name: FUN_0048331c
// address: 0x48331c
// body: available
// range: 0x48331c-0x483393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048331c(char param_1)

{
  int *piVar1;
  int in_EAX;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_004832b5();
  if (*(char *)(in_EAX + 0xc) == '\0') {
    FUN_0048324d();
    **(undefined1 **)(in_EAX + 0x10) = 0xff;
    *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
    piVar1 = (int *)(in_EAX + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_00483173();
    }
    **(char **)(in_EAX + 0x10) = param_1 + -0x30;
    *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
    piVar1 = (int *)(in_EAX + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_00483173();
    }
  }
  if (*(int *)(*(int *)(in_EAX + 0x20) + 300) == 0) {
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(in_EAX + 0x20) + 0xe4)) {
      puVar2 = (undefined4 *)(in_EAX + 0x24);
      do {
        *puVar2 = 0;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < *(int *)(*(int *)(in_EAX + 0x20) + 0xe4));
    }
  }
  else {
    *(undefined4 *)(in_EAX + 0x38) = 0;
    *(undefined4 *)(in_EAX + 0x3c) = 0;
  }
  return;
}


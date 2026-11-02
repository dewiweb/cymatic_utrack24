// rea decompile_all
// name: FUN_004e3667
// address: 0x4e3667
// body: available
// range: 0x4e3667-0x4e36c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e3667(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_EDX;
  int unaff_EBX;
  
  if (unaff_EBX != 0) {
    piVar3 = *(int **)(in_EDX + 0x1c);
    piVar1 = piVar3 + *(int *)(in_EDX + 0x24);
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      if (unaff_EBX == *piVar3) {
        return;
      }
    }
    FUN_004e2b15();
    if (*(int *)(in_EDX + 0x20) < *(int *)(in_EDX + 0x24) + 1) {
      FUN_004f8197();
    }
    iVar2 = *(int *)(in_EDX + 0x24);
    *(int *)(in_EDX + 0x24) = iVar2 + 1;
    piVar1 = (int *)(*(int *)(in_EDX + 0x1c) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = unaff_EBX;
    }
  }
  return;
}


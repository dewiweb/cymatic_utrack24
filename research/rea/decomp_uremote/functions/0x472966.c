// rea decompile_all
// name: FUN_00472966
// address: 0x472966
// body: available
// range: 0x472966-0x472a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00472966(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int *piVar3;
  int local_8;
  
  while (*(int *)(unaff_ESI + 0x38) < *(int *)(unaff_ESI + 0x24)) {
    if (*(int *)(unaff_ESI + 0x24) < 1) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(*(int *)(unaff_ESI + 0x1c) + -4 + *(int *)(unaff_ESI + 0x24) * 4);
    }
    local_8 = 0;
    iVar2 = piVar3[2];
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      iVar1 = (**(code **)(**(int **)(*piVar3 + iVar2 * 4) + 0xc))();
      local_8 = local_8 + iVar1;
    }
    *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) - local_8;
    if (*(int *)(unaff_ESI + 0x24) < 2) {
      FUN_00472baf();
    }
    else {
      FUN_00472f28();
    }
  }
  while (((0 < *(int *)(unaff_ESI + 0x38) &&
          (*(int *)(unaff_ESI + 0x30) < *(int *)(unaff_ESI + 0x2c))) &&
         (*(int *)(unaff_ESI + 0x34) < *(int *)(unaff_ESI + 0x24)))) {
    if (*(int *)(unaff_ESI + 0x24) < 1) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)**(undefined4 **)(unaff_ESI + 0x1c);
    }
    local_8 = 0;
    iVar2 = piVar3[2];
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      iVar1 = (**(code **)(**(int **)(*piVar3 + iVar2 * 4) + 0xc))();
      local_8 = local_8 + iVar1;
    }
    *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) - local_8;
    FUN_00472c5c();
    *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + -1;
  }
  return;
}


// rea decompile_all
// name: FUN_0045bc10
// address: 0x45bc10
// body: available
// range: 0x45bc10-0x45bd23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045bc10(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int **)(unaff_EDI + 0x114) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EDI + 0x114) + 0xe4))();
    iVar1 = *(int *)(unaff_EDI + 0x154);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EDI + 0x154) = 0;
    }
    iVar1 = *(int *)(unaff_EDI + 0x158);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EDI + 0x158) = 0;
    }
    iVar1 = *(int *)(unaff_EDI + 0x15c);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EDI + 0x15c) = 0;
    }
    iVar1 = *(int *)(unaff_EDI + 0x160);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EDI + 0x160) = 0;
    }
    iVar1 = *(int *)(unaff_EDI + 0x164);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EDI + 0x164) = 0;
    }
    iVar1 = *(int *)(unaff_EDI + 0x168);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EDI + 0x168) = 0;
    }
    iVar1 = *(int *)(unaff_EDI + 0x130);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4 + iVar1) + 4))();
      *(int *)(unaff_EDI + 0x130) = 0;
    }
    FUN_0045f477();
    FUN_0045b052();
    (**(code **)**(undefined4 **)(unaff_EDI + 0x114))();
    *(undefined4 *)(unaff_EDI + 0x114) = 0;
    *(undefined4 *)(unaff_EDI + 0x118) = 0;
  }
  return;
}


// rea decompile_all
// name: FUN_0045ede5
// address: 0x45ede5
// body: available
// range: 0x45ede5-0x45ee39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045ede5(void)

{
  undefined4 uVar1;
  int unaff_EDI;
  
  if ((*(int **)(unaff_EDI + 0x114) != (int *)0x0) && (*(int *)(unaff_EDI + 0x130) != 0)) {
    if (*(int *)(unaff_EDI + 0x144) != 0) {
      (**(code **)(**(int **)(unaff_EDI + 0x114) + 0x60))(*(int *)(unaff_EDI + 0x144));
    }
    FUN_0043f3c8();
    uVar1 = (**(code **)(**(int **)(unaff_EDI + 0x130) + 0xb4))
                      (*(undefined4 *)(unaff_EDI + 0x158),0,1,unaff_EDI + 0x30,0);
    *(undefined4 *)(unaff_EDI + 0x144) = uVar1;
  }
  return;
}


// rea decompile_all
// name: FUN_0045ee8d
// address: 0x45ee8d
// body: available
// range: 0x45ee8d-0x45ef8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045ee8d(char param_1,char param_2)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x114) != 0) && (*(int *)(unaff_ESI + 0x130) != 0)) {
    if (*(int *)(unaff_ESI + 0x160) != 0) {
      FUN_004481e0();
      if (*(int *)(unaff_ESI + 0x148) != 0) {
        (**(code **)(**(int **)(unaff_ESI + 0x114) + 0x60))(*(int *)(unaff_ESI + 0x148));
      }
      uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x130) + 0xb4))
                        (*(undefined4 *)(unaff_ESI + 0x160),0,1,unaff_ESI + 0x30,0);
      *(undefined4 *)(unaff_ESI + 0x148) = uVar1;
    }
    if ((*(int *)(unaff_ESI + 0x164) != 0) && (param_1 != '\0')) {
      FUN_004481e0();
      if (*(int *)(unaff_ESI + 0x148) != 0) {
        (**(code **)(**(int **)(unaff_ESI + 0x114) + 0x60))(*(int *)(unaff_ESI + 0x148));
      }
      uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x130) + 0xb4))
                        (*(undefined4 *)(unaff_ESI + 0x164),0,1,unaff_ESI + 0x30,0);
      *(undefined4 *)(unaff_ESI + 0x148) = uVar1;
    }
    if ((*(int *)(unaff_ESI + 0x168) != 0) && (param_2 != '\0')) {
      if (*(int *)(unaff_ESI + 0x14c) != 0) {
        (**(code **)(**(int **)(unaff_ESI + 0x114) + 0x60))(*(int *)(unaff_ESI + 0x14c));
      }
      uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x130) + 0xb4))
                        (*(undefined4 *)(unaff_ESI + 0x168),0,1,unaff_ESI + 0x30,0);
      *(undefined4 *)(unaff_ESI + 0x14c) = uVar1;
    }
  }
  return;
}


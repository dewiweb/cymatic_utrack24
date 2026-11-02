// rea decompile_all
// name: FUN_00490e48
// address: 0x490e48
// body: available
// range: 0x490e48-0x490f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490e48(void)

{
  int iVar1;
  int unaff_ESI;
  int iVar2;
  
  FUN_00491789();
  *(undefined4 *)(unaff_ESI + 0x144) = 0;
  if (*(int *)(unaff_ESI + 0x148) != 0) {
    iVar2 = 1 << (8U - (char)*(undefined4 *)(unaff_ESI + 0x13c) & 0x1f);
    iVar1 = 0;
    if (0 < iVar2) {
      do {
        FUN_00491789();
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    FUN_00491789();
    *(undefined4 *)(unaff_ESI + 0x148) = 0;
  }
  FUN_00491789();
  *(undefined4 *)(unaff_ESI + 0x14c) = 0;
  FUN_00491789();
  *(undefined4 *)(unaff_ESI + 0x150) = 0;
  if (*(int *)(unaff_ESI + 0x154) != 0) {
    iVar2 = 1 << (8U - (char)*(undefined4 *)(unaff_ESI + 0x13c) & 0x1f);
    iVar1 = 0;
    if (0 < iVar2) {
      do {
        FUN_00491789();
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    FUN_00491789();
    *(undefined4 *)(unaff_ESI + 0x154) = 0;
  }
  if (*(int *)(unaff_ESI + 0x158) != 0) {
    iVar2 = 1 << (8U - (char)*(undefined4 *)(unaff_ESI + 0x13c) & 0x1f);
    iVar1 = 0;
    if (0 < iVar2) {
      do {
        FUN_00491789();
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    FUN_00491789();
    *(undefined4 *)(unaff_ESI + 0x158) = 0;
  }
  return;
}


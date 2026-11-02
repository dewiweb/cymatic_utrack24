// rea decompile_all
// name: FUN_004e0e03
// address: 0x4e0e03
// body: available
// range: 0x4e0e03-0x4e0e6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e0e03(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  
  if ((*(byte *)(unaff_ESI + 0x68) & 2) != 0) {
    cVar1 = FUN_004f5fe9(*(undefined4 *)(unaff_ESI + 0x84));
    if (cVar1 == '\0') {
      uVar2 = FUN_004c1514(0,&juce::Component::RTTI_Type_Descriptor,
                           &juce::PopupMenu::HelperClasses::MenuWindow::RTTI_Type_Descriptor,0);
      iVar3 = FUN_005cdbcf(uVar2);
      if (iVar3 == 0) {
        return 1;
      }
      for (iVar4 = *(int *)(unaff_ESI + 0x70); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x70)) {
        unaff_ESI = iVar4;
      }
      do {
        if (unaff_ESI == iVar3) {
          return 1;
        }
        unaff_ESI = *(int *)(unaff_ESI + 0xd4);
      } while (unaff_ESI != 0);
    }
    else {
      FUN_004e0a5f(0);
    }
  }
  return 0;
}


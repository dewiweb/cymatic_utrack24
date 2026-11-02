// rea decompile_all
// name: FUN_004ef85f
// address: 0x4ef85f
// body: available
// range: 0x4ef85f-0x4ef8de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004ef85f(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = FUN_004f4ce1();
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = FUN_004c3124();
  iVar3 = FUN_005cdbcf(iVar2,0,&juce::Component::RTTI_Type_Descriptor,
                       &juce::TopLevelWindow::RTTI_Type_Descriptor,0);
  if (iVar3 == 0) {
    if (iVar2 != 0) {
      do {
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          iVar3 = 0;
          break;
        }
        iVar3 = FUN_005cdbcf(iVar2,0,&juce::Component::RTTI_Type_Descriptor,
                             &juce::TopLevelWindow::RTTI_Type_Descriptor,0);
      } while (iVar3 == 0);
      if (iVar3 != 0) goto LAB_004ef8c3;
    }
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 == 0) {
      return 0;
    }
  }
LAB_004ef8c3:
  cVar1 = FUN_004c016b();
  if (cVar1 == '\0') {
    return 0;
  }
  return iVar3;
}


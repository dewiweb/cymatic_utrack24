// rea decompile_all
// name: FUN_004f8b05
// address: 0x4f8b05
// body: available
// range: 0x4f8b05-0x4f8b30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004f8b05(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_EAX + 0xc);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_005cdbcf(iVar2,0,&juce::Component::RTTI_Type_Descriptor,
                         &juce::PopupMenu::HelperClasses::ItemComponent::RTTI_Type_Descriptor,0);
    if (iVar1 != 0) break;
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  return iVar1;
}


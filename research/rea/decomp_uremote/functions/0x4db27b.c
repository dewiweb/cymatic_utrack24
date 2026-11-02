// rea decompile_all
// name: FUN_004db27b
// address: 0x4db27b
// body: available
// range: 0x4db27b-0x4db32f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004db27b(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + -0x10;
  if (param_3 != 0) {
    iVar1 = iVar1 - iVar1 / 3;
    FUN_004c09cc(iVar1 + 8,0,*(undefined4 *)(param_1 + 0x1c));
    iVar1 = iVar1 + -4;
  }
  FUN_004c09cc(8,4,0x16);
  FUN_004c09cc(iVar1 + -0x2a,4,0x16);
  iVar1 = FUN_005cdbcf(param_2,0,&juce::DirectoryContentsDisplayComponent::RTTI_Type_Descriptor,
                       &juce::Component::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    iVar1 = 0x1e;
  }
  else {
    FUN_004c09cc(8,0x1e,*(int *)(param_1 + 0x1c) + -0x3c);
    iVar1 = *(int *)(iVar1 + 0x1c) + 4 + *(int *)(iVar1 + 0x14);
  }
  FUN_004c09cc(0x3a,iVar1,0x16);
  return;
}


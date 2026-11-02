// rea decompile_all
// name: FUN_00691610
// address: 0x691610
// body: available
// range: 0x691610-0x691683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00691610(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
  }
  iVar2 = FUN_006f6dd6(uVar1,0,&juce::Component::RTTI_Type_Descriptor,
                       &juce::ToolbarItemComponent::RTTI_Type_Descriptor,0);
  if (iVar2 != 0) {
    iVar3 = iVar2;
    while (iVar3 = *(int *)(iVar3 + 0xc), iVar3 != in_ECX + -0x78) {
      if (iVar3 == 0) {
        return;
      }
    }
    FUN_0040e370(iVar2,iVar3);
    FUN_006cf2a0(iVar2);
    FUN_00691b60(1);
  }
  return;
}


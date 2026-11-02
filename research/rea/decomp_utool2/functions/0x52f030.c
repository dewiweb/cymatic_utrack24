// rea decompile_all
// name: FUN_0052f030
// address: 0x52f030
// body: available
// range: 0x52f030-0x52f0e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052f030(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  if (*(int *)(*(int *)(in_ECX + 0x98) + 0x9c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0068f6f0(in_ECX + 0x9c);
  }
  piVar2 = (int *)FUN_006f6dd6(uVar1,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                               &TargetExplorerBaseItem::RTTI_Type_Descriptor,0);
  uVar4 = *(uint *)(param_1 + 0x10) >> 4;
  if ((uVar4 & 1) != 0) {
    if (*(char *)(in_ECX + 0x7c) != '\0') {
      return;
    }
    if ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
        FUN_006dff00(1,1,uVar4);
      }
    }
    else {
      iVar3 = FUN_006f6dd6(piVar2[1],0,&juce::TreeView::RTTI_Type_Descriptor,
                           &TargetExplorer::RTTI_Type_Descriptor,0);
      if ((*(uint *)(iVar3 + 0xd8) >> 1 & 1) != 0) {
        FUN_0052e450(piVar2);
        (**(code **)(*piVar2 + 0x30))(param_1);
        return;
      }
    }
  }
  (**(code **)(*piVar2 + 0x30))(param_1);
  return;
}


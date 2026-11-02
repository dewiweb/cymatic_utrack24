// rea decompile_all
// name: FUN_0052d0e0
// address: 0x52d0e0
// body: available
// range: 0x52d0e0-0x52d153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0052d0e0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x9c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0068fb00(0);
  }
  piVar2 = (int *)FUN_006f6dd6(uVar1,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                               &TargetExplorerBaseItem::RTTI_Type_Descriptor,0);
  if ((*param_1 == 0x1002e) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
    if (piVar2 != (int *)0x0) {
      uVar3 = FUN_005305f0();
      if ((uVar3 & 1) != 0) {
        (**(code **)(*piVar2 + 0x5c))(1);
      }
    }
    return 1;
  }
  uVar1 = FUN_006e0750(param_1);
  return uVar1;
}


// rea decompile_all
// name: FUN_006b4dc0
// address: 0x6b4dc0
// body: available
// range: 0x6b4dc0-0x6b4e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b4dc0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (*(int *)(in_ECX + -0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0068fb00(param_2);
  }
  iVar2 = FUN_006f6dd6(uVar1,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                       &juce::FileListTreeItem::RTTI_Type_Descriptor,0,uVar4);
  if (iVar2 == 0) {
    *param_1 = (int)&DAT_00bfe12c;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x54);
    *param_1 = iVar2;
    piVar3 = (int *)(iVar2 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      return;
    }
  }
  return;
}


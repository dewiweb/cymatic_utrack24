// rea decompile_all
// name: FUN_00490d60
// address: 0x490d60
// body: available
// range: 0x490d60-0x490dea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490d60(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fc2e6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xb4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xb4) + 8);
  }
  piVar3 = (int *)FUN_006f6dd6(uVar2,0,&juce::Component::RTTI_Type_Descriptor,
                               &juce::DragAndDropTarget::RTTI_Type_Descriptor,0,
                               DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 4))(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*piVar3 + 0xc))(param_1);
    }
  }
  ExceptionList = local_10;
  return;
}


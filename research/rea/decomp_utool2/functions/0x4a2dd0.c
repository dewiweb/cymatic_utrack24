// rea decompile_all
// name: FUN_004a2dd0
// address: 0x4a2dd0
// body: available
// range: 0x4a2dd0-0x4a2eff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a2dd0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703501;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1c] = juce::SingleThreadedReferenceCountedObject::vftable;
  in_ECX[0x1d] = 0;
  *(undefined2 *)(in_ECX + 0x1e) = 0x100;
  local_8 = 0;
  *in_ECX = juce::Toolbar::MissingItemsComponent::vftable;
  in_ECX[0x1c] = juce::Toolbar::MissingItemsComponent::vftable;
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0040de70(param_1);
  }
  in_ECX[0x1f] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x20] = param_2;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar2 = *(int *)(param_1 + 0x94);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + iVar2 * 4);
    iVar3 = FUN_006f6dd6(piVar1,0,&juce::ToolbarItemComponent::RTTI_Type_Descriptor,
                         &juce::Toolbar::Spacer::RTTI_Type_Descriptor,0);
    if ((iVar3 == 0) && ((*(byte *)(piVar1 + 0x1a) & 2) == 0)) {
      FUN_00410380(0,iVar2);
      (**(code **)(*piVar1 + 0x28))(1);
      FUN_006e5050(piVar1,0);
    }
  }
  FUN_004a3090(param_1);
  ExceptionList = local_10;
  return;
}


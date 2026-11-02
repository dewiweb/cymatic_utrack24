// rea decompile_all
// name: FUN_0051a690
// address: 0x51a690
// body: available
// range: 0x51a690-0x51a7b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051a690(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  uint local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00709b72;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  iVar3 = FUN_006f6dd6(in_ECX[1],0,&juce::TreeView::RTTI_Type_Descriptor,
                       &ProjectExplorer::RTTI_Type_Descriptor,0,uVar2);
  if ((*(uint *)(iVar3 + 0x15c) & 2) != 0) {
    if (param_1[4] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_1[4] + 8);
    }
    FUN_006f6dd6(uVar5,0,&juce::Component::RTTI_Type_Descriptor,
                 &DragDropHelper_Source::RTTI_Type_Descriptor,0,uVar2);
    iVar3 = (**(code **)(*(int *)*param_1 + 0x1c))(param_1 + 2);
    if ((0 < *(int *)(iVar3 + 8)) && (iVar6 = 0, 0 < *(int *)(iVar3 + 8))) {
      do {
        local_28 = local_28 & 0xffffff00;
        puVar4 = (undefined4 *)FUN_00411210(local_24,iVar6);
        local_8 = 0;
        uVar5 = (**(code **)(*(int *)*puVar4 + 0x18))(puVar4 + 2);
        cVar1 = (**(code **)(*in_ECX + 0x70))(uVar5,&local_28);
        local_8 = 0xffffffff;
        (**(code **)(*local_24[0] + 0x54))(local_1c);
        if (cVar1 == '\0') break;
        FUN_004f08d0(local_28);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar3 + 8));
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


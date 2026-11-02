// rea decompile_all
// name: FUN_006e0be0
// address: 0x6e0be0
// body: available
// range: 0x6e0be0-0x6e0d4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e0be0(undefined1 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072819d;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006cfeb0(param_1);
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  in_ECX[0x1e] = juce::FileDragAndDropTarget::vftable;
  in_ECX[0x1f] = juce::DragAndDropTarget::vftable;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  *in_ECX = juce::TreeView::vftable;
  in_ECX[0x1c] = juce::TreeView::vftable;
  in_ECX[0x1e] = juce::TreeView::vftable;
  in_ECX[0x1f] = juce::TreeView::vftable;
  puVar3 = operator_new(800);
  local_8._0_1_ = 4;
  param_1 = &DAT_00bfe12c;
  FUN_006e4ec0(&param_1);
  *puVar3 = juce::TreeView::TreeViewport::vftable;
  puVar3[0x1c] = juce::TreeView::TreeViewport::vftable;
  puVar3[0x1d] = juce::TreeView::TreeViewport::vftable;
  puVar3[0xc6] = 0xffffffff;
  in_ECX[0x20] = puVar3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x21));
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  local_8._0_1_ = 8;
  piVar1 = (int *)in_ECX[0x20];
  in_ECX[0x2a] = 0xffffffff;
  in_ECX[0x2b] = 0x10100;
  *(undefined1 *)(in_ECX + 0x2c) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(1,uVar2);
    FUN_006e5050(piVar1,0xffffffff);
  }
  param_1 = operator_new(0x94);
  local_8._0_1_ = 9;
  uVar4 = FUN_004a31c0(in_ECX);
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_006e4cd0(uVar4,1);
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x20;
  ExceptionList = local_10;
  return;
}


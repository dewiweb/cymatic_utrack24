// rea decompile_all
// name: FUN_00503130
// address: 0x503130
// body: available
// range: 0x503130-0x50349a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00503130(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *_Memory;
  int iVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007076f0;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c990("Drag and drop songs from the left panel.",uVar1);
  local_8 = 0;
  puVar2 = in_ECX + 0x1c;
  if (in_ECX == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  FUN_004f6eb0(0x2a,puVar2,&local_14);
  local_8 = 2;
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  in_ECX[0x8b] = juce::DragAndDropTarget::vftable;
  in_ECX[0x8c] = PushButton::Listener::vftable;
  local_8._0_1_ = 6;
  *in_ECX = PlaylistContentList::vftable;
  in_ECX[0x1c] = PlaylistContentList::vftable;
  in_ECX[0x1d] = PlaylistContentList::vftable;
  in_ECX[0x8b] = PlaylistContentList::vftable;
  in_ECX[0x8c] = PlaylistContentList::vftable;
  in_ECX[0x8d] = param_1;
  FUN_004f83b0();
  in_ECX[0xdb] = 0;
  in_ECX[0xdc] = 0;
  in_ECX[0xdd] = 0;
  piVar4 = in_ECX + 0xde;
  *piVar4 = 0;
  in_ECX[0xdf] = 0;
  in_ECX[0xe0] = 0;
  *(undefined1 *)(in_ECX + 0xe2) = 0;
  in_ECX[0xe3] = 0;
  in_ECX[0xe4] = 0;
  in_ECX[0xe5] = 0;
  local_8._0_1_ = 10;
  FUN_0045c990("Delete",uVar1);
  local_8._0_1_ = 0xb;
  FUN_004f8290(&param_1,0x24);
  local_8 = CONCAT31(local_8._1_3_,10);
  _Memory = (int *)(param_1 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar5 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  if (in_ECX + 0x8c != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x8c);
  }
  (**(code **)(in_ECX[0x8e] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x8e,0xffffffff);
  if (in_ECX[0xdf] != 0) {
    FID_conflict__free((void *)*piVar4);
    *piVar4 = 0;
    in_ECX[0xdf] = 0;
  }
  in_ECX[0xe0] = 0;
  iVar5 = in_ECX[0xe0] + 1;
  if ((int)in_ECX[0xdf] < iVar5) {
    FUN_00409cf0(iVar5 / 2 + in_ECX[0xe0] + 9 & 0xfffffff8);
  }
  iVar5 = in_ECX[0xe0];
  in_ECX[0xe0] = iVar5 + 1;
  puVar2 = (undefined4 *)(*piVar4 + iVar5 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x28;
  }
  iVar5 = in_ECX[0xe0] + 1;
  if ((int)in_ECX[0xdf] < iVar5) {
    FUN_00409cf0(iVar5 / 2 + in_ECX[0xe0] + 9 & 0xfffffff8);
  }
  iVar5 = in_ECX[0xe0];
  in_ECX[0xe0] = iVar5 + 1;
  puVar2 = (undefined4 *)(*piVar4 + iVar5 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x3c;
  }
  iVar5 = in_ECX[0xe0] + 1;
  if ((int)in_ECX[0xdf] < iVar5) {
    FUN_00409cf0(iVar5 / 2 + in_ECX[0xe0] + 9 & 0xfffffff8);
  }
  iVar5 = in_ECX[0xe0];
  in_ECX[0xe0] = iVar5 + 1;
  puVar2 = (undefined4 *)(*piVar4 + iVar5 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 100;
  }
  iVar5 = in_ECX[0xe0] + 1;
  if ((int)in_ECX[0xdf] < iVar5) {
    FUN_00409cf0(iVar5 / 2 + in_ECX[0xe0] + 9 & 0xfffffff8);
  }
  iVar5 = in_ECX[0xe0];
  in_ECX[0xe0] = iVar5 + 1;
  puVar2 = (undefined4 *)(*piVar4 + iVar5 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x5a;
  }
  iVar5 = in_ECX[0xe0] + 1;
  if ((int)in_ECX[0xdf] < iVar5) {
    FUN_00409cf0(iVar5 / 2 + in_ECX[0xe0] + 9 & 0xfffffff8);
  }
  iVar5 = in_ECX[0xe0];
  in_ECX[0xe0] = iVar5 + 1;
  puVar2 = (undefined4 *)(*piVar4 + iVar5 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x46;
  }
  if (in_ECX[0xe0] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)*piVar4;
  }
  if ((uint)in_ECX[0xe0] < 2) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*piVar4 + 4);
  }
  if ((uint)in_ECX[0xe0] < 4) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*piVar4 + 0xc);
  }
  if ((uint)in_ECX[0xe0] < 5) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*piVar4 + 0x10);
  }
  in_ECX[0xe1] = iVar3 + iVar6 + iVar7 + iVar5;
  ExceptionList = local_10;
  return;
}


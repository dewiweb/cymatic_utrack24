// rea decompile_all
// name: FUN_00533ce0
// address: 0x533ce0
// body: available
// range: 0x533ce0-0x534051 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00533ce0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d214;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("Drag and drop audio files from the left panel.",
               DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  puVar1 = in_ECX + 0x1c;
  if (in_ECX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  FUN_004f6eb0(0x16,puVar1,&local_14);
  local_8 = 2;
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  in_ECX[0x8b] = juce::DragAndDropTarget::vftable;
  in_ECX[0x8c] = PushButton::Listener::vftable;
  local_8._0_1_ = 6;
  *in_ECX = TrackList::vftable;
  in_ECX[0x1c] = TrackList::vftable;
  in_ECX[0x1d] = TrackList::vftable;
  in_ECX[0x8b] = TrackList::vftable;
  in_ECX[0x8c] = TrackList::vftable;
  in_ECX[0x8d] = param_1;
  FUN_004f83b0();
  local_8._0_1_ = 7;
  FUN_004f83b0();
  in_ECX[0x12d] = 0;
  in_ECX[0x12e] = 0;
  in_ECX[0x12f] = 0;
  in_ECX[0x132] = 0;
  in_ECX[0x133] = 0;
  in_ECX[0x134] = 0;
  piVar2 = in_ECX + 0x135;
  *piVar2 = 0;
  in_ECX[0x136] = 0;
  in_ECX[0x137] = 0;
  in_ECX[0x138] = 0;
  in_ECX[0x139] = 0;
  in_ECX[0x13a] = 0;
  local_8._0_1_ = 0xc;
  in_ECX[0x128] = 0;
  in_ECX[0x129] = 0;
  in_ECX[0x12a] = 1;
  in_ECX[299] = 48000;
  in_ECX[300] = 0x18;
  in_ECX[0x131] = 0xffffffff;
  in_ECX[0x130] = 0;
  FUN_0045c990("Delete");
  local_8._0_1_ = 0xd;
  FUN_004f8290(&param_1,0x24);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (in_ECX + 0x8c != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x8c);
  }
  (**(code **)(in_ECX[0x8e] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x8e,0xffffffff);
  FUN_0045c990("Mixer");
  local_8._0_1_ = 0xe;
  FUN_004f8290(&param_1,0x24);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (in_ECX + 0x8c != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x8c);
  }
  (**(code **)(in_ECX[0xdb] + 0x28))(1);
  FUN_006e5050(in_ECX + 0xdb,0xffffffff);
  if (in_ECX[0x136] != 0) {
    FID_conflict__free((void *)*piVar2);
    *piVar2 = 0;
    in_ECX[0x136] = 0;
  }
  in_ECX[0x137] = 0;
  iVar4 = in_ECX[0x137] + 1;
  if ((int)in_ECX[0x136] < iVar4) {
    FUN_00409cf0(iVar4 / 2 + in_ECX[0x137] + 9 & 0xfffffff8);
  }
  iVar4 = in_ECX[0x137];
  in_ECX[0x137] = iVar4 + 1;
  puVar1 = (undefined4 *)(*piVar2 + iVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x32;
  }
  iVar4 = in_ECX[0x137] + 1;
  if ((int)in_ECX[0x136] < iVar4) {
    FUN_00409cf0(iVar4 / 2 + in_ECX[0x137] + 9 & 0xfffffff8);
  }
  iVar4 = in_ECX[0x137];
  in_ECX[0x137] = iVar4 + 1;
  puVar1 = (undefined4 *)(*piVar2 + iVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 100;
  }
  ExceptionList = local_10;
  return;
}


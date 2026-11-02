// rea decompile_all
// name: FUN_00506bc0
// address: 0x506bc0
// body: available
// range: 0x506bc0-0x506d67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00506bc0(void *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707e50;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004eb7e0(1);
  in_ECX[0x4c] = PlaylistEditor::Listener::vftable;
  *in_ECX = PopupEditorPlaylist::vftable;
  in_ECX[0x1c] = PopupEditorPlaylist::vftable;
  in_ECX[0x4c] = PopupEditorPlaylist::vftable;
  in_ECX[0x4d] = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  in_ECX[0x4e] = param_1;
  in_ECX[0x4f] = param_2;
  FUN_0045c990(&DAT_0073a058,uVar3);
  local_8._0_1_ = 3;
  FUN_004eabf0(1,&param_1,1);
  local_8._0_1_ = 2;
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990("Close Editor",uVar3);
  local_8._0_1_ = 4;
  FUN_004eabf0(0,&param_1,1);
  local_8._0_1_ = 2;
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_004ea730(1);
  FUN_004ea0c0();
  param_1 = operator_new(0xf1c);
  local_8._0_1_ = 5;
  puVar4 = (undefined4 *)FUN_00505980(in_ECX + 0x4c);
  local_8 = CONCAT31(local_8._1_3_,2);
  puVar2 = (undefined4 *)in_ECX[0x4d];
  if ((puVar2 != puVar4) && (in_ECX[0x4d] = puVar4, puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  piVar5 = (int *)in_ECX[0x4d];
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x28))(1);
    FUN_006e5050(piVar5,0xffffffff);
  }
  ExceptionList = local_10;
  return;
}


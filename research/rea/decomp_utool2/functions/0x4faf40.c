// rea decompile_all
// name: FUN_004faf40
// address: 0x4faf40
// body: available
// range: 0x4faf40-0x4fb0d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004faf40(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706980;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004eb7e0(1);
  in_ECX[0x4c] = MTSongEditor::Listener::vftable;
  *in_ECX = PopupEditorMultitrackSong::vftable;
  in_ECX[0x1c] = PopupEditorMultitrackSong::vftable;
  in_ECX[0x4c] = PopupEditorMultitrackSong::vftable;
  in_ECX[0x4d] = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  in_ECX[0x4e] = param_1;
  FUN_0045c990("Resampling",uVar2);
  local_8._0_1_ = 3;
  FUN_004eade0(2,1,&param_1,0);
  local_8._0_1_ = 2;
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990(&DAT_0073945c,uVar2);
  local_8._0_1_ = 4;
  FUN_004eabf0(1,&param_1,1);
  local_8._0_1_ = 2;
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990("Close Editor");
  local_8._0_1_ = 5;
  FUN_004eabf0(0,&param_1,1);
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_004ea730(1);
  FUN_004ea0c0();
  ExceptionList = local_10;
  return;
}


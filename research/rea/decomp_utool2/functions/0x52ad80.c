// rea decompile_all
// name: FUN_0052ad80
// address: 0x52ad80
// body: available
// range: 0x52ad80-0x52ae69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052ad80(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *_Memory;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c3a4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar1 = in_ECX + 0x1c;
  *puVar1 = juce::Label::Listener::vftable;
  *in_ECX = PopupEditorStereoSong::Cell::vftable;
  *puVar1 = PopupEditorStereoSong::Cell::vftable;
  in_ECX[0x1d] = param_1;
  local_14 = &DAT_00bfe12c;
  param_1 = &DAT_00bfe12c;
  local_8 = 3;
  FUN_006e8b40(&param_1,&local_14);
  _Memory = (int *)(param_1 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar2 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0(puVar1);
  }
  (**(code **)(in_ECX[0x20] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x20,0xffffffff);
  FUN_006dfe90(in_ECX,1);
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) | 0x20;
  ExceptionList = local_10;
  return;
}


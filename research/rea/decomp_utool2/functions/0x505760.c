// rea decompile_all
// name: FUN_00505760
// address: 0x505760
// body: available
// range: 0x505760-0x505978 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00505760(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_ECX;
  int *piVar5;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707a8a;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar2 = in_ECX + 0x20;
  piVar5 = (int *)(in_ECX[0x3c5] + -8);
  *in_ECX = PlaylistEditor::vftable;
  in_ECX[0x1c] = PlaylistEditor::vftable;
  in_ECX[0x1f] = PlaylistEditor::vftable;
  *puVar2 = PlaylistEditor::vftable;
  in_ECX[0x21] = PlaylistEditor::vftable;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_00503090(uVar3);
  FUN_004f9930();
  if ((undefined4 *)in_ECX[0x2ae] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x2ae])(1);
  }
  if ((undefined4 *)in_ECX[0x2ad] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x2ad])(1);
  }
  FUN_004f9930();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_004f9930();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_004f9930();
  FUN_006e4a60();
  FUN_006e4a60();
  FUN_004f9930();
  FUN_004f9930();
  FUN_004f9930();
  puVar1 = (undefined4 *)in_ECX[0x24];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = puVar1 + 1;
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  iVar4 = in_ECX[0x23];
  if (iVar4 != 0) {
    FUN_0054be70();
    FUN_004bfe14(iVar4,0x30);
  }
  in_ECX[0x21] = PlaylistContentList::Listener::vftable;
  local_8 = 0;
  *puVar2 = GlobalNotifierListener::vftable;
  iVar4 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x18));
  local_14 = puVar2;
  uVar3 = FUN_00447770(&local_14);
  if (uVar3 < *(uint *)(iVar4 + 0x14)) {
    FUN_00410320(uVar3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x18));
  *puVar2 = juce::ActionListener::vftable;
  in_ECX[0x1f] = juce::Label::Listener::vftable;
  in_ECX[0x1c] = juce::DragAndDropContainer::vftable;
  puVar2 = (undefined4 *)in_ECX[0x1d];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x1d] = 0;
    (**(code **)*puVar2)(1);
  }
  if ((undefined4 *)in_ECX[0x1d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1d])(1);
  }
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}


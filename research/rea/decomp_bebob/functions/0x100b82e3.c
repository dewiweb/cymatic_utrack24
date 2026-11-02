// rea decompile_all
// name: CMFCRibbonBaseElement::SetDroppedDown
// address: 0x100b82e3
// body: available
// range: 0x100b82e3-0x100b8366 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonBaseElement::SetDroppedDown(class CMFCPopupMenu *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonBaseElement::SetDroppedDown(CMFCRibbonBaseElement *this,CMFCPopupMenu *param_1)

{
  uint uVar1;
  int iVar2;
  HWND pHVar3;
  uint uVar4;
  
  *(CMFCPopupMenu **)(this + 0x40) = param_1;
  if (param_1 == (CMFCPopupMenu *)0x0) {
    (**(code **)(*(int *)this + 0x160))(0xffffffff);
  }
  else {
    CMFCPopupMenu::SetParentRibbonElement(param_1,this);
  }
  uVar1 = *(uint *)(this + 0x84);
  uVar4 = (uint)(param_1 != (CMFCPopupMenu *)0x0);
  *(uint *)(this + 0x84) = uVar4;
  if (uVar4 == 0) {
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x6c) = 0;
  }
  if (uVar1 != uVar4) {
    (**(code **)(*(int *)this + 0x118))();
  }
  iVar2 = *(int *)(this + 0x38);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != 0)) && (param_1 == (CMFCPopupMenu *)0x0)) {
    pHVar3 = GetParent(*(HWND *)(iVar2 + 0x20));
    DAT_1016843c = CWnd::FromHandle(pHVar3);
  }
  *(undefined4 *)(this + 0xa0) = 0;
  return;
}


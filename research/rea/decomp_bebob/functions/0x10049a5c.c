// rea decompile_all
// name: CMFCPropertyGridCtrl::ReposProperties
// address: 0x10049a5c
// body: available
// range: 0x10049a5c-0x10049b1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::ReposProperties(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPropertyGridCtrl::ReposProperties(CMFCPropertyGridCtrl *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  CMFCPropertyGridCtrl *local_8;
  
  local_8 = this;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x37c));
  if (((CToolTipCtrl *)(this + 0x74) != (CToolTipCtrl *)0x0) && (*(int *)(this + 0x94) != 0)) {
    while (0 < *(int *)(this + 0x300)) {
      CToolTipCtrl::DelTool((CToolTipCtrl *)(this + 0x74),(CWnd *)this,*(uint *)(this + 0x300));
      *(int *)(this + 0x300) = *(int *)(this + 0x300) + -1;
    }
  }
  local_8 = (CMFCPropertyGridCtrl *)
            ((*(int *)(this + 0x2ec) - *(int *)(this + 0x31c) * *(int *)(this + 0x314)) + -1);
  if (*(int *)(this + 0x2c4) == 0) {
    puVar2 = *(undefined4 **)(this + 0x364);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      CMFCPropertyGridProperty::Reposition((CMFCPropertyGridProperty *)puVar2[2],(int *)&local_8);
      puVar2 = puVar1;
    }
  }
  else {
    puVar2 = *(undefined4 **)(this + 0x364);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      CMFCPropertyGridProperty::AddTerminalProp
                ((CMFCPropertyGridProperty *)puVar2[2],
                 (CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*> *)(this + 0x37c));
      puVar2 = puVar1;
    }
    puVar2 = *(undefined4 **)(this + 0x380);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      CMFCPropertyGridProperty::Reposition((CMFCPropertyGridProperty *)puVar2[2],(int *)&local_8);
      puVar2 = puVar1;
    }
  }
  return;
}


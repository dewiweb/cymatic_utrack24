// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnUpdateCmdUI
// address: 0x100a2697
// body: available
// range: 0x100a2697-0x100a2736 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonPanelMenuBar::OnUpdateCmdUI(class CFrameWnd *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnUpdateCmdUI(CMFCRibbonPanelMenuBar *this,CFrameWnd *param_1,int param_2)

{
  int iVar1;
  CObject *pCVar2;
  CMFCRibbonCmdUI local_30 [20];
  CMFCRibbonPanelMenuBar *local_1c;
  
  CMFCRibbonCmdUI::CMFCRibbonCmdUI(local_30);
  local_1c = this;
  if (*(int **)(this + 0xe30) == (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe20) + 0x54))(local_30,param_1,param_2);
  }
  else {
    (**(code **)(**(int **)(this + 0xe30) + 0x24))();
  }
  CWnd::UpdateDialogControls((CWnd *)this,(CCmdTarget *)param_1,param_2);
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(this + 0xd78) == 0) {
    return;
  }
  if (*(int *)(this + 0xe20) == 0) {
    pCVar2 = *(CObject **)(this + 0xe30);
    if (pCVar2 == (CObject *)0x0) goto LAB_100a2724;
  }
  else {
    iVar1 = FUN_100b3c4d(*(int *)(this + 0xe20));
    if (iVar1 != 0) goto LAB_100a2724;
    pCVar2 = *(CObject **)(this + 0xe20);
  }
  CMFCRibbonBar::SetKeyboardNavigationLevel(*(CMFCRibbonBar **)(this + 0xe1c),pCVar2,0);
LAB_100a2724:
  *(undefined4 *)(this + 0xd78) = 0;
  CMFCPopupMenu::UpdateAllShadows((tagRECT *)0x0);
  return;
}


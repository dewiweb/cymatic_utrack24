// rea decompile_all
// name: CMDIFrameWndEx::OnWindowPosChanged
// address: 0x10022cac
// body: available
// range: 0x10022cac-0x10022d38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIFrameWndEx::OnWindowPosChanged(struct tagWINDOWPOS *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIFrameWndEx::OnWindowPosChanged(CMDIFrameWndEx *this,tagWINDOWPOS *param_1)

{
  CMDIChildWnd *pCVar1;
  int iVar2;
  
  if (((byte)param_1[0x18] & 0x20) != 0) {
    CFrameImpl::OnWindowPosChanging((CFrameImpl *)(this + 0x33c),param_1);
  }
  CWnd::Default((CWnd *)this);
  if (*(int *)(this + 1000) != 0) {
    pCVar1 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this,(int *)&param_1);
    if ((pCVar1 == (CMDIChildWnd *)0x0) || (param_1 == (tagWINDOWPOS *)0x0)) {
      pCVar1 = (CMDIChildWnd *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    CMFCMenuBar::SetMaximizeMode(*(CMFCMenuBar **)(this + 1000),iVar2,(CWnd *)pCVar1,1);
  }
  if (*(int *)(this + 0x438) != 0) {
    pCVar1 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this,(int *)&param_1);
    if ((pCVar1 == (CMDIChildWnd *)0x0) || (param_1 == (tagWINDOWPOS *)0x0)) {
      pCVar1 = (CMDIChildWnd *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    CMFCRibbonBar::SetMaximizeMode(*(CMFCRibbonBar **)(this + 0x438),iVar2,(CWnd *)pCVar1);
  }
  return;
}


// rea decompile_all
// name: CMFCRibbonPanelMenuBar::PreTranslateMessage
// address: 0x100a3e32
// body: available
// range: 0x100a3e32-0x100a3ec9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCRibbonPanelMenuBar::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCRibbonPanelMenuBar::PreTranslateMessage(CMFCRibbonPanelMenuBar *this,tagMSG *param_1)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (((param_1->message == 0x100) && (param_1->wParam == 9)) &&
     (iVar1 = (**(code **)(*(int *)this + 0x3fc))(9), iVar1 != 0)) {
    iVar1 = 1;
  }
  else {
    if (param_1->message == 0x201) {
      pHVar2 = GetFocus();
      pCVar3 = CWnd::FromHandle(pHVar2);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonRichEditCtrl_10131fc0,
                                  (CObject *)pCVar3);
      if (pCVar4 != (CObject *)0x0) {
        local_c.x = 0;
        local_c.y = 0;
        GetCursorPos(&local_c);
        ScreenToClient(*(HWND *)(this + 0x20),&local_c);
        (**(code **)(**(int **)(pCVar4 + 0x74) + 0x1dc))(local_c.x,local_c.y);
      }
    }
    iVar1 = CMFCToolBar::PreTranslateMessage((CMFCToolBar *)this,param_1);
  }
  return iVar1;
}


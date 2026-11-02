// rea decompile_all
// name: CMFCToolBarSystemMenuButton::OnAfterCreatePopupMenu
// address: 0x100921ac
// body: available
// range: 0x100921ac-0x1009222c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarSystemMenuButton::OnAfterCreatePopupMenu(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarSystemMenuButton::OnAfterCreatePopupMenu(CMFCToolBarSystemMenuButton *this)

{
  BOOL BVar1;
  CObject *pCVar2;
  int iVar3;
  HWND pHVar4;
  CMDIChildWnd *pCVar5;
  
  if (*(int *)(this + 0x8c) != 0) {
    BVar1 = IsWindow(*(HWND *)(*(int *)(this + 0x8c) + 0x20));
    if (BVar1 != 0) {
      pCVar2 = DAT_10168578;
      if (DAT_10168578 == (CObject *)0x0) {
        pCVar2 = (CObject *)CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x8c));
      }
      if (pCVar2 != (CObject *)0x0) {
        iVar3 = CObject::IsKindOf(pCVar2,(CRuntimeClass *)&PTR_s_CMiniDockFrameWnd_101379ac);
        if (iVar3 != 0) {
          pHVar4 = GetParent(*(HWND *)(pCVar2 + 0x20));
          pCVar2 = (CObject *)CWnd::FromHandle(pHVar4);
        }
      }
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWnd_10127cb4,pCVar2);
      if (pCVar2 != (CObject *)0x0) {
        pCVar5 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)pCVar2,(int *)0x0);
        *(CMDIChildWnd **)(*(int *)(this + 0x8c) + 0x124) = pCVar5;
      }
    }
  }
  return;
}


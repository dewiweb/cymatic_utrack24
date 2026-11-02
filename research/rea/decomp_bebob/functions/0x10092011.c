// rea decompile_all
// name: CMFCToolBarSystemMenuButton::OnDblClk
// address: 0x10092011
// body: available
// range: 0x10092011-0x100920ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009202d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarSystemMenuButton::OnDblClk(class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarSystemMenuButton::OnDblClk(CMFCToolBarSystemMenuButton *this,CWnd *param_1)

{
  CFrameWnd *this_00;
  int iVar1;
  HWND pHVar2;
  CObject *this_01;
  CMDIChildWnd *pCVar3;
  HMENU pHVar4;
  CMenu *pCVar5;
  tagMENUITEMINFOW local_34;
  
  if (DAT_10166e54 == 0) {
    if (param_1 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    (**(code **)(*(int *)this + 0x58))();
    this_00 = AFXGetParentFrame(param_1);
    if ((this_00 != (CFrameWnd *)0x0) &&
       (iVar1 = CObject::IsKindOf((CObject *)this_00,
                                  (CRuntimeClass *)&PTR_s_CMiniDockFrameWnd_101379ac), iVar1 != 0))
    {
      pHVar2 = GetParent(*(HWND *)(this_00 + 0x20));
      this_00 = (CFrameWnd *)CWnd::FromHandle(pHVar2);
    }
    this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWnd_10127cb4,(CObject *)this_00);
    if (this_01 != (CObject *)0x0) {
      pCVar3 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this_01,(int *)0x0);
      pHVar4 = GetSystemMenu(*(HWND *)(pCVar3 + 0x20),0);
      pCVar5 = CMenu::FromHandle(pHVar4);
      if (pCVar5 != (CMenu *)0x0) {
        _memset(&local_34,0,0x30);
        local_34.cbSize = 0x30;
        local_34.fMask = 1;
        GetMenuItemInfoW(*(HMENU *)(pCVar5 + 4),0xf060,0,&local_34);
        if ((local_34.fState & 3) != 0) {
          return;
        }
      }
      SendMessageW(*(HWND *)(pCVar3 + 0x20),0x112,0xf060,0);
    }
  }
  return;
}


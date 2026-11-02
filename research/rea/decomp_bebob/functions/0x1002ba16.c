// rea decompile_all
// name: CMFCToolBar::ToolBarMouseHookProc
// address: 0x1002ba16
// body: available
// range: 0x1002ba16-0x1002bb67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ba45 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static long __stdcall CMFCToolBar::ToolBarMouseHookProc(int,unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long CMFCToolBar::ToolBarMouseHookProc(int param_1,uint param_2,long param_3)

{
  int iVar1;
  LRESULT LVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CMFCToolBar *pCVar5;
  CObject *this;
  CMFCToolBar *pCVar6;
  tagPOINT local_c;
  
  if (param_1 != 0) {
    LVar2 = CallNextHookEx(DAT_10166e78,param_1,param_2,param_3);
    return LVar2;
  }
  if (param_3 != 0) {
    pCVar5 = DAT_10166e7c;
    if (param_2 == 0x200) {
      pHVar3 = WindowFromPoint(*(POINT *)param_3);
      pCVar4 = CWnd::FromHandle(pHVar3);
      pCVar5 = (CMFCToolBar *)
               AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,(CObject *)pCVar4);
      if (pCVar5 != (CMFCToolBar *)0x0) {
        local_c.x = *(LONG *)param_3;
        local_c.y = *(LONG *)(param_3 + 4);
        ScreenToClient(*(HWND *)(pCVar5 + 0x20),&local_c);
        OnMouseMove(pCVar5,0,local_c.x,local_c.y);
      }
      if ((DAT_10166e7c != (CMFCToolBar *)0x0) && (DAT_10166e7c != pCVar5)) {
        *(int *)(DAT_10166e7c + 0xb34) = 0;
        *(int *)(DAT_10166e7c + 0xc88) = -1;
        *(int *)(DAT_10166e7c + 0xc8c) = -1;
        if (-1 < *(int *)(DAT_10166e7c + 0xb7c)) {
          iVar1 = *(int *)(DAT_10166e7c + 0xb7c);
          *(int *)(DAT_10166e7c + 0xb7c) = -1;
          if (pCVar5 != (CMFCToolBar *)0x0) {
            pHVar3 = GetParent(*(HWND *)(pCVar5 + 0x20));
            pCVar4 = CWnd::FromHandle(pHVar3);
            this = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,
                                      (CObject *)pCVar4);
            if ((this != (CObject *)0x0) &&
               (pCVar6 = CMFCPopupMenu::GetParentToolBar((CMFCPopupMenu *)this),
               pCVar6 == DAT_10166e7c)) {
              DAT_10166e7c = pCVar5;
              return 0;
            }
          }
          (**(code **)(*(int *)DAT_10166e7c + 0x3b0))(*(int *)(DAT_10166e7c + 0xb7c));
          InvalidateButton(DAT_10166e7c,iVar1);
          UpdateWindow(*(HWND *)(DAT_10166e7c + 0x20));
        }
      }
    }
    DAT_10166e7c = pCVar5;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


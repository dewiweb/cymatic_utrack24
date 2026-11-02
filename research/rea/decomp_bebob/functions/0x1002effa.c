// rea decompile_all
// name: CMFCToolBar::OnCreate
// address: 0x1002effa
// body: available
// range: 0x1002effa-0x1002f140 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCToolBar::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::OnCreate(CMFCToolBar *this,tagCREATESTRUCTW *param_1)

{
  long lVar1;
  AFX_MODULE_STATE *pAVar2;
  CFrameWnd *pCVar3;
  CFrameWnd *this_00;
  ulong uVar4;
  _AFX_THREAD_STATE *p_Var5;
  HPEN pHVar6;
  CMFCVisualManager *pCVar7;
  int iVar8;
  
  lVar1 = CWnd::Default((CWnd *)this);
  if (lVar1 == -1) {
    iVar8 = -1;
  }
  else {
    if (DAT_10166b88 == (HCURSOR)0x0) {
      AfxGetModuleState();
      pAVar2 = AfxGetModuleState();
      DAT_10166b88 = LoadCursorW(*(HINSTANCE *)(pAVar2 + 0xc),(LPCWSTR)0x7904);
    }
    if (DAT_10166b8c == (HCURSOR)0x0) {
      AfxGetModuleState();
      pAVar2 = AfxGetModuleState();
      DAT_10166b8c = LoadCursorW(*(HINSTANCE *)(pAVar2 + 0xc),(LPCWSTR)0x7905);
    }
    if (DAT_10166b94 == (HCURSOR)0x0) {
      AfxGetModuleState();
      DAT_10166b94 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f86);
    }
    pCVar3 = AFXGetParentFrame((CWnd *)this);
    if (pCVar3 != (CFrameWnd *)0x0) {
      this_00 = AFXGetParentFrame((CWnd *)this);
      pCVar3 = (CFrameWnd *)DAT_10168578;
      if (DAT_10168578 == (CWnd *)0x0) {
        pCVar3 = CWnd::GetTopLevelFrame((CWnd *)this_00);
      }
      if (pCVar3 != (CFrameWnd *)0x0) {
        uVar4 = CWnd::GetExStyle((CWnd *)pCVar3);
        CMFCToolBarImages::EnableRTL(uVar4 & 0x400000);
      }
    }
    if ((*(int *)(this + 0xb28) == 0) &&
       (p_Var5 = AfxGetThreadState(), *(int *)(p_Var5 + 0x160) != 0)) {
      CMFCToolBarDropTarget::Register((CMFCToolBarDropTarget *)(this + 0xc1c),this);
    }
    pHVar6 = CreatePen(0,1,DAT_10166ac0);
    CMenu::Attach((CMenu *)(this + 0xc78),(HMENU__ *)pHVar6);
    CTooltipManager::CreateToolTip((CToolTipCtrl **)(this + 0xc94),(CWnd *)this,2);
    pCVar7 = CMFCVisualManager::GetInstance();
    iVar8 = (**(code **)(*(int *)pCVar7 + 0xbc))(this);
    *(int *)(this + 0xb64) = iVar8;
    if (iVar8 == 0) {
      SetWindowRgn(*(HWND *)(this + 0x20),(HRGN)0x0,0);
    }
    else {
      SetRoundedRgn(this);
    }
    CObList::AddTail((CObList *)&DAT_10166ebc,(CObject *)this);
    iVar8 = 0;
  }
  return iVar8;
}


// rea decompile_all
// name: CFrameWndEx::PreTranslateMessage
// address: 0x10024bf2
// body: available
// range: 0x10024bf2-0x10024f89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CFrameWndEx::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CFrameWndEx::PreTranslateMessage(CFrameWndEx *this,tagMSG *param_1)

{
  uint uVar1;
  CSmartDockingManager *this_00;
  tagPOINT tVar2;
  tagPOINT tVar3;
  tagPOINT tVar4;
  ushort uVar5;
  SHORT SVar6;
  int iVar7;
  BOOL BVar8;
  HWND pHVar9;
  CWnd *pCVar10;
  CObject *pCVar11;
  HIMC pHVar12;
  UINT Msg;
  tagPOINT local_14;
  int local_c;
  int local_8;
  
  uVar1 = param_1->message;
  local_8 = 1;
  if (uVar1 < 0x106) {
    if (uVar1 == 0x105) {
      if ((*(CMFCRibbonBar **)(this + 0x220) != (CMFCRibbonBar *)0x0) &&
         (iVar7 = CMFCRibbonBar::OnSysKeyUp
                            (*(CMFCRibbonBar **)(this + 0x220),(CFrameWnd *)this,param_1->wParam,
                             param_1->lParam), iVar7 != 0)) {
        return 1;
      }
      uVar5 = GetKeyState(0x11);
      local_14.y = (LONG)(uVar5 >> 0xf);
      SVar6 = GetKeyState(0x10);
      pHVar12 = ImmGetContext(*(HWND *)(this + 0x20));
      if ((pHVar12 == (HIMC)0x0) || (BVar8 = ImmGetOpenStatus(pHVar12), BVar8 == 0)) {
        local_c = 0;
      }
      else {
        local_c = 1;
      }
      if (pHVar12 != (HIMC)0x0) {
        ImmReleaseContext(*(HWND *)(this + 0x20),pHVar12);
      }
      if ((*(int *)(this + 0x1d0) != 0) &&
         ((param_1->wParam == 0x12 ||
          ((((param_1->wParam == 0x79 && (local_14.y == 0)) && (-1 < SVar6)) && (local_c == 0))))))
      {
        pHVar9 = GetFocus();
        pCVar10 = CWnd::FromHandle(pHVar9);
        if ((*(CWnd **)(this + 0x1d0) != pCVar10) &&
           (this = (CFrameWndEx *)*(CWnd **)(this + 0x1d0), (param_1->lParam & 0x20000000U) != 0)) {
          return 1;
        }
        CWnd::SetFocus((CWnd *)this);
        return 1;
      }
      if (DAT_1016843c == 0) goto LAB_10024c69;
      iVar7 = IsWindow(*(HWND *)(DAT_1016843c + 0x20));
    }
    else {
      if (uVar1 < 0xa9) {
        if (uVar1 < 0xa7) {
          if (uVar1 == 0x7b) goto LAB_10024cab;
          if ((uVar1 < 0xa1) || ((0xa2 < uVar1 && (1 < uVar1 - 0xa4)))) goto LAB_10024c69;
        }
        tVar2.y = (int)*(short *)((int)&param_1->lParam + 2);
        tVar2.x = (int)(short)param_1->lParam;
        iVar7 = CFrameImpl::ProcessMouseClick
                          ((CFrameImpl *)(this + 0x124),uVar1,tVar2,param_1->hwnd);
        goto LAB_10024c61;
      }
      if (uVar1 == 0x100) {
        iVar7 = CFrameImpl::IsHelpKey(param_1);
        if ((iVar7 == 0) &&
           (iVar7 = CFrameImpl::ProcessKeyboard
                              ((CFrameImpl *)(this + 0x124),param_1->wParam,&local_8), iVar7 != 0))
        {
          return 1;
        }
        if (param_1->wParam == 0x1b) {
          if (*(int *)(this + 500) != 0) {
            CFullScreenImpl::RestoreState((CFullScreenImpl *)(this + 0x1dc),(CFrameWnd *)this);
          }
          this_00 = *(CSmartDockingManager **)(this + 0x3e0);
          if (((this_00 != (CSmartDockingManager *)0x0) && (*(int *)(this_00 + 8) != 0)) &&
             (*(int *)(this_00 + 4) != 0)) {
            CSmartDockingManager::CauseCancelMode(this_00);
          }
          pHVar9 = GetCapture();
          pCVar10 = CWnd::FromHandle(pHVar9);
          pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,
                                       (CObject *)pCVar10);
          if (pCVar11 != (CObject *)0x0) {
            Msg = 0x1f;
            pHVar9 = *(HWND *)(pCVar11 + 0x20);
            goto LAB_10024cf2;
          }
        }
        if (local_8 == 0) {
          return 0;
        }
        goto LAB_10024c69;
      }
      if (uVar1 != 0x104) goto LAB_10024c69;
      if ((*(CMFCRibbonBar **)(this + 0x220) != (CMFCRibbonBar *)0x0) &&
         (iVar7 = CMFCRibbonBar::OnSysKeyDown
                            (*(CMFCRibbonBar **)(this + 0x220),(CFrameWnd *)this,param_1->wParam,
                             param_1->lParam), iVar7 != 0)) {
        return 1;
      }
LAB_10024cab:
      if ((DAT_10166c44 == 0) && (DAT_10166c40 == 0)) {
        DAT_10166c40 = 1;
        FUN_1002cc26();
      }
      if (((DAT_1016843c != 0) && (BVar8 = IsWindow(*(HWND *)(DAT_1016843c + 0x20)), BVar8 != 0)) &&
         (param_1->wParam == 0x12)) {
        Msg = 0x10;
        pHVar9 = *(HWND *)(DAT_1016843c + 0x20);
LAB_10024cf2:
        SendMessageW(pHVar9,Msg,0,0);
        return 1;
      }
      iVar7 = CFrameImpl::ProcessKeyboard((CFrameImpl *)(this + 0x124),param_1->wParam,(int *)0x0);
    }
    if (iVar7 != 0) {
      return 1;
    }
  }
  else {
    if (uVar1 != 0x200) {
      if (uVar1 != 0x201) {
        if (uVar1 < 0x204) goto LAB_10024c69;
        if (0x205 < uVar1) {
          if (uVar1 < 0x207) goto LAB_10024c69;
          if (0x208 < uVar1) {
            if (uVar1 != 0x20a) goto LAB_10024c69;
            iVar7 = CFrameImpl::ProcessMouseWheel
                              ((CFrameImpl *)(this + 0x124),param_1->wParam,param_1->lParam);
            goto LAB_10024c61;
          }
        }
      }
      local_14.x = (LONG)(short)param_1->lParam;
      local_14.y = (LONG)*(short *)((int)&param_1->lParam + 2);
      pCVar10 = CWnd::FromHandle(param_1->hwnd);
      if ((pCVar10 != (CWnd *)0x0) && (BVar8 = IsWindow(param_1->hwnd), BVar8 != 0)) {
        ClientToScreen(*(HWND *)(pCVar10 + 0x20),&local_14);
      }
      tVar3.y = local_14.y;
      tVar3.x = local_14.x;
      iVar7 = CFrameImpl::ProcessMouseClick
                        ((CFrameImpl *)(this + 0x124),param_1->message,tVar3,param_1->hwnd);
      if (iVar7 != 0) {
        return 1;
      }
      BVar8 = IsWindow(param_1->hwnd);
      if (BVar8 == 0) {
        return 1;
      }
      goto LAB_10024c69;
    }
    local_14.x = (LONG)(short)param_1->lParam;
    local_14.y = (LONG)*(short *)((int)&param_1->lParam + 2);
    pCVar10 = CWnd::FromHandle(param_1->hwnd);
    if (pCVar10 != (CWnd *)0x0) {
      ClientToScreen(*(HWND *)(pCVar10 + 0x20),&local_14);
    }
    tVar4.y = local_14.y;
    tVar4.x = local_14.x;
    iVar7 = CFrameImpl::ProcessMouseMove((CFrameImpl *)(this + 0x124),tVar4);
LAB_10024c61:
    if (iVar7 != 0) {
      return 1;
    }
  }
LAB_10024c69:
  iVar7 = CFrameWnd::PreTranslateMessage((CFrameWnd *)this,param_1);
  return iVar7;
}


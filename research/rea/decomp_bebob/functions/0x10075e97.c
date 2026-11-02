// rea decompile_all
// name: CMFCTabCtrl::SetActiveTab
// address: 0x10075e97
// body: available
// range: 0x10075e97-0x1007631c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCTabCtrl::SetActiveTab(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCTabCtrl::SetActiveTab(CMFCTabCtrl *this,int param_1)

{
  int iVar1;
  CFrameWnd *pCVar2;
  CObject *pCVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  undefined **ppuVar6;
  HMENU pHVar7;
  CMenu *pCVar8;
  BOOL BVar9;
  CWnd *this_00;
  int *piVar10;
  uint uVar11;
  tagRECT *ptVar12;
  tagMENUITEMINFOW local_6c;
  uint local_3c;
  CWnd *local_38;
  CWnd *local_34;
  int local_30;
  CObject *local_2c;
  wchar_t *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x10075ea3;
  if (((-1 < param_1) && (param_1 < *(int *)(this + 0x9c))) && (param_1 < *(int *)(this + 0x90))) {
    local_3c = (uint)(*(int *)(this + 0xa0) == -1);
    if (*(int *)(this + 0xa0) == param_1) {
      iVar1 = (**(code **)(*(int *)this + 0x2e0))();
      if (iVar1 != 0) {
        ActivateMDITab(this,*(int *)(this + 0xa0));
      }
    }
    else {
      iVar1 = (**(code **)(*(int *)this + 0x270))(param_1);
      if (iVar1 == 0) {
        pCVar2 = CWnd::GetParentFrame((CWnd *)this);
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,
                                    (CObject *)pCVar2);
        local_30 = 0;
        if (((pCVar3 != (CObject *)0x0) && (*(int *)(this + 0x118) != 0)) &&
           ((*(int *)(pCVar3 + 0x140) != 0 || (local_30 = 1, DAT_1016037c != 0)))) {
          local_30 = 0;
        }
        pHVar4 = GetParent(*(HWND *)(this + 0x20));
        local_38 = CWnd::FromHandle(pHVar4);
        if ((1 < *(int *)(this + 0x9c)) && (local_30 != 0)) {
          SendMessageW(*(HWND *)(local_38 + 0x20),0xb,0,0);
        }
        if (((*(int *)(this + 0xa0) != -1) && (*(int *)(this + 0x100) != 0)) &&
           (pCVar5 = (CWnd *)(**(code **)(*(int *)this + 0x20c))(), pCVar5 != (CWnd *)0x0)) {
          CWnd::ShowWindow(pCVar5,0);
        }
        *(int *)(this + 0xa0) = param_1;
        HideActiveWindowHorzScrollBar(this);
        pCVar5 = (CWnd *)(**(code **)(*(int *)this + 0x20c))();
        local_34 = pCVar5;
        if (pCVar5 == (CWnd *)0x0) {
          SendMessageW(*(HWND *)(local_38 + 0x20),0xb,1,0);
        }
        else {
          CWnd::ShowWindow(pCVar5,5);
          if (*(int *)(this + 0x100) == 0) {
            BringWindowToTop(*(HWND *)(pCVar5 + 0x20));
          }
          if (*(int *)(this + 0x228) != 0) {
            CWnd::SetWindowPos(pCVar5,(CWnd *)0x0,-1,-1,
                               (*(int *)(this + 0x2a8) - *(int *)(this + 0x2a0)) + 1,
                               *(int *)(this + 0x2ac) - *(int *)(this + 0x2a4),0x16);
            CWnd::SetWindowPos(pCVar5,(CWnd *)0x0,-1,-1,
                               *(int *)(this + 0x2a8) - *(int *)(this + 0x2a0),
                               *(int *)(this + 0x2ac) - *(int *)(this + 0x2a4),0x16);
          }
          (**(code **)(*(int *)this + 0x220))(*(undefined4 *)(this + 0xa0));
          if (*(int *)(this + 0x204) != 0) {
            SynchronizeScrollBar(this,(tagSCROLLINFO *)0x0);
          }
          pHVar4 = GetParent(*(HWND *)(this + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar4);
          pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CTabbedPane_101621c4,(CObject *)pCVar5
                                     );
          local_2c = pCVar3;
          if ((pCVar3 != (CObject *)0x0) &&
             (iVar1 = (**(code **)(*(int *)pCVar3 + 1000))(), iVar1 != 0)) {
            ppuVar6 = FUN_1000ad47();
            FUN_10005e00(&local_28,(int *)ppuVar6);
            local_8 = 0;
            (**(code **)(*(int *)this + 0x1b8))(*(undefined4 *)(this + 0xa0),&local_28);
            CWnd::SetWindowTextW((CWnd *)pCVar3,local_28);
            iVar1 = (**(code **)(*(int *)pCVar3 + 0x164))();
            if (iVar1 == 0) {
              pHVar4 = GetParent(*(HWND *)(pCVar3 + 0x20));
              pCVar3 = (CObject *)CWnd::FromHandle(pHVar4);
            }
            if (pCVar3 != (CObject *)0x0) {
              RedrawWindow(*(HWND *)(pCVar3 + 0x20),(RECT *)0x0,(HRGN)0x0,0x401);
            }
            local_8 = 0xffffffff;
            FUN_10001030((undefined4 *)(local_28 + -8));
          }
          if ((*(int *)(this + 0x23c) != 0) || (*(int *)(this + 0x240) != 0)) {
            (**(code **)(*(int *)this + 0x180))();
          }
          InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
          UpdateWindow(*(HWND *)(this + 0x20));
          if (local_3c == 0) {
            pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CView_10127358,(CObject *)local_34);
            if (pCVar3 == (CObject *)0x0) {
              if (DAT_101612cc != 0) {
                CWnd::SetFocus(local_34);
              }
            }
            else {
              pCVar2 = AFXGetParentFrame((CWnd *)pCVar3);
              CFrameWnd::SetActiveView(pCVar2,(CView *)pCVar3,1);
            }
          }
          if ((this != (CMFCTabCtrl *)0xffffdf6c) && (*(int *)(this + 0x20b4) != 0)) {
            local_28 = (wchar_t *)0x1;
            pHVar7 = GetSystemMenu(*(HWND *)(local_34 + 0x20),0);
            pCVar8 = CMenu::FromHandle(pHVar7);
            if ((pCVar8 != (CMenu *)0x0) && (pHVar7 = *(HMENU *)(pCVar8 + 4), pHVar7 != (HMENU)0x0))
            {
              _memset(&local_6c,0,0x30);
              local_6c.cbSize = 0x30;
              local_6c.fMask = 1;
              BVar9 = GetMenuItemInfoW(pHVar7,0xf060,0,&local_6c);
              if ((BVar9 == 0) || (((byte)local_6c.fState & 3) != 0)) {
                local_28 = (wchar_t *)0x0;
              }
            }
            CWnd::EnableWindow((CWnd *)(this + 0x2094),(int)local_28);
          }
          (**(code **)(*(int *)this + 0x26c))(*(undefined4 *)(this + 0xa0));
          pCVar5 = local_38;
          if ((1 < *(int *)(this + 0x9c)) && (local_30 != 0)) {
            SendMessageW(*(HWND *)(local_38 + 0x20),0xb,1,0);
            if (*(int *)(this + 0x1e0) == 0) {
              ptVar12 = (RECT *)0x0;
            }
            else {
              local_24.left = 0;
              local_24.top = 0;
              local_24.right = 0;
              local_24.bottom = 0;
              GetWindowRect(*(HWND *)(this + 0x20),&local_24);
              ptVar12 = &local_24;
              pHVar4 = GetParent(*(HWND *)(this + 0x20));
              this_00 = CWnd::FromHandle(pHVar4);
              CWnd::ScreenToClient(this_00,ptVar12);
              ptVar12 = &local_24;
            }
            RedrawWindow(*(HWND *)(pCVar5 + 0x20),ptVar12,(HRGN)0x0,0x185);
          }
          if ((*(int *)(this + 0xa0) != -1) && (local_2c != (CObject *)0x0)) {
            pCVar3 = (CObject *)(**(code **)(*(int *)this + 0x1ac))(*(int *)(this + 0xa0));
            pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,pCVar3);
            if (pCVar3 != (CObject *)0x0) {
              piVar10 = (int *)(**(code **)(*(int *)pCVar3 + 0x224))(0);
              uVar11 = (**(code **)(*(int *)pCVar3 + 0x1c0))();
              if ((uVar11 & 0x10) == 0) {
                *(uint *)(local_2c + 0x94) = *(uint *)(local_2c + 0x94) & 0xffffffef;
                if (piVar10 != (int *)0x0) {
                  (**(code **)(*piVar10 + 500))();
                }
              }
              else {
                *(uint *)(local_2c + 0x94) = *(uint *)(local_2c + 0x94) | 0x10;
                if (piVar10 != (int *)0x0) {
                  (**(code **)(*piVar10 + 0x1f0))();
                }
              }
            }
          }
        }
      }
    }
  }
  iVar1 = FUN_100f90cf();
  return iVar1;
}


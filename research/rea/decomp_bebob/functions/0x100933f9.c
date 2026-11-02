// rea decompile_all
// name: CMFCBaseTabCtrl::DetachTab
// address: 0x100933f9
// body: available
// range: 0x100933f9-0x10093822 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::DetachTab(enum AFX_DOCK_METHOD,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCBaseTabCtrl::DetachTab(CMFCBaseTabCtrl *this,AFX_DOCK_METHOD param_1,int param_2,int param_3)

{
  CPaneFrameWnd *pCVar1;
  int iVar2;
  CObject *pCVar3;
  long lVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CObject *this_00;
  int iVar7;
  undefined4 uVar8;
  tagPOINT local_44;
  uint local_3c;
  int local_38;
  int local_34;
  CPaneFrameWnd *local_30;
  CWnd *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar1 = (CPaneFrameWnd *)(**(code **)(*(int *)this + 700))(param_2);
  local_30 = pCVar1;
  if ((-1 < (int)pCVar1) && (iVar2 = (**(code **)(*(int *)this + 0x1ec))(pCVar1), iVar2 != 0)) {
    pCVar3 = (CObject *)(**(code **)(*(int *)this + 0x1ac))(pCVar1);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,pCVar3);
    if ((pCVar3 != (CObject *)0x0) && (iVar2 = (**(code **)(*(int *)pCVar3 + 0x1c8))(), iVar2 != 0))
    {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      SetRectEmpty(&local_28);
      iVar2 = (**(code **)(*(int *)pCVar3 + 0x2c0))(&local_28,param_1);
      if (iVar2 != 0) {
        if (param_1 == 1) {
          local_44.x = 0;
          local_44.y = 0;
          GetCursorPos(&local_44);
          iVar2 = *(int *)(this + 0x150) - local_44.y;
          local_38 = DAT_10168810;
          local_34 = DAT_10168814;
          lVar4 = _labs(*(int *)(this + 0x14c) - local_44.x);
          if ((lVar4 < local_38) && (lVar4 = _labs(iVar2), lVar4 < local_34)) goto LAB_10093812;
        }
        iVar2 = (**(code **)(*(int *)pCVar3 + 0x188))();
        if (iVar2 != 0) {
          local_3c = (**(code **)(*(int *)pCVar3 + 0x1b4))();
          pHVar5 = GetParent(*(HWND *)(this + 0x20));
          pCVar6 = CWnd::FromHandle(pHVar5);
          this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,
                                       (CObject *)pCVar6);
          if (this_00 == (CObject *)0x0) {
            local_2c = (CWnd *)0x0;
          }
          else {
            local_2c = (CWnd *)(**(code **)(*(int *)this_00 + 0x224))(0);
            iVar2 = (**(code **)(*(int *)this_00 + 0x1c8))();
            if ((iVar2 == 0) && (iVar2 = (**(code **)(*(int *)this + 0x1a0))(), iVar2 == 1))
            goto LAB_10093812;
            iVar2 = CObject::IsKindOf(pCVar3,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
            if (iVar2 != 0) {
              (**(code **)(*(int *)pCVar3 + 0x1ec))(1);
            }
            if (((param_3 == 0) && ((local_3c & 2) != 0)) && (param_1 == 1)) {
              param_3 = 1;
            }
            if (local_30 != *(CPaneFrameWnd **)(this + 0xa0)) {
              CWnd::ShowWindow((CWnd *)pCVar3,5);
            }
            (**(code **)(*(int *)this_00 + 0x3bc))(pCVar3,local_30,param_1,param_3);
            iVar2 = (**(code **)(*(int *)this + 0x1a8))();
            if (iVar2 == 0) {
              if (local_2c == (CWnd *)0x0) {
                iVar2 = (**(code **)(*(int *)this_00 + 0x3b4))();
                if (iVar2 == 0) {
                  CWnd::ShowWindow((CWnd *)this,0);
                }
                else {
                  (**(code **)(*(int *)this_00 + 0x60))();
                }
              }
              else {
                (**(code **)(*(int *)local_2c + 0x178))(this_00,1,0);
              }
            }
            else {
              iVar2 = (**(code **)(*(int *)this + 0x1a0))();
              if (iVar2 == 0) {
                (**(code **)(*(int *)this_00 + 0x220))(0,0,0);
              }
            }
            (**(code **)(*(int *)this + 0x180))();
          }
          local_30 = (CPaneFrameWnd *)(**(code **)(*(int *)pCVar3 + 0x224))(0);
          local_44.y = local_3c & 2;
          if (((local_44.y != 0) && (param_1 == 1)) && (local_30 != (CPaneFrameWnd *)0x0)) {
            ReleaseCapture();
            CWnd::SetFocus((CWnd *)local_30);
            pHVar5 = GetParent(*(HWND *)(this + 0x20));
            pCVar6 = CWnd::FromHandle(pHVar5);
            SendMessageW(*(HWND *)(pCVar6 + 0x20),0x363,0,0);
          }
          *(undefined4 *)(this + 0x148) = 0;
          local_34 = 0;
          iVar7 = (**(code **)(*(int *)this + 0x1a8))();
          iVar2 = local_34;
          if ((iVar7 == 1) && (*(int *)(this + 0x10c) != 0)) {
            local_18.left = 0;
            local_18.top = 0;
            local_18.right = 0;
            local_18.bottom = 0;
            GetWindowRect(*(HWND *)(this_00 + 0x20),&local_18);
            pCVar3 = (CObject *)(**(code **)(*(int *)this + 0x1ac))(0);
            pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar3);
            CBasePane::InsertPane((CBasePane *)this_00,(CBasePane *)pCVar3,(CBasePane *)this_00,1);
            CDockablePane::ReplacePane((CDockablePane *)this_00,(CDockablePane *)pCVar3,param_1,0);
            local_34 = *(int *)pCVar3;
            uVar8 = (**(code **)(*(int *)this_00 + 400))();
            (**(code **)(local_34 + 0x1dc))(uVar8);
            (**(code **)(*(int *)this + 0x194))(0,1);
            if (local_2c == (CWnd *)0x0) {
              local_2c = (CWnd *)(**(code **)(*(int *)this_00 + 0x198))();
            }
            (**(code **)(*(int *)pCVar3 + 0x1ec))(1);
            CWnd::ScreenToClient(local_2c,&local_18);
            CWnd::SetParent((CWnd *)pCVar3,local_2c);
            (**(code **)(*(int *)pCVar3 + 0x234))
                      (0,local_18.left,local_18.top,local_18.right - local_18.left,
                       local_18.bottom - local_18.top,0x94,0);
            (**(code **)(*(int *)pCVar3 + 0x220))(1,0,0);
            CWnd::ShowWindow((CWnd *)this_00,0);
            pHVar5 = GetParent(*(HWND *)(pCVar3 + 0x20));
            pCVar6 = CWnd::FromHandle(pHVar5);
            InvalidateRect(*(HWND *)(pCVar6 + 0x20),(RECT *)0x0,1);
            pHVar5 = GetParent(*(HWND *)(pCVar3 + 0x20));
            pCVar6 = CWnd::FromHandle(pHVar5);
            UpdateWindow(*(HWND *)(pCVar6 + 0x20));
            iVar2 = *(int *)(this_00 + 0x20);
          }
          pCVar1 = local_30;
          if ((param_1 == 1) && (local_30 != (CPaneFrameWnd *)0x0)) {
            if (local_44.y == 0) {
              if ((local_3c & 1) != 0) {
                CWnd::SetFocus((CWnd *)local_30);
              }
            }
            else {
              (**(code **)(*(int *)local_30 + 0x20c))(iVar2);
              CPaneFrameWnd::MoveDragFrame(pCVar1);
            }
          }
        }
      }
    }
  }
LAB_10093812:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


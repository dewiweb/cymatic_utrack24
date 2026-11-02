// rea decompile_all
// name: CDockablePane::OnLButtonUp
// address: 0x1007b3ef
// body: available
// range: 0x1007b3ef-0x1007b798 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007b43b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CDockablePane::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockablePane::OnLButtonUp
          (CDockablePane *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  SHORT SVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  CObject *pCVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  CMFCCaptionButton *pCVar10;
  ulong uVar11;
  BOOL BVar12;
  CObList local_60 [4];
  undefined4 *local_5c;
  CPaneDivider *local_44;
  int local_40;
  undefined4 *local_3c;
  CDockingManager *local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x1007b3fb;
  if (this[0x2b4] != (CDockablePane)0x0) {
    this[0x2b4] = (CDockablePane)0x0;
  }
  if (*(int *)(this + 0x348) == 0) {
    CPane::OnLButtonUp((CPane *)this,param_1,param_3,param_4);
    goto LAB_1007b791;
  }
  pCVar4 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
  local_38 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar4);
  if ((local_38 == (CDockingManager *)0x0) && (DAT_10160f6c == 0)) {
LAB_1007b43b:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  local_3c = *(undefined4 **)(this + 0x344);
  puVar1 = *(undefined4 **)(this + 0x348);
  (**(code **)(*(int *)this + 0x390))();
  local_44 = GetDefaultPaneDivider(this);
  if (local_3c != puVar1) goto LAB_1007b48a;
  if (puVar1 == (undefined4 *)0x8) {
    if ((DAT_10168104 != 0) &&
       (pCVar10 = (CMFCCaptionButton *)FUN_1007ad08(this,8), pCVar10 != (CMFCCaptionButton *)0x0)) {
      (**(code **)(*(int *)pCVar10 + 0xc))(&local_34);
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_24);
      CWnd::ScreenToClient((CWnd *)this,&local_24);
      OffsetRect(&local_34,local_24.left,local_24.top);
      CWnd::ClientToScreen((CWnd *)this,&local_34);
      *(undefined4 *)(pCVar10 + 0x14) = 1;
      local_40 = local_34.left;
      local_3c = (undefined4 *)(local_34.bottom + 1);
      uVar11 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar11 & 0x400000) != 0) {
        local_40 = local_40 + (local_34.right - local_34.left);
      }
      local_38 = *(CDockingManager **)(this + 0x20);
      (**(code **)(*(int *)this + 0x2e4))(local_40,local_3c);
      BVar12 = IsWindow((HWND)local_38);
      if (BVar12 != 0) {
        *(undefined4 *)(pCVar10 + 0x14) = 0;
        RedrawButton(this,pCVar10);
      }
    }
    goto LAB_1007b791;
  }
  if (puVar1 == (undefined4 *)0x9) {
    SVar3 = GetAsyncKeyState(0x11);
    if ((SVar3 == 0) || (iVar7 = (**(code **)(*(int *)this + 0x340))(), iVar7 == 0)) {
      if ((local_38 != (CDockingManager *)0x0) &&
         ((local_44 != (CPaneDivider *)0x0 &&
          (uVar2 = *(uint *)(local_38 + 0x11c), uVar9 = (**(code **)(*(int *)local_44 + 400))(),
          (uVar2 & uVar9) != 0)))) {
        iVar7 = *(int *)this;
        uVar8 = (**(code **)(*(int *)local_44 + 400))(0,1);
        (**(code **)(iVar7 + 0x368))(*(int *)(this + 0x2e4) == 0,uVar8);
      }
    }
    else {
      SendMessageW(*(HWND *)(*(int *)(this + 0x98) + 0x20),0xb,0,0);
      if (*(int *)(this + 0x2e4) == 0) {
        CObList::CObList(local_60,10);
        local_8 = 0;
        CPaneDivider::GetPanes(local_44,local_60);
        while (local_5c != (undefined4 *)0x0) {
          if (local_5c == (undefined4 *)0x0) goto LAB_1007b43b;
          local_3c = (undefined4 *)*local_5c;
          pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                      (CObject *)local_5c[2]);
          local_38 = (CDockingManager *)pCVar5;
          iVar7 = (**(code **)(*(int *)pCVar5 + 0x340))();
          local_5c = local_3c;
          if (iVar7 != 0) {
            iVar7 = *(int *)pCVar5;
            uVar8 = (**(code **)(*(int *)local_44 + 400))(0,0);
            (**(code **)(iVar7 + 0x368))(1,uVar8);
            local_5c = local_3c;
          }
        }
        local_8 = 0xffffffff;
        FUN_1001e259(local_60);
      }
      else {
        pCVar5 = (CObject *)(**(code **)(**(int **)(this + 0x31c) + 0x19c))();
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CAutoHideDockSite_10135b64,pCVar5);
        if (pCVar5 != (CObject *)0x0) {
          CAutoHideDockSite::UnSetAutoHideMode((CAutoHideDockSite *)pCVar5,(CMFCAutoHideBar *)0x0);
        }
      }
      SendMessageW(*(HWND *)(*(int *)(this + 0x98) + 0x20),0xb,1,0);
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,
                                  *(CObject **)(this + 0x98));
      if (pCVar5 != (CObject *)0x0) {
        (**(code **)(*(int *)pCVar5 + 0x174))(1);
      }
      RedrawWindow(*(HWND *)(*(int *)(this + 0x98) + 0x20),(RECT *)0x0,(HRGN)0x0,0x181);
    }
    goto LAB_1007b791;
  }
  if (puVar1 == (undefined4 *)0x13) {
    pCVar5 = DAT_10168578;
    if ((DAT_10168578 != (CObject *)0x0) ||
       (pCVar5 = (CObject *)CWnd::GetTopLevelFrame((CWnd *)this), pCVar5 != (CObject *)0x0)) {
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,pCVar5);
      if (pCVar6 == (CObject *)0x0) {
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,pCVar5);
        if (pCVar6 == (CObject *)0x0) {
          pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_1012089c,pCVar5);
          if ((pCVar6 == (CObject *)0x0) &&
             (pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101204e8,
                                          pCVar5), pCVar6 == (CObject *)0x0)) goto LAB_1007b51e;
          iVar7 = (**(code **)(*(int *)pCVar6 + 0x208))(this);
        }
        else {
          iVar7 = (**(code **)(*(int *)pCVar6 + 0x1f0))(this);
        }
      }
      else {
        iVar7 = (**(code **)(*(int *)pCVar6 + 0x210))(this);
      }
      if (iVar7 == 0) goto LAB_1007b48a;
    }
LAB_1007b51e:
    (**(code **)(*(int *)this + 0x2dc))();
  }
  else {
    (**(code **)(*(int *)this + 0x380))(puVar1);
  }
LAB_1007b48a:
  CWnd::Default((CWnd *)this);
LAB_1007b791:
  FUN_100f90cf();
  return;
}


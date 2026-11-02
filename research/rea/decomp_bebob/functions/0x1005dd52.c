// rea decompile_all
// name: CMFCPopupMenu::OnDestroy
// address: 0x1005dd52
// body: available
// range: 0x1005dd52-0x1005e036 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::OnDestroy(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenu::OnDestroy(CMFCPopupMenu *this)

{
  int *piVar1;
  POINT pt;
  int iVar2;
  CObject *pCVar3;
  CMFCCaptionButton *pCVar4;
  undefined4 *this_00;
  CMFCPopupMenu *pCVar5;
  BOOL BVar6;
  CObject *pCVar7;
  CMFCToolBar *pCVar8;
  HWND pHVar9;
  CWnd *pCVar10;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x10b0) != 0) {
    CMFCMenuBar::SetRecentlyUsedMenus(DAT_10169780);
    local_20.y = (LONG)CWnd::GetOwner((CWnd *)this);
    if ((CWnd *)local_20.y != (CWnd *)0x0) {
      iVar2 = CObject::IsKindOf((CObject *)local_20.y,(CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0
                               );
      if (iVar2 != 0) {
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,
                                    (CObject *)local_20.y);
        pCVar4 = CPaneFrameWnd::FindButton((CPaneFrameWnd *)pCVar3,0x19);
        if (pCVar4 != (CMFCCaptionButton *)0x0) {
          *(undefined4 *)(pCVar4 + 4) = 0;
          FUN_1003cb3d((CWnd *)pCVar3);
        }
      }
    }
  }
  this_00 = (undefined4 *)(**(code **)(*(int *)this + 0x1c0))();
  if ((this_00[0x326] != 0) && (this_00[0x2cb] == 0)) {
    local_20.y = *this_00;
    iVar2 = FUN_10026099(this_00,this_00[0x326]);
    (**(code **)(local_20.y + 0x34c))(iVar2);
    this_00[0x326] = 0;
  }
  if (*(int *)(this + 0x10bc) != 0) {
    *(undefined4 *)(*(int *)(this + 0x10bc) + 0x40) = 0;
    pCVar5 = GetParentPopupMenu(this);
    if (pCVar5 != (CMFCPopupMenu *)0x0) {
      iVar2 = (**(code **)(*(int *)pCVar5 + 0x200))();
      if (iVar2 != 0) {
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonMiniToolBar_101384d0,
                                    (CObject *)pCVar5);
        if ((pCVar3 != (CObject *)0x0) && (*(int *)(pCVar3 + 0x1f00) == 0)) {
          *(undefined4 *)(this + 0x120) = 0;
        }
      }
      if ((*(int *)(this + 0x120) != 0) && (DAT_10166e54 == 0)) {
        local_20.x = 0;
        local_20.y = 0;
        GetCursorPos(&local_20);
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(pCVar5 + 0x20),&local_18);
        iVar2 = (**(code **)(*(int *)pCVar5 + 0x1d0))();
        if (iVar2 == 0) {
          pt.y = local_20.y;
          pt.x = local_20.x;
          BVar6 = PtInRect(&local_18,pt);
          if (BVar6 != 0) goto LAB_1005debb;
        }
        SendMessageW(*(HWND *)(pCVar5 + 0x20),0x10,0,0);
        *(undefined4 *)(this + 0x10bc) = 0;
      }
    }
  }
LAB_1005debb:
  if (*(int *)(this + 0x148) == 0) {
    CMFCMenuBar::SetShowAllCommands(0);
  }
  else {
    (**(code **)(*(int *)this + 0x1d8))();
    *(undefined4 *)(*(int *)(this + 0x148) + 0x8c) = 0;
    *(undefined4 *)(*(int *)(this + 0x148) + 0x9c) = 0;
    pCVar5 = GetParentPopupMenu(this);
    if (((pCVar5 != (CMFCPopupMenu *)0x0) && (*(int *)(this + 0x120) != 0)) && (DAT_10166e54 == 0))
    {
      SendMessageW(*(HWND *)(pCVar5 + 0x20),0x10,0,0);
      *(undefined4 *)(this + 0x148) = 0;
    }
  }
  if (*(CMFCToolBarsMenuPropertyPage **)(this + 0x144) != (CMFCToolBarsMenuPropertyPage *)0x0) {
    CMFCToolBarsMenuPropertyPage::CloseContextMenu
              (*(CMFCToolBarsMenuPropertyPage **)(this + 0x144),this);
  }
  NotifyParentDlg(this,0);
  pCVar3 = DAT_10168578;
  if (DAT_10168578 == (CObject *)0x0) {
    pCVar3 = (CObject *)CWnd::GetTopLevelFrame((CWnd *)this);
  }
  pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,pCVar3);
  if (pCVar7 == (CObject *)0x0) {
    pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,pCVar3);
    if (pCVar7 == (CObject *)0x0) {
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_1012089c,pCVar3);
      if (pCVar7 == (CObject *)0x0) {
        pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101204e8,pCVar3);
        if (pCVar7 == (CObject *)0x0) goto LAB_1005dfae;
      }
      (**(code **)(*(int *)pCVar7 + 0x1ec))(this);
    }
    else {
      (**(code **)(*(int *)pCVar7 + 0x1d0))(this);
    }
  }
  else {
    (**(code **)(*(int *)pCVar7 + 0x1e4))(this);
  }
LAB_1005dfae:
  if ((*(int *)(this + 0xeb0) != 0) && (DAT_1016843c == this)) {
    DAT_1016843c = (CMFCPopupMenu *)0x0;
  }
  if (((DAT_10166e54 == 0) && (pCVar3 != (CObject *)0x0)) && (DAT_1016843c == (CMFCPopupMenu *)0x0))
  {
    pCVar8 = GetParentToolBar(this);
    if (pCVar8 != (CMFCToolBar *)0x0) {
      pHVar9 = GetFocus();
      pCVar10 = CWnd::FromHandle(pHVar9);
      pCVar8 = GetParentToolBar(this);
      if (pCVar8 != (CMFCToolBar *)pCVar10) {
        pCVar8 = GetParentToolBar(this);
        (**(code **)(*(int *)pCVar8 + 0x360))();
      }
    }
  }
  piVar1 = *(int **)(this + 0xfd4);
  if ((piVar1 != (int *)0x0) && (piVar1[8] != 0)) {
    (**(code **)(*piVar1 + 0x60))();
  }
  CFrameWnd::OnDestroy((CFrameWnd *)this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


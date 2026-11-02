// rea decompile_all
// name: CPaneFrameWnd::DockPane
// address: 0x10039222
// body: available
// range: 0x10039222-0x10039476 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039342 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CDockablePane * __thiscall CPaneFrameWnd::DockPane(int &)
   
   Library: Visual Studio 2010 Release */

CDockablePane * __thiscall CPaneFrameWnd::DockPane(CPaneFrameWnd *this,int *param_1)

{
  undefined4 uVar1;
  CObject *pCVar2;
  uint uVar3;
  CDockingManager *pCVar4;
  int iVar5;
  CObject *pCVar6;
  CWnd *pCVar7;
  CFrameWnd *pCVar8;
  int *piVar9;
  BOOL BVar10;
  CPaneFrameWnd *pCVar11;
  CDockablePane *pCVar12;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar2 = (CObject *)(**(code **)(*(int *)this + 0x1a4))();
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar2);
  *param_1 = 0;
  uVar3 = (**(code **)(*(int *)this + 0x1ac))();
  pCVar4 = *(CDockingManager **)(this + 0x178);
  if (pCVar4 == (CDockingManager *)0x0) {
    pCVar4 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,(CWnd *)this);
  }
  if (pCVar4 != (CDockingManager *)0x0) {
    iVar5 = *(int *)(pCVar4 + 0x1b8);
    if (((uVar3 & 1) == 0) ||
       (((((uVar3 & 0x80) != 0 && (iVar5 != 0)) && (*(int *)(iVar5 + 8) != 0)) &&
        (*(int *)(iVar5 + 4) != 0)))) {
      if ((uVar3 & 0x82) != 0) {
        local_18.left = *(LONG *)(this + 300);
        local_18.top = *(LONG *)(this + 0x130);
        local_18.right = *(LONG *)(this + 0x134);
        local_18.bottom = *(LONG *)(this + 0x138);
        if (pCVar2 != (CObject *)0x0) {
          CMFCDragFrameImpl::EndDrawDragFrame((CMFCDragFrameImpl *)(this + 0x120),1);
        }
        pCVar8 = AFXGetParentFrame((CWnd *)this);
        uVar1 = DAT_101680f0;
        DAT_101680f0 = 1;
        piVar9 = (int *)(**(code **)(*(int *)this + 0x228))(param_1);
        DAT_101680f0 = uVar1;
        if (*(CSmartDockingManager **)(pCVar4 + 0x1b8) != (CSmartDockingManager *)0x0) {
          CSmartDockingManager::Stop(*(CSmartDockingManager **)(pCVar4 + 0x1b8));
        }
        if (pCVar8 != (CFrameWnd *)0x0) {
          (**(code **)(*(int *)pCVar8 + 0x174))(1);
        }
        (**(code **)(*(int *)pCVar4 + 0x38))(0);
        BVar10 = IsRectEmpty(&local_18);
        if (((BVar10 == 0) &&
            ((piVar9 == (int *)0x0 ||
             (pCVar11 = (CPaneFrameWnd *)(**(code **)(*piVar9 + 0x224))(0), pCVar11 == this)))) &&
           (*param_1 == 0)) {
          CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,local_18.left,local_18.top,
                             local_18.right - local_18.left,local_18.bottom - local_18.top,0x104);
          BVar10 = IsWindowVisible(*(HWND *)(this + 0x20));
          if ((BVar10 == 0) && (iVar5 = (**(code **)(*(int *)this + 0x1a0))(), 0 < iVar5)) {
            CWnd::ShowWindow((CWnd *)this,5);
          }
        }
      }
    }
    else {
      if (*(int *)(this + 0x17c) == 1) {
        iVar5 = (**(code **)(*(int *)pCVar2 + 0x2a0))(*(undefined4 *)(this + 0x11c));
        *param_1 = iVar5;
      }
      else if (((*(int *)(this + 0x17c) == 2) && (*(CObject **)(this + 0x11c) != (CObject *)0x0)) &&
              ((pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                            *(CObject **)(this + 0x11c)), pCVar2 != (CObject *)0x0
               && (pCVar6 != (CObject *)0x0)))) {
        *param_1 = 1;
        pCVar4 = *(CDockingManager **)(this + 0x178);
        if (pCVar4 == (CDockingManager *)0x0) {
          pCVar7 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xbc));
          pCVar4 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar7);
          if (pCVar4 == (CDockingManager *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
        }
        if (*(CSmartDockingManager **)(pCVar4 + 0x1b8) != (CSmartDockingManager *)0x0) {
          CSmartDockingManager::Stop(*(CSmartDockingManager **)(pCVar4 + 0x1b8));
        }
        (**(code **)(*(int *)pCVar2 + 0x34c))(pCVar6,1,1,0);
        goto LAB_10039466;
      }
      if (*(CSmartDockingManager **)(pCVar4 + 0x1b8) != (CSmartDockingManager *)0x0) {
        CSmartDockingManager::Stop(*(CSmartDockingManager **)(pCVar4 + 0x1b8));
      }
      *(undefined4 *)(this + 0x17c) = 0;
    }
  }
LAB_10039466:
  pCVar12 = (CDockablePane *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar12;
}


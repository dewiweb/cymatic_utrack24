// rea decompile_all
// name: CDockablePane::SetAutoHideMode
// address: 0x10079990
// body: available
// range: 0x10079990-0x10079bad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079a42 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CMFCAutoHideBar * __thiscall CDockablePane::SetAutoHideMode(int,unsigned
   long,class CMFCAutoHideBar *,int)
   
   Library: Visual Studio 2010 Release */

CMFCAutoHideBar * __thiscall
CDockablePane::SetAutoHideMode
          (CDockablePane *this,int param_1,ulong param_2,CMFCAutoHideBar *param_3,int param_4)

{
  int iVar1;
  CWnd *pCVar2;
  CDockingManager *this_00;
  CPaneDivider *pCVar3;
  ulong uVar4;
  UINT_PTR UVar5;
  CObject *pCVar6;
  CMFCAutoHideBar *pCVar7;
  CRuntimeClass *pCVar8;
  tagRECT *ptVar9;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)this + 0x1d8))();
  if (param_1 != iVar1) {
    pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
    this_00 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar2);
    if (param_1 == 0) {
      if (*(int **)(this + 0x31c) != (int *)0x0) {
        pCVar6 = (CObject *)(**(code **)(**(int **)(this + 0x31c) + 0x19c))();
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CAutoHideDockSite_10135b64,pCVar6);
        if (pCVar6 != (CObject *)0x0) {
          CAutoHideDockSite::UnSetAutoHideMode
                    ((CAutoHideDockSite *)pCVar6,*(CMFCAutoHideBar **)(this + 0x31c));
        }
      }
    }
    else {
      *(undefined4 *)(this + 0x2e4) = 1;
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      ptVar9 = &local_18;
      pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
      CWnd::ScreenToClient(pCVar2,ptVar9);
      (**(code **)(*(int *)this + 0x31c))();
      (**(code **)(*(int *)this + 0x23c))(0);
      pCVar3 = GetDefaultPaneDivider(this);
      if (pCVar3 != (CPaneDivider *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      pCVar8 = (CRuntimeClass *)0x0;
      pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
      pCVar3 = CreateDefaultPaneDivider(param_2,pCVar2,pCVar8);
      if (pCVar3 == (CPaneDivider *)0x0) {
        (**(code **)(*(int *)this + 500))(this,0,2);
      }
      else {
        *(undefined4 *)(this + 0x33c) = *(undefined4 *)(pCVar3 + 0x20);
        *(undefined4 *)(pCVar3 + 0x120) = 1;
        (**(code **)(*(int *)pCVar3 + 0x26c))(this);
        (**(code **)(*(int *)this + 0x1dc))(param_2);
        (**(code **)(*(int *)pCVar3 + 0x1dc))(param_2);
        CDockingManager::AutoHidePane(this_00,this,param_3);
        uVar4 = CWnd::GetExStyle((CWnd *)this);
        if ((uVar4 & 0x10000000) == 0) {
          CWnd::ShowWindow((CWnd *)this,5);
        }
        else {
          RedrawWindow(*(HWND *)(pCVar3 + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
          RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
          iVar1 = (**(code **)(*(int *)this + 0x198))();
          RedrawWindow(*(HWND *)(iVar1 + 0x20),&local_18,(HRGN)0x0,0x181);
        }
        if (param_4 == 0) {
          (**(code **)(*(int *)this + 0x344))(0);
        }
        else {
          UVar5 = SetTimer(*(HWND *)(this + 0x20),3,DAT_10161370,(TIMERPROC)0x0);
          *(UINT_PTR *)(this + 0x2e8) = UVar5;
          (**(code **)(*(int *)this + 0x344))(0,1);
          pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
          CWnd::SetFocus(pCVar2);
        }
        (**(code **)(*(int *)this + 0x234))(0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x2f,0);
      }
    }
  }
  pCVar7 = (CMFCAutoHideBar *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar7;
}


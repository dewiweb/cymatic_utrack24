// rea decompile_all
// name: CPaneContainerManager::AddPaneContainerManager
// address: 0x100c4f4e
// body: available
// range: 0x100c4f4e-0x100c511b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c4f70 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::AddPaneContainerManager(class
   CPaneContainerManager &,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPaneContainerManager::AddPaneContainerManager
          (CPaneContainerManager *this,CPaneContainerManager *param_1,int param_2)

{
  CObList *this_00;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  CDockingManager *this_01;
  CPaneContainer *this_02;
  HWND pHVar4;
  CWnd *this_03;
  undefined4 *puVar5;
  CObject *pCVar6;
  undefined4 uVar7;
  tagRECT *ptVar8;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(CPaneContainer **)(this + 0x3c) == (CPaneContainer *)0x0) {
LAB_100c4f70:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  iVar3 = CPaneContainer::IsEmpty(*(CPaneContainer **)(this + 0x3c));
  if ((iVar3 != 0) &&
     (this_01 = CGlobalUtils::GetDockingManager
                          ((CGlobalUtils *)&PTR_vftable_10160f68,*(CWnd **)(this + 0x4c)),
     this_01 != (CDockingManager *)0x0)) {
    this_00 = (CObList *)(this + 4);
    CObList::RemoveAll(this_00);
    CObList::RemoveAll((CObList *)(this + 0x20));
    AddPanesToList(param_1,this_00,(CObList *)(this + 0x20));
    RemoveAllPanesAndPaneDividers(param_1);
    this_02 = (CPaneContainer *)
              (**(code **)(**(int **)(param_1 + 0x3c) + 0x50))(*(undefined4 *)(this + 0x3c));
    CPaneContainer::SetPaneContainer(*(CPaneContainer **)(this + 0x3c),this_02,1);
    CPaneContainer::SetPaneContainerManager(this_02,this,1);
    FUN_10067745((int)this_00,*(CWnd **)(this + 0x4c),1);
    FUN_10067745((int)(this + 0x20),*(CWnd **)(this + 0x4c),1);
    puVar5 = *(undefined4 **)(this + 8);
    while (puVar5 != (undefined4 *)0x0) {
      if (puVar5 == (undefined4 *)0x0) goto LAB_100c4f70;
      puVar1 = puVar5 + 2;
      puVar5 = (undefined4 *)*puVar5;
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)*puVar1)
      ;
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(pCVar6 + 0x20),&local_18);
      ptVar8 = &local_18;
      pHVar4 = GetParent(*(HWND *)(pCVar6 + 0x20));
      this_03 = CWnd::FromHandle(pHVar4);
      CWnd::ScreenToClient(this_03,ptVar8);
    }
    puVar5 = *(undefined4 **)(this + 0x24);
    while (puVar5 != (undefined4 *)0x0) {
      if (puVar5 == (undefined4 *)0x0) goto LAB_100c4f70;
      piVar2 = puVar5 + 2;
      puVar5 = (undefined4 *)*puVar5;
      *(CPaneContainerManager **)(*piVar2 + 0x158) = this;
    }
    puVar5 = *(undefined4 **)(this + 8);
    while (puVar5 != (undefined4 *)0x0) {
      if (puVar5 == (undefined4 *)0x0) goto LAB_100c4f70;
      puVar1 = puVar5 + 2;
      puVar5 = (undefined4 *)*puVar5;
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)*puVar1)
      ;
      CDockablePane::SetDefaultPaneDivider
                ((CDockablePane *)pCVar6,*(HWND__ **)(*(int *)(this + 0x44) + 0x20));
      iVar3 = *(int *)pCVar6;
      uVar7 = (**(code **)(**(int **)(this + 0x44) + 400))();
      (**(code **)(iVar3 + 0x1dc))(uVar7);
      CDockingManager::AddPane(this_01,(CBasePane *)pCVar6,(uint)(param_2 == 0),0,param_2);
      (**(code **)(*(int *)pCVar6 + 0x1ec))(1);
    }
    CPaneContainer::CheckPaneDividerVisibility(*(CPaneContainer **)(this + 0x3c));
    CPaneContainer::CalculateRecentSize(*(CPaneContainer **)(this + 0x3c));
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


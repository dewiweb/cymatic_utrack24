// rea decompile_all
// name: CPaneContainerManager::AddPaneContainerManager
// address: 0x100c60a8
// body: available
// range: 0x100c60a8-0x100c62bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c61ed to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::AddPaneContainerManager(class
   CDockablePane *,unsigned long,class CPaneContainerManager &,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPaneContainerManager::AddPaneContainerManager
          (CPaneContainerManager *this,CDockablePane *param_1,ulong param_2,
          CPaneContainerManager *param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  CPaneContainerManager *pCVar3;
  int iVar4;
  CPaneContainer *this_00;
  CObject *pCVar5;
  undefined4 *puVar6;
  CObList local_54 [4];
  undefined4 *local_50;
  int local_4c;
  CObList local_38 [4];
  undefined4 *local_34;
  undefined4 local_1c;
  __POSITION *local_18;
  CWnd *local_14;
  uint local_8;
  undefined4 uStack_4;
  
  pCVar3 = param_3;
  uStack_4 = 0x44;
  local_8 = 0x100c60b4;
  CObList::CObList(local_54,10);
  local_8 = 0;
  CObList::CObList(local_38,10);
  local_8 = CONCAT31(local_8._1_3_,1);
  AddPanesToList(param_3,local_54,local_38);
  local_1c = 0;
  iVar4 = (**(code **)(*(int *)this + 0x8c))(param_1,&local_1c);
  if ((iVar4 != 0) &&
     (local_18 = CObList::Find((CObList *)(this + 4),(CObject *)param_1,(__POSITION *)0x0),
     local_18 != (__POSITION *)0x0)) {
    if (param_4 == 0) {
      param_3 = *(CPaneContainerManager **)(param_3 + 0x3c);
    }
    else {
      this_00 = (CPaneContainer *)
                (**(code **)(**(int **)(param_3 + 0x3c) + 0x50))(*(undefined4 *)(this + 0x3c));
      CPaneContainer::SetPaneContainerManager(this_00,this,1);
      RemoveAllPanesAndPaneDividers(param_3);
      param_3 = (CPaneContainerManager *)this_00;
    }
    local_14 = (CWnd *)(**(code **)(*(int *)pCVar3 + 0x74))();
    FUN_10067745((int)local_54,*(CWnd **)(this + 0x4c),1);
    FUN_10067745((int)local_38,*(CWnd **)(this + 0x4c),1);
    iVar4 = AddPaneAndPaneContainer(this,param_1,(CPaneContainer *)param_3,param_2);
    if (iVar4 != 0) {
      if ((param_2 & 0x3000) == 0) {
        while (local_4c != 0) {
          if (local_4c == 0) goto LAB_100c61ed;
          iVar4 = *(int *)(local_4c + 4);
          CObList::InsertAfter((CObList *)(this + 4),local_18,*(CObject **)(local_4c + 8));
          local_4c = iVar4;
        }
      }
      else {
        while (local_50 != (undefined4 *)0x0) {
          if (local_50 == (undefined4 *)0x0) goto LAB_100c61ed;
          puVar6 = (undefined4 *)*local_50;
          CObList::InsertBefore((CObList *)(this + 4),local_18,(CObject *)local_50[2]);
          local_50 = puVar6;
        }
      }
      CObList::AddTail((CObList *)(this + 0x20),local_38);
      while (local_34 != (undefined4 *)0x0) {
        if (local_34 == (undefined4 *)0x0) goto LAB_100c61ed;
        piVar1 = local_34 + 2;
        local_34 = (undefined4 *)*local_34;
        *(CPaneContainerManager **)(*piVar1 + 0x158) = this;
      }
      if (param_4 == 0) {
        *(undefined4 *)(pCVar3 + 0x48) = 0;
        CPaneContainer::SetPaneContainerManager(*(CPaneContainer **)(pCVar3 + 0x3c),this,1);
      }
      puVar6 = *(undefined4 **)(this + 8);
      while( true ) {
        if (puVar6 == (undefined4 *)0x0) {
          CPaneContainer::CheckPaneDividerVisibility(*(CPaneContainer **)(this + 0x3c));
          CPaneContainer::CalculateRecentSize(*(CPaneContainer **)(this + 0x3c));
          local_8 = local_8 & 0xffffff00;
          FUN_1001e259(local_38);
          local_8 = 0xffffffff;
          FUN_1001e259(local_54);
          return 1;
        }
        if (puVar6 == (undefined4 *)0x0) break;
        puVar2 = puVar6 + 2;
        puVar6 = (undefined4 *)*puVar6;
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                    (CObject *)*puVar2);
        (**(code **)(*(int *)pCVar5 + 0x1ec))(1);
        RedrawWindow(*(HWND *)(pCVar5 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      }
LAB_100c61ed:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    FUN_10067745((int)local_54,local_14,1);
    FUN_10067745((int)local_38,local_14,1);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_1001e259(local_38);
  local_8 = 0xffffffff;
  FUN_1001e259(local_54);
  return 0;
}


// rea decompile_all
// name: CPaneContainerManager::AddPaneToRecentPaneContainer
// address: 0x100c51eb
// body: available
// range: 0x100c51eb-0x100c534e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c533e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CDockablePane * __thiscall
   CPaneContainerManager::AddPaneToRecentPaneContainer(class CDockablePane *,class CPaneContainer *)
   
   Library: Visual Studio 2010 Release */

CDockablePane * __thiscall
CPaneContainerManager::AddPaneToRecentPaneContainer
          (CPaneContainerManager *this,CDockablePane *param_1,CPaneContainer *param_2)

{
  CPaneContainer *this_00;
  int iVar1;
  CPaneDivider *pCVar2;
  CList<HWND__*,HWND__*> *pCVar3;
  __POSITION *p_Var4;
  CDockablePane *pCVar5;
  __POSITION *p_Var6;
  CObList local_30 [28];
  CPaneContainer *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x100c51f7;
  this_00 = CPaneContainer::FindSubPaneContainer
                      (*(CPaneContainer **)(this + 0x3c),(CObject *)param_2,3);
  pCVar5 = (CDockablePane *)0x0;
  if (this_00 != (CPaneContainer *)0x0) {
    local_14 = this_00;
    iVar1 = CPaneContainer::IsEmpty(this_00);
    if ((iVar1 == 0) && (*(int *)(this_00 + 0xc) == 0)) {
      pCVar2 = CreatePaneDivider(this,*(undefined4 *)(this_00 + 0x44),
                                 *(undefined4 *)(this_00 + 0x48),*(undefined4 *)(this_00 + 0x4c),
                                 *(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x40),
                                 0xffffffff);
      *(CPaneDivider **)(local_14 + 0xc) = pCVar2;
      this_00 = local_14;
    }
    iVar1 = CPaneContainer::IsEmpty(this_00);
    if ((iVar1 != 0) && (iVar1 = *(int *)(this_00 + 0x18), iVar1 != *(int *)(this + 0x3c))) {
      do {
        if (iVar1 == 0) break;
        if ((*(int *)(iVar1 + 0xc) == 0) && (*(int *)(iVar1 + 0x40) != 0)) {
          pCVar2 = CreatePaneDivider(this,*(undefined4 *)(iVar1 + 0x44),
                                     *(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x4c),
                                     *(undefined4 *)(iVar1 + 0x50),*(int *)(iVar1 + 0x40),0xffffffff
                                    );
          *(CPaneDivider **)(iVar1 + 0xc) = pCVar2;
          this_00 = local_14;
        }
        iVar1 = *(int *)(iVar1 + 0x18);
      } while (iVar1 != *(int *)(this + 0x3c));
    }
    iVar1 = CObject::IsKindOf(*(CObject **)(this + 0x4c),
                              (CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0);
    CObList::CObList(local_30,10);
    local_8 = 0;
    pCVar3 = CRecentDockSiteInfo::GetRecentListOfPanes
                       ((CRecentDockSiteInfo *)(param_1 + 0x1d4),(uint)(iVar1 == 0));
    CObList::AddTail(local_30,(CObject *)pCVar3);
    p_Var4 = CObList::Find(local_30,(CObject *)param_1,(__POSITION *)0x0);
    pCVar5 = CPaneContainer::AddPane(this_00,param_1);
    if (pCVar5 == param_1) {
      CPaneContainer::CheckPaneDividerVisibility(*(CPaneContainer **)(this + 0x3c));
      do {
        if (p_Var4 == (__POSITION *)0x0) {
          CObList::AddHead((CObList *)(this + 4),(CObject *)pCVar5);
          goto LAB_100c5328;
        }
        if (p_Var4 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        p_Var6 = p_Var4 + 8;
        p_Var4 = *(__POSITION **)(p_Var4 + 4);
        p_Var6 = CObList::Find((CObList *)(this + 4),*(CObject **)p_Var6,(__POSITION *)0x0);
      } while (p_Var6 == (__POSITION *)0x0);
      CObList::InsertAfter((CObList *)(this + 4),p_Var6,(CObject *)pCVar5);
    }
LAB_100c5328:
    local_8 = 0xffffffff;
    FUN_1001e259(local_30);
  }
  return pCVar5;
}


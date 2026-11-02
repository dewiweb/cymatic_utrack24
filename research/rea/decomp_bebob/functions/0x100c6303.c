// rea decompile_all
// name: CPaneContainerManager::RemovePaneFromPaneContainer
// address: 0x100c6303
// body: available
// range: 0x100c6303-0x100c643a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c6370 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::RemovePaneFromPaneContainer(class
   CDockablePane *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPaneContainerManager::RemovePaneFromPaneContainer
          (CPaneContainerManager *this,CDockablePane *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  __POSITION *p_Var3;
  CObject *pCVar4;
  HWND__ *pHVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined **local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  CObList *local_1c;
  __POSITION *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100c630f;
  if (*(int *)(this + 0x3c) != 0) {
    local_14[0] = 0;
    piVar2 = (int *)(**(code **)(*(int *)this + 0x8c))(param_1,local_14);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x28))(param_1,local_14[0] == 0);
      CPaneContainer::CheckPaneDividerVisibility(*(CPaneContainer **)(this + 0x3c));
      pCVar4 = (CObject *)piVar2[3];
      if (pCVar4 != (CObject *)0x0) {
        p_Var3 = CObList::Find((CObList *)(this + 0x20),pCVar4,(__POSITION *)0x0);
        if (p_Var3 == (__POSITION *)0x0) {
LAB_100c6370:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        FUN_1007169e(pCVar4,0);
      }
      local_1c = (CObList *)(this + 4);
      local_18 = CObList::Find(local_1c,(CObject *)param_1,(__POSITION *)0x0);
      if (local_18 != (__POSITION *)0x0) {
        local_38 = CList<HWND__*,HWND__*>::vftable;
        local_2c = 0;
        local_28 = 0;
        local_30 = 0;
        local_34 = 0;
        local_24 = 0;
        local_20 = 10;
        puVar7 = *(undefined4 **)(this + 8);
        local_8 = 0;
        while (puVar7 != (undefined4 *)0x0) {
          if (puVar7 == (undefined4 *)0x0) goto LAB_100c6370;
          puVar1 = puVar7 + 2;
          puVar7 = (undefined4 *)*puVar7;
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_DAT_1011df44,(CObject *)*puVar1);
          if (pCVar4 == (CObject *)0x0) {
            pHVar5 = (HWND__ *)0x0;
          }
          else {
            pHVar5 = *(HWND__ **)(pCVar4 + 0x20);
          }
          CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)&local_38,pHVar5);
        }
        iVar6 = CObject::IsKindOf(*(CObject **)(this + 0x4c),
                                  (CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0);
        CRecentDockSiteInfo::SaveListOfRecentPanes
                  ((CRecentDockSiteInfo *)(param_1 + 0x1d4),(CList<HWND__*,HWND__*> *)&local_38,
                   (uint)(iVar6 == 0));
        CObList::RemoveAt(local_1c,local_18);
        local_8 = 0xffffffff;
        local_38 = CList<HWND__*,HWND__*>::vftable;
        CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_38);
      }
      return 1;
    }
  }
  return 0;
}


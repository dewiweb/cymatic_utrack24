// rea decompile_all
// name: CMultiPaneFrameWnd::SetPreDockState
// address: 0x100c78c1
// body: available
// range: 0x100c78c1-0x100c7dc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c7ab3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMultiPaneFrameWnd::SetPreDockState(enum AFX_PREDOCK_STATE,class
   CBasePane *,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMultiPaneFrameWnd::SetPreDockState
          (CMultiPaneFrameWnd *this,AFX_PREDOCK_STATE param_1,CBasePane *param_2,
          AFX_DOCK_METHOD param_3)

{
  undefined4 *puVar1;
  HWND pHVar2;
  CDockingManager *pCVar3;
  int iVar4;
  CWnd *pCVar5;
  ulong uVar6;
  uint uVar7;
  BOOL BVar8;
  CObject *pCVar9;
  undefined4 *puVar10;
  CMultiPaneFrameWnd *pCVar11;
  CObList local_94 [4];
  undefined4 *local_90;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  CObject *local_68;
  undefined4 local_64;
  undefined **local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  tagPOINT local_40;
  CMultiPaneFrameWnd *local_38;
  CDockingManager *local_34;
  CObject *local_30;
  ulong local_2c;
  CObject *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x84;
  local_8 = 0x100c78d0;
  local_38 = this;
  if ((param_1 == 0) ||
     (((param_1 == 2 && (param_2 != (CBasePane *)0x0)) &&
      (iVar4 = (**(code **)(*(int *)param_2 + 0x188))(), iVar4 == 0)))) goto LAB_100c7aab;
  local_28 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)param_2);
  local_34 = *(CDockingManager **)(this + 0x178);
  if (local_34 == (CDockingManager *)0x0) {
    pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xbc));
    local_34 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar5);
  }
  if (local_34 == (CDockingManager *)0x0) goto LAB_100c7aab;
  local_68 = (CObject *)(**(code **)(*(int *)(this + 0x180) + 0x78))();
  local_40.x = 0;
  local_40.y = 0;
  GetCursorPos(&local_40);
  local_2c = 0;
  CObList::CObList(local_94,10);
  local_8 = 0;
  CPaneContainerManager::AddPanesToList
            ((CPaneContainerManager *)(this + 0x180),local_94,(CObList *)0x0);
  local_60 = CList<HWND__*,HWND__*>::vftable;
  local_54 = 0;
  local_50 = 0;
  local_58 = 0;
  local_5c = (undefined4 *)0x0;
  local_4c = 0;
  local_48 = 10;
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar10 = local_90;
  while (pCVar3 = local_34, puVar10 != (undefined4 *)0x0) {
    if (puVar10 == (undefined4 *)0x0) goto LAB_100c7ab3;
    puVar1 = puVar10 + 2;
    puVar10 = (undefined4 *)*puVar10;
    local_30 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)*puVar1)
    ;
    (**(code **)(*(int *)local_30 + 0x31c))();
    CList<HWND__*,HWND__*>::AddTail
              ((CList<HWND__*,HWND__*> *)&local_60,*(HWND__ **)(local_30 + 0x20));
  }
  if (local_28 == (CObject *)0x0) {
    local_44 = 0;
    iVar4 = CDockingManager::IsPointNearDockSite(local_34,local_40.x,local_40.y,&local_2c,&local_44)
    ;
    if (iVar4 != 0) {
      pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xbc));
      local_30 = (CObject *)
                 CDockablePane::CreateDefaultPaneDivider(local_2c,pCVar5,(CRuntimeClass *)0x0);
      if (local_30 != (CObject *)0x0) {
        (**(code **)(*(int *)local_30 + 0x1dc))(local_2c);
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        (**(code **)(*(int *)(this + 0x180) + 0x2c))(&local_24);
        (**(code **)(*(int *)pCVar3 + 0x5c))(&local_24,local_2c);
        pCVar11 = local_38 + 0x180;
        local_64 = 0;
        (**(code **)(*(int *)(this + 0x180) + 0x38))(local_24,local_20,local_1c,local_18,&local_64);
        pCVar9 = local_30;
        if (local_44 == 0) {
          (**(code **)(*(int *)local_30 + 0x288))(pCVar11,0);
          CDockingManager::AddPane(local_34,(CBasePane *)pCVar9,1,0,0);
          this = local_38;
        }
        else {
          CDockingManager::AddPane(local_34,(CBasePane *)local_30,0,0,local_44);
          (**(code **)(*(int *)pCVar9 + 0x288))(pCVar11,local_44);
          this = local_38;
        }
LAB_100c7c7f:
        pHVar2 = *(HWND *)(this + 0x20);
        SendMessageW(pHVar2,DAT_101680a8,0,0);
        BVar8 = IsWindow(pHVar2);
        if (BVar8 != 0) {
          CWnd::MoveWindow((CWnd *)this,*(int *)(this + 0xcc),*(int *)(this + 0xd0),
                           *(int *)(this + 0xd4) - *(int *)(this + 0xcc),
                           *(int *)(this + 0xd8) - *(int *)(this + 0xd0),1);
          pCVar9 = local_68;
          if ((local_68 != (CObject *)0x0) && (param_3 == 1)) {
            ScreenToClient(*(HWND *)(local_68 + 0x20),&local_40);
            iVar4 = CObject::IsKindOf(pCVar9,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
            if (iVar4 == 0) {
              SendMessageW(*(HWND *)(pCVar9 + 0x20),0x201,0,
                           CONCAT22((undefined2)local_40.y,(undefined2)local_40.x));
            }
            else {
              (**(code **)(*(int *)pCVar9 + 0x314))(0);
            }
          }
          if (local_28 == (CObject *)0x0) {
            if ((pCVar9 != (CObject *)0x0) &&
               (pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar9),
               pCVar9 != (CObject *)0x0)) {
              (**(code **)(*(int *)pCVar9 + 0x264))(0);
            }
          }
          else {
            (**(code **)(*(int *)local_28 + 0x20c))();
          }
          (**(code **)(*(int *)this + 0x1f0))();
          puVar10 = local_5c;
          while (puVar10 != (undefined4 *)0x0) {
            pHVar2 = (HWND)puVar10[2];
            puVar10 = (undefined4 *)*puVar10;
            BVar8 = IsWindow(pHVar2);
            if (BVar8 != 0) {
              pCVar5 = CWnd::FromHandle(pHVar2);
              pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                          (CObject *)pCVar5);
              if (pCVar9 != (CObject *)0x0) {
                (**(code **)(*(int *)pCVar9 + 0x35c))();
              }
            }
          }
          local_8 = local_8 & 0xffffff00;
          local_60 = CList<HWND__*,HWND__*>::vftable;
          CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_60);
          local_8 = 0xffffffff;
          FUN_1001e259(local_94);
          goto LAB_100c7aab;
        }
      }
      local_8 = local_8 & 0xffffff00;
      local_60 = CList<HWND__*,HWND__*>::vftable;
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_60);
      local_8 = 0xffffffff;
      FUN_1001e259(local_94);
      goto LAB_100c7aab;
    }
  }
  else {
    pCVar5 = (CWnd *)(**(code **)(*(int *)(this + 0x180) + 0x70))();
    if (((pCVar5 != (CWnd *)0x0) &&
        (iVar4 = (**(code **)(*(int *)local_28 + 0x180))(pCVar5), iVar4 != 0)) &&
       (iVar4 = (**(code **)(*(int *)pCVar5 + 0x180))(local_28), iVar4 != 0)) {
      uVar6 = CWnd::GetExStyle(pCVar5);
      if ((((uVar6 & 0x10000000) == 0) && (*(int *)(this + 400) == 1)) &&
         (uVar7 = (**(code **)(*(int *)pCVar5 + 0x1b4))(), (uVar7 & 2) != 0)) {
        CWnd::ModifyStyle(pCVar5,0,0x10000000,0);
      }
      pCVar9 = local_28;
      if (param_1 == 1) {
        iVar4 = CGlobalUtils::CheckAlignment
                          ((CGlobalUtils *)&PTR_vftable_10160f68,local_40.x,local_40.y,local_28,
                           DAT_10160710,0,0,&local_2c,0xf000,0);
        if ((iVar4 != 0) &&
           (iVar4 = (**(code **)(*(int *)pCVar9 + 0x358))(this + 0x180,local_2c,param_3), iVar4 != 0
           )) goto LAB_100c7c7f;
      }
      else if (param_1 == 2) {
        while (local_90 != (undefined4 *)0x0) {
          if (local_90 == (undefined4 *)0x0) {
LAB_100c7ab3:
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          puVar10 = (undefined4 *)*local_90;
          local_30 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                        (CObject *)local_90[2]);
          CPaneFrameWnd::AddRemovePaneFromGlobalList((CBasePane *)local_30,0);
          (**(code **)(*(int *)local_30 + 0x34c))(local_28,param_3,1,0);
          local_90 = puVar10;
        }
        CWnd::ShowWindow((CWnd *)this,0);
        pCVar11 = local_38;
        local_78 = *(int *)(this + 0xcc);
        local_74 = *(int *)(this + 0xd0);
        local_70 = *(int *)(this + 0xd4);
        local_6c = *(int *)(this + 0xd8);
        CWnd::MoveWindow((CWnd *)local_38,local_78,local_74,local_70 - local_78,local_6c - local_74,
                         1);
        CPaneFrameWnd::OnCancelMode((CPaneFrameWnd *)pCVar11);
        SendMessageW(*(HWND *)(pCVar11 + 0x20),DAT_101680a8,0,0);
      }
    }
  }
  local_8 = local_8 & 0xffffff00;
  local_60 = CList<HWND__*,HWND__*>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_60);
  local_8 = 0xffffffff;
  FUN_1001e259(local_94);
LAB_100c7aab:
  iVar4 = FUN_100f90cf();
  return iVar4;
}


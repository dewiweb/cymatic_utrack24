// rea decompile_all
// name: CMultiPaneFrameWnd::SetDockState
// address: 0x100c7dc7
// body: available
// range: 0x100c7dc7-0x100c82ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c811c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMultiPaneFrameWnd::SetDockState(class CDockingManager *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMultiPaneFrameWnd::SetDockState(CMultiPaneFrameWnd *this,CDockingManager *param_1)

{
  undefined4 *puVar1;
  CBasePane *pCVar2;
  int iVar3;
  CPaneContainer *this_00;
  CList<unsigned_int,unsigned_int> *pCVar4;
  CObject *this_01;
  HWND pHVar5;
  CWnd *pCVar6;
  int *piVar7;
  CObject *pCVar8;
  undefined **ppuVar9;
  LRESULT LVar10;
  undefined4 *puVar11;
  CObList local_78 [4];
  undefined4 *local_74;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  CObject *local_38;
  CWnd *local_34;
  CWnd *local_30;
  CBasePane *local_2c;
  CWnd *local_28;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x100c7dd3;
  local_38 = (CObject *)param_1;
  local_30 = (CWnd *)this;
  CObList::CObList(local_78,10);
  local_8 = 0;
  iVar3 = CPaneContainerManager::IsEmpty((CPaneContainerManager *)(this + 0x180));
  if (iVar3 == 0) {
    pCVar2 = *(CBasePane **)(this + 0x188);
    puVar11 = local_74;
    while (pCVar2 != (CBasePane *)0x0) {
      if (pCVar2 == (CBasePane *)0x0) goto LAB_100c811c;
      local_2c = *(CBasePane **)pCVar2;
      local_74 = puVar11;
      pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                  *(CObject **)(pCVar2 + 8));
      iVar3 = CObject::IsKindOf(pCVar8,(CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*(int *)pCVar8 + 0x168))();
        if (iVar3 != 0) {
          pHVar5 = GetParent(*(HWND *)(pCVar8 + 0x20));
          pCVar6 = CWnd::FromHandle(pHVar5);
          pHVar5 = GetParent(*(HWND *)(pCVar6 + 0x20));
          local_34 = CWnd::FromHandle(pHVar5);
          pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xbc));
          CWnd::SetParent((CWnd *)pCVar8,pCVar6);
          (**(code **)(*(int *)local_34 + 0x3c4))(pCVar8);
          iVar3 = CObject::IsKindOf(pCVar8,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
          if (iVar3 != 0) {
            (**(code **)(*(int *)pCVar8 + 0x1ec))(1);
          }
          CWnd::ShowWindow((CWnd *)pCVar8,5);
        }
        iVar3 = (**(code **)(*(int *)pCVar8 + 0x1d8))();
        if (iVar3 != 0) {
          (**(code **)(*(int *)pCVar8 + 0x368))(0,0xf000,0,1);
        }
        local_24.left = 0;
        local_24.top = 0;
        local_24.right = 0;
        local_24.bottom = 0;
        GetWindowRect(*(HWND *)(pCVar8 + 0x20),&local_24);
        (**(code **)(*(int *)pCVar8 + 0x1f8))
                  (local_24.left,local_24.top,local_24.right,local_24.bottom,3,0);
        piVar7 = (int *)(**(code **)(*(int *)pCVar8 + 0x224))(0);
        pCVar2 = local_2c;
        this = (CMultiPaneFrameWnd *)local_30;
        puVar11 = local_74;
        if (piVar7 != (int *)0x0) {
          CWnd::SetParent((CWnd *)pCVar8,local_30);
          (**(code **)(*piVar7 + 0x178))(pCVar8,0,0);
          local_4c = *(int *)(pCVar8 + 0x288);
          local_48 = *(int *)(pCVar8 + 0x28c);
          local_44 = *(int *)(pCVar8 + 0x290);
          local_40 = *(int *)(pCVar8 + 0x294);
          (**(code **)(*(int *)pCVar8 + 0x234))
                    (0,local_4c,local_48,local_44 - local_4c,local_40 - local_48,0x34,0);
          pCVar2 = local_2c;
          this = (CMultiPaneFrameWnd *)local_30;
          puVar11 = local_74;
        }
      }
      else {
        local_34 = (CWnd *)0x0;
        this_00 = (CPaneContainer *)(**(code **)(*(int *)(this + 0x180) + 0x8c))(pCVar8,&local_34);
        if (this_00 == (CPaneContainer *)0x0) goto LAB_100c811c;
        pCVar4 = CPaneContainer::GetAssociatedSiblingPaneIDs(this_00,(CDockablePane *)pCVar8);
        if (pCVar4 != (CList<unsigned_int,unsigned_int> *)0x0) {
          puVar11 = *(undefined4 **)(pCVar4 + 4);
          while (puVar11 != (undefined4 *)0x0) {
            local_3c = (undefined4 *)*puVar11;
            this_01 = (CObject *)(**(code **)(*(int *)local_38 + 0x24))(puVar11[2],1);
            local_28 = (CWnd *)0x0;
            puVar11 = local_3c;
            if (this_01 != (CObject *)0x0) {
              local_28 = (CWnd *)this_01;
              iVar3 = CObject::IsKindOf(this_01,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
              if ((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)this_01 + 0x1d8))(), iVar3 != 0)) {
                (**(code **)(*(int *)this_01 + 0x368))(0,0xf000,0,1);
              }
              iVar3 = (**(code **)(*(int *)this_01 + 0x168))();
              if (iVar3 == 0) {
                local_54 = 10;
                local_50 = 10;
                local_5c = 0;
                local_58 = 0;
                (**(code **)(*(int *)this_01 + 0x1f8))(0,0,10,10,3,0);
                this_01 = (CObject *)local_28;
                this = (CMultiPaneFrameWnd *)local_30;
              }
              else {
                pHVar5 = GetParent(*(HWND *)(this_01 + 0x20));
                pCVar6 = CWnd::FromHandle(pHVar5);
                pHVar5 = GetParent(*(HWND *)(pCVar6 + 0x20));
                local_28 = CWnd::FromHandle(pHVar5);
                CWnd::SetParent((CWnd *)this_01,(CWnd *)this);
                (**(code **)(*(int *)local_28 + 0x3c4))(this_01);
              }
              local_28 = (CWnd *)(**(code **)(*(int *)this_01 + 0x224))(0);
              if ((local_28 != (CWnd *)0x0) && (local_28 != (CWnd *)this)) {
                (**(code **)(*(int *)local_28 + 0x178))(this_01,0,0);
              }
              (**(code **)(*(int *)this_01 + 0x34c))(pCVar8,0,0,0);
              puVar11 = local_3c;
              if (local_28 != (CWnd *)0x0) {
                PostMessageW(*(HWND *)(local_28 + 0x20),DAT_101680a8,0,0);
                puVar11 = local_3c;
              }
            }
          }
        }
        iVar3 = (**(code **)(*(int *)pCVar8 + 0x3a8))();
        if (iVar3 == 0) {
          CObList::AddTail(local_78,pCVar8);
          pCVar2 = local_2c;
          puVar11 = local_74;
        }
        else {
          (**(code **)(*(int *)pCVar8 + 0x3d8))(0);
          (**(code **)(*(int *)pCVar8 + 0x20c))();
          pCVar2 = local_2c;
          puVar11 = local_74;
        }
      }
    }
    while (puVar11 != (undefined4 *)0x0) {
      if (puVar11 == (undefined4 *)0x0) goto LAB_100c811c;
      puVar1 = puVar11 + 2;
      puVar11 = (undefined4 *)*puVar11;
      local_38 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                    (CObject *)*puVar1);
      (**(code **)(*(int *)this + 0x178))(local_38,0,1);
      (**(code **)(*(int *)local_38 + 0x60))();
    }
    if (*(int *)(this + 400) == 0) {
      SendMessageW(*(HWND *)(this + 0x20),DAT_101680a8,0,0);
    }
    else {
      puVar11 = *(undefined4 **)(this + 0x188);
      while (puVar11 != (undefined4 *)0x0) {
        if (puVar11 == (undefined4 *)0x0) {
LAB_100c811c:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        puVar1 = puVar11 + 2;
        puVar11 = (undefined4 *)*puVar11;
        local_2c = (CBasePane *)
                   AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                      (CObject *)*puVar1);
        iVar3 = (**(code **)(*(int *)local_2c + 0x1a8))();
        if (iVar3 != 0) {
          *(undefined4 *)(this + 0x94) = 1;
        }
        (**(code **)(*(int *)local_2c + 0x220))(iVar3,1,0);
        CPaneFrameWnd::AddRemovePaneFromGlobalList(local_2c,1);
      }
      pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,
                                  *(CObject **)(*(int *)(this + 0x188) + 8));
      if (pCVar8 != (CObject *)0x0) {
        if (*(int *)(this + 400) < 2) {
          ppuVar9 = FUN_1000ad47();
          FUN_10005e00(&local_28,(int *)ppuVar9);
          local_8._0_1_ = 1;
          CWnd::GetWindowTextW
                    ((CWnd *)pCVar8,
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28
                    );
          CWnd::SetWindowTextW((CWnd *)this,(wchar_t *)local_28);
          LVar10 = SendMessageW(*(HWND *)(pCVar8 + 0x20),0x7f,0,0);
          SendMessageW(*(HWND *)(this + 0x20),0x80,0,LVar10);
          LVar10 = SendMessageW(*(HWND *)(pCVar8 + 0x20),0x7f,1,0);
          SendMessageW(*(HWND *)(this + 0x20),0x80,1,LVar10);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10001030((undefined4 *)(local_28 + -0x10));
        }
        else {
          *(undefined4 *)(this + 200) = *(undefined4 *)(pCVar8 + 0x20);
        }
      }
      (**(code **)(*(int *)this + 0x1f0))();
      (**(code **)(*(int *)this + 0x188))(*(undefined4 *)(this + 0xb8));
      (**(code **)(*(int *)this + 0x1c8))();
    }
  }
  else {
    PostMessageW(*(HWND *)(this + 0x20),DAT_101680a8,0,0);
  }
  local_8 = 0xffffffff;
  FUN_1001e259(local_78);
  FUN_100f90cf();
  return;
}


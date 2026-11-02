// rea decompile_all
// name: CDockingManager::SetDockState
// address: 0x1003f39c
// body: available
// range: 0x1003f39c-0x1003fc72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f46f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CDockingManager::SetDockState(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockingManager::SetDockState(CDockingManager *this)

{
  CDockingManager *pCVar1;
  CBasePane *pCVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  int *piVar6;
  CPaneDivider *this_00;
  undefined4 uVar7;
  CPaneContainer *this_01;
  CList<unsigned_int,unsigned_int> *pCVar8;
  CObject *pCVar9;
  int iVar10;
  CWnd *pCVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  CObList local_a4 [4];
  undefined4 *local_a0;
  CObList local_88 [4];
  undefined4 *local_84;
  CObList local_6c [8];
  int local_64;
  CObList local_50 [4];
  undefined4 *local_4c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CWnd *local_20;
  CDockingManager *local_1c;
  undefined4 *local_18;
  CObject *local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x94;
  local_8 = 0x1003f3ab;
  if (((*(int *)(this + 0x15c) == 0) && (*(int *)(this + 0x160) == 0)) &&
     (((*(int *)(this + 100) != 0 ||
       (((*(int *)(this + 0x9c) != 0 || (*(int *)(this + 0x80) != 0)) ||
        (*(int *)(this + 0xb8) != 0)))) || (*(int *)(this + 0x2c) != 0)))) {
    DAT_101680ec = 1;
    DAT_101680f0 = 1;
    local_1c = this;
    CObList::CObList(local_a4,10);
    puVar12 = *(undefined4 **)(this + 0x40);
    local_8 = 0;
    while (puVar12 != (undefined4 *)0x0) {
      if (puVar12 == (undefined4 *)0x0) goto LAB_1003f46f;
      puVar13 = puVar12 + 2;
      puVar12 = (undefined4 *)*puVar12;
      pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,(CObject *)*puVar13)
      ;
      if (pCVar9 != (CObject *)0x0) {
        pCVar2 = CPaneDivider::GetFirstPane((CPaneDivider *)pCVar9);
        pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)pCVar2
                                   );
        if (((pCVar9 != (CObject *)0x0) && (*(int *)(pCVar9 + 0x31c) != 0)) &&
           (*(int *)(*(int *)(pCVar9 + 0x31c) + 0x104) != 0)) {
          CObList::AddTail(local_a4,pCVar9);
        }
      }
    }
    while (local_a0 != (undefined4 *)0x0) {
      if (local_a0 == (undefined4 *)0x0) goto LAB_1003f46f;
      puVar12 = (undefined4 *)*local_a0;
      pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                  (CObject *)local_a0[2]);
      (**(code **)(*(int *)pCVar9 + 0x368))(0,0xf000,0,1);
      local_a0 = puVar12;
    }
    puVar12 = *(undefined4 **)(this + 0x5c);
    while (puVar12 != (undefined4 *)0x0) {
      if (puVar12 == (undefined4 *)0x0) goto LAB_1003f46f;
      puVar13 = puVar12 + 2;
      puVar12 = (undefined4 *)*puVar12;
      pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)*puVar13
                                 );
      if (pCVar9 != (CObject *)0x0) {
        CDockablePane::SetDefaultPaneDivider((CDockablePane *)pCVar9,*(HWND__ **)(pCVar9 + 0x340));
      }
    }
    CObList::CObList(local_88,10);
    local_8 = CONCAT31(local_8._1_3_,1);
    CObList::AddTail(local_88,(CObList *)(this + 0x90));
    while (local_84 != (undefined4 *)0x0) {
      if (local_84 == (undefined4 *)0x0) goto LAB_1003f46f;
      puVar12 = local_84 + 2;
      local_84 = (undefined4 *)*local_84;
      local_14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,
                                    (CObject *)*puVar12);
      CWnd::SetWindowPos((CWnd *)local_14,(CWnd *)0x0,0,0,0,0,0x37);
      (**(code **)(*(int *)local_14 + 0x1d8))(this);
    }
    CObList::CObList(local_50,10);
    local_8 = CONCAT31(local_8._1_3_,2);
    puVar12 = *(undefined4 **)(this + 0x24);
    while (puVar12 != (undefined4 *)0x0) {
      if (puVar12 == (undefined4 *)0x0) goto LAB_1003f46f;
      local_14 = (CObject *)puVar12[2];
      puVar12 = (undefined4 *)*puVar12;
      local_18 = puVar12;
      iVar3 = CObject::IsKindOf(local_14,(CRuntimeClass *)&PTR_s_CDockSite_1012dd78);
      if (iVar3 == 0) {
        iVar3 = CObject::IsKindOf(local_14,(CRuntimeClass *)&PTR_s_CPane_1012cc40);
        if (iVar3 != 0) {
          iVar3 = (**(code **)(*(int *)local_14 + 0x1c8))();
          if (iVar3 == 0) {
            iVar3 = (**(code **)(*(int *)local_14 + 0x1ac))();
            if (iVar3 != 0) {
              local_30 = *(int *)(local_14 + 0x288);
              local_2c = *(int *)(local_14 + 0x28c);
              local_28 = *(int *)(local_14 + 0x290);
              local_24 = *(int *)(local_14 + 0x294);
              (**(code **)(*(int *)local_14 + 0x234))
                        (0,local_30,local_2c,local_28 - local_30,local_24 - local_2c,0x34,0);
              iVar3 = *(int *)local_14;
              uVar7 = (**(code **)(iVar3 + 0x1a8))(1,0);
              (**(code **)(iVar3 + 0x220))(uVar7);
              this = local_1c;
              puVar12 = local_18;
            }
          }
          else {
            CObList::AddTail(local_50,local_14);
          }
        }
      }
      else {
        pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockSite_1012dd78,local_14);
        CObList::AddTail(local_50,(CObList *)(pCVar9 + 0x100));
      }
    }
    puVar12 = *(undefined4 **)(this + 0xcc);
    while (puVar13 = local_4c, puVar12 != (undefined4 *)0x0) {
      if (puVar12 == (undefined4 *)0x0) goto LAB_1003f46f;
      puVar13 = puVar12 + 2;
      puVar12 = (undefined4 *)*puVar12;
      pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)*puVar13
                                 );
      if (pCVar9 != (CObject *)0x0) {
        pCVar9 = (CObject *)(**(code **)(*(int *)pCVar9 + 0x1a4))();
        pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseToolBar_1012c6f8,pCVar9);
        if (pCVar9 != (CObject *)0x0) {
          CObList::AddTail(local_50,pCVar9);
        }
      }
    }
    while (puVar13 != (undefined4 *)0x0) {
      if (puVar13 == (undefined4 *)0x0) goto LAB_1003f46f;
      local_14 = (CObject *)puVar13[2];
      puVar13 = (undefined4 *)*puVar13;
      local_18 = puVar13;
      iVar3 = (**(code **)(*(int *)local_14 + 0x1ac))();
      if ((iVar3 != 0) &&
         (iVar3 = CObject::IsKindOf(local_14,(CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c),
         iVar3 == 0)) {
        (**(code **)(*(int *)local_14 + 0x1f8))
                  (*(int *)(local_14 + 0x1d8),*(int *)(local_14 + 0x1dc),*(int *)(local_14 + 0x1e0),
                   *(int *)(local_14 + 0x1e4),3,0);
        this = local_1c;
        puVar13 = local_18;
      }
    }
    while (local_4c != (undefined4 *)0x0) {
      if (local_4c == (undefined4 *)0x0) goto LAB_1003f46f;
      local_18 = (undefined4 *)*local_4c;
      pCVar9 = (CObject *)local_4c[2];
      iVar3 = (**(code **)(*(int *)pCVar9 + 0x1ac))();
      local_4c = local_18;
      if ((iVar3 != 0) &&
         (iVar3 = CObject::IsKindOf(pCVar9,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c),
         local_4c = local_18, iVar3 == 0)) {
        (**(code **)(*(int *)pCVar9 + 0x2b8))(this);
        CPane::UpdateVirtualRect((CPane *)pCVar9);
        local_4c = local_18;
      }
    }
    puVar12 = *(undefined4 **)(this + 0x5c);
    while (local_18 = puVar12, puVar12 != (undefined4 *)0x0) {
      if (puVar12 == (undefined4 *)0x0) goto LAB_1003f46f;
      local_18 = (undefined4 *)*puVar12;
      pCVar11 = (CWnd *)puVar12[2];
      iVar3 = (**(code **)(*(int *)pCVar11 + 0x168))();
      if (iVar3 != 0) {
        pHVar4 = GetParent(*(HWND *)(pCVar11 + 0x20));
        pCVar5 = CWnd::FromHandle(pHVar4);
        pHVar4 = GetParent(*(HWND *)(pCVar5 + 0x20));
        pCVar5 = CWnd::FromHandle(pHVar4);
        CWnd::SetParent(pCVar11,*(CWnd **)(local_1c + 0xe4));
        (**(code **)(*(int *)pCVar5 + 0x3c4))(pCVar11);
        iVar3 = CObject::IsKindOf((CObject *)pCVar11,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c)
        ;
        if (iVar3 != 0) {
          (**(code **)(*(int *)pCVar11 + 0x1ec))(1);
        }
        CWnd::ShowWindow(pCVar11,5);
      }
      piVar6 = (int *)(**(code **)(*(int *)pCVar11 + 0x224))(0);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x178))(pCVar11,0,0);
      }
      CWnd::SetParent(pCVar11,*(CWnd **)(local_1c + 0xe4));
      iVar3 = CObject::IsKindOf((CObject *)pCVar11,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
      puVar12 = local_18;
      this = local_1c;
      if (iVar3 != 0) {
        local_14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                      (CObject *)pCVar11);
        local_30 = *(int *)(local_14 + 0x288);
        local_2c = *(int *)(local_14 + 0x28c);
        local_28 = *(int *)(local_14 + 0x290);
        local_24 = *(int *)(local_14 + 0x294);
        (**(code **)(*(int *)local_14 + 0x234))
                  (0,local_30,local_2c,local_28 - local_30,local_24 - local_2c,0x34,0);
        pCVar9 = local_14;
        local_20 = (CWnd *)(**(code **)(*(int *)local_14 + 0x1a8))();
        CWnd::ShowWindow((CWnd *)pCVar9,(uint)(local_20 != (CWnd *)0x0));
        this_00 = CDockablePane::GetDefaultPaneDivider((CDockablePane *)pCVar9);
        if (this_00 != (CPaneDivider *)0x0) {
          iVar3 = *(int *)local_14;
          uVar7 = (**(code **)(*(int *)this_00 + 400))();
          (**(code **)(iVar3 + 0x1dc))(uVar7);
          (**(code **)(*(int *)this_00 + 0x290))(local_14,local_20);
        }
        iVar3 = CObject::IsKindOf(local_14,(CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c);
        puVar12 = local_18;
        this = local_1c;
        if ((iVar3 != 0) && (local_34 = 0, this_00 != (CPaneDivider *)0x0)) {
          this_01 = CPaneDivider::FindPaneContainer(this_00,(CDockablePane *)local_14,&local_34);
          pCVar8 = CPaneContainer::GetAssociatedSiblingPaneIDs(this_01,(CDockablePane *)local_14);
          if (pCVar8 != (CList<unsigned_int,unsigned_int> *)0x0) {
            puVar12 = *(undefined4 **)(pCVar8 + 4);
            while (puVar12 != (undefined4 *)0x0) {
              puVar13 = puVar12 + 2;
              puVar12 = (undefined4 *)*puVar12;
              pCVar9 = (CObject *)(**(code **)(*(int *)local_1c + 0x24))(*puVar13,1);
              pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar9);
              if (pCVar9 != (CObject *)0x0) {
                iVar3 = (**(code **)(*(int *)pCVar9 + 0x168))();
                if (iVar3 == 0) {
                  iVar3 = (**(code **)(*(int *)pCVar9 + 0x1d8))();
                  if (iVar3 != 0) {
                    (**(code **)(*(int *)pCVar9 + 0x368))(0,0xf000,0,1);
                  }
                }
                else {
                  pHVar4 = GetParent(*(HWND *)(pCVar9 + 0x20));
                  pCVar11 = CWnd::FromHandle(pHVar4);
                  pHVar4 = GetParent(*(HWND *)(pCVar11 + 0x20));
                  local_20 = CWnd::FromHandle(pHVar4);
                  CWnd::SetParent((CWnd *)pCVar9,*(CWnd **)(local_1c + 0xe4));
                  (**(code **)(*(int *)local_20 + 0x3c4))(pCVar9);
                }
                (**(code **)(*(int *)pCVar9 + 0x34c))(local_14,0,0,0);
              }
            }
          }
          pCVar9 = local_14;
          iVar3 = (**(code **)(*(int *)local_14 + 0x3a8))();
          puVar12 = local_18;
          this = local_1c;
          if (iVar3 != 0) {
            (**(code **)(*(int *)pCVar9 + 0x3d8))(0);
            (**(code **)(*(int *)pCVar9 + 0x20c))();
            puVar12 = local_18;
            this = local_1c;
          }
        }
      }
    }
    CObList::AddTail((CObList *)(this + 0x20),(CObList *)(this + 0x58));
    DAT_101680f0 = 0;
    (**(code **)(*(int *)this + 0x38))(0);
    local_18 = *(undefined4 **)(this + 0xb0);
    while (puVar12 = local_18, puVar12 != (undefined4 *)0x0) {
      local_18 = (undefined4 *)*puVar12;
      pCVar9 = (CObject *)(**(code **)(*(int *)local_1c + 0x24))(puVar12[2],1);
      pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar9);
      if (pCVar9 != (CObject *)0x0) {
        iVar10 = (**(code **)(*(int *)pCVar9 + 0x16c))();
        iVar3 = *(int *)pCVar9;
        if (iVar10 == 0) {
          iVar3 = (**(code **)(iVar3 + 0x1d8))();
          if (iVar3 == 0) {
            iVar3 = (**(code **)(*(int *)pCVar9 + 0x168))();
            if (iVar3 != 0) {
              pHVar4 = GetParent(*(HWND *)(pCVar9 + 0x20));
              pCVar11 = CWnd::FromHandle(pHVar4);
              pHVar4 = GetParent(*(HWND *)(pCVar11 + 0x20));
              local_20 = CWnd::FromHandle(pHVar4);
              CWnd::SetParent((CWnd *)pCVar9,*(CWnd **)(local_1c + 0xe4));
              (**(code **)(*(int *)local_20 + 0x3c4))(pCVar9);
              (**(code **)(*(int *)pCVar9 + 0x1ec))(1);
            }
            iVar3 = *(int *)pCVar9;
            goto LAB_1003fa88;
          }
          (**(code **)(*(int *)pCVar9 + 0x368))(0,0xf000,0,1);
        }
        else {
LAB_1003fa88:
          (**(code **)(iVar3 + 0x1fc))(puVar12[3],0,1,0,0xffffffff,0);
        }
        (**(code **)(*(int *)pCVar9 + 0x234))
                  (0,puVar12[5],puVar12[6],puVar12[7] - puVar12[5],puVar12[8] - puVar12[6],0x14,0);
        iVar3 = (**(code **)(*(int *)pCVar9 + 0x368))(1,puVar12[3],0,0);
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x10c) = puVar12[0x12];
          *(undefined4 *)(iVar3 + 0x104) = puVar12[0x10];
          *(undefined4 *)(iVar3 + 0x108) = puVar12[0x11];
          puVar12[0x13] = pCVar9;
          *(undefined4 *)(*(int *)(pCVar9 + 0x31c) + 0x78) = puVar12[4];
        }
      }
    }
    local_18 = (undefined4 *)0x0;
    puVar12 = *(undefined4 **)(local_1c + 0xb0);
    while (puVar13 = puVar12, puVar13 != (undefined4 *)0x0) {
      puVar12 = (undefined4 *)*puVar13;
      if ((puVar13[0x13] != 0) &&
         (iVar3 = (**(code **)(*(int *)puVar13[0x13] + 0x36c))(), iVar3 != 0)) {
        (**(code **)(*(int *)puVar13[0x13] + 0x220))(puVar13[4],0,0);
      }
    }
    puVar12 = *(undefined4 **)(local_1c + 0x78);
    while (puVar12 != (undefined4 *)0x0) {
      if (puVar12 == (undefined4 *)0x0) goto LAB_1003f46f;
      puVar13 = puVar12 + 2;
      puVar12 = (undefined4 *)*puVar12;
      pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,
                                  (CObject *)*puVar13);
      if (pCVar9 != (CObject *)0x0) {
        (**(code **)(*(int *)pCVar9 + 0x3d8))(1);
      }
    }
    CObList::CObList(local_6c,10);
    pCVar1 = local_1c;
    local_8 = CONCAT31(local_8._1_3_,3);
    CObList::AddTail(local_6c,(CObList *)(local_1c + 0x20));
    iVar3 = local_64;
    while (iVar3 != 0) {
      if (iVar3 == 0) {
LAB_1003f46f:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_20 = *(CWnd **)(iVar3 + 8);
      iVar3 = *(int *)(iVar3 + 4);
      pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,(CObject *)local_20)
      ;
      if (pCVar9 == (CObject *)0x0) {
        local_14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,
                                      (CObject *)local_20);
        if (((local_14 != (CObject *)0x0) &&
            (iVar10 = (**(code **)(*(int *)local_14 + 0x3a8))(), iVar10 == 0)) &&
           (iVar10 = (**(code **)(*(int *)local_14 + 0x1c8))(), iVar10 != 0)) {
          (**(code **)(*(int *)local_14 + 0x23c))(1);
          (**(code **)(*(int *)local_14 + 0x60))();
        }
      }
      else {
        (**(code **)(*(int *)pCVar9 + 0x29c))();
      }
    }
    (**(code **)(*(int *)pCVar1 + 0x34))(1);
    CObList::RemoveAll((CObList *)(pCVar1 + 0x58));
    CObList::RemoveAll((CObList *)(pCVar1 + 0x90));
    CObList::RemoveAll((CObList *)(pCVar1 + 0x74));
    DAT_101680ec = 0;
    local_8._0_1_ = 2;
    FUN_1001e259(local_6c);
    local_8._0_1_ = 1;
    FUN_1001e259(local_50);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_1001e259(local_88);
    local_8 = 0xffffffff;
    FUN_1001e259(local_a4);
  }
  return;
}


// rea decompile_all
// name: CDockingManager::Serialize
// address: 0x10041aa3
// body: available
// range: 0x10041aa3-0x100422b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10041b2d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CDockingManager::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockingManager::Serialize(CDockingManager *this,CArchive *param_1)

{
  undefined4 *puVar1;
  CArchive *this_00;
  __POSITION *p_Var2;
  __POSITION *p_Var3;
  int *piVar4;
  CPaneFrameWnd *pCVar5;
  int iVar6;
  CObject *pCVar7;
  CBasePane *pCVar8;
  CWnd *pCVar9;
  int iVar10;
  CObject *pCVar11;
  undefined4 uVar12;
  CDockablePane *pCVar13;
  CBaseTabbedPane *pCVar14;
  undefined4 *puVar15;
  undefined **local_94;
  __POSITION *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  __POSITION *local_78;
  undefined4 *local_74;
  uint local_70;
  long local_6c;
  __POSITION *local_68;
  CPaneFrameWnd *local_64;
  CArchive *local_60;
  AFX_AUTOHIDE_DOCKSITE_SAVE_INFO local_5c [28];
  undefined **local_40 [10];
  CObject *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x84;
  local_8 = 0x10041ab2;
  local_68 = (__POSITION *)0x0;
  local_6c = 0;
  local_60 = param_1;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    CObList::RemoveAll((CObList *)(this + 0x58));
    CObList::RemoveAll((CObList *)(this + 0x74));
    CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::RemoveAll
              ((CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> *)
               (this + 0xac));
    CObList::RemoveAll((CObList *)(this + 0x90));
    local_70 = 0xffffffff;
    local_94 = CList<unsigned_int,unsigned_int&>::vftable;
    local_88 = 0;
    local_84 = 0;
    local_8c = 0;
    local_90 = (__POSITION *)0x0;
    local_80 = 0;
    local_7c = 10;
    local_8 = 1;
    CArchive::operator>>(param_1,&local_6c);
    if (0 < local_6c) {
      do {
        CArchive::operator>>(local_60,(long *)&local_70);
        pCVar7 = (CObject *)(**(code **)(*(int *)this + 0x24))(local_70,1);
        pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,pCVar7);
        if (pCVar7 != (CObject *)0x0) {
          piVar4 = (int *)(**(code **)(*(int *)pCVar7 + 0x3a4))();
          (**(code **)(*piVar4 + 8))(local_60);
          CObList::AddTail((CObList *)(this + 0x74),pCVar7);
        }
        local_6c = local_6c + -1;
      } while (local_6c != 0);
    }
    CArchive::operator>>(local_60,(long *)&local_68);
    pCVar7 = (CObject *)0x0;
    local_6c = 0;
    if (0 < (int)local_68) {
      local_64 = (CPaneFrameWnd *)local_68;
      do {
        this_00 = local_60;
        CArchive::operator>>(local_60,&local_6c);
        if (local_6c == 0) {
          pCVar7 = CRuntimeClass::CreateObject((CRuntimeClass *)PTR_PTR_10161288);
          pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,pCVar7);
          CPaneDivider::Init((CPaneDivider *)pCVar7,1,*(CWnd **)(this + 0xe4));
          (**(code **)(*(int *)pCVar7 + 8))(this_00);
          CObList::AddHead((CObList *)(this + 0x58),pCVar7);
          p_Var2 = local_78;
          p_Var3 = local_90;
          while (local_78 = p_Var3, local_68 = local_78, local_78 != (__POSITION *)0x0) {
            local_68 = *(__POSITION **)local_78;
            pCVar13 = CPaneDivider::FindTabbedPane((CPaneDivider *)pCVar7,*(uint *)(local_78 + 8));
            p_Var2 = local_78;
            p_Var3 = local_68;
            if (pCVar13 != (CDockablePane *)0x0) {
              iVar10 = (**(code **)(*(int *)pCVar13 + 0x1d8))();
              if (iVar10 != 0) {
                (**(code **)(*(int *)pCVar13 + 0x368))(0,0xf000,0,1);
              }
              *(undefined4 *)(pCVar13 + 0x340) = *(undefined4 *)(pCVar7 + 0x20);
              local_74 = (undefined4 *)(*(int *)pCVar13 + 0x1dc);
              uVar12 = (**(code **)(*(int *)pCVar7 + 400))();
              (*(code *)*local_74)(uVar12);
              CObList::AddHead((CObList *)(this + 0x58),(CObject *)pCVar13);
              CList<unsigned_int,unsigned_int&>::RemoveAt
                        ((CList<unsigned_int,unsigned_int&> *)&local_94,local_78);
              p_Var2 = local_78;
              p_Var3 = local_68;
            }
          }
        }
        else {
          CArchive::operator>>(this_00,(long *)&local_70);
          if (local_70 == 0xffffffff) {
            CArchive::operator>>(this_00,(long *)&local_70);
            if (pCVar7 != (CObject *)0x0) {
              pCVar11 = (CObject *)CPaneDivider::FindTabbedPane((CPaneDivider *)pCVar7,local_70);
              goto LAB_10041faa;
            }
          }
          else {
            pCVar11 = (CObject *)(**(code **)(*(int *)this + 0x24))(local_70,1);
            pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar11);
LAB_10041faa:
            if (pCVar11 != (CObject *)0x0) {
              iVar10 = (**(code **)(*(int *)pCVar11 + 0x1d8))();
              if (iVar10 != 0) {
                (**(code **)(*(int *)pCVar11 + 0x368))(0,0xf000,0,1);
              }
              if (pCVar7 != (CObject *)0x0) {
                *(undefined4 *)(pCVar11 + 0x340) = *(undefined4 *)(pCVar7 + 0x20);
                local_68 = (__POSITION *)(*(int *)pCVar11 + 0x1dc);
                uVar12 = (**(code **)(*(int *)pCVar7 + 400))();
                (**(code **)local_68)(uVar12);
              }
              CObList::AddHead((CObList *)(this + 0x58),pCVar11);
              p_Var2 = local_78;
              goto LAB_100420e9;
            }
          }
          CList<unsigned_int,unsigned_int&>::AddTail
                    ((CList<unsigned_int,unsigned_int&> *)&local_94,&local_70);
          p_Var2 = local_78;
        }
LAB_100420e9:
        local_78 = p_Var2;
        local_64 = local_64 + -1;
      } while (local_64 != (CPaneFrameWnd *)0x0);
    }
    local_64 = (CPaneFrameWnd *)0x0;
    CArchive::operator>>(local_60,(long *)&local_64);
    pCVar5 = local_64;
    if (0 < (int)local_64) {
      do {
        DAT_101680a4 = *(undefined4 *)(this + 0xe4);
        local_64 = (CPaneFrameWnd *)0x0;
        operator>>(local_60,&local_64);
        CObList::AddTail((CObList *)(this + 0x90),(CObject *)local_64);
        pCVar5 = pCVar5 + -1;
      } while (pCVar5 != (CPaneFrameWnd *)0x0);
    }
    local_64 = (CPaneFrameWnd *)0x0;
    CArchive::operator>>(local_60,(long *)&local_64);
    pCVar5 = local_64;
    if (0 < (int)local_64) {
      do {
        AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::AFX_AUTOHIDE_DOCKSITE_SAVE_INFO(local_5c);
        local_8._0_1_ = 2;
        AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::Serialize(local_5c,local_60);
        CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::AddTail
                  ((CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> *)
                   (this + 0xac),local_5c);
        local_8 = CONCAT31(local_8._1_3_,1);
        local_40[0] = CList<unsigned_int,unsigned_int&>::vftable;
        CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)local_40);
        pCVar5 = pCVar5 + -1;
      } while (pCVar5 != (CPaneFrameWnd *)0x0);
    }
    local_64 = (CPaneFrameWnd *)0x0;
    CArchive::operator>>(local_60,(long *)&local_64);
    if (0 < (int)local_64) {
      do {
        local_68 = (__POSITION *)0xffffffff;
        CArchive::operator>>(local_60,(long *)&local_68);
        if (local_68 != (__POSITION *)0xffffffff) {
          pCVar7 = (CObject *)(**(code **)(*(int *)this + 0x24))(local_68,1);
          pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar7);
          if (pCVar7 != (CObject *)0x0) {
            iVar10 = (**(code **)(*(int *)pCVar7 + 0x16c))();
            if (iVar10 == 0) {
              iVar10 = (**(code **)(*(int *)pCVar7 + 0x1d8))();
              if (iVar10 == 0) {
                iVar10 = (**(code **)(*(int *)pCVar7 + 0x168))();
                if (iVar10 == 0) {
                  (**(code **)(*(int *)pCVar7 + 0x23c))(0);
                }
                else {
                  pCVar14 = CBasePane::GetParentTabbedPane((CBasePane *)pCVar7);
                  CWnd::SetParent((CWnd *)pCVar7,*(CWnd **)(this + 0xe4));
                  (**(code **)(*(int *)pCVar14 + 0x3c4))(pCVar7);
                }
              }
              else {
                (**(code **)(*(int *)pCVar7 + 0x368))(0,0xf000,0,1);
              }
            }
            else {
              piVar4 = (int *)(**(code **)(*(int *)pCVar7 + 0x224))(0);
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 0x178))(pCVar7,0,0);
              }
              CWnd::SetParent((CWnd *)pCVar7,*(CWnd **)(this + 0xe4));
            }
            CWnd::ShowWindow((CWnd *)pCVar7,0);
            AddHiddenMDITabbedBar(this,(CDockablePane *)pCVar7);
            *(undefined4 *)(pCVar7 + 0x84) = 1;
          }
        }
        local_64 = local_64 + -1;
      } while (local_64 != (CPaneFrameWnd *)0x0);
    }
    local_8 = 0xffffffff;
    local_94 = CList<unsigned_int,unsigned_int&>::vftable;
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_94);
  }
  else {
    for (puVar15 = *(undefined4 **)(this + 0x24); puVar15 != (undefined4 *)0x0;
        puVar15 = (undefined4 *)*puVar15) {
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,
                                  (CObject *)puVar15[2]);
      if (((pCVar7 == (CObject *)0x0) ||
          (iVar10 = (**(code **)(*(int *)pCVar7 + 0x3a8))(), iVar10 != 0)) ||
         (iVar10 = (**(code **)(*(int *)pCVar7 + 0x1c8))(), iVar10 == 0)) {
LAB_10041b1b:
        if (puVar15 == (undefined4 *)0x0) break;
      }
      else {
        puVar15 = (undefined4 *)puVar15[1];
        (**(code **)(*(int *)pCVar7 + 0x23c))(1);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = *(undefined4 **)(this + 0x24);
          goto LAB_10041b1b;
        }
      }
    }
    puVar15 = *(undefined4 **)(this + 0xcc);
    while (puVar15 != (undefined4 *)0x0) {
      if (puVar15 == (undefined4 *)0x0) goto LAB_10041b2d;
      puVar1 = puVar15 + 2;
      puVar15 = (undefined4 *)*puVar15;
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)*puVar1)
      ;
      if (pCVar7 != (CObject *)0x0) {
        (**(code **)(*(int *)pCVar7 + 0x1ec))();
      }
    }
    puVar15 = *(undefined4 **)(this + 0x24);
    while (puVar15 != (undefined4 *)0x0) {
      if (puVar15 == (undefined4 *)0x0) goto LAB_10041b2d;
      pCVar7 = (CObject *)puVar15[2];
      puVar15 = (undefined4 *)*puVar15;
      iVar10 = CObject::IsKindOf(pCVar7,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
      if (((iVar10 == 0) || (iVar10 = (**(code **)(*(int *)pCVar7 + 0x1c8))(), iVar10 == 0)) &&
         ((iVar10 = CObject::IsKindOf(pCVar7,(CRuntimeClass *)&PTR_s_CPaneDivider_1012b088),
          iVar10 == 0 || (iVar10 = (**(code **)(*(int *)pCVar7 + 0x294))(), iVar10 == 0)))) {
        iVar10 = CObject::IsKindOf(pCVar7,(CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c);
        if (iVar10 != 0) {
          local_6c = local_6c + 1;
        }
      }
      else {
        local_68 = local_68 + 1;
      }
    }
    CArchive::operator<<(local_60,local_6c);
    puVar15 = *(undefined4 **)(this + 0x24);
    while (puVar15 != (undefined4 *)0x0) {
      if (puVar15 == (undefined4 *)0x0) goto LAB_10041b2d;
      pCVar7 = (CObject *)puVar15[2];
      puVar15 = (undefined4 *)*puVar15;
      iVar10 = (**(code **)(*(int *)pCVar7 + 0x1c8))();
      if (((iVar10 == 0) &&
          (iVar10 = CObject::IsKindOf(pCVar7,(CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c),
          iVar10 != 0)) &&
         (pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,pCVar7),
         pCVar7 != (CObject *)0x0)) {
        iVar10 = CWnd::GetDlgCtrlID((CWnd *)pCVar7);
        CArchive::operator<<(local_60,iVar10);
        piVar4 = (int *)(**(code **)(*(int *)pCVar7 + 0x3a4))();
        (**(code **)(*piVar4 + 8))(local_60);
      }
    }
    CArchive::operator<<(local_60,(long)local_68);
    iVar10 = *(int *)(this + 0x28);
LAB_10041d20:
    while (iVar10 != 0) {
      if (iVar10 == 0) goto LAB_10041b2d;
      pCVar7 = *(CObject **)(iVar10 + 8);
      iVar10 = *(int *)(iVar10 + 4);
      iVar6 = CObject::IsKindOf(pCVar7,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
      if ((iVar6 != 0) && (iVar6 = (**(code **)(*(int *)pCVar7 + 0x1c8))(), iVar6 != 0)) {
        local_64 = (CPaneFrameWnd *)CWnd::GetDlgCtrlID((CWnd *)pCVar7);
        if (local_64 == (CPaneFrameWnd *)0xffffffff) goto LAB_10041c9a;
        CArchive::operator<<(local_60,1);
        pCVar5 = local_64;
        goto LAB_10041cd7;
      }
      iVar6 = CObject::IsKindOf(pCVar7,(CRuntimeClass *)&PTR_s_CPaneDivider_1012b088);
      if ((iVar6 != 0) && (iVar6 = (**(code **)(*(int *)pCVar7 + 0x294))(), iVar6 != 0)) {
        CArchive::operator<<(local_60,0);
        pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,pCVar7);
        (**(code **)(*(int *)pCVar7 + 8))(local_60);
      }
    }
    puVar15 = *(undefined4 **)(this + 0xcc);
    iVar10 = 0;
    while (puVar15 != (undefined4 *)0x0) {
      if (puVar15 == (undefined4 *)0x0) goto LAB_10041b2d;
      puVar1 = puVar15 + 2;
      puVar15 = (undefined4 *)*puVar15;
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)*puVar1)
      ;
      iVar6 = (**(code **)(*(int *)pCVar7 + 0x19c))();
      if (0 < iVar6) {
        iVar10 = iVar10 + 1;
      }
    }
    CArchive::operator<<(local_60,iVar10);
    puVar15 = *(undefined4 **)(this + 0xcc);
    while (puVar15 != (undefined4 *)0x0) {
      if (puVar15 == (undefined4 *)0x0) goto LAB_10041b2d;
      puVar1 = puVar15 + 2;
      puVar15 = (undefined4 *)*puVar15;
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)*puVar1)
      ;
      iVar10 = (**(code **)(*(int *)pCVar7 + 0x19c))();
      if (0 < iVar10) {
        CArchive::WriteObject(local_60,pCVar7);
      }
    }
    CArchive::operator<<(local_60,*(long *)(this + 0x48));
    puVar15 = *(undefined4 **)(this + 0x40);
    while (puVar15 != (undefined4 *)0x0) {
      AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::AFX_AUTOHIDE_DOCKSITE_SAVE_INFO(local_5c);
      local_8 = 0;
      if (puVar15 == (undefined4 *)0x0) {
LAB_10041b2d:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar15 + 2;
      puVar15 = (undefined4 *)*puVar15;
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,(CObject *)*puVar1);
      if (pCVar7 != (CObject *)0x0) {
        pCVar8 = CPaneDivider::GetFirstPane((CPaneDivider *)pCVar7);
        local_18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                      (CObject *)pCVar8);
        if (local_18 != (CObject *)0x0) {
          AFX_AUTOHIDE_DOCKSITE_SAVE_INFO::Serialize(local_5c,local_60);
        }
      }
      local_8 = 0xffffffff;
      local_40[0] = CList<unsigned_int,unsigned_int&>::vftable;
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)local_40);
    }
    CArchive::operator<<(local_60,*(long *)(this + 0x1a8));
    puVar15 = *(undefined4 **)(this + 0x1a0);
    while (puVar15 != (undefined4 *)0x0) {
      puVar1 = puVar15 + 2;
      puVar15 = (undefined4 *)*puVar15;
      pCVar9 = CWnd::FromHandlePermanent((HWND__ *)*puVar1);
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)pCVar9);
      if (pCVar7 == (CObject *)0x0) {
        iVar10 = -1;
      }
      else {
        iVar10 = CWnd::GetDlgCtrlID((CWnd *)pCVar7);
      }
      CArchive::operator<<(local_60,iVar10);
    }
  }
  FUN_100f90cf();
  return;
LAB_10041c9a:
  pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,pCVar7);
  pCVar9 = (CWnd *)(**(code **)(*(int *)pCVar7 + 0x3d0))(0,0);
  if (pCVar9 != (CWnd *)0x0) {
    pCVar5 = (CPaneFrameWnd *)CWnd::GetDlgCtrlID(pCVar9);
    CArchive::operator<<(local_60,1);
    CArchive::operator<<(local_60,-1);
LAB_10041cd7:
    CArchive::operator<<(local_60,(long)pCVar5);
  }
  goto LAB_10041d20;
}


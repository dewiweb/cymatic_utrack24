// rea decompile_all
// name: CMFCDragFrameImpl::MoveDragFrame
// address: 0x100c21f1
// body: available
// range: 0x100c21f1-0x100c2623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCDragFrameImpl::MoveDragFrame(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCDragFrameImpl::MoveDragFrame(CMFCDragFrameImpl *this,int param_1)

{
  CMFCDragFrameImpl *pCVar1;
  CDockingManager *pCVar2;
  POINT pt;
  bool bVar3;
  int iVar4;
  CDockablePane *pCVar5;
  CFrameWnd *pCVar6;
  int _X;
  long lVar7;
  BOOL BVar8;
  int iVar9;
  CObject *pCVar10;
  int _X_00;
  RECT *pRVar11;
  int local_68;
  int local_64;
  tagPOINT local_60;
  CDockablePane *local_58;
  tagRECT local_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x100c21fd;
  *(undefined4 *)(this + 0x38) = 0;
  if ((*(int *)(this + 0x44) == 0) || (*(int *)(this + 0x48) == 0)) goto LAB_100c261c;
  if (*(int *)(this + 0x50) == 0) {
    pCVar5 = FUN_1000858a(0x350);
    local_8 = 0;
    if (pCVar5 == (CDockablePane *)0x0) {
      pCVar5 = (CDockablePane *)0x0;
    }
    else {
      CDockablePane::CDockablePane(pCVar5);
      *(undefined ***)pCVar5 = CDummyDockablePane::vftable;
    }
    local_8 = 0xffffffff;
    *(CDockablePane **)(this + 0x50) = pCVar5;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    pCVar6 = DAT_10168578;
    if (DAT_10168578 == (CFrameWnd *)0x0) {
      pCVar6 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x44));
    }
    (**(code **)(**(int **)(this + 0x50) + 0x328))
              (0,&PTR_1011d390,pCVar6,&local_44,0,DAT_10162278,0x40000000,0x20,0xf,0);
  }
  iVar4 = DAT_10168814;
  iVar9 = DAT_10168810;
  local_60.x = 0;
  local_60.y = 0;
  GetCursorPos(&local_60);
  _X = local_60.x - *(int *)(this + 4);
  _X_00 = local_60.y - *(int *)(this + 8);
  lVar7 = _labs(_X);
  if ((((lVar7 < iVar9) && (lVar7 = _labs(_X_00), lVar7 < iVar4)) &&
      (BVar8 = IsRectEmpty((RECT *)(this + 0xc)), BVar8 != 0)) && (param_1 == 0)) goto LAB_100c261c;
  *(undefined4 *)(this + 0x30) = 1;
  CDockingManager::LockUpdate(*(CDockingManager **)(this + 0x48),1);
  pRVar11 = (RECT *)(this + 0x1c);
  BVar8 = IsRectEmpty(pRVar11);
  if (BVar8 != 0) {
    pRVar11 = (RECT *)(this + 0xc);
  }
  local_64 = 0;
  local_54.left = pRVar11->left;
  local_54.top = pRVar11->top;
  local_54.right = pRVar11->right;
  local_54.bottom = pRVar11->bottom;
  BVar8 = IsRectEmpty((RECT *)(this + 0xc));
  if (BVar8 != 0) {
    iVar9 = CObject::IsKindOf(*(CObject **)(this + 0x44),
                              (CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0);
    if (iVar9 == 0) {
      iVar9 = CObject::IsKindOf(*(CObject **)(this + 0x44),(CRuntimeClass *)&PTR_s_CPane_1012cc40);
      if (iVar9 != 0) {
        pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,
                                     *(CObject **)(this + 0x44));
        pRVar11 = (RECT *)(this + 0xc);
        GetWindowRect(*(HWND *)(*(int *)(this + 0x44) + 0x20),pRVar11);
        iVar9 = (**(code **)(*(int *)pCVar10 + 0x224))(0);
        if (iVar9 == 0) {
          *(int *)(this + 0x14) =
               (*(int *)(pCVar10 + 0x1e0) - *(int *)(pCVar10 + 0x1d8)) + pRVar11->left;
          *(int *)(this + 0x18) =
               (*(int *)(pCVar10 + 0x1e4) - *(int *)(pCVar10 + 0x1dc)) + *(int *)(this + 0x10);
        }
        BVar8 = PtInRect(pRVar11,*(POINT *)(this + 4));
        if (BVar8 == 0) {
          OffsetRect((LPRECT)(this + 0xc),(*(int *)(this + 4) - ((LPRECT)(this + 0xc))->left) + -5,0
                    );
        }
      }
    }
    else {
      GetWindowRect(*(HWND *)(*(int *)(this + 0x44) + 0x20),(RECT *)(this + 0xc));
    }
    local_64 = 1;
  }
  local_68 = 0;
  pCVar1 = this + 0x4c;
  local_58 = *(CDockablePane **)pCVar1;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  SetRectEmpty(&local_24);
  pCVar2 = *(CDockingManager **)(this + 0x48);
  bVar3 = false;
  if (((pCVar2 != (CDockingManager *)0x0) && (iVar9 = *(int *)(pCVar2 + 0x1b8), iVar9 != 0)) &&
     ((*(int *)(iVar9 + 8) != 0 && (*(int *)(iVar9 + 4) != 0)))) {
    bVar3 = true;
  }
  CDockingManager::CalcExpectedDockedRect
            (pCVar2,*(undefined4 *)(this + 0x44),local_60.x,local_60.y,&local_24,&local_68,pCVar1);
  if (((local_58 != (CDockablePane *)0x0) && (*(int *)(this + 0x34) != -1)) &&
     ((local_58 != *(CDockablePane **)pCVar1 || (local_68 == 0)))) {
    RemoveTabPreDocking(this,local_58);
    local_64 = 1;
  }
  local_58 = (CDockablePane *)0x1;
  iVar9 = CObject::IsKindOf(*(CObject **)(this + 0x44),
                            (CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0);
  if ((iVar9 == 0) &&
     (iVar9 = CObject::IsKindOf(*(CObject **)(this + 0x44),(CRuntimeClass *)&PTR_s_CPane_1012cc40),
     iVar9 != 0)) {
    pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,*(CObject **)(this + 0x44));
    local_58 = (CDockablePane *)(**(code **)(*(int *)pCVar10 + 0x188))();
  }
  if ((*(CObject **)pCVar1 != (CObject *)0x0) && (local_58 != (CDockablePane *)0x0)) {
    pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,
                                 *(CObject **)pCVar1);
    if (pCVar10 != (CObject *)0x0) {
      if (local_68 == 0) goto LAB_100c2552;
      iVar9 = (**(code **)(*(int *)pCVar10 + 0x3ac))();
      if (((1 < iVar9) && (iVar9 = (**(code **)(*(int *)pCVar10 + 0x3b0))(), iVar9 != 0)) ||
         ((iVar9 = (**(code **)(*(int *)pCVar10 + 0x3ac))(), 0 < iVar9 &&
          (iVar9 = (**(code **)(*(int *)pCVar10 + 0x3b0))(), iVar9 == 0)))) {
        PlaceTabPreDocking(this,(CBaseTabbedPane *)pCVar10,local_64);
        goto LAB_100c261c;
      }
    }
    if (local_68 != 0) {
      if (*(int *)(this + 0x34) == -1) {
        if (local_64 == 0) {
          EndDrawDragFrame(this,0);
        }
        DrawFrameTab(this,*(CDockablePane **)pCVar1,0);
        *(undefined4 *)(this + 0x34) = 1;
      }
      goto LAB_100c261c;
    }
  }
LAB_100c2552:
  OffsetRect((LPRECT)(this + 0xc),_X,_X_00);
  *(LONG *)(this + 4) = local_60.x;
  *(LONG *)(this + 8) = local_60.y;
  ((RECT *)(this + 0x1c))->left = local_24.left;
  *(LONG *)(this + 0x20) = local_24.top;
  *(LONG *)(this + 0x24) = local_24.right;
  *(LONG *)(this + 0x28) = local_24.bottom;
  BVar8 = IsRectEmpty((RECT *)(this + 0x1c));
  local_58 = (CDockablePane *)DAT_10166c50;
  if (BVar8 == 0) {
    local_58 = (CDockablePane *)DAT_10166c54;
  }
  pRVar11 = (RECT *)(this + 0x1c);
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  BVar8 = IsRectEmpty(pRVar11);
  if (BVar8 != 0) {
    pRVar11 = (RECT *)(this + 0xc);
    pt.y = local_60.y;
    pt.x = local_60.x;
    BVar8 = PtInRect(pRVar11,pt);
    if (BVar8 == 0) {
      OffsetRect(pRVar11,local_60.x - ((*(int *)(this + 0x14) - pRVar11->left) / 2 + pRVar11->left),
                 local_60.y - (*(int *)(this + 0x10) + 5));
    }
  }
  local_34.left = pRVar11->left;
  local_34.top = pRVar11->top;
  local_34.right = pRVar11->right;
  local_34.bottom = pRVar11->bottom;
  if ((!bVar3) || (BVar8 = IsRectEmpty((RECT *)(this + 0x1c)), BVar8 == 0)) {
    pCVar5 = local_58;
    DrawDragFrame(this,&local_54,&local_34,local_64,(int)local_58,*(int *)(this + 0x40));
    *(CDockablePane **)(this + 0x40) = pCVar5;
  }
LAB_100c261c:
  FUN_100f90cf();
  return;
}


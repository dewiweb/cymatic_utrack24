// rea decompile_all
// name: CMFCBaseTabCtrl::ApplyRestoredTabInfo
// address: 0x10095754
// body: available
// range: 0x10095754-0x10095a4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCBaseTabCtrl::ApplyRestoredTabInfo(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCBaseTabCtrl::ApplyRestoredTabInfo(CMFCBaseTabCtrl *this,int param_1)

{
  undefined4 *puVar1;
  CDockingManager *pCVar2;
  undefined4 *puVar3;
  CFrameWnd *pCVar4;
  int *piVar5;
  CObject *pCVar6;
  CMFCRestoredTabInfo *pCVar7;
  int iVar8;
  HWND pHVar9;
  CWnd *pCVar10;
  CObject *pCVar11;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CDockingManager *local_24;
  CWnd *local_20;
  CWnd *local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x10095760;
  pCVar4 = AFXGetParentFrame((CWnd *)this);
  local_24 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,(CWnd *)pCVar4);
  puVar1 = *(undefined4 **)(this + 0x15c);
  puVar3 = local_14;
  while (puVar1 != (undefined4 *)0x0) {
    local_14 = (undefined4 *)*puVar1;
    CMFCRestoredTabInfo::CMFCRestoredTabInfo
              ((CMFCRestoredTabInfo *)&local_3c,(CMFCRestoredTabInfo *)(puVar1 + 2));
    local_8 = 0;
    local_20 = (CWnd *)0x0;
    FUN_10092a55(this,local_34,(int *)&local_20);
    if (local_20 == (CWnd *)0x0) {
      pCVar11 = (CObject *)(**(code **)(*(int *)local_24 + 0x24))(local_34,1);
      pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar11);
      if (pCVar11 != (CObject *)0x0) {
        iVar8 = (**(code **)(*(int *)pCVar11 + 0x168))();
        if (iVar8 != 0) {
          pHVar9 = GetParent(*(HWND *)(pCVar11 + 0x20));
          pCVar10 = CWnd::FromHandle(pHVar9);
          pHVar9 = GetParent(*(HWND *)(pCVar10 + 0x20));
          local_20 = CWnd::FromHandle(pHVar9);
          pHVar9 = GetParent(*(HWND *)(this + 0x20));
          pCVar10 = CWnd::FromHandle(pHVar9);
          CWnd::SetParent((CWnd *)pCVar11,pCVar10);
          (**(code **)(*(int *)local_20 + 0x3c4))(pCVar11);
          iVar8 = CObject::IsKindOf(pCVar11,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
          if (iVar8 != 0) {
            (**(code **)(*(int *)pCVar11 + 0x1ec))(1);
          }
          CWnd::ShowWindow((CWnd *)pCVar11,5);
        }
        iVar8 = (**(code **)(*(int *)pCVar11 + 0x1d8))();
        if (iVar8 != 0) {
          (**(code **)(*(int *)pCVar11 + 0x368))(0,0xf000,0,1);
        }
        piVar5 = (int *)(**(code **)(*(int *)pCVar11 + 0x224))(0);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0x178))(pCVar11,0,0);
        }
        pHVar9 = GetParent(*(HWND *)(this + 0x20));
        pCVar10 = CWnd::FromHandle(pHVar9);
        CWnd::SetParent((CWnd *)pCVar11,pCVar10);
        pHVar9 = GetParent(*(HWND *)(this + 0x20));
        pCVar10 = CWnd::FromHandle(pHVar9);
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,
                                    (CObject *)pCVar10);
        (**(code **)(*(int *)pCVar11 + 0x34c))(pCVar6,3,0,0);
      }
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_3c + -0x10));
      puVar1 = local_14;
      puVar3 = local_14;
    }
    else {
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_3c + -0x10));
      puVar1 = local_14;
      puVar3 = local_14;
    }
  }
  local_14 = *(undefined4 **)(this + 0x15c);
  local_20 = (CWnd *)0x0;
  local_18 = 0;
  if (local_14 != (undefined4 *)0x0) {
    do {
      pCVar7 = (CMFCRestoredTabInfo *)(local_14 + 2);
      local_14 = (undefined4 *)*local_14;
      CMFCRestoredTabInfo::CMFCRestoredTabInfo((CMFCRestoredTabInfo *)&local_3c,pCVar7);
      local_8 = 1;
      local_24 = (CDockingManager *)0x0;
      local_1c = (CWnd *)FUN_10092a55(this,local_34,(int *)&local_24);
      pCVar2 = local_24;
      if (local_24 != (CDockingManager *)0x0) {
        FUN_10007c90(local_24 + 4,&local_3c);
        *(int *)(pCVar2 + 0x2c) = local_2c;
        *(int *)(pCVar2 + 0x30) = local_28;
        *(int *)(pCVar2 + 0x44) = local_30;
        (**(code **)(*(int *)this + 0x1a4))(local_1c,local_38,0,0);
        if (local_38 != 0) {
          local_18 = local_18 + 1;
        }
        if ((param_1 != 0) && (local_1c != local_20)) {
          (**(code **)(*(int *)this + 0x25c))(local_1c,local_20);
          if ((*(int *)(pCVar2 + 0x20) != 0) && (local_20 == *(CWnd **)(this + 0x174))) {
            CWnd::ShowWindow(*(CWnd **)(pCVar2 + 0x20),5);
          }
          if (0 < local_18) {
            (**(code **)(*(int *)this + 0x210))(local_1c);
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_3c + -0x10));
      local_20 = local_20 + 1;
    } while (local_14 != (undefined4 *)0x0);
    if ((0 < local_18) &&
       (iVar8 = (**(code **)(*(int *)this + 0x210))(*(undefined4 *)(this + 0x174)), iVar8 == 0)) {
      (**(code **)(*(int *)this + 0x210))(0);
    }
    puVar3 = local_14;
    if (local_18 != 0) goto LAB_10095a3d;
  }
  local_14 = puVar3;
  pHVar9 = GetParent(*(HWND *)(this + 0x20));
  pCVar10 = CWnd::FromHandle(pHVar9);
  pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,(CObject *)pCVar10);
  if (pCVar11 != (CObject *)0x0) {
    (**(code **)(*(int *)pCVar11 + 0x220))(0,0,0);
  }
LAB_10095a3d:
  (**(code **)(*(int *)this + 0x180))();
  return;
}


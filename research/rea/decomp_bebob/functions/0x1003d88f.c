// rea decompile_all
// name: CDockingManager::FindPaneByID
// address: 0x1003d88f
// body: available
// range: 0x1003d88f-0x1003da0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d93e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CBasePane * __thiscall CDockingManager::FindPaneByID(unsigned int,int)
   
   Library: Visual Studio 2010 Release */

CBasePane * __thiscall CDockingManager::FindPaneByID(CDockingManager *this,uint param_1,int param_2)

{
  undefined4 *puVar1;
  CWnd *this_00;
  int iVar2;
  CObject *pCVar3;
  uint uVar4;
  CPane *pCVar5;
  CBasePane *pCVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(this + 0x40);
  while (puVar7 != (undefined4 *)0x0) {
    if (puVar7 == (undefined4 *)0x0) goto LAB_1003d93e;
    pCVar3 = (CObject *)puVar7[2];
    puVar7 = (undefined4 *)*puVar7;
    iVar2 = CObject::IsKindOf(pCVar3,(CRuntimeClass *)&PTR_s_CPaneDivider_1012b088);
    if (iVar2 != 0) {
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,pCVar3);
      pCVar3 = (CObject *)CPaneDivider::GetFirstPane((CPaneDivider *)pCVar3);
    }
    if ((pCVar3 != (CObject *)0x0) && (uVar4 = CWnd::GetDlgCtrlID((CWnd *)pCVar3), uVar4 == param_1)
       ) {
      return (CBasePane *)pCVar3;
    }
  }
  puVar7 = *(undefined4 **)(this + 0x24);
joined_r0x1003d8f5:
  do {
    if (puVar7 == (undefined4 *)0x0) {
      if (param_2 == 0) {
        return (CBasePane *)0x0;
      }
      puVar7 = *(undefined4 **)(this + 0xcc);
      while( true ) {
        if (puVar7 == (undefined4 *)0x0) {
          pCVar6 = CPaneFrameWnd::FindFloatingPaneByID(param_1);
          return pCVar6;
        }
        if (puVar7 == (undefined4 *)0x0) break;
        puVar1 = puVar7 + 2;
        puVar7 = (undefined4 *)*puVar7;
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,
                                    (CObject *)*puVar1);
        if (pCVar3 != (CObject *)0x0) {
          pCVar3 = (CObject *)(**(code **)(*(int *)pCVar3 + 0x1a4))();
          pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,pCVar3);
          if ((pCVar3 != (CObject *)0x0) &&
             (uVar4 = CWnd::GetDlgCtrlID((CWnd *)pCVar3), uVar4 == param_1)) {
            return (CBasePane *)pCVar3;
          }
        }
      }
LAB_1003d93e:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    if (puVar7 == (undefined4 *)0x0) goto LAB_1003d93e;
    this_00 = (CWnd *)puVar7[2];
    puVar7 = (undefined4 *)*puVar7;
    uVar4 = CWnd::GetDlgCtrlID(this_00);
    if (uVar4 == param_1) {
      return (CBasePane *)this_00;
    }
    iVar2 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c);
    if (iVar2 == 0) {
      iVar2 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CDockSite_1012dd78);
      if (iVar2 != 0) {
        pCVar5 = CDockSite::FindPaneByID((CDockSite *)this_00,param_1);
        if (pCVar5 != (CPane *)0x0) {
          pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,(CObject *)pCVar5);
          return (CBasePane *)pCVar3;
        }
        goto joined_r0x1003d8f5;
      }
      iVar2 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CMFCReBar_1012e7f8);
      if (iVar2 == 0) goto joined_r0x1003d8f5;
      pCVar3 = (CObject *)CWnd::GetDlgItem(this_00,param_1);
    }
    else {
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,
                                  (CObject *)this_00);
      pCVar3 = (CObject *)(**(code **)(*(int *)pCVar3 + 0x3cc))(param_1);
    }
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,pCVar3);
    if (pCVar3 != (CObject *)0x0) {
      return (CBasePane *)pCVar3;
    }
  } while( true );
}


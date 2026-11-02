// rea decompile_all
// name: CMDIClientAreaWnd::Serialize
// address: 0x10066f61
// body: available
// range: 0x10066f61-0x10067273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10067045 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMDIClientAreaWnd::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIClientAreaWnd::Serialize(CMDIClientAreaWnd *this,CArchive *param_1)

{
  undefined4 *puVar1;
  CArchive *this_00;
  CObject *pCVar2;
  undefined4 uVar3;
  int iVar4;
  WPARAM wParam;
  HWND pHVar5;
  CWnd *pCVar6;
  undefined4 *puVar7;
  
  this_00 = param_1;
  CMDITabInfo::Serialize((CMDITabInfo *)(this + 0x28a4),param_1);
  if ((~*(uint *)(this_00 + 0x18) & 1) == 0) {
    if ((*(uint *)(this_00 + 0x18) & 1) != 0) {
      FUN_10063d75(this,(int *)0x0);
      FUN_1005419f((int)(this + 0x294c));
      *(undefined4 *)(this + 0x2910) = 1;
      CArchive::operator>>(this_00,(long *)(this + 0x287c));
      CArchive::operator>>(this_00,(long *)(this + 0x2908));
      CArchive::operator>>(this_00,(long *)(this + 0x2878));
      CArchive::operator>>(this_00,(long *)&param_1);
      *(CArchive **)(this + 0x2968) = param_1;
      CArchive::operator>>(this_00,(long *)(this + 0x2930));
      CArchive::operator>>(this_00,(long *)(this + 0x2934));
      if (*(int *)(this + 0x287c) == 0) {
        if (*(int *)(this + 0x2908) == 0) {
          SerializeOpenChildren(this,this_00);
        }
        else {
          param_1 = (CArchive *)0x0;
          CArchive::operator>>(this_00,(long *)&param_1);
          if (0 < (int)param_1) {
            do {
              pCVar2 = (CObject *)(**(code **)(*(int *)this + 0x160))(0);
              SerializeTabGroup(this,this_00,(CMFCTabCtrl *)pCVar2,1);
              iVar4 = (**(code **)(*(int *)pCVar2 + 0x1a8))();
              if (iVar4 == 0) {
                (**(code **)(*(int *)pCVar2 + 0x60))();
                (**(code **)(*(int *)pCVar2 + 4))(1);
              }
              else {
                CObList::AddTail((CObList *)(this + 0x28d0),pCVar2);
              }
              param_1 = param_1 + -1;
            } while (param_1 != (CArchive *)0x0);
          }
          if (0 < *(int *)(this + 0x28dc)) {
            pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,
                                        *(CObject **)(*(int *)(this + 0x28d8) + 8));
            CMFCTabCtrl::SetResizeMode((CMFCTabCtrl *)pCVar2,0);
          }
          EnableMDITabbedGroups(this,1,(CMDITabInfo *)(this + 0x28a4));
        }
      }
      else {
        SerializeTabGroup(this,this_00,(CMFCTabCtrl *)(this + 0x74),0);
        EnableMDITabs(this,1,(CMDITabInfo *)(this + 0x28a4));
      }
      *(undefined4 *)(this + 0x2910) = 0;
      if (*(int *)(this + 0x2908) == 0) {
        if (*(int *)(this + 0x287c) != 0) {
          UpdateTabs(this,1);
          (**(code **)(*(int *)(this + 0x74) + 0x180))();
        }
      }
      else {
        UpdateMDITabbedGroups(this,1);
        puVar7 = *(undefined4 **)(this + 0x28d4);
        while (puVar7 != (undefined4 *)0x0) {
          if (puVar7 == (undefined4 *)0x0) goto LAB_10067045;
          puVar1 = puVar7 + 2;
          puVar7 = (undefined4 *)*puVar7;
          pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,
                                      (CObject *)*puVar1);
          (**(code **)(*(int *)pCVar2 + 0x180))();
          if (*(int *)(pCVar2 + 0x24c) != 0) {
            param_1 = *(CArchive **)pCVar2;
            uVar3 = (**(code **)(param_1 + 0x208))();
            iVar4 = (**(code **)(param_1 + 0x1ac))(uVar3);
            wParam = 0;
            if (iVar4 != 0) {
              wParam = *(WPARAM *)(iVar4 + 0x20);
            }
            PostMessageW(*(HWND *)(this + 0x20),0x222,wParam,0);
          }
        }
      }
      pHVar5 = GetParent(*(HWND *)(this + 0x20));
      pCVar6 = CWnd::FromHandle(pHVar5);
      (**(code **)(*(int *)pCVar6 + 0x174))(1);
    }
  }
  else {
    CArchive::operator<<(this_00,*(long *)(this + 0x287c));
    CArchive::operator<<(this_00,*(long *)(this + 0x2908));
    CArchive::operator<<(this_00,*(long *)(this + 0x2878));
    CArchive::operator<<(this_00,*(long *)(this + 0x2968));
    CArchive::operator<<(this_00,*(long *)(this + 0x2930));
    CArchive::operator<<(this_00,*(long *)(this + 0x2934));
    if (*(int *)(this + 0x287c) == 0) {
      if (*(int *)(this + 0x2908) == 0) {
        SerializeOpenChildren(this,this_00);
      }
      else {
        iVar4 = *(int *)(this + 0x28dc);
        CArchive::operator<<(this_00,iVar4);
        if (0 < iVar4) {
          puVar7 = *(undefined4 **)(this + 0x28d4);
          while (puVar7 != (undefined4 *)0x0) {
            if (puVar7 == (undefined4 *)0x0) {
LAB_10067045:
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            puVar1 = puVar7 + 2;
            puVar7 = (undefined4 *)*puVar7;
            pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,
                                        (CObject *)*puVar1);
            SerializeTabGroup(this,this_00,(CMFCTabCtrl *)pCVar2,0);
          }
        }
      }
    }
    else {
      SerializeTabGroup(this,this_00,(CMFCTabCtrl *)(this + 0x74),0);
    }
  }
  return;
}


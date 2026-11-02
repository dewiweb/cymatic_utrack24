// rea decompile_all
// name: CMFCRibbonBar::SetKeyboardNavigationLevel
// address: 0x1006e61c
// body: available
// range: 0x1006e61c-0x1006e98a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006e7c7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCRibbonBar::SetKeyboardNavigationLevel(class CObject *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonBar::SetKeyboardNavigationLevel(CMFCRibbonBar *this,CObject *param_1,int param_2)

{
  HWND pHVar1;
  CWnd *pCVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  CObject *pCVar6;
  CMFCRibbonBaseElement *pCVar7;
  CMFCPopupMenu *pCVar8;
  CObject *pCVar9;
  undefined **local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  CFrameWnd *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x1006e628;
  if ((*(int *)(this + 0x304) != 0) && (((byte)this[0x31c] & 2) == 0)) {
    if (param_2 != 0) {
      CWnd::SetFocus((CWnd *)this);
    }
    FUN_1006dcdd((int)this);
    *(undefined4 *)(this + 0x2c4) = 0;
    *(undefined4 *)(this + 0x7ac) = 0;
    *(CObject **)(this + 0x7b0) = param_1;
    local_28 = CWnd::GetParentFrame((CWnd *)this);
    pHVar1 = GetFocus();
    pCVar2 = CWnd::FromHandle(pHVar1);
    if (((pCVar2 != (CWnd *)0x0) && (*(HWND *)(pCVar2 + 0x20) != (HWND)0x0)) &&
       ((BVar3 = IsChild(*(HWND *)(local_28 + 0x20),*(HWND *)(pCVar2 + 0x20)), BVar3 != 0 ||
        (*(int *)(pCVar2 + 0x20) == *(int *)(local_28 + 0x20))))) {
      if (param_1 == (CObject *)0x0) {
        *(undefined4 *)(this + 0x2c0) = 0;
        if (*(int *)(this + 800) != 0) {
          local_28 = FUN_1000858a(0x8c);
          local_8 = 0;
          if (local_28 == (CFrameWnd *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = CMFCRibbonKeyTip::CMFCRibbonKeyTip
                              ((CMFCRibbonKeyTip *)local_28,*(CMFCRibbonBaseElement **)(this + 800),
                               0);
          }
          local_8 = 0xffffffff;
          CArray<int,int>::SetAtGrow((CArray<int,int> *)(this + 0x748),*(int *)(this + 0x750),iVar4)
          ;
        }
        iVar4 = 0;
        if (0 < *(int *)(this + 0x73c)) {
          do {
            if ((iVar4 < 0) || (*(int *)(this + 0x73c) <= iVar4)) {
LAB_1006e7c7:
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            iVar5 = *(int *)(*(int *)(this + 0x738) + iVar4 * 4);
            if (*(int *)(iVar5 + 0xc) != 0) {
              local_28 = FUN_1000858a(0x8c);
              local_8 = 1;
              if (local_28 == (CFrameWnd *)0x0) {
                iVar5 = 0;
              }
              else {
                iVar5 = CMFCRibbonKeyTip::CMFCRibbonKeyTip
                                  ((CMFCRibbonKeyTip *)local_28,
                                   (CMFCRibbonBaseElement *)(iVar5 + 0x34),0);
              }
              local_8 = 0xffffffff;
              CArray<int,int>::SetAtGrow
                        ((CArray<int,int> *)(this + 0x748),*(int *)(this + 0x750),iVar5);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(this + 0x73c));
        }
        (**(code **)(*(int *)(this + 0xbec) + 0x140))(this + 0x748);
        (**(code **)(*(int *)(this + 0x32c) + 0x140))(this + 0x748);
        if ((*(int *)(this + 0x710) == 0) || (((byte)this[0x31c] & 2) != 0)) {
          if (*(int *)(this + 800) != 0) {
            *(undefined4 *)(*(int *)(this + 800) + 0x70) = 1;
          }
        }
        else {
          *(undefined4 *)(*(int *)(this + 0x710) + 0xa4) = 1;
        }
      }
      else {
        local_3c = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
        local_38 = 0;
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
        local_8 = 2;
        local_28 = (CFrameWnd *)
                   AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonCategory_10131b44,param_1);
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanel_10132fa4,param_1);
        if (local_28 == (CFrameWnd *)0x0) {
          if (pCVar6 != (CObject *)0x0) {
            FUN_100b3b4b(pCVar6,(CArray<int,int> *)&local_3c);
            iVar4 = (**(code **)(*(int *)pCVar6 + 0x10))();
            if (iVar4 == 0) {
              local_28 = (CFrameWnd *)0x0;
              pCVar7 = CMFCRibbonPanel::GetParentButton((CMFCRibbonPanel *)pCVar6);
              if ((pCVar7 == (CMFCRibbonBaseElement *)0x0) ||
                 (pCVar7 = CMFCRibbonPanel::GetParentButton((CMFCRibbonPanel *)pCVar6),
                 *(int *)(pCVar7 + 0x68) == 0)) {
                local_28 = *(CFrameWnd **)(pCVar6 + 0xa8);
              }
              if (*(int *)(pCVar6 + 0xac) != 0) {
                pHVar1 = GetParent(*(HWND *)(*(int *)(pCVar6 + 0xac) + 0x20));
                pCVar2 = CWnd::FromHandle(pHVar1);
                pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,
                                            (CObject *)pCVar2);
                pCVar8 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)pCVar6);
                pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenu_1012fd88,
                                            (CObject *)pCVar8);
                if (pCVar9 == (CObject *)0x0) {
                  if (*(int *)(pCVar6 + 0x10bc) != 0) {
                    local_28 = *(CFrameWnd **)(*(int *)(pCVar6 + 0x10bc) + 0x2c);
                  }
                }
                else {
                  iVar4 = *(int *)(pCVar9 + 0x1ee4);
                  *(int *)(this + 0x7ac) = iVar4;
                  if (iVar4 == 0) {
                    local_28 = *(CFrameWnd **)(pCVar9 + 0x1ef4);
                  }
                }
              }
              if (local_28 != (CFrameWnd *)0x0) {
                local_24.left = *(LONG *)(local_28 + 0x20);
                local_24.top = *(LONG *)(local_28 + 0x24);
                local_24.right = *(LONG *)(local_28 + 0x28);
                local_24.bottom = *(LONG *)(local_28 + 0x2c);
                BVar3 = IsRectEmpty(&local_24);
                if (BVar3 == 0) {
                  *(CFrameWnd **)(this + 0x7ac) = local_28;
                }
              }
            }
          }
        }
        else if ((*(int *)(this + 0x31c) == 0) || (*(int *)(local_28 + 0x3c4) != 0)) {
          FUN_100aba20(local_28,(CArray<int,int> *)&local_3c);
        }
        iVar4 = 0;
        if (0 < local_34) {
          do {
            if ((iVar4 < 0) || (local_34 <= iVar4)) goto LAB_1006e7c7;
            (**(code **)(**(int **)(local_38 + iVar4 * 4) + 0x140))(this + 0x748);
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_34);
        }
        local_8 = 0xffffffff;
        *(undefined4 *)(this + 0x2c0) = 1;
        FUN_1006d033(&local_3c);
      }
      FUN_1006e506(this,0);
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    }
  }
  FUN_100f90cf();
  return;
}


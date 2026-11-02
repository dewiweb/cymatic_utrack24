// rea decompile_all
// name: CMFCRibbonPanel::OnKey
// address: 0x100b7628
// body: available
// range: 0x100b7628-0x100b7e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b77e6 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100b77eb to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonPanel::OnKey(unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCRibbonPanel::OnKey(CMFCRibbonPanel *this,uint param_1)

{
  CMFCRibbonBaseElement *pCVar1;
  bool bVar2;
  LONG LVar3;
  LONG LVar4;
  int iVar5;
  CMFCPopupMenu *pCVar6;
  CMFCRibbonBar *this_00;
  CWnd *pCVar7;
  CObject *pCVar8;
  BOOL BVar9;
  CFrameWnd *pCVar10;
  int iVar11;
  HWND pHVar12;
  undefined **local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  tagPOINT local_48;
  CWnd *local_40;
  CObject *local_3c;
  CMFCRibbonBaseElement *local_38;
  tagRECT local_34;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x100b7634;
  local_48.y = param_1;
  if ((*(int *)(this + 0x25c) == 0) ||
     ((*(int **)(this + 0xb4) != (int *)0x0 &&
      (iVar11 = (**(code **)(**(int **)(this + 0xb4) + 0x1a4))(param_1), iVar11 != 0))))
  goto LAB_100b7e2c;
  local_38 = (CMFCRibbonBaseElement *)0x0;
  local_40 = (CWnd *)0x0;
  if (param_1 < 0x25) {
    if (param_1 == 0x24) {
      if (*(int *)(this + 0x1c) != 0) goto LAB_100b7aaa;
    }
    else {
      if (param_1 == 9) goto LAB_100b78fa;
      if ((param_1 == 0xd) || (param_1 == 0x20)) {
        local_40 = (CWnd *)0x1;
      }
      else if (param_1 == 0x23) {
        if (*(int *)(this + 0x1c) != 0) goto LAB_100b769a;
      }
      else {
LAB_100b76e0:
        if (*(int *)(this + 0x1c) != 0) {
          iVar11 = CKeyboardManager::IsKeyPrintable(param_1);
          local_48.y = param_1;
          if (iVar11 != 0) {
            local_48.y = CKeyboardManager::TranslateCharToUpper(param_1);
          }
          iVar11 = 0;
          if (0 < *(int *)(this + 0x25c)) {
            do {
              if ((iVar11 < 0) || (*(int *)(this + 0x25c) <= iVar11)) {
                    /* WARNING: Subroutine does not return */
                FUN_10009068();
              }
              pCVar1 = *(CMFCRibbonBaseElement **)(*(int *)(this + 600) + iVar11 * 4);
              iVar5 = (**(code **)(*(int *)pCVar1 + 0x144))(local_48.y);
              if (iVar5 != 0) goto LAB_100b7e2c;
              FUN_10006ce0(&local_4c,*(short **)(pCVar1 + 4));
              local_8 = 1;
              iVar5 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)&local_4c,L'&',0);
              if ((-1 < iVar5) && (iVar5 < *(int *)(local_4c + -0xc) + -1)) {
                iVar5 = iVar5 + 1;
                if ((iVar5 < 0) || (*(int *)(local_4c + -0xc) < iVar5)) {
                    /* WARNING: Subroutine does not return */
                  FUN_10001000((undefined4 *)0x80070057);
                }
                local_3c = (CObject *)(uint)*(ushort *)(local_4c + iVar5 * 2);
                CharUpperW((LPWSTR)&local_3c);
                if ((CObject *)((uint)local_3c & 0xffff) == (CObject *)local_48.y) {
                  iVar11 = (**(code **)(*(int *)pCVar1 + 0x38))();
                  if (iVar11 == 0) {
                    local_40 = (CWnd *)0x1;
                    local_38 = pCVar1;
                  }
                  local_8 = 0xffffffff;
                  FUN_10001030((undefined4 *)(local_4c + -0x10));
                  break;
                }
              }
              local_8 = 0xffffffff;
              FUN_10001030((undefined4 *)(local_4c + -0x10));
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(this + 0x25c));
          }
        }
      }
    }
  }
  else {
    if (param_1 == 0x25) {
LAB_100b7855:
      if (((*(int *)(this + 0x1c) != 0) && (param_1 == 0x25)) && (*(int *)(this + 0xac) != 0)) {
        if ((*(int **)(this + 0xb4) == (int *)0x0) ||
           (iVar11 = (**(code **)(**(int **)(this + 0xb4) + 0x164))(), iVar11 == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        pHVar12 = GetParent(*(HWND *)(*(int *)(this + 0xac) + 0x20));
        pCVar7 = CWnd::FromHandle(pHVar12);
        local_3c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,
                                      (CObject *)pCVar7);
        if ((!bVar2) &&
           (pCVar6 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)local_3c),
           pCVar6 != (CMFCPopupMenu *)0x0)) {
          this_00 = CMFCRibbonPanelMenuBar::GetTopLevelRibbonBar
                              (*(CMFCRibbonPanelMenuBar **)(this + 0xac));
          if ((this_00 != (CMFCRibbonBar *)0x0) && (*(CMFCRibbonPanel **)(this_00 + 0x7b0) == this))
          {
            CMFCRibbonBar::SetKeyboardNavigationLevel(this_00,*(CObject **)(this_00 + 0x7ac),1);
          }
          CMFCPopupMenu::CloseMenu((CMFCPopupMenu *)local_3c,0);
          goto LAB_100b7e2c;
        }
      }
    }
    else if (param_1 != 0x26) {
      if (param_1 == 0x27) {
        if (*(int *)(this + 0x1c) != 0) {
          if (((*(int **)(this + 0xb4) != (int *)0x0) &&
              (iVar11 = (**(code **)(**(int **)(this + 0xb4) + 0x98))(), iVar11 != 0)) &&
             (iVar11 = (**(code **)(**(int **)(this + 0xb4) + 0x40))(), iVar11 == 0)) {
            (**(code **)(**(int **)(this + 0xb4) + 0x9c))();
            if (*(int *)(*(int *)(this + 0xb4) + 0x40) != 0) {
              SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0xb4) + 0x40) + 0x20),0x100,0x24,0);
            }
            goto LAB_100b7ab4;
          }
          goto LAB_100b7855;
        }
      }
      else if (param_1 != 0x28) goto LAB_100b76e0;
    }
LAB_100b78fa:
    if (*(CObject **)(this + 0xb4) == (CObject *)0x0) {
      if (((param_1 == 0x27) || (param_1 == 0x28)) || (param_1 == 9)) {
LAB_100b7aaa:
        local_38 = (CMFCRibbonBaseElement *)FUN_100b3cb5((int)this);
      }
      else {
LAB_100b769a:
        local_38 = GetLastTabStop(this);
      }
    }
    else {
      if ((((*(int *)(this + 0xb0) != 0) && ((param_1 == 0x28 || (param_1 == 0x26)))) &&
          (*(int *)(this + 0xac) != 0)) &&
         (((*(int *)(*(int *)(this + 0xac) + 0x20) != 0 && (*(int *)(this + 0xa4) != 0)) &&
          ((*(int *)(*(int *)(this + 0xa4) + 0x20) != 0 &&
           (pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734,
                                        *(CObject **)(this + 0xb4)), pCVar8 != (CObject *)0x0))))))
      {
        local_34.left = *(LONG *)(pCVar8 + 0x18);
        local_34.top = *(LONG *)(pCVar8 + 0x1c);
        local_34.right = *(LONG *)(pCVar8 + 0x20);
        local_34.bottom = *(LONG *)(pCVar8 + 0x24);
        GetGalleryRect(this);
        LVar4 = local_34.bottom;
        LVar3 = local_34.top;
        if ((CObject *)local_48.y == (CObject *)0x28) {
          if (local_24.bottom <= local_34.bottom) {
            iVar11 = GetScrollPos(*(HWND *)(*(int *)(this + 0xa4) + 0x20),2);
            iVar5 = CWnd::GetScrollLimit(*(CWnd **)(this + 0xa4),2);
            if (iVar11 < iVar5) {
              iVar11 = LVar4 - local_34.top;
              goto LAB_100b79d7;
            }
          }
        }
        else if ((local_34.top <= local_24.top) &&
                (iVar11 = GetScrollPos(*(HWND *)(*(int *)(this + 0xa4) + 0x20),2), 0 < iVar11)) {
          iVar11 = LVar3 - local_34.bottom;
LAB_100b79d7:
          if (iVar11 != 0) {
            FUN_100b3f04(this,iVar11,1);
            RedrawWindow(*(HWND *)(*(int *)(this + 0xac) + 0x20),&local_24,(HRGN)0x0,0x105);
            SetScrollPos(*(HWND *)(*(int *)(this + 0xa4) + 0x20),2,*(int *)(this + 0x58),1);
          }
        }
      }
      local_60 = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
      local_5c = 0;
      local_50 = 0;
      local_54 = 0;
      local_58 = 0;
      local_8 = 0;
      FUN_100b4252(this,&local_60);
      local_3c = (CObject *)0x0;
      local_38 = CMFCRibbonBar::FindNextFocusedElement
                           (local_48.y,&local_60,*(undefined4 *)(this + 0x6c),
                            *(undefined4 *)(this + 0x70),*(undefined4 *)(this + 0x74),
                            *(undefined4 *)(this + 0x78),*(undefined4 *)(this + 0xb4),0,0,&local_3c)
      ;
      if ((*(int *)(this + 0x1c) != 0) && (local_38 == (CMFCRibbonBaseElement *)0x0)) {
        if ((CObject *)local_48.y == (CObject *)0x28) {
          local_38 = (CMFCRibbonBaseElement *)FUN_100b3cb5((int)this);
        }
        else {
          local_38 = GetLastTabStop(this);
        }
      }
      local_8 = 0xffffffff;
      FUN_1006d033(&local_60);
    }
  }
LAB_100b7ab4:
  if ((local_38 != (CMFCRibbonBaseElement *)0x0) &&
     (pCVar1 = *(CMFCRibbonBaseElement **)(this + 0xb4), pCVar1 != local_38)) {
    if (pCVar1 != (CMFCRibbonBaseElement *)0x0) {
      if (*(int *)(pCVar1 + 0x6c) != 0) {
        *(int *)(pCVar1 + 0x6c) = 0;
        (**(code **)(**(int **)(this + 0xb4) + 0x180))(0);
      }
      if (*(int *)(*(int *)(this + 0xb4) + 0x70) != 0) {
        *(undefined4 *)(*(int *)(this + 0xb4) + 0x70) = 0;
        (**(code **)(**(int **)(this + 0xb4) + 0x184))(0);
      }
      (**(code **)(**(int **)(this + 0xb4) + 0x118))();
      *(undefined4 *)(this + 0xb4) = 0;
    }
    if (((DAT_10166c3c != 0) && (*(int *)(this + 0xac) != 0)) && (*(int *)(this + 0x1c) != 0)) {
      local_48.x = *(LONG *)(local_38 + 0x18);
      local_48.y = *(LONG *)(local_38 + 0x1c);
      local_24.right = *(LONG *)(local_38 + 0x20);
      local_24.bottom = *(LONG *)(local_38 + 0x24);
      local_24.left = local_48.x;
      local_24.top = local_48.y;
      ClientToScreen(*(HWND *)(*(int *)(this + 0xac) + 0x20),&local_48);
      (**(code **)(**(int **)(this + 0xac) + 0x250))
                (CONCAT22((undefined2)local_48.y,(undefined2)local_48.x));
      if (*(int *)(this + 0xac) == 0) {
        pHVar12 = (HWND)0x0;
      }
      else {
        pHVar12 = *(HWND *)(*(int *)(this + 0xac) + 0x20);
      }
      iVar11 = (**(code **)(*(int *)this + 0x1c))(local_38);
      NotifyWinEvent(0x8005,pHVar12,-4,iVar11 + 1);
    }
    pCVar1 = local_38;
    *(CMFCRibbonBaseElement **)(this + 0xb4) = local_38;
    (**(code **)(*(int *)local_38 + 0x180))(1);
    if (*(int *)(this + 0xb0) != 0) {
      MakeGalleryItemVisible(this,pCVar1);
    }
    *(undefined4 *)(pCVar1 + 0x6c) = 1;
    *(undefined4 *)(pCVar1 + 0x70) = 1;
    (**(code **)(*(int *)pCVar1 + 0x184))(1);
    (**(code **)(**(int **)(this + 0xb4) + 0x118))();
    if (*(int *)(this + 0xac) != 0) {
      pHVar12 = GetParent(*(HWND *)(*(int *)(this + 0xac) + 0x20));
      pCVar7 = CWnd::FromHandle(pHVar12);
      local_38 = (CMFCRibbonBaseElement *)
                 AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenu_1012fd88,
                                    (CObject *)pCVar7);
      if (local_38 != (CMFCRibbonBaseElement *)0x0) {
        if (*(int *)(local_38 + 0xef0) != 0) {
          iVar11 = *(int *)(this + 0xb4);
          local_24.left = *(int *)(iVar11 + 0x18);
          local_24.top = *(undefined4 *)(iVar11 + 0x1c);
          local_24.right = *(int *)(iVar11 + 0x20);
          local_24.bottom = *(int *)(iVar11 + 0x24);
          local_34.left = 0;
          local_34.top = 0;
          local_34.right = 0;
          local_34.bottom = 0;
          GetClientRect(*(HWND *)(*(int *)(this + 0xac) + 0x20),&local_34);
          if (local_34.bottom < local_24.bottom) {
            do {
              iVar11 = (**(code **)(*(int *)local_38 + 0x1e0))();
              if (iVar11 == 0) goto LAB_100b7d14;
              CMFCPopupMenuBar::SetOffset
                        (*(CMFCPopupMenuBar **)(this + 0xac),
                         *(int *)(*(CMFCPopupMenuBar **)(this + 0xac) + 0xcd4) + 1);
              CMFCPopupMenu::AdjustScroll((CMFCPopupMenu *)local_38,0);
              iVar11 = *(int *)(this + 0xb4);
              local_24.left = *(int *)(iVar11 + 0x18);
              local_24.top = *(int *)(iVar11 + 0x1c);
              local_24.right = *(int *)(iVar11 + 0x20);
              local_24.bottom = *(int *)(iVar11 + 0x24);
            } while (local_34.bottom < local_24.bottom);
          }
          else {
            if (local_34.top <= local_24.top) goto LAB_100b7d14;
            do {
              iVar11 = (**(code **)(*(int *)local_38 + 0x1dc))();
              if (iVar11 == 0) goto LAB_100b7d14;
              CMFCPopupMenuBar::SetOffset
                        (*(CMFCPopupMenuBar **)(this + 0xac),
                         *(int *)(*(CMFCPopupMenuBar **)(this + 0xac) + 0xcd4) + -1);
              CMFCPopupMenu::AdjustScroll((CMFCPopupMenu *)local_38,0);
              iVar11 = *(int *)(this + 0xb4);
              local_24.left = *(int *)(iVar11 + 0x18);
              local_24.top = *(int *)(iVar11 + 0x1c);
              local_24.right = *(int *)(iVar11 + 0x20);
              local_24.bottom = *(int *)(iVar11 + 0x24);
            } while (local_24.top < local_34.top);
          }
          RedrawWindow(*(HWND *)(*(int *)(this + 0xac) + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
        }
LAB_100b7d14:
        if (*(int **)(local_38 + 0x10bc) != (int *)0x0) {
          (**(code **)(**(int **)(local_38 + 0x10bc) + 0x15c))
                    (*(undefined4 *)(this + 0xac),*(undefined4 *)(this + 0xb4));
        }
      }
    }
  }
  if (((local_40 != (CWnd *)0x0) && (*(CObject **)(this + 0xb4) != (CObject *)0x0)) &&
     (pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_10133868,
                                  *(CObject **)(this + 0xb4)), local_48.y = (LONG)pCVar8,
     pCVar8 != (CObject *)0x0)) {
    iVar11 = (**(code **)(*(int *)pCVar8 + 0x98))();
    if (iVar11 == 0) {
      iVar11 = (**(code **)(*(int *)pCVar8 + 0x38))();
      if (iVar11 == 0) {
        local_40 = (CWnd *)CMFCRibbonPanelMenuBar::GetTopLevelRibbonBar
                                     (*(CMFCRibbonPanelMenuBar **)(this + 0xac));
        if ((local_40 != (CWnd *)0x0) && (*(CMFCRibbonPanel **)(local_40 + 0x7b0) == this)) {
          CMFCRibbonBar::DeactivateKeyboardFocus((CMFCRibbonBar *)local_40,1);
        }
        local_24.left = *(LONG *)(local_48.y + 0x18);
        local_24.top = *(LONG *)(local_48.y + 0x1c);
        local_24.right = *(LONG *)(local_48.y + 0x20);
        local_24.bottom = *(LONG *)(local_48.y + 0x24);
        (**(code **)(*(int *)local_48.y + 0x1c0))(local_24.left,local_24.top);
        if ((local_40 != (CWnd *)0x0) &&
           (pCVar10 = CWnd::GetTopLevelFrame(local_40), pCVar10 != (CFrameWnd *)0x0)) {
          pCVar10 = CWnd::GetTopLevelFrame(local_40);
          CWnd::SetFocus((CWnd *)pCVar10);
        }
      }
    }
    else {
      pHVar12 = (HWND)0x0;
      if (*(int *)(this + 0xac) != 0) {
        pHVar12 = *(HWND *)(*(int *)(this + 0xac) + 0x20);
      }
      (**(code **)(*(int *)pCVar8 + 0x9c))();
      if (((pHVar12 == (HWND)0x0) || (BVar9 = IsWindow(pHVar12), BVar9 != 0)) &&
         (*(int *)(pCVar8 + 0x40) != 0)) {
        SendMessageW(*(HWND *)(*(int *)(pCVar8 + 0x40) + 0x20),0x100,0x24,0);
      }
    }
  }
LAB_100b7e2c:
  iVar11 = FUN_100f90cf();
  return iVar11;
}


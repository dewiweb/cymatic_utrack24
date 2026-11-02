// rea decompile_all
// name: CMFCColorBar::OnSendCommand
// address: 0x100a951d
// body: available
// range: 0x100a951d-0x100a9849 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a9816 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCColorBar::OnSendCommand(class CMFCToolBarButton const *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCColorBar::OnSendCommand(CMFCColorBar *this,CMFCToolBarButton *param_1)

{
  undefined4 *puVar1;
  WPARAM wParam;
  ulong uVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  CFrameWnd *pCVar6;
  int iVar7;
  BOOL BVar8;
  ulong *puVar9;
  uint uVar10;
  CObList local_38 [4];
  undefined4 *local_34;
  CObject *local_1c;
  CObject *local_18;
  ulong local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100a9529;
  if ((*(int *)(this + 0xde4) != 0) || (*(int *)(this + 0xde8) != 0)) {
    ReleaseCapture();
  }
  local_14[0] = 0xffffffff;
  local_18 = (CObject *)0x0;
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  local_1c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar4);
  if (local_1c != (CObject *)0x0) {
    local_18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorMenuButton_101630d8,
                                  *(CObject **)(local_1c + 0x148));
  }
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarColorButton_10161ca4,
                              (CObject *)param_1);
  if (pCVar5 != (CObject *)0x0) {
    if (*(int *)(pCVar5 + 0x80) != 0) {
      return 0;
    }
    if (*(int *)(pCVar5 + 0x7c) == 0) {
      if (*(int *)(pCVar5 + 0x78) == 0) {
        local_14[0] = *(ulong *)(pCVar5 + 0x70);
      }
      else {
        local_14[0] = 0xffffffff;
      }
    }
    else {
      CMFCPopupMenuBar::SetInCommand((CMFCPopupMenuBar *)this,1);
      if (local_1c != (CObject *)0x0) {
        CWnd::ShowWindow((CWnd *)local_1c,0);
        pCVar6 = DAT_10168578;
        if (DAT_10168578 == (CFrameWnd *)0x0) {
          pCVar6 = CWnd::GetTopLevelFrame((CWnd *)this);
        }
        if (pCVar6 != (CFrameWnd *)0x0) {
          pCVar6 = DAT_10168578;
          if (DAT_10168578 == (CFrameWnd *)0x0) {
            pCVar6 = CWnd::GetTopLevelFrame((CWnd *)this);
          }
          CMFCPopupMenu::ActivatePopupMenu(pCVar6,(CMFCPopupMenu *)0x0);
        }
      }
      local_1c = *(CObject **)(this + 0x20);
      InvalidateRect((HWND)local_1c,(RECT *)(param_1 + 0x54),1);
      UpdateWindow(*(HWND *)(this + 0x20));
      iVar7 = *(int *)(this + 0xdd0);
      if (iVar7 == -1) {
        iVar7 = *(int *)(this + 0xdd4);
      }
      iVar7 = (**(code **)(*(int *)this + 0x454))(iVar7,local_14);
      if (iVar7 == 0) {
        BVar8 = IsWindow((HWND)local_1c);
        if (BVar8 == 0) {
          return 1;
        }
        CMFCPopupMenuBar::SetInCommand((CMFCPopupMenuBar *)this,0);
        if (((*(int *)(this + 0xde4) != 0) || (*(int *)(this + 0xde8) != 0)) ||
           (*(int *)(this + 0xdec) != 0)) goto LAB_100a9755;
        if (local_18 == (CObject *)0x0) {
          pCVar6 = DAT_10168578;
          if (DAT_10168578 == (CFrameWnd *)0x0) {
            pCVar6 = CWnd::GetTopLevelFrame((CWnd *)this);
          }
          if (pCVar6 == (CFrameWnd *)0x0) {
            return 1;
          }
          pCVar6 = DAT_10168578;
          if (DAT_10168578 == (CFrameWnd *)0x0) {
            pCVar6 = CWnd::GetTopLevelFrame((CWnd *)this);
          }
          CWnd::SetFocus((CWnd *)pCVar6);
          return 1;
        }
        uVar10 = 0;
        goto LAB_100a9707;
      }
      BVar8 = IsWindow((HWND)local_1c);
      if (BVar8 == 0) {
        return 1;
      }
      CMFCPopupMenuBar::SetInCommand((CMFCPopupMenuBar *)this,0);
    }
  }
  if (local_18 == (CObject *)0x0) {
    if (*(int *)(this + 0xde4) == 0) {
      if (*(CMFCRibbonColorButton **)(this + 0xdec) == (CMFCRibbonColorButton *)0x0) {
        if (*(int *)(this + 0xde8) == 0) {
          FUN_100a8956(this,local_14[0]);
          CObList::CObList(local_38,10);
          local_8 = 0;
          iVar7 = FUN_1002643c(*(int *)(this + 0xd8c),local_38);
          if (0 < iVar7) {
            while (local_34 != (undefined4 *)0x0) {
              if (local_34 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_10009068();
              }
              puVar1 = (undefined4 *)*local_34;
              pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorMenuButton_101630d8,
                                          (CObject *)local_34[2]);
              local_34 = puVar1;
              if (pCVar5 != (CObject *)0x0) {
                (**(code **)(*(int *)pCVar5 + 0xf8))(local_14[0],0);
              }
            }
          }
          uVar2 = local_14[0];
          puVar9 = (ulong *)CMap<unsigned_int,unsigned_int,int,int>::operator[]
                                      ((CMap<unsigned_int,unsigned_int,int,int> *)
                                       &PTR_vftable_10163134,*(uint *)(this + 0xd8c));
          *puVar9 = uVar2;
          wParam = *(WPARAM *)(this + 0xd8c);
          pCVar4 = CWnd::GetOwner((CWnd *)this);
          SendMessageW(*(HWND *)(pCVar4 + 0x20),0x111,wParam,0);
          pCVar6 = DAT_10168578;
          if (DAT_10168578 == (CFrameWnd *)0x0) {
            pCVar6 = CWnd::GetTopLevelFrame((CWnd *)this);
          }
          if (pCVar6 != (CFrameWnd *)0x0) {
            pCVar6 = DAT_10168578;
            if (DAT_10168578 == (CFrameWnd *)0x0) {
              pCVar6 = CWnd::GetTopLevelFrame((CWnd *)this);
            }
            CWnd::SetFocus((CWnd *)pCVar6);
          }
          local_8 = 0xffffffff;
          FUN_1001e259(local_38);
          return 1;
        }
        (**(code **)(**(int **)(this + 0xde8) + 0x168))();
      }
      else {
        CMFCRibbonColorButton::UpdateColor(*(CMFCRibbonColorButton **)(this + 0xdec),local_14[0]);
      }
    }
    else {
      (**(code **)(**(int **)(this + 0xde4) + 0x194))();
    }
LAB_100a9755:
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    SendMessageW(*(HWND *)(pCVar4 + 0x20),0x10,0,0);
    return 1;
  }
  (**(code **)(*(int *)local_18 + 0xf8))(local_14[0],1);
  uVar10 = *(uint *)(local_18 + 0x20);
LAB_100a9707:
  CMFCPopupMenuBar::InvokeMenuCommand((CMFCPopupMenuBar *)this,uVar10,(CMFCToolBarButton *)local_18)
  ;
  return 1;
}


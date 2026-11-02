// rea decompile_all
// name: CMFCToolBar::OnLButtonDown
// address: 0x1002a828
// body: available
// range: 0x1002a828-0x1002ae85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002aa2c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBar::OnLButtonDown(CMFCToolBar *this,uint param_1,int param_3,undefined4 param_4)

{
  CMFCToolBar *pCVar1;
  POINT pt;
  CMFCToolBar *this_00;
  ushort uVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  BOOL BVar9;
  int iVar10;
  __POSITION *p_Var11;
  COleDataSource local_68 [52];
  tagPOINT local_34;
  ulong local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x1002a834;
  local_28 = (**(code **)(*(int *)this + 0x390))(param_3,param_4);
  this_00 = DAT_10166e84;
  pCVar1 = DAT_10166e84;
  if (DAT_10166e84 == this) {
LAB_1002a879:
    DAT_10166e84 = pCVar1;
    if (DAT_10166e54 == 0) goto LAB_1002a881;
  }
  else {
    if (DAT_10166e54 != 0) {
      pCVar1 = this;
      if (DAT_10166e84 != (CMFCToolBar *)0x0) {
        iVar6 = *(int *)(DAT_10166e84 + 0xb80);
        pCVar1 = DAT_10166e84 + 0xb80;
        DAT_10166e84 = this;
        *(undefined4 *)pCVar1 = 0xffffffff;
        InvalidateButton(this_00,iVar6);
        pCVar1 = DAT_10166e84;
      }
      goto LAB_1002a879;
    }
LAB_1002a881:
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,(CObject *)pCVar4);
    if (pCVar5 != (CObject *)0x0) {
      pHVar3 = GetParent(*(HWND *)(this + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      CWnd::SetFocus(pCVar4);
    }
  }
  if (local_28 < 0) {
    *(undefined4 *)(this + 0xb78) = 0xffffffff;
    if ((DAT_10166e54 != 0) && (*(int *)(this + 0xb04) == 0)) {
      iVar6 = *(int *)(this + 0xb80);
      *(undefined4 *)(this + 0xb80) = 0xffffffff;
      if (iVar6 != -1) {
        InvalidateButton(this,iVar6);
        UpdateWindow(*(HWND *)(this + 0x20));
      }
      (**(code **)(*(int *)this + 0x3b0))(0xffffffff);
    }
    iVar6 = (**(code **)(*(int *)this + 0x1c8))();
    if (iVar6 != 0) {
      SetCursor(DAT_10166b94);
    }
    CPane::OnLButtonDown((CPane *)this,param_1,param_3,param_4);
    goto LAB_1002ae7e;
  }
  pCVar5 = (CObject *)FUN_100261ef(this,local_28);
  if (pCVar5 == (CObject *)0x0) goto LAB_1002ae7e;
  (**(code **)(*(int *)this + 600))(local_28);
  DAT_10166e58 = 0;
  if (DAT_10166e80 == 0) {
LAB_1002a9a5:
    if ((DAT_10166e54 != 0) || (DAT_10166e58 != 0)) goto LAB_1002a9b9;
LAB_1002ad8e:
    *(int *)(this + 0xb78) = local_28;
    UpdateButton(this,local_28);
    if ((*(uint *)(pCVar5 + 0x24) & 0x40000) != 0) {
      iVar6 = CObject::IsKindOf(pCVar5,(CRuntimeClass *)&PTR_s_CMFCDropDownToolbarButton_10161638);
      if (iVar6 == 0) {
        *(undefined4 *)(this + 0xb78) = 0xffffffff;
        goto LAB_1002ae7e;
      }
    }
    *(uint *)(pCVar5 + 0x24) = *(uint *)(pCVar5 + 0x24) | 0x20000;
    InvalidateButton(this,local_28);
    UpdateWindow(*(HWND *)(this + 0x20));
    (**(code **)(*(int *)this + 0x414))(*(undefined4 *)(pCVar5 + 0x20));
    iVar6 = (**(code **)(*(int *)pCVar5 + 0x20))(this,0);
    if (iVar6 == 0) {
      pHVar3 = SetCapture(*(HWND *)(this + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      *(CWnd **)(this + 0xc90) = pCVar4;
    }
    else {
      p_Var11 = CObList::Find((CObList *)(this + 0xbc8),pCVar5,(__POSITION *)0x0);
      if (p_Var11 != (__POSITION *)0x0) {
        *(uint *)(pCVar5 + 0x24) = *(uint *)(pCVar5 + 0x24) & 0xfffdffff;
      }
      *(undefined4 *)(this + 0xb78) = 0xffffffff;
      *(undefined4 *)(this + 0xb7c) = 0xffffffff;
      (**(code **)(*(int *)this + 0x3b0))(0xffffffff);
      InvalidateButton(this,local_28);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  else {
    iVar6 = (**(code **)(*(int *)this + 0x41c))();
    if (iVar6 == 0) goto LAB_1002a9a5;
    if (DAT_10166e54 == 0) {
      uVar2 = GetAsyncKeyState(0x12);
      if ((uVar2 & 0x8000) != 0) {
        DAT_10166e58 = 1;
        *(undefined4 *)(this + 0xb7c) = 0xffffffff;
        *(int *)(this + 0xb80) = local_28;
        DAT_10166e84 = this;
      }
      goto LAB_1002a9a5;
    }
LAB_1002a9b9:
    if ((*(int *)(this + 0xb04) != 0) || (*(int *)(this + 0xb44) != 0)) goto LAB_1002ad8e;
    local_2c = *(ulong *)(this + 0xb80);
    *(int *)(this + 0xb80) = local_28;
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    (**(code **)(*(int *)this + 0x36c))(local_28,&local_24);
    if (local_2c != 0xffffffff) {
      InvalidateButton(this,local_2c);
    }
    piVar7 = (int *)FUN_100261ef(this,*(int *)(this + 0xb80));
    *(int **)(this + 0xc98) = piVar7;
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    *(uint *)(this + 0xb2c) = param_1 & 8;
    iVar6 = (**(code **)(*piVar7 + 0x60))();
    if (iVar6 == 0) {
      *(undefined4 *)(this + 0xb80) = 0xffffffff;
      *(undefined4 *)(this + 0xc98) = 0;
      if (local_2c != 0xffffffff) {
        InvalidateButton(this,local_2c);
      }
      goto LAB_1002ae7e;
    }
    InvalidateButton(this,local_28);
    UpdateWindow(*(HWND *)(this + 0x20));
    iVar6 = (**(code **)(**(int **)(this + 0xc98) + 0x3c))();
    if (iVar6 == 0) {
LAB_1002ab09:
      iVar6 = (**(code **)(**(int **)(this + 0xc98) + 0x50))();
      if (iVar6 != 0) {
        iVar6 = (**(code **)(**(int **)(this + 0xc98) + 0x74))();
        if (iVar6 != 0) {
          COleDataSource::COleDataSource(local_68);
          local_8 = 0;
          (**(code **)(**(int **)(this + 0xc98) + 0xc))(local_68);
          (**(code **)(*(int *)this + 0x414))(*(undefined4 *)(pCVar5 + 0x20));
          DAT_10166f20 = 0;
          pHVar3 = *(HWND *)(this + 0x20);
          *(int *)(this + 0xc80) = param_3;
          *(undefined4 *)(this + 0xc84) = param_4;
          if (DAT_10166e58 != 0) {
            DAT_10166e54 = 1;
          }
          local_2c = COleDataSource::DoDragDrop
                               (local_68,3,&local_24,(COleDropSource *)&DAT_10166ed8);
          BVar9 = IsWindow(pHVar3);
          if (BVar9 == 0) {
            if (DAT_10166e58 != 0) {
              DAT_10166e54 = 0;
              DAT_10166e58 = 0;
              DAT_10166e84 = (CMFCToolBar *)0x0;
            }
            local_8 = 0xffffffff;
            COleDataSource::~COleDataSource(local_68);
            goto LAB_1002ae7e;
          }
          local_34.x = 0;
          local_34.y = 0;
          GetCursorPos(&local_34);
          ScreenToClient(*(HWND *)(this + 0x20),&local_34);
          if (DAT_10166f20 == 0) {
LAB_1002ad48:
            *(int *)(this + 0xb7c) = local_28;
            (**(code **)(*(int *)this + 0x3b0))(local_28);
          }
          else {
            pt.y = local_34.y;
            pt.x = local_34.x;
            BVar9 = PtInRect(&local_24,pt);
            if (BVar9 != 0) goto LAB_1002ad48;
            if (((local_2c == 1) || (*(int *)(this + 0xc98) == 0)) || (DAT_10166f1c != 0)) {
LAB_1002ad2d:
              if (*(int *)(this + 0xc98) != 0) {
                InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(*(int *)(this + 0xc98) + 0x54),1);
              }
            }
            else {
              iVar6 = (**(code **)(*(int *)this + 0x37c))(*(int *)(this + 0xc98),local_2c);
              if (iVar6 == 0) goto LAB_1002ad2d;
              iVar6 = *(int *)this;
              iVar10 = FUN_10026099(this,*(int *)(this + 0xc98));
              (**(code **)(iVar6 + 0x34c))(iVar10);
              (**(code **)(*(int *)this + 0x3e0))();
              RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
              (**(code **)(*(int *)this + 0x2d4))(1);
              pHVar3 = GetParent(*(HWND *)(this + 0x20));
              pCVar4 = CWnd::FromHandle(pHVar3);
              if ((pCVar4 != (CWnd *)0x0) && (*(int *)(pCVar4 + 0x20) != 0)) {
                pHVar3 = GetParent(*(HWND *)(this + 0x20));
                pCVar4 = CWnd::FromHandle(pHVar3);
                RedrawWindow(*(HWND *)(pCVar4 + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
              }
              if (DAT_10166e58 == 0) {
                (**(code **)(*(int *)this + 0x208))();
                RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
              }
              pHVar3 = GetParent(*(HWND *)(this + 0x20));
              pCVar4 = CWnd::FromHandle(pHVar3);
              iVar6 = CObject::IsKindOf((CObject *)pCVar4,
                                        (CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4);
              if (iVar6 != 0) {
                pHVar3 = GetParent(*(HWND *)(this + 0x20));
                pCVar4 = CWnd::FromHandle(pHVar3);
                pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
                pCVar4 = CWnd::FromHandle(pHVar3);
                pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,
                                            (CObject *)pCVar4);
                if (pCVar5 != (CObject *)0x0) {
                  (**(code **)(*(int *)pCVar5 + 0x20c))();
                }
              }
            }
          }
          *(undefined4 *)(this + 0xc84) = 0xffffffff;
          local_8 = 0xffffffff;
          *(undefined4 *)(this + 0xc98) = 0;
          *(undefined4 *)(this + 0xc80) = 0xffffffff;
          COleDataSource::~COleDataSource(local_68);
          goto LAB_1002ae54;
        }
      }
      *(undefined4 *)(this + 0xc98) = 0;
    }
    else {
      lVar8 = _labs(param_3 - local_24.right);
      if ((6 < lVar8) || (DAT_10166e58 != 0)) goto LAB_1002ab09;
      piVar7 = *(int **)(this + 0xc98);
      *(undefined4 *)(this + 0xb30) = 1;
      *(int *)(this + 0xc68) = piVar7[0x15];
      *(int *)(this + 0xc6c) = piVar7[0x16];
      *(int *)(this + 0xc70) = piVar7[0x17];
      *(int *)(this + 0xc74) = piVar7[0x18];
      iVar6 = (**(code **)(*piVar7 + 0x38))();
      if (iVar6 != 0) {
        InflateRect((LPRECT)(this + 0xc68),2,2);
      }
      pHVar3 = SetCapture(*(HWND *)(this + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      *(CWnd **)(this + 0xc90) = pCVar4;
      SetCursor(DAT_10166b88);
    }
  }
LAB_1002ae54:
  if (DAT_10166e58 != 0) {
    DAT_10166e58 = 0;
    DAT_10166e84 = (CMFCToolBar *)0x0;
    SetCustomizeMode(0);
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
  }
LAB_1002ae7e:
  FUN_100f90cf();
  return;
}


// rea decompile_all
// name: FUN_100a7b8e
// address: 0x100a7b8e
// body: available
// range: 0x100a7b8e-0x100a8168 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a8113 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a7b8e(CMFCOutlookBarTabCtrl *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  CObject *pCVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CMFCOutlookBarTabCtrl *this;
  undefined4 extraout_EDX;
  undefined4 uVar7;
  int iVar8;
  CObject *pCVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 local_3c [4];
  LPRECT local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (((param_1 == (CMFCOutlookBarTabCtrl *)0x0) || (*(int *)(param_1 + 0x20) == 0)) ||
     (*(int *)(param_1 + 0xf0) == 0)) goto LAB_100a8105;
  local_20 = CMFCOutlookBarTabCtrl::IsMode2003(param_1);
  local_24 = 0;
  if (local_20 != 0) {
    if ((param_1 == (CMFCOutlookBarTabCtrl *)0xfffffda8) || (*(int *)(param_1 + 0x25c) == 0)) {
      uVar10 = (**(code **)(*(int *)param_1 + 0x234))(local_3c);
      uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
      local_34 = *(undefined4 *)uVar10;
      iVar3 = ((undefined4 *)uVar10)[1];
    }
    else {
      local_34 = *(undefined4 *)(param_1 + 0x250);
      iVar3 = *(int *)(param_1 + 0x254);
      uVar7 = extraout_EDX;
    }
    if (iVar3 == 0) {
      iVar3 = 0x10;
    }
    dVar1 = 1.0;
    if (DAT_10166c84 != 0) {
      dVar1 = _DAT_10166c7c;
    }
    iVar8 = 0xc;
    if (dVar1 != 1.0) {
      uVar11 = FUN_100f8660(0xc,uVar7);
      iVar8 = (int)uVar11;
    }
    local_24 = iVar8 + iVar3;
  }
  SendMessageW(*(HWND *)(param_1 + 0xf68),0x1f,0,0);
  SendMessageW(*(HWND *)(param_1 + 0x16b8),0x1f,0,0);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(param_1 + 0x20),&local_18);
  InflateRect(&local_18,-1 - *(int *)(param_1 + 0x204),-1 - *(int *)(param_1 + 0x204));
  *(LONG *)(param_1 + 0x220) = local_18.left;
  *(LONG *)(param_1 + 0x224) = local_18.top;
  *(LONG *)(param_1 + 0x228) = local_18.right;
  *(LONG *)(param_1 + 0x22c) = local_18.bottom;
  local_28 = (**(code **)(*(int *)param_1 + 0x1a0))();
  if (local_20 == 0) {
    SetRectEmpty((LPRECT)(param_1 + 0x230));
    SetRectEmpty((LPRECT)(param_1 + 0x240));
    if ((1 < local_28) ||
       (iVar3 = (**(code **)(*(int *)param_1 + 0x29c))(), local_2c = local_18.top, iVar3 == 0)) {
      InflateRect((LPRECT)(param_1 + 0x220),0,-1);
      goto LAB_100a7dba;
    }
  }
  else {
    if (*(int *)(param_1 + 0x208) == -1) {
      *(int *)(param_1 + 0x208) = local_28;
    }
    if (local_28 < *(int *)(param_1 + 0x208)) {
      *(int *)(param_1 + 0x208) = local_28;
    }
    iVar3 = *(int *)(param_1 + 0xf0);
    iVar2 = (((local_18.bottom - iVar3) - local_18.top) - local_24) / (iVar3 * 2);
    iVar8 = local_28;
    if (iVar2 <= local_28) {
      iVar8 = iVar2;
    }
    *(int *)(param_1 + 0x20c) = iVar8;
    iVar2 = *(int *)(param_1 + 0x208);
    if (iVar8 < *(int *)(param_1 + 0x208)) {
      iVar2 = iVar8;
    }
    *(LONG *)(param_1 + 0x230) = local_18.left;
    *(LONG *)(param_1 + 0x234) = local_18.top;
    *(LONG *)(param_1 + 0x238) = local_18.right;
    *(LONG *)(param_1 + 0x23c) = local_18.bottom;
    *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x234) + DAT_10161740 * 2 + DAT_10166c6c;
    *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 3;
    *(LONG *)(param_1 + 0x240) = local_18.left;
    *(LONG *)(param_1 + 0x244) = local_18.top;
    *(LONG *)(param_1 + 0x248) = local_18.right;
    *(LONG *)(param_1 + 0x24c) = local_18.bottom;
    *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) - (iVar3 * iVar2 + local_24);
    *(int *)(param_1 + 0x244) = *(int *)(param_1 + 0x24c) + -8;
    *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x23c);
    *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x24c) + -8;
LAB_100a7dba:
    local_2c = local_18.top;
    if (local_20 != 0) {
      local_2c = *(int *)(param_1 + 0x24c);
    }
  }
  if (((1 < local_28) || (iVar3 = (**(code **)(*(int *)param_1 + 0x29c))(), iVar3 == 0)) &&
     (local_1c = 0, 0 < *(int *)(param_1 + 0x9c))) {
    do {
      if ((local_1c < 0) || (*(int *)(param_1 + 0x90) <= local_1c)) goto LAB_100a8113;
      local_30 = *(int *)(*(int *)(param_1 + 0x8c) + local_1c * 4);
      local_38 = (LPRECT)(local_30 + 0x10);
      local_38->left = local_18.left;
      *(LONG *)(local_30 + 0x14) = local_18.top;
      *(LONG *)(local_30 + 0x18) = local_18.right;
      *(LONG *)(local_30 + 0x1c) = local_18.bottom;
      *(int *)(local_30 + 0x18) = *(int *)(local_30 + 0x18) + 1;
      *(int *)(local_30 + 0x14) = local_2c;
      *(int *)(local_30 + 0x1c) = *(int *)(param_1 + 0xf0) + local_2c;
      if ((local_18.bottom - local_24 <= local_2c) && (local_20 != 0)) {
        SetRectEmpty(local_38);
      }
      if (*(int *)(local_30 + 0x34) == 0) {
        SetRectEmpty(local_38);
      }
      else {
        if (((*(int *)(param_1 + 0x218) != 0) && (local_20 == 0)) &&
           ((local_1c == *(int *)(param_1 + 0xa0) || (local_1c == *(int *)(param_1 + 0xa0) + 1)))) {
          iVar3 = local_38->top;
          iVar8 = local_38->right;
          iVar2 = local_38->bottom;
          *(int *)(local_30 + 0x18) = *(int *)(local_30 + 0x18) - *(int *)(param_1 + 0xf0);
          if (local_1c == *(int *)(param_1 + 0xa0)) {
            this = param_1 + 0xf48;
          }
          else {
            this = param_1 + 0x1698;
          }
          CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,*(int *)(local_30 + 0x18),iVar3,
                             iVar8 - *(int *)(local_30 + 0x18),iVar2 - iVar3,0x14);
        }
        if ((local_1c == *(int *)(param_1 + 0xa0)) && (local_20 == 0)) {
          *(int *)(param_1 + 0x224) = local_2c + *(int *)(param_1 + 0xf0);
          iVar8 = 0;
          iVar3 = local_1c;
          while (iVar3 = iVar3 + 1, iVar3 < *(int *)(param_1 + 0x9c)) {
            if (((iVar3 < 0) || (*(int *)(param_1 + 0x90) <= iVar3)) ||
               (iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + iVar3 * 4), iVar2 == 0))
            goto LAB_100a8113;
            if (*(int *)(iVar2 + 0x34) != 0) {
              iVar8 = iVar8 + 1;
            }
          }
          iVar3 = local_18.bottom - *(int *)(param_1 + 0xf0) * iVar8;
          local_2c = iVar3 + 1;
          *(int *)(param_1 + 0x22c) = iVar3;
        }
        else {
          local_2c = local_2c + *(int *)(param_1 + 0xf0);
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0x9c));
  }
  if (((*(int *)(param_1 + 0x218) != 0) && (local_20 == 0)) &&
     (*(int *)(param_1 + 0xa0) == local_28 + -1)) {
    iVar3 = *(int *)(param_1 + 0xf0);
    *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) - iVar3;
    CWnd::SetWindowPos((CWnd *)(param_1 + 0x1698),(CWnd *)0x0,(local_18.right - iVar3) + 1,
                       (local_18.bottom - iVar3) + 1,iVar3,iVar3,0x15);
  }
  local_38 = (LPRECT)0x0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    do {
      if (((int)local_38 < 0) || (*(int *)(param_1 + 0x90) <= (int)local_38)) {
LAB_100a8113:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_30 = *(int *)(*(int *)(param_1 + 0x8c) + (int)local_38 * 4);
      pCVar9 = (CObject *)0x0;
      if (*(int *)(local_30 + 0x34) != 0) {
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePaneAdapter_10162750,
                                    *(CObject **)(local_30 + 0x20));
        if (pCVar4 != (CObject *)0x0) {
          pCVar9 = (CObject *)(**(code **)(*(int *)pCVar4 + 0x3a8))();
          pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCOutlookBarPane_10162150,pCVar9);
          if (pCVar9 != (CObject *)0x0) {
            *(int *)(pCVar9 + 0x1c84) = *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x220);
            *(int *)(pCVar9 + 0xb94) = *(int *)(param_1 + 0x22c) - *(int *)(param_1 + 0x224);
            if (*(int *)(param_1 + 0x214) != 0) {
              *(undefined4 *)(pCVar9 + 0x1ca0) = 1;
            }
          }
        }
        CWnd::SetWindowPos(*(CWnd **)(local_30 + 0x20),(CWnd *)0x0,*(int *)(param_1 + 0x220),
                           *(int *)(param_1 + 0x224),
                           *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x220),
                           *(int *)(param_1 + 0x22c) - *(int *)(param_1 + 0x224),0x14);
        if (pCVar9 != (CObject *)0x0) {
          *(undefined4 *)(pCVar9 + 0x1ca0) = 0;
        }
      }
      local_38 = (LPRECT)((int)&local_38->left + 1);
    } while ((int)local_38 < *(int *)(param_1 + 0x9c));
  }
  if ((local_28 == 0) && (local_20 == 0)) {
    CWnd::ShowWindow((CWnd *)param_1,0);
  }
  else {
    RedrawWindow(*(HWND *)(param_1 + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
    if (local_20 != 0) {
      CWnd::ShowWindow((CWnd *)(param_1 + 0x260),4);
      (**(code **)(*(int *)(param_1 + 0x260) + 0x234))
                (0,local_18.left,local_18.bottom - local_24,local_18.right - local_18.left,local_24,
                 0x14,0);
      FUN_100a7871(param_1);
      goto LAB_100a8105;
    }
  }
  CWnd::ShowWindow((CWnd *)(param_1 + 0x260),0);
  RedrawWindow(*(HWND *)(param_1 + 0xf68),(RECT *)0x0,(HRGN)0x0,0x105);
  RedrawWindow(*(HWND *)(param_1 + 0x16b8),(RECT *)0x0,(HRGN)0x0,0x105);
  pHVar5 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar6 = CWnd::FromHandle(pHVar5);
  RedrawWindow(*(HWND *)(pCVar6 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
LAB_100a8105:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


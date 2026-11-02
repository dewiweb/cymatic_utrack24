// rea decompile_all
// name: CDockingManager::AdjustDockingLayout
// address: 0x100404e4
// body: available
// range: 0x100404e4-0x10040a00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004098a to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingManager::AdjustDockingLayout(void *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockingManager::AdjustDockingLayout(CDockingManager *this,void *param_1)

{
  CWnd *this_00;
  int *piVar1;
  CDockingManager *pCVar2;
  BOOL BVar3;
  CFrameWnd *pCVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  CObject *pCVar9;
  CPaneDivider *pCVar10;
  HWND pHVar11;
  CWnd *this_01;
  undefined4 *puVar12;
  tagRECT *ptVar13;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int *local_4c;
  CDockingManager *local_48;
  uint local_44;
  HDWP local_40;
  int *local_3c;
  tagRECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_40 = param_1;
  local_48 = this;
  if (((DAT_101680f0 == 0) && (*(int *)(this + 0x154) == 0)) && (*(int *)(this + 0xe4) != 0)) {
    GetClientRect(*(HWND *)(*(int *)(this + 0xe4) + 0x20),(LPRECT)(this + 0xf8));
    BVar3 = IsRectEmpty((RECT *)(this + 0x10));
    if (BVar3 == 0) {
      ((LPRECT)(this + 0xf8))->left = ((RECT *)(this + 0x10))->left;
      *(undefined4 *)(this + 0xfc) = *(undefined4 *)(this + 0x14);
      *(undefined4 *)(this + 0x100) = *(undefined4 *)(this + 0x18);
      *(undefined4 *)(this + 0x104) = *(undefined4 *)(this + 0x1c);
    }
    if ((*(int *)(this + 4) != 0) && (*(int *)(this + 0x2c) != 0)) {
      pCVar4 = DAT_10168578;
      if (DAT_10168578 == (CFrameWnd *)0x0) {
        pCVar4 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0xe4));
      }
      if (pCVar4 != (CFrameWnd *)0x0) {
        pCVar4 = DAT_10168578;
        if (DAT_10168578 == (CFrameWnd *)0x0) {
          pCVar4 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0xe4));
        }
        BVar3 = IsIconic(*(HWND *)(pCVar4 + 0x20));
        if (BVar3 != 0) goto LAB_100409f2;
      }
      local_28.left = *(LONG *)(this + 0x108);
      local_28.top = *(LONG *)(this + 0x10c);
      local_28.right = *(LONG *)(this + 0x110);
      *(undefined4 *)(this + 0x154) = 1;
      local_28.bottom = *(LONG *)(this + 0x114);
      local_50 = 0;
      if ((local_40 == (HDWP)0x0) && (*(int *)(this + 0x130) == 0)) {
        local_40 = BeginDeferWindowPos(*(int *)(this + 0x2c));
        local_50 = 1;
      }
      local_18.left = *(LONG *)(this + 0xe8);
      local_18.top = *(LONG *)(this + 0xec);
      local_18.right = *(LONG *)(this + 0xf0);
      local_18.bottom = *(LONG *)(this + 0xf4);
      GetClientRect(*(HWND *)(*(int *)(this + 0xe4) + 0x20),&local_18);
      BVar3 = IsRectEmpty((RECT *)(this + 0x10));
      if (BVar3 == 0) {
        local_18.left = ((RECT *)(this + 0x10))->left;
        local_18.top = *(LONG *)(this + 0x14);
        local_18.right = *(LONG *)(this + 0x18);
        local_18.bottom = *(LONG *)(this + 0x1c);
      }
      CWnd::ClientToScreen(*(CWnd **)(this + 0xe4),&local_18);
      local_3c = *(int **)(this + 0x28);
      local_38.left = 0;
      local_38.top = 0;
      local_38.right = 0;
      local_38.bottom = 0;
      if (local_3c != (int *)0x0) {
        do {
          pCVar9 = (CObject *)local_3c[2];
          local_3c = (int *)local_3c[1];
          if (local_3c == (int *)0x0) goto LAB_10040684;
          iVar5 = CObject::IsKindOf(pCVar9,(CRuntimeClass *)&PTR_s_CDockSite_1012dd78);
        } while ((iVar5 == 0) &&
                (iVar5 = CObject::IsKindOf(pCVar9,(CRuntimeClass *)&PTR_s_CAutoHideDockSite_10135b64
                                          ), iVar5 == 0));
        local_3c = (int *)*local_3c;
        if (local_3c != (int *)0x0) {
          local_3c = (int *)*local_3c;
        }
      }
LAB_10040684:
      piVar1 = *(int **)(this + 0x24);
joined_r0x10040689:
      if (piVar1 != (int *)0x0) {
        if (piVar1 == (int *)0x0) goto LAB_1004098a;
        local_4c = (int *)*piVar1;
        this_00 = (CWnd *)piVar1[2];
        uVar6 = CWnd::GetExStyle(this_00);
        if (((uVar6 & 0x10000000) != 0) ||
           (((iVar5 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CPane_1012cc40),
             piVar1 = local_4c, this = local_48, iVar5 == 0 &&
             (iVar5 = CObject::IsKindOf((CObject *)this_00,
                                        (CRuntimeClass *)&PTR_s_CPaneDivider_1012b088),
             piVar1 = local_4c, this = local_48, iVar5 == 0)) &&
            ((iVar5 = CObject::IsKindOf((CObject *)this_00,
                                        (CRuntimeClass *)&PTR_s_CDockSite_1012dd78),
             pCVar2 = local_48, iVar5 == 0 ||
             (((piVar1 = local_4c, this = local_48, *(int *)(local_48 + 0x130) == 0 &&
               (iVar5 = IsOLEContainerMode(local_48), piVar1 = local_4c, this = local_48, iVar5 == 0
               )) && (*(int *)(pCVar2 + 0x1e4) == 0)))))))) {
          GetWindowRect(*(HWND *)(this_00 + 0x20),&local_38);
          local_44 = (**(code **)(*(int *)this_00 + 400))();
          iVar5 = (**(code **)(*(int *)this_00 + 0x160))();
          iVar7 = (**(code **)(*(int *)this_00 + 0x174))();
          iVar8 = CObject::IsKindOf((CObject *)this_00,
                                    (CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
          if (iVar8 != 0) {
            pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                        (CObject *)this_00);
            pCVar10 = CDockablePane::GetDefaultPaneDivider((CDockablePane *)pCVar9);
            piVar1 = local_4c;
            this = local_48;
            if (pCVar10 != (CPaneDivider *)0x0) goto joined_r0x10040689;
          }
          (**(code **)(*(int *)this_00 + 0x25c))(&local_68,0,iVar5);
          if (iVar5 == 0) {
            if ((local_44 & 0x1000) == 0) {
              local_38.left = local_38.right - local_68;
            }
            else {
              local_38.right = local_68 + local_38.left;
            }
          }
          else if ((local_44 & 0x2000) == 0) {
            local_38.top = local_38.bottom - local_64;
          }
          else {
            local_38.bottom = local_64 + local_38.top;
          }
          AlignByRect(local_48,(CRect *)&local_18,(CRect *)&local_38,local_44,iVar5,iVar7);
          local_60 = local_38.left;
          local_5c = local_38.top;
          local_58 = local_38.right;
          local_54 = local_38.bottom;
          iVar5 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CDockSite_1012dd78);
          if (iVar5 != 0) {
            CWnd::ScreenToClient(this_00,&local_38);
            iVar5 = (**(code **)(*(int *)this_00 + 0x160))();
            if (((iVar5 != 0) &&
                (local_38.right != local_38.left && -1 < local_38.right - local_38.left)) ||
               ((iVar5 = (**(code **)(*(int *)this_00 + 0x160))(), iVar5 == 0 &&
                (local_38.bottom != local_38.top && -1 < local_38.bottom - local_38.top)))) {
              (**(code **)(*(int *)this_00 + 0x294))(&local_38);
            }
            local_38.left = local_60;
            local_38.top = local_5c;
            local_38.right = local_58;
            local_38.bottom = local_54;
          }
          iVar5 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CPaneDivider_1012b088
                                   );
          if (iVar5 == 0) {
            ptVar13 = &local_38;
            pHVar11 = GetParent(*(HWND *)(this_00 + 0x20));
            this_01 = CWnd::FromHandle(pHVar11);
            CWnd::ScreenToClient(this_01,ptVar13);
            local_40 = (HDWP)(**(code **)(*(int *)this_00 + 0x234))
                                       (0,local_38.left,local_38.top,local_38.right - local_38.left,
                                        local_38.bottom - local_38.top,0x14,local_40);
          }
          else {
            (**(code **)(*(int *)this_00 + 0x280))(&local_38,&local_40);
          }
          if ((local_44 & 0x2000) == 0) {
            if ((local_44 & 0x8000) == 0) {
              if ((local_44 & 0x1000) == 0) {
                local_18.right = local_18.right + (local_60 - local_58);
              }
              else {
                local_18.left = local_18.left + (local_58 - local_60);
              }
            }
            else {
              local_18.bottom = local_18.bottom + (local_5c - local_54);
            }
          }
          else {
            local_18.top = local_18.top + (local_54 - local_5c);
          }
          piVar1 = local_4c;
          this = local_48;
          if (local_3c == local_4c) {
            *(LONG *)(local_48 + 0x108) = local_18.left;
            *(LONG *)(local_48 + 0x10c) = local_18.top;
            *(LONG *)(local_48 + 0x110) = local_18.right;
            *(LONG *)(local_48 + 0x114) = local_18.bottom;
          }
        }
        goto joined_r0x10040689;
      }
      *(LONG *)(this + 0xf8) = local_18.left;
      *(LONG *)(this + 0xfc) = local_18.top;
      *(LONG *)(this + 0x100) = local_18.right;
      *(LONG *)(this + 0x104) = local_18.bottom;
      BVar3 = IsRectEmpty((RECT *)(this + 0x108));
      if ((BVar3 != 0) || (iVar5 = IsOLEContainerMode(this), iVar5 != 0)) {
        ((RECT *)(this + 0x108))->left = local_18.left;
        *(LONG *)(this + 0x10c) = local_18.top;
        *(LONG *)(this + 0x110) = local_18.right;
        *(LONG *)(this + 0x114) = local_18.bottom;
      }
      CWnd::ScreenToClient(*(CWnd **)(this + 0xe4),(tagRECT *)(this + 0xf8));
      CWnd::ScreenToClient(*(CWnd **)(this + 0xe4),(tagRECT *)(this + 0x108));
      BVar3 = EqualRect((tagRECT *)(this + 0x108),&local_28);
      if (BVar3 == 0) {
        FUN_1003dbf9(this,(CBasePane *)0x0,1);
      }
      puVar12 = *(undefined4 **)(this + 0x24);
      while (puVar12 != (undefined4 *)0x0) {
        if (puVar12 == (undefined4 *)0x0) {
LAB_1004098a:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        pCVar9 = (CObject *)puVar12[2];
        puVar12 = (undefined4 *)*puVar12;
        iVar5 = CObject::IsKindOf(pCVar9,(CRuntimeClass *)&PTR_s_CAutoHideDockSite_10135b64);
        if (iVar5 != 0) {
          *(undefined4 *)(pCVar9 + 0x13c) = 0;
          *(undefined4 *)(pCVar9 + 0x140) = 0;
          FUN_1003f191(this,pCVar9);
        }
      }
      if (local_50 != 0) {
        EndDeferWindowPos(local_40);
      }
      if ((*(int **)(this + 0xe4))[0x28] != 0) {
        (**(code **)(**(int **)(this + 0xe4) + 0x174))(1);
      }
      *(undefined4 *)(this + 0x154) = 0;
    }
  }
LAB_100409f2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


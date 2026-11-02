// rea decompile_all
// name: CMFCShellListCtrl::OnContextMenu
// address: 0x100437c9
// body: available
// range: 0x100437c9-0x10043b74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100437ee to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCShellListCtrl::OnContextMenu(class CWnd *,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCShellListCtrl::OnContextMenu
          (CMFCShellListCtrl *this,undefined4 param_1,uint param_3,int param_4)

{
  int *piVar1;
  WPARAM wParam;
  int iVar2;
  LRESULT LVar3;
  int *piVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  undefined4 local_88;
  HMENU local_84;
  int local_68;
  int local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  HMENU local_3c;
  int *local_38;
  HMENU local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  CWnd *local_24;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(DAT_10169594 + 4) == 0) {
LAB_100437ee:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (DAT_1016816c != (int *)0x0) goto LAB_10043b65;
  if (*(int *)(this + 0x148) == 0) {
    CWnd::Default((CWnd *)this);
    goto LAB_10043b65;
  }
  if (*(int *)(this + 0x138) == 0) goto LAB_10043b65;
  local_40 = (int *)SendMessageW(*(HWND *)(this + 0x20),0x1032,0,0);
  wParam = 0xffffffff;
  local_34 = (HMENU)0xffffffff;
  if ((param_3 == 0xffffffff) && (param_4 == -1)) {
    piVar1 = local_40;
    piVar4 = local_38;
    if (local_40 == (int *)0x0) goto LAB_10043b65;
    while (local_38 = piVar1, local_38 != (int *)0x0) {
      wParam = SendMessageW(*(HWND *)(this + 0x20),0x100c,wParam,2);
      piVar4 = (int *)((int)local_38 + -1);
      piVar1 = (int *)((int)local_38 + -1);
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    local_38 = piVar4;
    iVar2 = CListCtrl::GetItemRect((CListCtrl *)this,wParam,&local_18,0);
    if (iVar2 != 0) {
      param_3 = local_18.left;
      param_4 = local_18.bottom + 1;
      ClientToScreen(*(HWND *)(this + 0x20),(LPPOINT)&param_3);
    }
  }
  else {
    local_20.y = param_4;
    local_20.x = param_3;
    ScreenToClient(*(HWND *)(this + 0x20),&local_20);
    local_18.left = 1;
    SendMessageW(*(HWND *)(this + 0x20),0x1012,0,(LPARAM)&local_20);
    if ((local_18.left & 0xeU) == 0) goto LAB_10043b65;
    local_34 = (HMENU)local_18.top;
  }
  local_38 = (int *)(**(code **)(**(int **)(DAT_10169594 + 4) + 0xc))
                              (*(int **)(DAT_10169594 + 4),(int)local_40 << 2);
  if (local_38 == (int *)0x0) goto LAB_100437ee;
  _memset(&local_88,0,0x3c);
  local_44 = local_68;
  local_88 = 4;
  if (-1 < (int)local_34) {
    local_84 = local_34;
    LVar3 = SendMessageW(*(HWND *)(this + 0x20),0x104b,0,(LPARAM)&local_88);
    if (LVar3 != 0) {
      local_44 = local_68;
      *local_38 = *(int *)(local_68 + 8);
    }
  }
  local_3c = (HMENU)0xffffffff;
  for (local_30 = (int *)(uint)(-1 < (int)local_34); local_30 < local_40;
      local_30 = (int *)((int)local_30 + 1)) {
    local_3c = (HMENU)SendMessageW(*(HWND *)(this + 0x20),0x100c,(WPARAM)local_3c,2);
    if (local_3c == local_34) {
      local_30 = (int *)((int)local_30 + -1);
    }
    else {
      local_84 = local_3c;
      LVar3 = SendMessageW(*(HWND *)(this + 0x20),0x104b,0,(LPARAM)&local_88);
      if (LVar3 != 0) {
        local_4c = local_68;
        local_38[(int)local_30] = *(int *)(local_68 + 8);
        if (local_44 == 0) {
          local_44 = local_68;
        }
      }
    }
  }
  if (*local_38 == 0) {
    (**(code **)(**(int **)(DAT_10169594 + 4) + 0x14))(*(int **)(DAT_10169594 + 4),local_38);
    goto LAB_10043b65;
  }
  iVar2 = (**(code **)(**(int **)(this + 0x138) + 0x28))
                    (*(int **)(this + 0x138),*(undefined4 *)(this + 0x20),local_40,local_38,
                     &DAT_10144de4,0,&local_48);
  if (-1 < iVar2) {
    iVar2 = (**(code **)*local_48)(local_48,&DAT_10144e04,&DAT_1016816c);
    if (-1 < iVar2) {
      local_34 = CreatePopupMenu();
      if (((local_34 != (HMENU)0x0) &&
          (iVar2 = (**(code **)(*DAT_1016816c + 0xc))(DAT_1016816c,local_34,0,1,0x7fff,4),
          -1 < iVar2)) &&
         (local_30 = (int *)TrackPopupMenu(local_34,0x102,param_3,param_4,0,*(HWND *)(this + 0x20),
                                           (RECT *)0x0), local_30 != (int *)0x0)) {
        if ((local_40 == (int *)0x1) &&
           (piVar4 = (int *)GetMenuDefaultItem(local_34,0,0), local_30 == piVar4)) {
          local_3c = (HMENU)0x20000000;
          (**(code **)(**(int **)(this + 0x138) + 0x24))
                    (*(int **)(this + 0x138),1,local_44 + 8,&local_3c);
          if (((uint)local_3c & 0x20000000) != 0) {
            (**(code **)(*(int *)this + 0x184))(local_44);
            goto LAB_10043b35;
          }
        }
        local_2c = 0x24;
        local_28 = 0;
        pHVar5 = GetParent(*(HWND *)(this + 0x20));
        local_24 = CWnd::FromHandle(pHVar5);
        local_20.x = (int)local_30 - 1;
        local_20.y = 0;
        local_18.left = 0;
        local_18.top = 1;
        local_18.right = 0;
        local_18.bottom = 0;
        iVar2 = (**(code **)(*local_48 + 0x10))(local_48,&local_2c);
        if (-1 < iVar2) {
          pHVar5 = GetParent(*(HWND *)(this + 0x20));
          pCVar6 = CWnd::FromHandle(pHVar5);
          if (pCVar6 != (CWnd *)0x0) {
            pHVar5 = GetParent(*(HWND *)(this + 0x20));
            pCVar6 = CWnd::FromHandle(pHVar5);
            SendMessageW(*(HWND *)(pCVar6 + 0x20),DAT_10169598,(WPARAM)local_30,0);
          }
        }
      }
LAB_10043b35:
      if (DAT_1016816c != (int *)0x0) {
        (**(code **)(*DAT_1016816c + 8))(DAT_1016816c);
        DAT_1016816c = (int *)0x0;
      }
    }
    (**(code **)(*local_48 + 8))(local_48);
  }
  (**(code **)(**(int **)(DAT_10169594 + 4) + 0x14))(*(int **)(DAT_10169594 + 4),local_38);
LAB_10043b65:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


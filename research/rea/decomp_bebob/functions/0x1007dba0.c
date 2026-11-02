// rea decompile_all
// name: CMFCToolBarMenuButton::OpenPopupMenu
// address: 0x1007dba0
// body: available
// range: 0x1007dba0-0x1007dde8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007dbd6 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarMenuButton::OpenPopupMenu(class CWnd *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarMenuButton::OpenPopupMenu(CMFCToolBarMenuButton *this,CWnd *param_1)

{
  CMFCPopupMenu *this_00;
  CObject *pCVar1;
  CObject *pCVar2;
  CMFCVisualManager *pCVar3;
  ulong uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  int iVar7;
  undefined4 uVar8;
  HMENU local_24;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x8c) != 0) goto LAB_1007ddd8;
  if ((param_1 == (CWnd *)0x0) && (param_1 = *(CWnd **)(this + 0x6c), param_1 == (CWnd *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  local_24 = (HMENU)(**(code **)(*(int *)this + 0xd0))();
  if ((local_24 == (HMENU)0x0) && (iVar7 = (**(code **)(*(int *)this + 0xdc))(), iVar7 == 0))
  goto LAB_1007ddd8;
  this_00 = (CMFCPopupMenu *)(**(code **)(*(int *)this + 0xd4))();
  *(CMFCPopupMenu **)(this + 0x8c) = this_00;
  if (this_00 == (CMFCPopupMenu *)0x0) {
    DestroyMenu(local_24);
    goto LAB_1007ddd8;
  }
  iVar7 = CMFCPopupMenu::GetMenuItemCount(this_00);
  if ((0 < iVar7) && (local_24 != (HMENU)0x0)) {
    DestroyMenu(local_24);
    local_24 = (HMENU)0x0;
  }
  local_20.x = 0;
  local_20.y = 0;
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_1012f74f_1_10161b40,
                              *(CObject **)(this + 0x6c));
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_1012aa4e_2_101611d0,
                              *(CObject **)(this + 0x6c));
  if (pCVar1 == (CObject *)0x0) {
    if ((pCVar2 != (CObject *)0x0) && (iVar7 = (**(code **)(*(int *)pCVar2 + 0x160))(), iVar7 == 0))
    {
      local_20.x = *(LONG *)(this + 0x5c);
      local_20.y = *(LONG *)(this + 0x58);
      ClientToScreen(*(HWND *)(param_1 + 0x20),&local_20);
      goto LAB_1007dcf5;
    }
    if (*(int *)(this + 0xb8) == 0) {
      if (*(int *)(*(int *)(this + 0x8c) + 0xeb8) != 0) {
        local_20.x = *(LONG *)(this + 0x5c);
        local_20.y = *(int *)(this + 0x60) + -1;
        goto LAB_1007dd23;
      }
      local_20.x = *(LONG *)(this + 0x54);
      local_20.y = *(int *)(this + 0x60) + -1;
    }
    else {
      local_20.x = *(LONG *)(this + 0x5c);
      local_20.y = *(LONG *)(this + 0x58);
LAB_1007dd23:
      local_20.x = local_20.x + -1;
    }
    uVar8 = 1;
    ClientToScreen(*(HWND *)(param_1 + 0x20),&local_20);
  }
  else {
    local_20.y = *(int *)(this + 0x58) + -2;
    local_20.x = 0;
    ClientToScreen(*(HWND *)(param_1 + 0x20),&local_20);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar1 + 0x20),&local_18);
    pCVar3 = CMFCVisualManager::GetInstance();
    iVar7 = (**(code **)(*(int *)pCVar3 + 0x2d4))();
    uVar4 = CWnd::GetExStyle((CWnd *)pCVar1);
    if ((uVar4 & 0x400000) == 0) {
      local_20.x = local_18.right + iVar7;
LAB_1007dcf5:
      uVar8 = 3;
    }
    else {
      local_20.x = local_18.left - iVar7;
      uVar8 = 4;
    }
  }
  *(CMFCToolBarMenuButton **)(*(int *)(this + 0x8c) + 0x148) = this;
  *(undefined4 *)(*(int *)(this + 0x8c) + 0xea4) = uVar8;
  iVar7 = (**(code **)(**(int **)(this + 0x8c) + 0x208))(param_1,local_20.x,local_20.y,local_24,0,0)
  ;
  if (iVar7 == 0) {
    *(undefined4 *)(this + 0x8c) = 0;
  }
  else {
    (**(code **)(*(int *)this + 0xd8))();
    iVar7 = *(int *)(this + 0xc4);
    if (iVar7 == 0) {
      pHVar5 = GetParent(*(HWND *)(param_1 + 0x20));
      pCVar6 = CWnd::FromHandle(pHVar5);
      pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar6);
      if ((pCVar1 == (CObject *)0x0) || (iVar7 = *(int *)(pCVar1 + 0x124), iVar7 == 0))
      goto LAB_1007ddd8;
    }
    *(int *)(*(int *)(this + 0x8c) + 0x124) = iVar7;
  }
LAB_1007ddd8:
  iVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar7;
}


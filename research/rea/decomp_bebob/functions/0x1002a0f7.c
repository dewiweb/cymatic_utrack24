// rea decompile_all
// name: CMFCToolBar::AdjustSize
// address: 0x1002a0f7
// body: available
// range: 0x1002a0f7-0x1002a44f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCToolBar::AdjustSize(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::AdjustSize(CMFCToolBar *this)

{
  CFrameWnd *pCVar1;
  undefined4 uVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  CWnd *pCVar9;
  uint local_30;
  uint local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar1 = AFXGetParentFrame((CWnd *)this);
  if ((pCVar1 == (CFrameWnd *)0x0) || (*(int *)(pCVar1 + 0x20) == 0)) goto LAB_1002a442;
  iVar7 = *(int *)this;
  local_18.bottom = (LONG)(*(int *)(this + 0xac) == 0);
  uVar2 = (**(code **)(iVar7 + 0x160))();
  (**(code **)(iVar7 + 0x25c))(&local_30,local_18.bottom,uVar2);
  if ((local_30 == 0x7fff) || (local_2c == 0x7fff)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    GetClientRect(*(HWND *)(pCVar4 + 0x20),&local_18);
    uVar8 = *(uint *)(this + 0xb94);
    if (local_30 == 0x7fff) {
      local_30 = local_18.right - local_18.left;
      if ((uVar8 != 0) && ((int)uVar8 <= (int)local_30)) {
        local_30 = uVar8;
      }
    }
    else {
      local_2c = local_18.bottom - local_18.top;
      if ((uVar8 != 0) && ((int)uVar8 <= (int)local_2c)) {
        local_2c = uVar8;
      }
    }
  }
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_28);
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,(CObject *)pCVar4);
  if (pCVar5 == (CObject *)0x0) {
    if (DAT_10166e54 == 0) {
      if ((((local_28.bottom - local_28.top != local_2c) && (local_2c != 0x7fff)) &&
          (iVar7 = (**(code **)(*(int *)this + 0x160))(), iVar7 != 0)) ||
         (((local_28.right - local_28.left != local_30 && (local_30 != 0x7fff)) &&
          (iVar7 = (**(code **)(*(int *)this + 0x160))(), iVar7 == 0)))) {
        local_18.right = 0;
        local_18.bottom = 0;
        (**(code **)(*(int *)this + 0x26c))(&local_18.right);
        uVar8 = local_30;
        if ((int)local_30 < local_18.right) {
          uVar8 = local_18.right;
        }
        uVar6 = local_18.bottom;
        if (local_18.bottom <= (int)local_2c) {
          uVar6 = local_2c;
        }
        (**(code **)(*(int *)this + 0x234))(0,0,0,uVar8,uVar6,0x16,0);
        goto LAB_1002a308;
      }
    }
    else if ((((local_28.bottom - local_28.top != local_2c) && (local_2c != 0x7fff)) &&
             (iVar7 = (**(code **)(*(int *)this + 0x160))(), iVar7 != 0)) ||
            (((local_28.right - local_28.left != local_30 && (local_30 != 0x7fff)) &&
             (iVar7 = (**(code **)(*(int *)this + 0x160))(), iVar7 == 0)))) {
      (**(code **)(*(int *)this + 0x234))(0,0,0,local_30,local_2c,0x16,0);
LAB_1002a308:
      CPane::UpdateVirtualRect((CPane *)this);
    }
  }
  else {
    local_18.left = *(LONG *)(pCVar5 + 0x2a0);
    local_18.top = *(LONG *)(pCVar5 + 0x2a4);
    local_18.right = *(LONG *)(pCVar5 + 0x2a8);
    local_18.bottom = *(LONG *)(pCVar5 + 0x2ac);
    (**(code **)(*(int *)this + 0x234))
              (0,0xffffffff,0xffffffff,local_18.right - local_18.left,local_18.bottom - local_18.top
               ,0x16,0);
  }
  iVar7 = (**(code **)(*(int *)this + 0x16c))();
  if (((iVar7 == 0) && (iVar7 = (**(code **)(*(int *)this + 0x178))(), iVar7 != 0)) &&
     ((*(int *)(this + 0xac) != 0 && (*(int *)(this + 0xb0) != 0)))) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    iVar7 = (**(code **)(*(int *)this + 0x160))();
    CDockingPanesRow::GetClientRect(*(CDockingPanesRow **)(this + 0xb0),(CRect *)&local_18);
    if ((local_18.bottom - local_18.top == local_2c) || (iVar7 == 0)) {
      if ((local_18.right - local_18.left != local_30) && (iVar7 == 0)) {
        local_18.right = local_18.left + local_30;
        goto LAB_1002a3a4;
      }
    }
    else {
      local_18.bottom = local_18.top + local_2c;
LAB_1002a3a4:
      uVar8 = local_2c;
      if (iVar7 == 0) {
        uVar8 = local_30;
      }
      CDockSite::ResizeRow(*(CDockSite **)(this + 0xac),*(CDockingPanesRow **)(this + 0xb0),uVar8,1)
      ;
    }
    if (DAT_10166e54 != 0) {
      CPane::UpdateVirtualRect((CPane *)this,local_30,local_2c);
      (**(code **)(**(int **)(this + 0xb0) + 0x28))(this);
    }
  }
  else {
    pCVar4 = (CWnd *)(**(code **)(*(int *)this + 0x224))(0);
    if (pCVar4 != (CWnd *)0x0) {
      pHVar3 = GetParent(*(HWND *)(this + 0x20));
      pCVar9 = CWnd::FromHandle(pHVar3);
      if (pCVar9 == pCVar4) {
        (**(code **)(*(int *)pCVar4 + 0x1b0))();
        RedrawWindow(*(HWND *)(pCVar4 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
        goto LAB_1002a442;
      }
    }
    iVar7 = CObject::IsKindOf((CObject *)this,(CRuntimeClass *)&PTR_s_CMFCDropDownToolBar_10161600);
    if (iVar7 != 0) goto LAB_1002a442;
  }
  (**(code **)(*(int *)pCVar1 + 0x174))(1);
LAB_1002a442:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


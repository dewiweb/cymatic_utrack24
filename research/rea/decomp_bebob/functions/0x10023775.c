// rea decompile_all
// name: CMDIFrameWndEx::OnContextMenu
// address: 0x10023775
// body: available
// range: 0x10023775-0x10023924 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIFrameWndEx::OnContextMenu(class CWnd *,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMDIFrameWndEx::OnContextMenu(CMDIFrameWndEx *this,CObject *param_1,LONG param_3,CObject *param_4)

{
  POINT Point;
  ushort uVar1;
  int iVar2;
  HWND pHVar3;
  WPARAM wParam;
  LRESULT LVar4;
  ulong uVar5;
  int iVar6;
  tagPOINT local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((this == (CMDIFrameWndEx *)0xfffffb4c) || (*(int *)(this + 0x4d4) == 0)) {
LAB_1002390f:
    CWnd::Default((CWnd *)this);
  }
  else {
    if ((DAT_1016843c != 0) || (uVar1 = GetAsyncKeyState(1), (uVar1 & 0x8000) != 0))
    goto LAB_10023914;
    if (param_1 == (CObject *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x20);
    }
    if (this == (CMDIFrameWndEx *)0xfffffbc0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(this + 0x460);
    }
    if (iVar6 == iVar2) {
      Point.y = (LONG)param_4;
      Point.x = param_3;
      pHVar3 = WindowFromPoint(Point);
      local_20.y = (LONG)CWnd::FromHandle(pHVar3);
      iVar6 = CMDIClientAreaWnd::IsMemberOfMDITabGroup
                        ((CMDIClientAreaWnd *)(this + 0x440),(CWnd *)local_20.y);
      if (iVar6 == 0) {
        wParam = 0;
        if ((DAT_1016843c == 0) && ((CObject *)local_20.y == param_1)) {
          if (this != (CMDIFrameWndEx *)0x0) {
            wParam = *(WPARAM *)(this + 0x20);
          }
          LVar4 = SendMessageW(*(HWND *)(this + 0x20),DAT_10166e90,wParam,
                               CONCAT22(param_4._0_2_,(undefined2)param_3));
          if (LVar4 != 0) {
            CDockingManager::OnPaneContextMenu((CDockingManager *)(this + 0x14c),param_3,param_4);
          }
        }
        goto LAB_10023914;
      }
      param_1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,
                                   (CObject *)local_20.y);
      if (param_1 == (CObject *)0x0) goto LAB_10023914;
    }
    else {
      if (param_1 == (CObject *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x20);
      }
      if (iVar6 != *(int *)(this + 0x4d4)) goto LAB_1002390f;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      (**(code **)(*(int *)param_1 + 0x17c))(&local_18);
    }
    local_20.x = param_3;
    local_20.y = (LONG)param_4;
    ScreenToClient(*(HWND *)(param_1 + 0x20),&local_20);
    iVar6 = (**(code **)(*(int *)param_1 + 0x214))(&local_20);
    if (-1 < iVar6) {
      (**(code **)(*(int *)param_1 + 0x210))(iVar6);
      uVar5 = CMDIClientAreaWnd::GetMDITabsContextMenuAllowedItems
                        ((CMDIClientAreaWnd *)(this + 0x440));
      (**(code **)(*(int *)this + 0x1c8))(param_3,param_4,uVar5,0);
    }
  }
LAB_10023914:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


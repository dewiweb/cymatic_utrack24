// rea decompile_all
// name: CMFCBaseTabCtrl::OnMouseMove
// address: 0x10094660
// body: available
// range: 0x10094660-0x10094905 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCBaseTabCtrl::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCBaseTabCtrl::OnMouseMove(CMFCBaseTabCtrl *this,uint param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT Point;
  LONG LVar1;
  BOOL BVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  int iVar5;
  int iVar6;
  tagPOINT local_20;
  int local_18 [2];
  tagPOINT local_10;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CWnd::Default((CWnd *)this);
  local_20.y = *(LONG *)(this + 0xf4);
  iVar5 = *(int *)(this + 0x1e8);
  pt.y = param_4;
  pt.x = param_3;
  BVar2 = PtInRect((RECT *)(this + 0x1f0),pt);
  *(BOOL *)(this + 0x1e8) = BVar2;
  if (iVar5 != BVar2) {
    if (BVar2 != 0) {
      *(uint *)(this + 0x1ec) = param_1 & 1;
    }
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)(this + 0x1f0),(HRGN)0x0,0x105);
  }
  if (((-1 < *(int *)(this + 0xf4)) && (*(int *)(this + 0xf8) < 0)) && (*(int *)(this + 0x148) == 0)
     ) {
    local_10.x = param_3;
    local_10.y = param_4;
    ClientToScreen(*(HWND *)(this + 0x20),&local_10);
    Point.y = local_10.y;
    Point.x = local_10.x;
    pHVar3 = WindowFromPoint(Point);
    pCVar4 = CWnd::FromHandle(pHVar3);
    if ((pCVar4 != (CWnd *)0x0) && (*(int *)(pCVar4 + 0x20) != *(int *)(this + 0x20))) {
      ReleaseCapture();
      *(undefined4 *)(this + 0xf4) = 0xffffffff;
      InvalidateTab(this,local_20.y);
      goto LAB_100948f5;
    }
  }
  iVar5 = (**(code **)(*(int *)this + 0x214))(&param_3);
  LVar1 = local_20.y;
  *(int *)(this + 0xf4) = iVar5;
  if ((-1 < *(int *)(this + 0xf8)) && (iVar5 != *(int *)(this + 0xf8))) {
    *(undefined4 *)(this + 0xf4) = 0xffffffff;
  }
  if ((*(int *)(this + 0xf4) != local_20.y) &&
     ((*(int *)(this + 0x7c) != 0 || (iVar5 = (**(code **)(*(int *)this + 0x280))(), iVar5 != 0))))
  {
    if (LVar1 < 0) {
      if (-1 < *(int *)(this + 0xf4)) {
        pHVar3 = SetCapture(*(HWND *)(this + 0x20));
        CWnd::FromHandle(pHVar3);
      }
    }
    else if ((*(int *)(this + 0xf4) < 0) && (*(int *)(this + 0xf8) < 0)) {
      *(undefined4 *)(this + 0x1e8) = 0;
      *(undefined4 *)(this + 0x1ec) = 0;
      if (*(int *)(this + 0x148) == 0) {
        ReleaseCapture();
      }
    }
    InvalidateTab(this,*(int *)(this + 0xf4));
    InvalidateTab(this,LVar1);
  }
  if (*(int *)(this + 0x148) != 0) {
    iVar5 = *(int *)(this + 0x9c);
    iVar6 = (**(code **)(*(int *)this + 0x160))(param_3,param_4);
    if (((iVar6 == 0) || (iVar5 < 2)) || (*(int *)(this + 0x108) == 0)) {
      iVar6 = (**(code **)(*(int *)this + 0x160))(param_3,param_4);
      if (((iVar6 == 0) && (iVar6 = (**(code **)(*(int *)this + 0x19c))(1,0xffffffff,0), iVar6 != 0)
          ) && (2 < iVar5)) {
        *(undefined4 *)(this + 0x148) = 0;
      }
    }
    else {
      local_18[0] = 0;
      local_18[1] = 0;
      local_10.x = 0;
      local_10.y = 0;
      iVar5 = (**(code **)(*(int *)this + 0x214))(&param_3);
      if ((iVar5 != *(int *)(this + 0xa0)) && (iVar5 != -1)) {
        (**(code **)(*(int *)this + 0x25c))(iVar5,*(int *)(this + 0xa0));
        (**(code **)(*(int *)this + 0x180))();
        (**(code **)(*(int *)this + 0x210))(iVar5);
        iVar6 = (**(code **)(*(int *)this + 0x214))(&param_3);
        if (iVar6 != iVar5) {
          (**(code **)(*(int *)this + 0x1b4))(iVar5,local_18);
          local_20.y = param_4;
          local_20.x = *(int *)(this + 0x154) + local_18[0];
          ClientToScreen(*(HWND *)(this + 0x20),&local_20);
          SetCursorPos(local_20.x,local_20.y);
        }
      }
    }
  }
LAB_100948f5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


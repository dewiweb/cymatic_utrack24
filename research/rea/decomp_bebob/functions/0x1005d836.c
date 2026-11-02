// rea decompile_all
// name: CMFCPopupMenu::StartResize
// address: 0x1005d836
// body: available
// range: 0x1005d836-0x1005db63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCPopupMenu::StartResize(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCPopupMenu::StartResize(CMFCPopupMenu *this)

{
  CMFCShadowWnd *this_00;
  BOOL BVar1;
  HWND pHVar2;
  int iVar3;
  CWnd *pCVar4;
  ulong uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  CMFCPopupMenu *pCVar10;
  tagMSG local_64;
  tagMSG local_48;
  int local_2c;
  int local_28;
  HWND local_24;
  undefined4 local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (this == (CMFCPopupMenu *)0x0) {
    local_24 = (HWND)0x0;
  }
  else {
    local_24 = *(HWND *)(this + 0x20);
  }
  while (BVar1 = PeekMessageW(&local_64,(HWND)0x0,0xf,0xf,0), BVar1 != 0) {
    BVar1 = GetMessageW(&local_64,(HWND)0x0,0xf,0xf);
    if (BVar1 == 0) goto LAB_1005db55;
    DispatchMessageW(&local_64);
  }
  pHVar2 = GetCapture();
  if (pHVar2 == (HWND)0x0) {
    pHVar2 = SetCapture(*(HWND *)(this + 0x20));
    CWnd::FromHandle(pHVar2);
    local_20 = 0;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    *(undefined4 *)(this + 0x1080) = 1;
    iVar3 = (**(code **)(*(int *)this + 0x1c0))();
    *(undefined4 *)(iVar3 + 0xd14) = 1;
    local_1c = *(int *)(this + 0xfc0);
    pCVar4 = *(CWnd **)(this + 0xfd4);
    *(undefined4 *)(this + 0xfc0) = 0;
    if ((pCVar4 != (CWnd *)0x0) && (*(int *)(pCVar4 + 0x20) != 0)) {
      CWnd::ShowWindow(pCVar4,0);
    }
    local_28 = 0;
    local_2c = (**(code **)(*(int *)this + 0x204))();
    while( true ) {
      pHVar2 = GetCapture();
      pCVar4 = CWnd::FromHandle(pHVar2);
      if (pCVar4 != (CWnd *)this) break;
      BVar1 = GetMessageW(&local_48,(HWND)0x0,0,0);
      if (BVar1 == 0) {
        AfxPostQuitMessage(local_48.wParam);
        break;
      }
      if (local_48.message == 0x200) {
        local_28 = 1;
        uVar5 = CWnd::GetExStyle((CWnd *)this);
        if ((uVar5 & 0x400000) == 0) {
          iVar3 = local_48.pt.x - local_18.left;
        }
        else {
          iVar3 = local_18.right - local_48.pt.x;
        }
        iVar3 = iVar3 + local_2c * 2 + local_1c;
        if (*(int *)(this + 0x1088) == 0) {
          iVar9 = local_48.pt.y - local_18.top;
        }
        else {
          iVar9 = local_18.bottom - local_48.pt.y;
        }
        iVar6 = *(int *)(this + 0x1094);
        if (iVar6 <= iVar9) {
          if (*(int *)(this + 0x1088) == 0) {
            iVar6 = local_48.pt.y - local_18.top;
          }
          else {
            iVar6 = local_18.bottom - local_48.pt.y;
          }
        }
        iVar9 = *(int *)(this + 0x1090);
        if (iVar9 < 1) {
          iVar3 = (local_18.right - local_18.left) - local_1c;
        }
        else if (iVar3 < iVar9) {
          iVar3 = iVar9;
        }
        if ((iVar3 != *(int *)(this + 0x1098)) || (iVar6 != *(int *)(this + 0x109c))) {
          *(int *)(this + 0x1098) = iVar3;
          *(int *)(this + 0x109c) = iVar6;
          if ((*(int *)(this + 0x1088) != 0) && (*(int *)(this + 0x1094) < iVar6)) {
            iVar3 = *(int *)(this + 0x10ac);
            iVar9 = *(int *)(this + 0x10a4);
            iVar6 = (**(code **)(*(int *)this + 0x204))();
            *(LONG *)(this + 300) = ((local_48.pt.y - (iVar3 - iVar9)) - iVar6) + -1;
          }
          (**(code **)(*(int *)this + 0x174))(1);
          piVar7 = (int *)(**(code **)(*(int *)this + 0x1c0))();
          (**(code **)(*piVar7 + 0x3e0))();
          pCVar10 = this + 0xf28;
          if ((pCVar10 != (CMFCPopupMenu *)0x0) && (*(int *)(this + 0xf48) != 0)) {
            uVar8 = GetScrollPos(*(HWND *)(this + 0xf48),2);
            OnVScroll(this,5,uVar8,(CScrollBar *)pCVar10);
          }
          RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x581);
          UpdateBottomWindows(this,0);
          *(undefined4 *)(this + 0x1084) = 1;
        }
      }
      else {
        if (local_48.message == 0x202) {
          local_20 = 1;
          *(int *)(this + 0xfc0) = local_1c;
          if (local_28 != 0) {
            if (((CGdiObject *)(this + 0xfc4) != (CGdiObject *)0x0) && (*(int *)(this + 0xfc8) != 0)
               ) {
              CGdiObject::DeleteObject((CGdiObject *)(this + 0xfc4));
            }
            if (((CGdiObject *)(this + 0xfcc) != (CGdiObject *)0x0) && (*(int *)(this + 0xfd0) != 0)
               ) {
              CGdiObject::DeleteObject((CGdiObject *)(this + 0xfcc));
            }
            (**(code **)(*(int *)this + 0x174))(1);
            UpdateBottomWindows(this,0);
            this_00 = *(CMFCShadowWnd **)(this + 0xfd4);
            if ((this_00 != (CMFCShadowWnd *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
              CMFCShadowWnd::Repos(this_00);
            }
            CWnd::ShowWindow((CWnd *)this,4);
          }
          break;
        }
        DispatchMessageW(&local_48);
      }
    }
    ReleaseCapture();
    BVar1 = IsWindow(local_24);
    if (BVar1 != 0) {
      *(undefined4 *)(this + 0x1080) = 0;
      iVar3 = (**(code **)(*(int *)this + 0x1c0))();
      *(undefined4 *)(iVar3 + 0xd14) = 0;
    }
  }
LAB_1005db55:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


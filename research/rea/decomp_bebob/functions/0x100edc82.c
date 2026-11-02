// rea decompile_all
// name: CMFCTasksPane::AdjustScroll
// address: 0x100edc82
// body: available
// range: 0x100edc82-0x100edfad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::AdjustScroll(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTasksPane::AdjustScroll(CMFCTasksPane *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  undefined1 local_50 [4];
  int local_4c;
  RECT local_48;
  RECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((this != (CMFCTasksPane *)0x0) && (*(HWND *)(this + 0x20) != (HWND)0x0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    iVar2 = (**(code **)(*(int *)this + 0x3c8))();
    if (iVar2 != 0) {
      InflateRect(&local_18,-1,-1);
    }
    local_28.left = *(LONG *)(this + 0x3fc);
    local_28.top = *(LONG *)(this + 0x400);
    iVar2 = *(int *)(this + 0x458);
    local_28.right = *(LONG *)(this + 0x404);
    local_28.bottom = *(LONG *)(this + 0x408);
    if (((*(int *)(this + 0x354) == 0) && (iVar3 = ForceShowNavToolbar(this), iVar3 == 0)) ||
       (iVar2 < 2)) {
      SetRectEmpty((LPRECT)(this + 0x3fc));
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(*(int *)(this + 0x524) + 0x25c))(local_50,0,1);
      iVar3 = *(int *)(iVar2 + 4);
      *(LONG *)(this + 0x3fc) = local_18.left;
      *(LONG *)(this + 0x400) = local_18.top;
      *(LONG *)(this + 0x404) = local_18.right;
      *(LONG *)(this + 0x408) = local_18.bottom;
      iVar1 = *(int *)(this + 0x400);
      iVar2 = iVar1 + iVar3;
      *(int *)(this + 0x408) = iVar2;
      local_18.top = local_18.top + (iVar2 - iVar1);
      (**(code **)(*(int *)(this + 0x524) + 0x234))
                (0,*(undefined4 *)(this + 0x3fc),iVar1,
                 *(int *)(this + 0x404) - *(int *)(this + 0x3fc),iVar3,0x14,0);
      iVar2 = 1;
    }
    CWnd::ShowWindow((CWnd *)(this + 0x524),iVar2);
    *(LONG *)(this + 0x42c) = local_18.left;
    *(LONG *)(this + 0x430) = local_18.top;
    *(LONG *)(this + 0x434) = local_18.right;
    *(LONG *)(this + 0x438) = local_18.bottom;
    SetScrollSizes(this);
    CWnd::EnableWindow((CWnd *)(this + 0x488),(uint)(*(int *)(this + 0x35c) == 0));
    if ((*(int *)(this + 0x35c) == 0) && (0 < *(int *)(this + 900))) {
      iVar2 = GetSystemMetrics(0x15);
      *(int *)(this + 0x434) = *(int *)(this + 0x434) - iVar2;
      CWnd::SetWindowPos((CWnd *)(this + 0x488),(CWnd *)0x0,local_18.right - iVar2,local_18.top,
                         iVar2,local_18.bottom - local_18.top,0x54);
      local_18.right = local_18.right - iVar2;
    }
    else {
      CWnd::SetWindowPos((CWnd *)(this + 0x488),(CWnd *)0x0,0,0,0,0,0x80);
    }
    local_38.left = ((LPRECT)(this + 0x40c))->left;
    local_38.top = *(LONG *)(this + 0x410);
    local_38.right = *(LONG *)(this + 0x414);
    local_38.bottom = *(LONG *)(this + 0x418);
    local_48.left = *(LONG *)(this + 0x41c);
    local_48.top = *(LONG *)(this + 0x420);
    local_48.right = *(LONG *)(this + 0x424);
    local_48.bottom = *(LONG *)(this + 0x428);
    SetRectEmpty((LPRECT)(this + 0x40c));
    SetRectEmpty((LPRECT)(this + 0x41c));
    if (*(int *)(this + 0x35c) == 0) {
      if (*(int *)(this + 0x520) != 0) {
        KillTimer(*(HWND *)(this + 0x20),5);
        *(undefined4 *)(this + 0x378) = 0;
      }
    }
    else {
      if (0 < *(int *)(this + 0x380)) {
        *(LONG *)(this + 0x40c) = local_18.left;
        *(LONG *)(this + 0x410) = local_18.top;
        *(LONG *)(this + 0x414) = local_18.right;
        *(LONG *)(this + 0x418) = local_18.bottom;
        *(int *)(this + 0x410) = *(int *)(this + 0x410) + 1;
        *(int *)(this + 0x418) = *(int *)(this + 0x410) + *(int *)(this + 0x37c);
        local_18.top = local_18.top + 1 + *(int *)(this + 0x37c);
      }
      iVar2 = IsScrollDnAvailable(this);
      if (iVar2 != 0) {
        *(LONG *)(this + 0x41c) = local_18.left;
        *(LONG *)(this + 0x420) = local_18.top;
        *(LONG *)(this + 0x424) = local_18.right;
        *(LONG *)(this + 0x428) = local_18.bottom;
        *(int *)(this + 0x420) = *(int *)(this + 0x428) - *(int *)(this + 0x37c);
        local_18.bottom = local_18.bottom + (-1 - *(int *)(this + 0x37c));
      }
      *(LONG *)(this + 0x42c) = local_18.left;
      *(LONG *)(this + 0x430) = local_18.top;
      *(LONG *)(this + 0x434) = local_18.right;
      *(LONG *)(this + 0x438) = local_18.bottom;
    }
    BVar4 = EqualRect(&local_28,(RECT *)(this + 0x3fc));
    if (BVar4 == 0) {
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0x3fc),1);
      InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
    local_4c = 0;
    BVar4 = EqualRect(&local_38,(RECT *)(this + 0x40c));
    if (BVar4 == 0) {
      InvalidateRect(*(HWND *)(this + 0x20),&local_38,1);
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0x40c),1);
      local_4c = 1;
    }
    BVar4 = EqualRect(&local_48,(RECT *)(this + 0x41c));
    if (BVar4 == 0) {
      InvalidateRect(*(HWND *)(this + 0x20),&local_48,1);
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0x41c),1);
      local_4c = 1;
    }
    if (local_4c != 0) {
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


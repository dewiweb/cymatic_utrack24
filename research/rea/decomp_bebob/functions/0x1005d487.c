// rea decompile_all
// name: CMFCPopupMenu::SetScrollBar
// address: 0x1005d487
// body: available
// range: 0x1005d487-0x1005d6a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::SetScrollBar(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenu::SetScrollBar(CMFCPopupMenu *this)

{
  CWnd *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  UINT wArrows;
  tagSCROLLINFO local_44;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0xef4) != 0) && (*(int *)(this + 0xef0) != 0)) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x1c0))();
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    if (DAT_10166e54 == 0) {
      local_18.right = local_18.right - *(int *)(this + 0xfc0);
      local_18.bottom = local_18.bottom - *(int *)(this + 0xfc0);
    }
    iVar2 = (**(code **)(*(int *)this + 0x204))();
    InflateRect(&local_18,-iVar2,-iVar2);
    iVar2 = *(int *)(this + 0xed4);
    if (iVar2 == 0) {
      local_18.left = local_18.left + *(int *)(this + 0xecc);
    }
    else if (iVar2 == 1) {
      local_18.right = local_18.right - *(int *)(this + 0xecc);
    }
    else if (iVar2 == 2) {
      local_18.top = local_18.top + *(int *)(this + 0xecc);
    }
    else if (iVar2 == 3) {
      local_18.bottom = local_18.bottom - *(int *)(this + 0xecc);
    }
    local_18.top = local_18.top + (*(int *)(this + 0xfec) - *(int *)(this + 0xfe4));
    if (*(int *)(this + 0x1088) == 0) {
      local_18.bottom = local_18.bottom + (*(int *)(this + 0x10a4) - *(int *)(this + 0x10ac));
    }
    else {
      local_18.top = local_18.top + (*(int *)(this + 0x10ac) - *(int *)(this + 0x10a4));
    }
    local_28 = GetSystemMetrics(2);
    local_24 = local_18.top;
    local_20 = local_18.right;
    local_1c = local_18.bottom;
    local_28 = local_18.right - local_28;
    local_18.right = local_28;
    _memset(&local_44,0,0x1c);
    local_44.cbSize = 0x1c;
    this_00 = (CWnd *)(this + 0xf28);
    local_44.fMask = 7;
    if ((this_00 == (CWnd *)0x0) || (*(int *)(this + 0xf48) == 0)) {
      (**(code **)(*(int *)this_00 + 0x160))(0x50000001,&local_28,this,1);
    }
    else {
      CWnd::SetWindowPos(this_00,(CWnd *)0x0,local_28,local_24,local_20 - local_28,
                         local_1c - local_24,0x14);
      CWnd::GetScrollInfo(this_00,2,&local_44,0x17);
    }
    local_44.nMin = 0;
    local_44.nMax = 0;
    local_44.nPage = 0;
    iVar2 = (**(code **)(*piVar1 + 0x354))();
    iVar3 = FUN_100268b9((int)piVar1);
    if ((iVar3 < 1) || (iVar2 < 1)) {
      piVar1[0x343] = 0;
    }
    else {
      local_44.nPage = 1;
      local_44.nMax = (iVar3 * iVar2 - *(int *)(this + 0xec4)) / iVar2 + 1;
      piVar1[0x343] = *(int *)(this + 0xec4) / iVar2;
    }
    CWnd::SetScrollInfo(this_00,2,&local_44,1);
    wArrows = 0;
    if (local_44.nMax < 1) {
      wArrows = 3;
    }
    EnableScrollBar(*(HWND *)(this + 0xf48),2,wArrows);
    CWnd::EnableWindow(this_00,1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


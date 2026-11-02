// rea decompile_all
// name: CMFCPopupMenu::AdjustScroll
// address: 0x1005c9c5
// body: available
// range: 0x1005c9c5-0x1005cc8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCPopupMenu::AdjustScroll(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCPopupMenu::AdjustScroll(CMFCPopupMenu *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  BOOL BVar5;
  undefined4 local_40;
  RECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
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
  iVar3 = *(int *)(this + 0xed4);
  if (iVar3 == 0) {
    local_18.left = local_18.left + *(int *)(this + 0xecc);
  }
  else if (iVar3 == 1) {
    local_18.right = local_18.right - *(int *)(this + 0xecc);
  }
  else if (iVar3 == 2) {
    local_18.top = local_18.top + *(int *)(this + 0xecc);
  }
  else if (iVar3 == 3) {
    local_18.bottom = local_18.bottom - *(int *)(this + 0xecc);
  }
  local_18.top = local_18.top + (*(int *)(this + 0xfec) - *(int *)(this + 0xfe4));
  if (*(int *)(this + 0x1088) == 0) {
    local_18.bottom = local_18.bottom + (*(int *)(this + 0x10a4) - *(int *)(this + 0x10ac));
  }
  else {
    local_18.top = local_18.top + (*(int *)(this + 0x10ac) - *(int *)(this + 0x10a4));
  }
  local_38.left = ((LPRECT)(this + 0xef8))->left;
  local_38.top = *(LONG *)(this + 0xefc);
  local_38.right = *(LONG *)(this + 0xf00);
  local_38.bottom = *(LONG *)(this + 0xf04);
  local_28.left = *(LONG *)(this + 0xf08);
  local_28.top = *(LONG *)(this + 0xf0c);
  local_28.right = *(LONG *)(this + 0xf10);
  local_28.bottom = *(LONG *)(this + 0xf14);
  SetRectEmpty((LPRECT)(this + 0xef8));
  SetRectEmpty((LPRECT)(this + 0xf08));
  local_40 = 0x14;
  if (*(int *)(this + 0xef0) == 0) {
    if (*(int *)(this + 0xee8) == 0) {
      local_40 = 0x1c;
      KillTimer(*(HWND *)(this + 0x20),2);
      *(undefined4 *)(this + 0xf18) = 0;
    }
  }
  else if (*(int *)(this + 0xef4) == 0) {
    iVar3 = (**(code **)(*(int *)this + 0x1dc))();
    if (iVar3 != 0) {
      *(LONG *)(this + 0xef8) = local_18.left;
      *(LONG *)(this + 0xefc) = local_18.top;
      *(LONG *)(this + 0xf00) = local_18.right;
      *(LONG *)(this + 0xf04) = local_18.bottom;
      *(int *)(this + 0xefc) = *(int *)(this + 0xefc) + iVar2;
      local_18.top = local_18.top + *(int *)(this + 0xf1c) + iVar2;
      *(int *)(this + 0xf04) = *(int *)(this + 0xefc) + *(int *)(this + 0xf1c);
    }
    iVar3 = (**(code **)(*(int *)this + 0x1e0))();
    if (iVar3 != 0) {
      *(LONG *)(this + 0xf08) = local_18.left;
      *(LONG *)(this + 0xf0c) = local_18.top;
      *(LONG *)(this + 0xf10) = local_18.right;
      *(LONG *)(this + 0xf14) = local_18.bottom;
      *(int *)(this + 0xf0c) = *(int *)(this + 0xf14) - *(int *)(this + 0xf1c);
      local_18.bottom = local_18.bottom - (*(int *)(this + 0xf1c) + iVar2);
    }
  }
  else {
    iVar3 = GetSystemMetrics(2);
    local_18.right = local_18.right - iVar3;
  }
  if (param_1 == 0) {
    BVar4 = EqualRect(&local_38,(RECT *)(this + 0xef8));
    if (BVar4 != 0) {
      BVar4 = EqualRect(&local_28,(RECT *)(this + 0xf08));
      if (BVar4 != 0) {
        (**(code **)(*piVar1 + 0x208))();
        goto LAB_1005cc02;
      }
    }
  }
  (**(code **)(*piVar1 + 0x234))
            (0,local_18.left,local_18.top,local_18.right - local_18.left,
             local_18.bottom - local_18.top,local_40,0);
  *(LONG *)(this + 0xec4) = local_18.bottom - local_18.top;
LAB_1005cc02:
  BVar4 = EqualRect(&local_38,(RECT *)(this + 0xef8));
  if (BVar4 == 0) {
    InvalidateRect(*(HWND *)(this + 0x20),&local_38,1);
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0xef8),1);
  }
  BVar5 = EqualRect(&local_28,(RECT *)(this + 0xf08));
  if (BVar5 == 0) {
    InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0xf08),1);
  }
  if (BVar5 == 0 || BVar4 == 0) {
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


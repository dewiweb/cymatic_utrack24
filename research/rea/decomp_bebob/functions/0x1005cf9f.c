// rea decompile_all
// name: CMFCPopupMenu::UpdateShadow
// address: 0x1005cf9f
// body: available
// range: 0x1005cf9f-0x1005d3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCPopupMenu::UpdateShadow(struct tagRECT *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenu::UpdateShadow(CMFCPopupMenu *this,tagRECT *param_1)

{
  CWnd *pCVar1;
  ulong uVar2;
  uint uVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  LONG LVar10;
  uint uVar11;
  uint local_9c;
  RECT local_98;
  tagRECT local_88;
  RECT local_78;
  tagRECT local_68;
  tagRECT local_58;
  RECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (((0 < *(int *)(this + 0xfc0)) &&
      (pCVar1 = CWnd::GetTopLevelParent((CWnd *)this), pCVar1 != (CWnd *)0x0)) &&
     (*(int *)(pCVar1 + 0x20) != 0)) {
    uVar2 = CWnd::GetExStyle((CWnd *)this);
    uVar3 = uVar2 & 0x400000;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    local_38.left = local_18.left;
    local_38.top = local_18.top;
    local_38.right = local_18.right;
    local_38.bottom = local_18.bottom;
    local_58.left = local_18.left;
    local_58.top = local_18.top;
    local_58.right = local_18.right;
    local_58.bottom = local_18.bottom;
    if (param_1 != (tagRECT *)0x0) {
      CopyRect(&local_28,param_1);
      CWnd::ScreenToClient((CWnd *)this,&local_28);
      local_48.left = local_18.left;
      local_48.top = local_18.top;
      local_48.right = local_18.right;
      local_48.bottom = local_18.bottom;
      if (uVar3 == 0) {
        local_48.left = (local_18.right - *(int *)(this + 0xfc0)) + -1;
      }
      else {
        local_48.right = local_18.left + 1 + *(int *)(this + 0xfc0);
      }
      BVar4 = IntersectRect(&local_38,&local_28,&local_48);
      if (BVar4 == 0) {
        SetRectEmpty(&local_38);
      }
      local_98.left = local_18.left;
      local_98.right = local_18.right;
      local_98.top = (local_18.bottom - *(int *)(this + 0xfc0)) + -1;
      local_98.bottom = local_18.bottom;
      BVar4 = IntersectRect(&local_58,&local_28,&local_98);
      if (BVar4 == 0) {
        SetRectEmpty(&local_58);
      }
      BVar4 = IsRectEmpty(&local_38);
      if ((BVar4 != 0) && (BVar4 = IsRectEmpty(&local_58), BVar4 != 0)) goto LAB_1005d3a0;
    }
    local_88.left = 0;
    local_88.top = 0;
    local_88.right = 0;
    local_88.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_88);
    if (DAT_10160dec == 0) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      GetWindowRect(*(HWND *)(pCVar1 + 0x20),&local_28);
      local_48.left = 0;
      local_48.top = 0;
      local_48.right = 0;
      local_48.bottom = 0;
      UnionRect(&local_48,&local_88,&local_28);
      BVar4 = EqualRect(&local_48,&local_28);
      if (BVar4 == 0) goto LAB_1005d3a0;
    }
    iVar9 = *(int *)(this + 0xfc0);
    *(undefined4 *)(this + 0xfc0) = 0;
    if (((CGdiObject *)(this + 0xfc4) != (CGdiObject *)0x0) && (*(int *)(this + 0xfc8) != 0)) {
      CGdiObject::DeleteObject((CGdiObject *)(this + 0xfc4));
    }
    if (((CGdiObject *)(this + 0xfcc) != (CGdiObject *)0x0) && (*(int *)(this + 0xfd0) != 0)) {
      CGdiObject::DeleteObject((CGdiObject *)(this + 0xfcc));
    }
    local_68.left = -1;
    local_68.top = -1;
    local_68.right = -1;
    local_68.bottom = -1;
    local_9c = 0x41c;
    iVar5 = (**(code **)(*(int *)this + 0x1c0))();
    *(undefined4 *)(iVar5 + 0xb68) = 1;
    if (uVar3 == 0) {
      uVar11 = 0x41e;
      local_9c = 0x41e;
      iVar6 = (local_18.bottom - local_18.top) - iVar9;
      iVar7 = (local_18.right - local_18.left) - iVar9;
      LVar10 = -1;
      iVar8 = -1;
    }
    else {
      GetWindowRect(*(HWND *)(this + 0x20),&local_68);
      iVar6 = (local_18.bottom - local_18.top) - iVar9;
      uVar11 = 0x41c;
      iVar7 = (local_18.right - local_18.left) - iVar9;
      iVar8 = local_68.left + iVar9;
      LVar10 = local_68.top;
    }
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,iVar8,LVar10,iVar7,iVar6,uVar11);
    local_78.left = local_38.left;
    local_78.top = local_38.top;
    local_78.right = local_38.right;
    local_78.bottom = local_38.bottom;
    BVar4 = IsRectEmpty(&local_38);
    if (BVar4 == 0) {
      MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(pCVar1 + 0x20),(LPPOINT)&local_78,2);
      RedrawWindow(*(HWND *)(pCVar1 + 0x20),&local_78,(HRGN)0x0,0x185);
    }
    local_78.left = local_58.left;
    local_78.top = local_58.top;
    local_78.right = local_58.right;
    local_78.bottom = local_58.bottom;
    BVar4 = IsRectEmpty(&local_58);
    if ((BVar4 == 0) && (BVar4 = EqualRect(&local_38,&local_58), BVar4 == 0)) {
      MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(pCVar1 + 0x20),(LPPOINT)&local_78,2);
      RedrawWindow(*(HWND *)(pCVar1 + 0x20),&local_78,(HRGN)0x0,0x185);
    }
    UpdateWindow(*(HWND *)(pCVar1 + 0x20));
    *(int *)(this + 0xfc0) = iVar9;
    iVar9 = local_68.left;
    iVar6 = local_68.top;
    if (uVar3 == 0) {
      iVar9 = -1;
      iVar6 = -1;
    }
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,iVar9,iVar6,local_18.right - local_18.left,
                       local_18.bottom - local_18.top,local_9c);
    BVar4 = IsRectEmpty(&local_38);
    if (BVar4 == 0) {
      InvalidateRect(*(HWND *)(this + 0x20),&local_38,1);
    }
    BVar4 = IsRectEmpty(&local_58);
    if ((BVar4 == 0) && (BVar4 = EqualRect(&local_38,&local_58), BVar4 == 0)) {
      InvalidateRect(*(HWND *)(this + 0x20),&local_58,1);
    }
    UpdateWindow(*(HWND *)(this + 0x20));
    *(undefined4 *)(iVar5 + 0xb68) = 0;
  }
LAB_1005d3a0:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


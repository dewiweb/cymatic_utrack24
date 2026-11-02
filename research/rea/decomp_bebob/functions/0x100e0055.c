// rea decompile_all
// name: CMFCToolBarButtonsListButton::SelectButton
// address: 0x100e0055
// body: available
// range: 0x100e0055-0x100e0238 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e01c4 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonsListButton::SelectButton(class CMFCToolBarButton *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarButtonsListButton::SelectButton
          (CMFCToolBarButtonsListButton *this,CMFCToolBarButton *param_1)

{
  CMFCToolBarButton *pCVar1;
  undefined4 *puVar2;
  CMFCToolBarButton *pCVar3;
  LPARAM lParam;
  undefined4 *puVar4;
  BOOL BVar5;
  int iVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar1 = *(CMFCToolBarButton **)(this + 0x110);
  if (pCVar1 == param_1) {
    RedrawSelection(this);
  }
  else {
    *(CMFCToolBarButton **)(this + 0x110) = param_1;
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_28);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SetRectEmpty(&local_18);
    puVar4 = *(undefined4 **)(this + 0x78);
joined_r0x100e00c4:
    if (puVar4 != (undefined4 *)0x0) {
      if (puVar4 == (undefined4 *)0x0) {
LAB_100e01c4:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar2 = (undefined4 *)*puVar4;
      pCVar3 = (CMFCToolBarButton *)puVar4[2];
      if (pCVar3 == (CMFCToolBarButton *)0x0) goto LAB_100e01c4;
      local_48.left = *(LONG *)(pCVar3 + 0x54);
      local_48.top = *(LONG *)(pCVar3 + 0x58);
      local_48.right = *(LONG *)(pCVar3 + 0x5c);
      local_48.bottom = *(LONG *)(pCVar3 + 0x60);
      OffsetRect(&local_48,0,-*(int *)(this + 0x114));
      puVar4 = puVar2;
      if (pCVar3 != *(CMFCToolBarButton **)(this + 0x110)) goto LAB_100e0170;
      local_18.left = local_48.left;
      local_18.top = local_48.top;
      local_18.right = local_48.right;
      local_18.bottom = local_48.bottom;
      if (pCVar3 != *(CMFCToolBarButton **)(this + 0x110)) goto LAB_100e0170;
      goto LAB_100e0175;
    }
    BVar5 = IsRectEmpty(&local_18);
    if ((BVar5 == 0) && ((local_28.bottom <= local_18.top || (local_18.bottom <= local_28.top)))) {
      iVar11 = *(int *)(this + 0x118);
      iVar6 = ((local_28.top - local_28.bottom) - *(int *)(this + 0x114)) + local_18.bottom;
      iVar10 = iVar6;
      if (iVar11 <= iVar6) {
        iVar10 = iVar11;
      }
      if (iVar10 < 0) {
        iVar11 = 0;
      }
      else if (iVar6 < iVar11) {
        iVar11 = iVar6;
      }
      CWnd::SetScrollPos((CWnd *)this,1,iVar11,1);
      *(int *)(this + 0x114) = iVar11;
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    }
    UpdateWindow(*(HWND *)(this + 0x20));
    pHVar7 = GetParent(*(HWND *)(this + 0x20));
    pCVar8 = CWnd::FromHandle(pHVar7);
    if (pCVar8 != (CWnd *)0x0) {
      lParam = *(LPARAM *)(this + 0x20);
      uVar9 = CWnd::GetDlgCtrlID((CWnd *)this);
      SendMessageW(*(HWND *)(pCVar8 + 0x20),0x111,uVar9 & 0xffff,lParam);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_100e0170:
  if (pCVar3 == pCVar1) {
LAB_100e0175:
    InflateRect(&local_48,2,2);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    BVar5 = IntersectRect(&local_38,&local_28,&local_48);
    if (BVar5 != 0) {
      InvalidateRect(*(HWND *)(this + 0x20),&local_38,1);
    }
  }
  goto joined_r0x100e00c4;
}


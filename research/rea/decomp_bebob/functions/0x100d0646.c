// rea decompile_all
// name: CMFCToolBarComboBoxButton::AdjustRect
// address: 0x100d0646
// body: available
// range: 0x100d0646-0x100d088f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarComboBoxButton::AdjustRect(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarComboBoxButton::AdjustRect(CMFCToolBarComboBoxButton *this)

{
  tagRECT *lpRect;
  LPRECT lprc;
  BOOL BVar1;
  HWND pHVar2;
  int iVar3;
  CWnd *pCVar4;
  int *piVar5;
  CObject *pCVar6;
  CMFCToolBarComboBoxButton *local_c;
  CWnd *local_8;
  
  pCVar6 = (CObject *)0x0;
  local_c = this;
  local_8 = (CWnd *)this;
  if ((((*(int *)(this + 0xb4) == 0) || (*(int *)(*(int *)(this + 0xb4) + 0x20) == 0)) ||
      (BVar1 = IsRectEmpty((RECT *)(this + 0x54)), BVar1 != 0)) || (*(int *)(this + 0x7c) == 0)) {
    SetRectEmpty((LPRECT)(this + 0x90));
    SetRectEmpty((LPRECT)(this + 0xa0));
  }
  else {
    if ((DAT_101624d8 != 0) &&
       ((*(int *)(this + 0x18) == 0 || (*(int *)(*(int *)(this + 0x2c) + -0xc) == 0)))) {
      pHVar2 = GetParent(*(HWND *)(*(int *)(this + 0xb4) + 0x20));
      local_8 = CWnd::FromHandle(pHVar2);
      do {
        if (local_8 == (CWnd *)0x0) break;
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,(CObject *)local_8)
        ;
        pHVar2 = GetParent(*(HWND *)(local_8 + 0x20));
        local_8 = CWnd::FromHandle(pHVar2);
      } while (pCVar6 == (CObject *)0x0);
      if (pCVar6 != (CObject *)0x0) {
        iVar3 = (**(code **)(*(int *)pCVar6 + 0x354))();
        local_8 = (CWnd *)(((*(int *)(this + 0x58) - *(int *)(this + 0x60)) + iVar3) / 2);
        if ((int)local_8 < 0) {
          local_8 = (CWnd *)0x0;
        }
        OffsetRect((LPRECT)(this + 0xa0),0,(int)local_8);
        OffsetRect((LPRECT)(this + 0x90),0,(int)local_8);
        OffsetRect((LPRECT)(this + 0x54),0,(int)local_8);
      }
    }
    CWnd::SetWindowPos(*(CWnd **)(this + 0xb4),(CWnd *)0x0,*(int *)(this + 0x54) + 1,
                       *(int *)(this + 0x58),(*(int *)(this + 0x5c) - *(int *)(this + 0x54)) + -2,
                       *(int *)(this + 0x78),0x14);
    CComboBox::SetEditSel(*(CComboBox **)(this + 0xb4),-1,0);
    lpRect = (tagRECT *)(this + 0x90);
    GetWindowRect(*(HWND *)(*(int *)(this + 0xb4) + 0x20),lpRect);
    CWnd::ScreenToClient(*(CWnd **)(this + 0xb4),lpRect);
    pHVar2 = GetParent(*(HWND *)(*(int *)(this + 0xb4) + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar2);
    CWnd::MapWindowPoints(*(CWnd **)(this + 0xb4),pCVar4,lpRect);
    if (DAT_101624d4 == 0) {
      SetRectEmpty((LPRECT)(this + 0xa0));
    }
    else {
      *(LONG *)(this + 0xa0) = lpRect->left;
      *(undefined4 *)(this + 0xa4) = *(undefined4 *)(this + 0x94);
      *(undefined4 *)(this + 0xa8) = *(undefined4 *)(this + 0x98);
      *(undefined4 *)(this + 0xac) = *(undefined4 *)(this + 0x9c);
      piVar5 = (int *)FUN_10037b18(&local_c);
      lprc = (LPRECT)(this + 0xa0);
      lprc->left = *(int *)(this + 0xa8) + *piVar5 * -2;
      InflateRect(lprc,-2,-2);
      iVar3 = *(int *)(this + 0x90) + -1;
      *(int *)(this + 0x54) = iVar3;
      *(int *)(this + 0x5c) = *(int *)(this + 0x98) + 1;
      if ((*(int *)(this + 0x18) == 0) || (*(int *)(*(int *)(this + 0x2c) + -0xc) == 0)) {
        *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0x94);
        *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x9c);
      }
      if (*(CWnd **)(this + 0xb0) != (CWnd *)0x0) {
        CWnd::SetWindowPos(*(CWnd **)(this + 0xb0),(CWnd *)0x0,*(int *)(this + 0x90) + 3,
                           *(int *)(this + 0x58) + 3,
                           ((lprc->left - *(int *)(this + 0xa8)) - iVar3) + -8 +
                           *(int *)(this + 0x5c),
                           (*(int *)(this + 0x9c) - *(int *)(this + 0x94)) + -6,0x14);
      }
    }
  }
  return;
}


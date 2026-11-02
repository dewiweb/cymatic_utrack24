// rea decompile_all
// name: CDialogImpl::ProcessMouseClick
// address: 0x100e04a6
// body: available
// range: 0x100e04a6-0x100e0683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CDialogImpl::ProcessMouseClick(struct tagPOINT)
   
   Library: Visual Studio 2010 Release */

int __thiscall CDialogImpl::ProcessMouseClick(CDialogImpl *this,tagPOINT param_1)

{
  POINT pt;
  BOOL BVar1;
  MENUAREA_TYPE MVar2;
  CObject *pCVar3;
  int iVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CObject *pCVar7;
  LONG local_18;
  LONG local_14;
  tagPOINT local_10;
  CDialogImpl *local_8;
  
  if (DAT_10166e54 != 0) {
    return 0;
  }
  if (DAT_1016843c == (CMFCPopupMenu *)0x0) {
    return 0;
  }
  local_8 = this;
  BVar1 = IsWindow(*(HWND *)(DAT_1016843c + 0x20));
  if (BVar1 == 0) {
    return 0;
  }
  local_10.x = param_1.x;
  local_10.y = param_1.y;
  MVar2 = CMFCPopupMenu::CheckArea(DAT_1016843c,(CPoint *)&local_10);
  if (MVar2 != 4) {
    if ((MVar2 != 1) && (MVar2 != 2)) {
      return 0;
    }
    SendMessageW(*(HWND *)(DAT_1016843c + 0x20),0x10,0,0);
    pCVar6 = *(CWnd **)(this + 4);
LAB_100e067a:
    CWnd::SetFocus(pCVar6);
    return 1;
  }
  iVar4 = *(int *)(DAT_1016843c + 0x148);
  if ((iVar4 != 0) && (pCVar7 = *(CObject **)(iVar4 + 0x6c), pCVar7 != (CObject *)0x0)) {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_1012f74f_1_10161b40,pCVar7)
    ;
    local_10.x = param_1.x;
    local_10.y = param_1.y;
    ScreenToClient(*(HWND *)(pCVar7 + 0x20),&local_10);
    pt.y = local_10.y;
    pt.x = local_10.x;
    BVar1 = PtInRect((RECT *)(iVar4 + 0x54),pt);
    if (BVar1 != 0) {
      if (pCVar3 != (CObject *)0x0) {
        return 1;
      }
      iVar4 = (**(code **)(*(int *)DAT_1016843c + 0x1c4))();
      if (iVar4 != 0) {
        return 1;
      }
      SendMessageW(*(HWND *)(DAT_1016843c + 0x20),0x10,0,0);
      return 1;
    }
    if (pCVar3 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar3 + 0x43c))();
      pHVar5 = GetParent(*(HWND *)(pCVar3 + 0x20));
      pCVar6 = CWnd::FromHandle(pHVar5);
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar6);
      if (pCVar7 != (CObject *)0x0) {
        local_18 = param_1.x;
        local_14 = param_1.y;
        MVar2 = CMFCPopupMenu::CheckArea((CMFCPopupMenu *)pCVar7,(CPoint *)&local_18);
        if (MVar2 == 0) {
          return 0;
        }
        if (0 < (int)MVar2) {
          if ((int)MVar2 < 3) {
            SendMessageW(*(HWND *)(pCVar7 + 0x20),0x10,0,0);
            pCVar6 = *(CWnd **)(local_8 + 4);
            goto LAB_100e067a;
          }
          if (MVar2 == 3) {
            return 0;
          }
          if (MVar2 == 5) {
            return 0;
          }
        }
      }
    }
  }
  iVar4 = (**(code **)(*(int *)DAT_1016843c + 0x1c4))();
  if (iVar4 == 0) {
    SendMessageW(*(HWND *)(DAT_1016843c + 0x20),0x10,0,0);
    pHVar5 = GetFocus();
    pCVar6 = CWnd::FromHandle(pHVar5);
    if ((pCVar6 != (CWnd *)0x0) &&
       (iVar4 = CObject::IsKindOf((CObject *)pCVar6,(CRuntimeClass *)&PTR_s_CMFCToolBar_10160470),
       iVar4 != 0)) {
      CWnd::SetFocus(*(CWnd **)(local_8 + 4));
    }
  }
  return 0;
}


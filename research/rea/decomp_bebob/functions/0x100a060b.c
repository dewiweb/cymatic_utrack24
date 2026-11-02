// rea decompile_all
// name: CMFCPopupMenuBar::FindDestintationToolBar
// address: 0x100a060b
// body: available
// range: 0x100a060b-0x100a0714 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCToolBar * __thiscall CMFCPopupMenuBar::FindDestintationToolBar(class CPoint)
   
   Library: Visual Studio 2010 Release */

CMFCToolBar * __thiscall
CMFCPopupMenuBar::FindDestintationToolBar(CMFCPopupMenuBar *this,LONG param_2,LONG param_3)

{
  POINT pt;
  POINT pt_00;
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *this_00;
  int iVar3;
  BOOL BVar4;
  CMFCPopupMenu *pCVar5;
  CMFCToolBar *pCVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  ScreenToClient(*(HWND *)(this + 0x20),(LPPOINT)&param_2);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  pHVar1 = GetParent(*(HWND *)(this + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar2);
  if (this_00 != (CObject *)0x0) {
    do {
      pCVar5 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)this_00);
      if (pCVar5 == (CMFCPopupMenu *)0x0) {
        pCVar6 = CMFCPopupMenu::GetParentToolBar((CMFCPopupMenu *)this_00);
        if (pCVar6 != (CMFCToolBar *)0x0) {
          GetClientRect(*(HWND *)(pCVar6 + 0x20),&local_18);
          MapWindowPoints(*(HWND *)(pCVar6 + 0x20),*(HWND *)(this + 0x20),(LPPOINT)&local_18,2);
          pt_00.y = param_3;
          pt_00.x = param_2;
          PtInRect(&local_18,pt_00);
        }
        break;
      }
      iVar3 = (**(code **)(*(int *)pCVar5 + 0x1c0))();
      GetClientRect(*(HWND *)(iVar3 + 0x20),&local_18);
      MapWindowPoints(*(HWND *)(iVar3 + 0x20),*(HWND *)(this + 0x20),(LPPOINT)&local_18,2);
      pt.y = param_3;
      pt.x = param_2;
      BVar4 = PtInRect(&local_18,pt);
      this_00 = (CObject *)pCVar5;
    } while (BVar4 == 0);
  }
  pCVar6 = (CMFCToolBar *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar6;
}


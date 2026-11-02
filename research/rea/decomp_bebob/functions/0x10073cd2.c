// rea decompile_all
// name: CMFCTabCtrl::OnSetCursor
// address: 0x10073cd2
// body: available
// range: 0x10073cd2-0x10073da1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCTabCtrl::OnSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCTabCtrl::OnSetCursor(CMFCTabCtrl *this,CWnd *param_1,uint param_2,uint param_3)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  int iVar2;
  HCURSOR hCursor;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if ((*(int *)(this + 0x204) == 0) || (BVar1 = IsRectEmpty((RECT *)(this + 0x270)), BVar1 != 0)) {
LAB_10073d41:
    BVar1 = IsRectEmpty((RECT *)(this + 0x2b0));
    if (BVar1 == 0) {
      local_c.x = 0;
      local_c.y = 0;
      GetCursorPos(&local_c);
      ScreenToClient(*(HWND *)(this + 0x20),&local_c);
      pt_00.y = local_c.y;
      pt_00.x = local_c.x;
      BVar1 = PtInRect((RECT *)(this + 0x2b0),pt_00);
      if (BVar1 != 0) {
        hCursor = DAT_10166b88;
        if (*(int *)(this + 0x27e4) != 1) {
          hCursor = DAT_10166b8c;
        }
        goto LAB_10073d36;
      }
    }
    iVar2 = CWnd::Default((CWnd *)this);
  }
  else {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    ScreenToClient(*(HWND *)(this + 0x20),&local_c);
    pt.y = local_c.y;
    pt.x = local_c.x;
    BVar1 = PtInRect((RECT *)(this + 0x270),pt);
    hCursor = DAT_10166b88;
    if (BVar1 == 0) goto LAB_10073d41;
LAB_10073d36:
    SetCursor(hCursor);
    iVar2 = 1;
  }
  return iVar2;
}


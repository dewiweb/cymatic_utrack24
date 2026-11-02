// rea decompile_all
// name: CMFCPopupMenuBar::OnLButtonDown
// address: 0x100a0ed1
// body: available
// range: 0x100a0ed1-0x100a0fa0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenuBar::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPopupMenuBar::OnLButtonDown(CMFCPopupMenuBar *this,WPARAM param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  BOOL BVar1;
  CMFCToolBar *pCVar2;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(this + 0xce8) = 0;
  *(undefined4 *)(this + 0xcfc) = 1;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  if (((DAT_10166e54 == 0) &&
      (pt.y = param_4, pt.x = param_3, BVar1 = PtInRect(&local_18,pt), BVar1 == 0)) &&
     (pCVar2 = FindDestintationToolBar(this,param_3,param_4), pCVar2 != (CMFCToolBar *)0x0)) {
    local_20.x = param_3;
    local_20.y = param_4;
    MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(pCVar2 + 0x20),&local_20,1);
    SendMessageW(*(HWND *)(pCVar2 + 0x20),0x201,param_1,
                 CONCAT22((undefined2)local_20.y,(undefined2)local_20.x));
  }
  CMFCToolBar::OnLButtonDown((CMFCToolBar *)this,param_1,param_3,param_4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


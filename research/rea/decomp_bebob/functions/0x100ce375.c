// rea decompile_all
// name: CMFCSpinButtonCtrl::OnMouseMove
// address: 0x100ce375
// body: available
// range: 0x100ce375-0x100ce482 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCSpinButtonCtrl::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCSpinButtonCtrl::OnMouseMove(CMFCSpinButtonCtrl *this,byte param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  RECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_3c = *(int *)(this + 0x7c);
  local_40 = *(int *)(this + 0x80);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  local_28.left = local_18.left;
  local_28.top = local_18.top;
  local_28.right = local_18.right;
  local_38.left = local_18.left;
  local_38.right = local_18.right;
  local_38.top = (local_18.top + local_18.bottom) / 2;
  local_38.bottom = local_18.bottom;
  pt.y = param_4;
  pt.x = param_3;
  local_28.bottom = local_38.top;
  BVar1 = PtInRect(&local_28,pt);
  *(BOOL *)(this + 0x7c) = BVar1;
  pt_00.y = param_4;
  pt_00.x = param_3;
  BVar1 = PtInRect(&local_38,pt_00);
  *(BOOL *)(this + 0x80) = BVar1;
  if ((param_1 & 1) != 0) {
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x7c);
    *(BOOL *)(this + 0x78) = BVar1;
  }
  CWnd::Default((CWnd *)this);
  if ((local_3c != *(int *)(this + 0x7c)) || (local_40 != *(int *)(this + 0x80))) {
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  if (*(int *)(this + 0x84) == 0) {
    local_48 = *(undefined4 *)(this + 0x20);
    local_44 = 0xffffffff;
    *(undefined4 *)(this + 0x84) = 1;
    local_50 = 0x10;
    local_4c = 2;
    AFXTrackMouse((tagTRACKMOUSEEVENT *)&local_50);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


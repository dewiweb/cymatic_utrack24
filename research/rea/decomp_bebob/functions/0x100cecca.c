// rea decompile_all
// name: CMFCHeaderCtrl::OnMouseMove
// address: 0x100cecca
// body: available
// range: 0x100cecca-0x100ced86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCHeaderCtrl::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCHeaderCtrl::OnMouseMove(CMFCHeaderCtrl *this,byte param_1,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  LRESULT LVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((param_1 & 1) == 0) {
    local_18 = param_3;
    iVar1 = *(int *)(this + 0xa4);
    local_14 = param_4;
    LVar2 = SendMessageW(*(HWND *)(this + 0x20),0x1206,0,(LPARAM)&local_18);
    *(LRESULT *)(this + 0xa4) = LVar2;
    if ((local_10 & 2) == 0) {
      *(undefined4 *)(this + 0xa4) = 0xffffffff;
    }
    if (*(int *)(this + 0x9c) == 0) {
      local_20 = *(undefined4 *)(this + 0x20);
      local_1c = 0xffffffff;
      *(undefined4 *)(this + 0x9c) = 1;
      local_28 = 0x10;
      local_24 = 2;
      AFXTrackMouse((tagTRACKMOUSEEVENT *)&local_28);
    }
    if (iVar1 != *(int *)(this + 0xa4)) {
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    }
  }
  CWnd::Default((CWnd *)this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


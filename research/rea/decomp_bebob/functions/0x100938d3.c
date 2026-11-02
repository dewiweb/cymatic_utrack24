// rea decompile_all
// name: CMFCBaseTabCtrl::EnterDragMode
// address: 0x100938d3
// body: available
// range: 0x100938d3-0x10093962 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCBaseTabCtrl::EnterDragMode(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCBaseTabCtrl::EnterDragMode(CMFCBaseTabCtrl *this)

{
  HWND pHVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(this + 0x148) = 1;
  pHVar1 = SetCapture(*(HWND *)(this + 0x20));
  CWnd::FromHandle(pHVar1);
  GetCursorPos((LPPOINT)(this + 0x14c));
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  (**(code **)(*(int *)this + 0x1b4))(*(undefined4 *)(this + 0xa0),&local_18);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(this + 0xa0);
  CWnd::ClientToScreen((CWnd *)this,&local_18);
  *(LONG *)(this + 0x154) = ((LPPOINT)(this + 0x14c))->x - local_18.left;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


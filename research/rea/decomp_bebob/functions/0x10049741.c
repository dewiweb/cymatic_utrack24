// rea decompile_all
// name: CMFCPropertyGridCtrl::SetScrollSizes
// address: 0x10049741
// body: available
// range: 0x10049741-0x1004985c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::SetScrollSizes(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPropertyGridCtrl::SetScrollSizes(CMFCPropertyGridCtrl *this)

{
  int iVar1;
  UINT wArrows;
  tagSCROLLINFO local_24;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  wArrows = 0;
  if (((CWnd *)(this + 0x244) != (CWnd *)0x0) && (*(int *)(this + 0x264) != 0)) {
    if (*(int *)(this + 0x314) == 0) {
      *(undefined4 *)(this + 0x324) = 0;
      *(undefined4 *)(this + 800) = 0;
      *(undefined4 *)(this + 0x31c) = 0;
    }
    else {
      *(int *)(this + 0x324) =
           (*(int *)(this + 0x2f4) - *(int *)(this + 0x2ec)) / *(int *)(this + 0x314) + -1;
      iVar1 = GetTotalItems(this,0);
      *(int *)(this + 800) = iVar1;
      if (iVar1 <= *(int *)(this + 0x324)) {
        *(undefined4 *)(this + 0x324) = 0;
        *(undefined4 *)(this + 800) = 0;
      }
      iVar1 = *(int *)(this + 0x31c);
      if (*(int *)(this + 800) <= *(int *)(this + 0x31c)) {
        iVar1 = *(int *)(this + 800);
      }
      *(int *)(this + 0x31c) = iVar1;
    }
    _memset(&local_24,0,0x1c);
    local_24.nMax = *(int *)(this + 800);
    local_24.nPage = *(UINT *)(this + 0x324);
    local_24.nPos = *(int *)(this + 0x31c);
    local_24.cbSize = 0x1c;
    local_24.fMask = 7;
    local_24.nMin = 0;
    CWnd::SetScrollInfo((CWnd *)this,1,&local_24,1);
    if (*(int *)(this + 800) < 1) {
      wArrows = 3;
    }
    EnableScrollBar(*(HWND *)(this + 0x264),2,wArrows);
    CWnd::EnableWindow((CWnd *)(this + 0x244),1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


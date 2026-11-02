// rea decompile_all
// name: CMFCTabCtrl::SynchronizeScrollBar
// address: 0x1007572b
// body: available
// range: 0x1007572b-0x100757f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCTabCtrl::SynchronizeScrollBar(struct tagSCROLLINFO *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCTabCtrl::SynchronizeScrollBar(CMFCTabCtrl *this,tagSCROLLINFO *param_1)

{
  CWnd *this_00;
  int iVar1;
  tagSCROLLINFO *ptVar2;
  tagSCROLLINFO local_24;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x214) != 0) {
    _memset(&local_24,0,0x1c);
    local_24.cbSize = 0x1c;
    local_24.fMask = 0x17;
    this_00 = (CWnd *)(**(code **)(*(int *)this + 0x20c))();
    if (param_1 == (tagSCROLLINFO *)0x0) {
      if ((this_00 != (CWnd *)0x0) &&
         ((iVar1 = CWnd::GetScrollInfo(this_00,0,&local_24,0x17), iVar1 == 0 ||
          (local_24.nMax <= (int)(local_24.nPage + local_24.nMin))))) {
        EnableScrollBar(*(HWND *)(this + 0x300),2,3);
        goto LAB_100757b1;
      }
    }
    else {
      ptVar2 = &local_24;
      for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
        ptVar2->cbSize = param_1->cbSize;
        param_1 = (tagSCROLLINFO *)&param_1->fMask;
        ptVar2 = (tagSCROLLINFO *)&ptVar2->fMask;
      }
    }
    EnableScrollBar(*(HWND *)(this + 0x300),2,0);
    CWnd::SetScrollInfo((CWnd *)(this + 0x2e0),2,&local_24,1);
    HideActiveWindowHorzScrollBar(this);
  }
LAB_100757b1:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}


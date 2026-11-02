// rea decompile_all
// name: CMDIClientAreaWnd::OnDragComplete
// address: 0x100639c0
// body: available
// range: 0x100639c0-0x10063ab8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMDIClientAreaWnd::OnDragComplete(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CMDIClientAreaWnd::OnDragComplete(CMDIClientAreaWnd *this,uint param_1,long param_2)

{
  CMFCTabCtrl *this_00;
  long lVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (((*(int *)(this + 0x2908) != 0) && (*(int *)(this + 0x28dc) != 0)) &&
     (this_00 = GetNextTabWnd(this,(CMFCTabCtrl *)param_1,0), this_00 != (CMFCTabCtrl *)0x0)) {
    CWnd::ScreenToClient((CWnd *)this,(tagRECT *)param_2);
    CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,-1,-1,*(int *)(param_2 + 8) - *(int *)param_2,
                       *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4),0x16);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this_00 + 0x20),&local_18);
    CWnd::ScreenToClient((CWnd *)this,&local_18);
    if (*(int *)(this + 0x2968) == 1) {
      local_18.left = *(int *)(param_2 + 8);
    }
    else {
      local_18.top = *(int *)(param_2 + 0xc);
    }
    CWnd::SetWindowPos((CWnd *)this_00,(CWnd *)0x0,local_18.left,local_18.top,
                       local_18.right - local_18.left,local_18.bottom - local_18.top,0x14);
    AdjustMDIChildren(this,(CMFCTabCtrl *)param_1);
    AdjustMDIChildren(this,this_00);
  }
  lVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar1;
}


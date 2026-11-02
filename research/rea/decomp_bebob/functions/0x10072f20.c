// rea decompile_all
// name: CMFCTabCtrl::AdjustWndScroll
// address: 0x10072f20
// body: available
// range: 0x10072f20-0x10073025 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTabCtrl::AdjustWndScroll(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTabCtrl::AdjustWndScroll(CMFCTabCtrl *this)

{
  int iVar1;
  int iVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x214) != 0) {
    local_18.left = *(LONG *)(this + 0x290);
    local_18.top = *(LONG *)(this + 0x294);
    local_18.right = *(LONG *)(this + 0x298);
    local_18.bottom = *(LONG *)(this + 0x29c);
    iVar1 = (**(code **)(*(int *)this + 0x1a0))();
    if (((*(int *)(this + 0x10c) == 0) || (1 < iVar1)) &&
       ((*(int *)(this + 0x238) == 0 || (iVar1 != 0)))) {
      iVar1 = *(int *)(this + 0x268);
      iVar2 = GetSystemMetrics(0x15);
      if (iVar1 < iVar2 * 2) {
        SetRectEmpty(&local_18);
        SetRectEmpty((LPRECT)(this + 0x270));
      }
      else {
        local_18.right = *(LONG *)(this + 0x254);
        local_18.top = local_18.top + 1;
        local_18.bottom = local_18.bottom + -2;
        local_18.left = local_18.right - iVar1;
        *(LONG *)(this + 0x270) = local_18.left;
        *(LONG *)(this + 0x274) = local_18.top;
        *(LONG *)(this + 0x278) = local_18.right;
        *(LONG *)(this + 0x27c) = local_18.bottom;
        *(int *)(this + 0x274) = *(int *)(this + 0x274) + 1;
        *(LONG *)(this + 0x278) = local_18.left;
        *(LONG *)(this + 0x270) = local_18.left + -5;
        *(LONG *)(this + 0x298) = local_18.left + -5;
      }
    }
    else {
      local_18.bottom = local_18.bottom + -2;
      SetRectEmpty((LPRECT)(this + 0x270));
    }
    CWnd::SetWindowPos((CWnd *)(this + 0x2e0),(CWnd *)0x0,local_18.left,local_18.top,
                       local_18.right - local_18.left,local_18.bottom - local_18.top,0x114);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


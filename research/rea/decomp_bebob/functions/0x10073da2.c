// rea decompile_all
// name: CMFCTabCtrl::StopResize
// address: 0x10073da2
// body: available
// range: 0x10073da2-0x10073e95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCTabCtrl::StopResize(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTabCtrl::StopResize(CMFCTabCtrl *this,int param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  LONG local_38;
  LONG LStack_34;
  LONG LStack_30;
  LONG LStack_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x250) != 0) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    SetRectEmpty(&local_28);
    (**(code **)(*(int *)this + 0x2ec))(&local_28,this + 0x2c0);
    *(undefined4 *)(this + 0x250) = 0;
    ReleaseCapture();
    if (param_1 == 0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      if (*(int *)(this + 0x27e4) == 1) {
        local_18.right = *(LONG *)(this + 0x2c8);
      }
      else if (*(int *)(this + 0x27e4) == 2) {
        local_18.bottom = *(LONG *)(this + 0x2cc);
      }
      local_38 = local_18.left;
      LStack_34 = local_18.top;
      LStack_30 = local_18.right;
      LStack_2c = local_18.bottom;
      pHVar1 = GetParent(*(HWND *)(this + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar1);
      SendMessageW(*(HWND *)(pCVar2 + 0x20),DAT_101687bc,(WPARAM)this,(LPARAM)&local_38);
    }
    SetRectEmpty((LPRECT)(this + 0x2c0));
    SetRectEmpty((LPRECT)(this + 0x2d0));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


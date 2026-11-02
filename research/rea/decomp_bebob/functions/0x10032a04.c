// rea decompile_all
// name: CMFCVisualManager::OnErasePopupWindowButton
// address: 0x10032a04
// body: available
// range: 0x10032a04-0x10032ab4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnErasePopupWindowButton(class CDC *,class
   CRect,class CMFCDesktopAlertWndButton *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCVisualManager::OnErasePopupWindowButton(CMFCVisualManager *this,int param_1)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int in_stack_00000018;
  tagRECT local_18;
  uint local_8;
  
  iVar1 = in_stack_00000018;
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_stack_00000018 + 0x750) == 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    pHVar2 = GetParent(*(HWND *)(in_stack_00000018 + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    GetClientRect(*(HWND *)(pCVar3 + 0x20),&local_18);
    pHVar2 = GetParent(*(HWND *)(iVar1 + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    MapWindowPoints(*(HWND *)(pCVar3 + 0x20),*(HWND *)(iVar1 + 0x20),(LPPOINT)&local_18,2);
    (**(code **)(*(int *)this + 0x1d8))
              (param_1,local_18.left,local_18.top,local_18.right,local_18.bottom);
  }
  else {
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,DAT_10166b34);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


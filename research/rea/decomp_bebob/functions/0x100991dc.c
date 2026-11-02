// rea decompile_all
// name: CToolTipCtrl::UpdateTipText
// address: 0x100991dc
// body: available
// range: 0x100991dc-0x10099258 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10099206 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CToolTipCtrl::UpdateTipText(wchar_t const *,class CWnd *,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CToolTipCtrl::UpdateTipText(CToolTipCtrl *this,wchar_t *param_1,CWnd *param_2,uint param_3)

{
  BOOL BVar1;
  size_t sVar2;
  tagTOOLINFOW local_38 [36];
  wchar_t *local_14;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  BVar1 = IsWindow(*(HWND *)(this + 0x20));
  if ((BVar1 != 0) && (param_2 != (CWnd *)0x0)) {
    if (param_1 != (wchar_t *)0xffffffff) {
      sVar2 = _wcslen(param_1);
      if (0x400 < sVar2) goto LAB_10099206;
    }
    FillInToolInfo(this,local_38,param_2,param_3);
    local_14 = param_1;
    SendMessageW(*(HWND *)(this + 0x20),0x439,0,(LPARAM)local_38);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_10099206:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


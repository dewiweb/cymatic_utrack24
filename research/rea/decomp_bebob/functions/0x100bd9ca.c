// rea decompile_all
// name: OnCreate
// address: 0x100bd9ca
// body: available
// range: 0x100bd9ca-0x100bda8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCCaptionBar::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCCaptionBar::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

void __fastcall OnCreate(CWnd *param_1)

{
  CWnd *pCVar1;
  CToolTipCtrl *pCVar2;
  long lVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  lVar3 = CWnd::Default(param_1);
  if (lVar3 != -1) {
    pCVar1 = param_1 + 0x2b4;
    CTooltipManager::CreateToolTip((CToolTipCtrl **)pCVar1,param_1,0x400);
    pCVar2 = *(CToolTipCtrl **)pCVar1;
    if ((pCVar2 != (CToolTipCtrl *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      SendMessageW(*(HWND *)(pCVar2 + 0x20),0x418,0,0x280);
      CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,param_1,(wchar_t *)0xffffffff,&local_18,1);
      CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,param_1,(wchar_t *)0xffffffff,&local_18,2);
      CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,param_1,(wchar_t *)0xffffffff,&local_18,3);
      CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,param_1,(wchar_t *)0xffffffff,&local_18,4);
    }
    CWnd::SetWindowTextW(param_1,L"Caption Bar");
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


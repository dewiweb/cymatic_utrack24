// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnUpdateToolTips
// address: 0x100a3671
// body: available
// range: 0x100a3671-0x100a3709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMFCRibbonPanelMenuBar::OnUpdateToolTips(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall
CMFCRibbonPanelMenuBar::OnUpdateToolTips(CMFCRibbonPanelMenuBar *this,uint param_1,long param_2)

{
  CMFCRibbonPanelMenuBar *pCVar1;
  uint uVar2;
  long lVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (((param_1 & 0x200) != 0) && ((*(int *)(this + 0xd70) == 0 || (*(int *)(this + 0xd68) != 0))))
  {
    pCVar1 = this + 0xc94;
    CTooltipManager::CreateToolTip((CToolTipCtrl **)pCVar1,(CWnd *)this,0x200);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    SendMessageW(*(HWND *)(*(CToolTipCtrl **)pCVar1 + 0x20),0x418,0,0x280);
    uVar2 = CWnd::GetDlgCtrlID((CWnd *)this);
    CToolTipCtrl::AddTool
              (*(CToolTipCtrl **)pCVar1,(CWnd *)this,(wchar_t *)0xffffffff,&local_18,uVar2);
  }
  lVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar3;
}


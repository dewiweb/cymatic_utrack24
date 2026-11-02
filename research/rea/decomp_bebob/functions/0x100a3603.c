// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnSize
// address: 0x100a3603
// body: available
// range: 0x100a3603-0x100a3670 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnSize(CMFCRibbonPanelMenuBar *this,uint param_1,int param_2,int param_3)

{
  uint uVar1;
  tagRECT *ptVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CMFCToolBar::OnSize((CMFCToolBar *)this,param_1,param_2,param_3);
  if ((*(int *)(this + 0xc94) != 0) && (*(int *)(*(int *)(this + 0xc94) + 0x20) != 0)) {
    local_18.left = 0;
    local_18.top = 0;
    ptVar2 = &local_18;
    local_18.right = param_2;
    local_18.bottom = param_3;
    uVar1 = CWnd::GetDlgCtrlID((CWnd *)this);
    CToolTipCtrl::SetToolRect(*(CToolTipCtrl **)(this + 0xc94),(CWnd *)this,uVar1,ptVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


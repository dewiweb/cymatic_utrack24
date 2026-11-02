// rea decompile_all
// name: CBasePane::OnPaneContextMenu
// address: 0x1006bfb0
// body: available
// range: 0x1006bfb0-0x1006c00f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CBasePane::OnPaneContextMenu(class CWnd *,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CBasePane::OnPaneContextMenu(CBasePane *this,int param_1,undefined4 param_3,undefined4 param_4)

{
  WPARAM wParam;
  LRESULT LVar1;
  CFrameWnd *pCVar2;
  CDockingManager *pCVar3;
  
  if (this == (CBasePane *)0x0) {
    wParam = 0;
  }
  else {
    wParam = *(WPARAM *)(this + 0x20);
  }
  LVar1 = SendMessageW(*(HWND *)(param_1 + 0x20),DAT_10166e90,wParam,
                       CONCAT22((undefined2)param_4,(undefined2)param_3));
  if (LVar1 != 0) {
    pCVar2 = CWnd::GetParentFrame((CWnd *)this);
    pCVar3 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,(CWnd *)pCVar2);
    if (pCVar3 != (CDockingManager *)0x0) {
      CDockingManager::OnPaneContextMenu(pCVar3,param_3,param_4);
    }
  }
  return;
}


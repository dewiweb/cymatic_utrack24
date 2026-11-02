// rea decompile_all
// name: OnSelchangeCurrentKeysList
// address: 0x100e4675
// body: available
// range: 0x100e4675-0x100e46ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e46b9 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CMFCRibbonKeyboardCustomizeDialog::OnSelchangeCurrentKeysList(void)
    protected: void __thiscall CMFCToolBarsKeyboardPropertyPage::OnSelchangeCurrentKeysList(void)
   
   Library: Visual Studio 2010 Release */

void __fastcall OnSelchangeCurrentKeysList(int param_1)

{
  WPARAM wParam;
  LRESULT LVar1;
  int iVar2;
  
  wParam = SendMessageW(*(HWND *)(param_1 + 0x324),0x188,0,0);
  iVar2 = 0;
  if (wParam == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x4e4) = 0;
  }
  else {
    LVar1 = SendMessageW(*(HWND *)(param_1 + 0x324),0x199,wParam,0);
    *(LRESULT *)(param_1 + 0x4e4) = LVar1;
    if (LVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar2 = 1;
  }
  CWnd::EnableWindow((CWnd *)(param_1 + 0x290),iVar2);
  return;
}


// rea decompile_all
// name: CMFCToolBarButtonsListButton::AddButton
// address: 0x100e0009
// body: available
// range: 0x100e0009-0x100e0054 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e001b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCToolBarButtonsListButton::AddButton(class CMFCToolBarButton *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarButtonsListButton::AddButton
          (CMFCToolBarButtonsListButton *this,CMFCToolBarButton *param_1)

{
  HWND hWnd;
  
  if (*(int *)(this + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  CObList::AddTail((CObList *)(this + 0x74),(CObject *)param_1);
  (**(code **)(*(int *)param_1 + 0x28))(this);
  FUN_100dfae3((CWnd *)this);
  hWnd = (HWND)(**(code **)(*(int *)param_1 + 0x38))();
  if (hWnd != (HWND)0x0) {
    EnableWindow(hWnd,0);
  }
  return;
}


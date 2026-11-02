// rea decompile_all
// name: CWnd::SetWindowTextW
// address: 0x10014c2a
// body: available
// range: 0x10014c2a-0x10014c70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10014c36 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWnd::SetWindowTextW(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CWnd::SetWindowTextW(CWnd *this,wchar_t *param_1)

{
  BOOL BVar1;
  
  if (this == (CWnd *)0x0) {
LAB_10014c36:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  BVar1 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar1 == 0) {
    if (*(int *)(this + 0x6c) == 0) goto LAB_10014c36;
  }
  else if (*(int *)(this + 0x6c) == 0) {
    ::SetWindowTextW(*(HWND *)(this + 0x20),param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10014c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 0x6c) + 0x88))();
  return;
}


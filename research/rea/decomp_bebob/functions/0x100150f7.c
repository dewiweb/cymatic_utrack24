// rea decompile_all
// name: CDataExchange::PrepareCtrl
// address: 0x100150f7
// body: available
// range: 0x100150f7-0x10015137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015123 to 0x1000904c FUN_1000904c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct HWND__ * __thiscall CDataExchange::PrepareCtrl(int)
   
   Library: Visual Studio 2010 Release */

HWND__ * __thiscall CDataExchange::PrepareCtrl(CDataExchange *this,int param_1)

{
  int iVar1;
  COleControlSite *pCVar2;
  
  iVar1 = param_1;
  CWnd::GetDlgItem(*(CWnd **)(this + 4),param_1,(HWND__ **)&param_1);
  if (param_1 == 0) {
    pCVar2 = CWnd::GetOleControlSite(*(CWnd **)(this + 4),iVar1);
    if (pCVar2 == (COleControlSite *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1000904c();
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)(this + 8) = iVar1;
  return (HWND__ *)param_1;
}


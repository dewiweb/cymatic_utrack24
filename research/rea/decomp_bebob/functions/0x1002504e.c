// rea decompile_all
// name: FID_conflict:HtmlHelpA
// address: 0x1002504e
// body: available
// range: 0x1002504e-0x10025070 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002506c to 0x10014266 FID_conflict:HtmlHelpA (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    protected: virtual void __thiscall CFrameWndEx::HtmlHelpA(unsigned long,unsigned int)
    protected: virtual void __thiscall CMDIFrameWndEx::HtmlHelpA(unsigned long,unsigned int)
    protected: virtual void __thiscall COleDocIPFrameWndEx::HtmlHelpA(unsigned long,unsigned int)
    protected: virtual void __thiscall COleIPFrameWndEx::HtmlHelpA(unsigned long,unsigned int)
     8 names - too many to list
   
   Library: Visual Studio 2010 Release */

void __thiscall FID_conflict_HtmlHelpA(void *this,int param_1,undefined4 param_2)

{
  if ((param_1 == 0) && (*(int *)((int)this + 0x114) != 0)) {
    OnContextHelp(this);
    return;
  }
  FID_conflict_HtmlHelpA(this,param_1,param_2);
  return;
}


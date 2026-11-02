// rea decompile_all
// name: FID_conflict:WinHelpA
// address: 0x100231b9
// body: available
// range: 0x100231b9-0x100231db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100231d7 to 0x100141f1 FID_conflict:WinHelpW (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: virtual void __thiscall CFrameWndEx::WinHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall CMDIFrameWndEx::WinHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall COleDocIPFrameWndEx::WinHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall COleIPFrameWndEx::WinHelpA(unsigned long,unsigned int)
     8 names - too many to list
   
   Library: Visual Studio 2010 Release */

BOOL FID_conflict_WinHelpA(HWND hWndMain,LPCSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  BOOL BVar1;
  CFrameWnd *in_ECX;
  
  if ((hWndMain == (HWND)0x0) && (*(int *)(in_ECX + 0x124) != 0)) {
    BVar1 = OnContextHelp(in_ECX);
    return BVar1;
  }
  BVar1 = FID_conflict_WinHelpW(hWndMain,(LPCWSTR)lpszHelp,uCommand,dwData);
  return BVar1;
}


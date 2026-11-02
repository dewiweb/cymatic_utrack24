// rea decompile_all
// name: FID_conflict:DefWindowProcA
// address: 0x1000ecc0
// body: available
// range: 0x1000ecc0-0x1000ed08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    protected: virtual long __thiscall CWnd::DefWindowProcA(unsigned int,unsigned int,long)
    protected: virtual long __thiscall CWnd::DefWindowProcW(unsigned int,unsigned int,long)
   
   Library: Visual Studio 2010 Release */

LRESULT FID_conflict_DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  int *piVar1;
  LRESULT LVar2;
  WNDPROC lpPrevWndFunc;
  int *in_ECX;
  
  lpPrevWndFunc = (WNDPROC)in_ECX[0x17];
  if (lpPrevWndFunc == (WNDPROC)0x0) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0xfc))();
    lpPrevWndFunc = (WNDPROC)*piVar1;
    if (lpPrevWndFunc == (WNDPROC)0x0) {
      LVar2 = DefWindowProcW((HWND)in_ECX[8],(UINT)hWnd,Msg,wParam);
      return LVar2;
    }
  }
  LVar2 = CallWindowProcW(lpPrevWndFunc,(HWND)in_ECX[8],(UINT)hWnd,Msg,wParam);
  return LVar2;
}


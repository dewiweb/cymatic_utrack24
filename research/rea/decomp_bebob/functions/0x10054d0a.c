// rea decompile_all
// name: CFrameWnd::NotifyFloatingWindows
// address: 0x10054d0a
// body: available
// range: 0x10054d0a-0x10054dc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10054d31 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CFrameWnd::NotifyFloatingWindows(unsigned long)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWnd::NotifyFloatingWindows(CFrameWnd *this,ulong param_1)

{
  ulong uVar1;
  CFrameWnd *this_00;
  int iVar2;
  HWND hWnd;
  UINT uCmd;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  this_00 = this;
  if ((uVar1 & 0x40000000) == 0) {
    this_00 = CWnd::GetTopLevelFrame((CWnd *)this);
  }
  if (this_00 != (CFrameWnd *)0x0) {
    if ((param_1 & 0xc) != 0) {
      iVar2 = CWnd::IsWindowEnabled((CWnd *)this_00);
      if ((((~(param_1 >> 3) & 1) == 0) || (iVar2 == 0)) || (this_00 == this)) {
        SendMessageW(*(HWND *)(this_00 + 0x20),0x86,0,0);
      }
      else {
        *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 0x200;
        SendMessageW(*(HWND *)(this_00 + 0x20),0x86,1,0);
        *(uint *)(this + 0x58) = *(uint *)(this + 0x58) & 0xfffffdff;
      }
    }
    uCmd = 5;
    hWnd = GetDesktopWindow();
    while (hWnd = GetWindow(hWnd,uCmd), hWnd != (HWND)0x0) {
      iVar2 = AfxIsDescendant(*(HWND__ **)(this_00 + 0x20),hWnd);
      if (iVar2 != 0) {
        SendMessageW(hWnd,0x36d,param_1,0);
      }
      uCmd = 2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


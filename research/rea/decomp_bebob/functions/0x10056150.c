// rea decompile_all
// name: CFrameWnd::SetMenu
// address: 0x10056150
// body: available
// range: 0x10056150-0x10056196 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005617b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CFrameWnd::SetMenu(class CMenu *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CFrameWnd::SetMenu(CFrameWnd *this,CMenu *param_1)

{
  HMENU hMenu;
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0xf4) == 1) {
    hMenu = (HMENU)0x0;
    if (param_1 != (CMenu *)0x0) {
      hMenu = *(HMENU *)(param_1 + 4);
    }
    iVar1 = ::SetMenu(*(HWND *)(this + 0x20),hMenu);
  }
  else {
    if (*(int *)(this + 0xf4) != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    uVar2 = 0;
    if (param_1 != (CMenu *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 4);
    }
    *(undefined4 *)(this + 0xf8) = uVar2;
    iVar1 = 1;
  }
  return iVar1;
}


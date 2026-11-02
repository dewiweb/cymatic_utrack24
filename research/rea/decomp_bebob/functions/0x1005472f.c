// rea decompile_all
// name: CFrameWnd::OnUpdateFrameMenu
// address: 0x1005472f
// body: available
// range: 0x1005472f-0x10054781 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::OnUpdateFrameMenu(struct HMENU__ *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWnd::OnUpdateFrameMenu(CFrameWnd *this,HMENU__ *param_1)

{
  int *piVar1;
  
  if (param_1 == (HMENU__ *)0x0) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x168))();
    if (piVar1 != (int *)0x0) {
      param_1 = (HMENU__ *)(**(code **)(*piVar1 + 0xec))();
      if (param_1 != (HMENU)0x0) goto LAB_1005475b;
    }
    param_1 = *(HMENU__ **)(this + 0x7c);
  }
LAB_1005475b:
  if (*(int *)(this + 0xf4) == 1) {
    ::SetMenu(*(HWND *)(this + 0x20),param_1);
  }
  else if (*(int *)(this + 0xf4) == 2) {
    *(HMENU__ **)(this + 0xf8) = param_1;
  }
  return;
}


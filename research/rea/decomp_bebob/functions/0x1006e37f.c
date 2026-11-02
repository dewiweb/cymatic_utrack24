// rea decompile_all
// name: CMFCRibbonBar::DeactivateKeyboardFocus
// address: 0x1006e37f
// body: available
// range: 0x1006e37f-0x1006e402 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCRibbonBar::DeactivateKeyboardFocus(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonBar::DeactivateKeyboardFocus(CMFCRibbonBar *this,int param_1)

{
  int *piVar1;
  CFrameWnd *this_00;
  
  FUN_1006dcdd((int)this);
  *(undefined4 *)(this + 0x2c4) = 0;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x338))();
  if (piVar1 != (int *)0x0) {
    piVar1[0x1c] = 0;
    (**(code **)(*piVar1 + 0x184))(0);
    (**(code **)(*piVar1 + 0x118))();
  }
  if (-1 < *(int *)(this + 0x2c0)) {
    *(undefined4 *)(this + 0x2c0) = 0xffffffff;
    *(undefined4 *)(this + 0x7ac) = 0;
    *(undefined4 *)(this + 0x7b0) = 0;
    this_00 = CWnd::GetParentFrame((CWnd *)this);
    if (param_1 != 0) {
      CWnd::SetFocus((CWnd *)this_00);
    }
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  return;
}


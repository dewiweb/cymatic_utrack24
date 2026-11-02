// rea decompile_all
// name: CPane::EnterDragMode
// address: 0x1008969b
// body: available
// range: 0x1008969b-0x1008973e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CPane::EnterDragMode(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPane::EnterDragMode(CPane *this,int param_1)

{
  int iVar1;
  HWND pHVar2;
  tagPOINT local_c;
  
  local_c.x = 0;
  local_c.y = 0;
  GetCursorPos(&local_c);
  UpdateVirtualRect(this);
  if (param_1 != 0) {
    pHVar2 = *(HWND *)(this + 0x20);
    ((LPPOINT)(this + 0x158))->x = local_c.x;
    *(LONG *)(this + 0x15c) = local_c.y;
    ScreenToClient(pHVar2,(LPPOINT)(this + 0x158));
  }
  if (this[0x160] == (CPane)0x0) {
    iVar1 = (**(code **)(*(int *)this + 0x164))();
    if (iVar1 != 0) {
      pHVar2 = SetCapture(*(HWND *)(this + 0x20));
      CWnd::FromHandle(pHVar2);
      *(LONG *)(this + 0x180) = local_c.x;
      *(LONG *)(this + 0x184) = local_c.y;
      this[0x160] = (CPane)0x1;
      (**(code **)(*(int *)this + 0x30c))(1);
      GetWindowRect(*(HWND *)(this + 0x20),(LPRECT)(this + 0x140));
    }
  }
  return;
}


// rea decompile_all
// name: CPaneFrameWnd::SaveRecentFloatingState
// address: 0x10038e0a
// body: available
// range: 0x10038e0a-0x10038e88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CPaneFrameWnd::SaveRecentFloatingState(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::SaveRecentFloatingState(CPaneFrameWnd *this)

{
  CWnd *pCVar1;
  CObject *pCVar2;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  GetWindowRect(*(HWND *)(this + 0x20),(LPRECT)(this + 0xcc));
  if (*(HWND__ **)(this + 200) != (HWND__ *)0x0) {
    pCVar1 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,(CObject *)pCVar1);
    if (pCVar2 != (CObject *)0x0) {
      local_c.x = 0;
      local_c.y = 0;
      *(LONG *)(pCVar2 + 0x1d8) = ((LPRECT)(this + 0xcc))->left;
      *(undefined4 *)(pCVar2 + 0x1dc) = *(undefined4 *)(this + 0xd0);
      *(undefined4 *)(pCVar2 + 0x1e0) = *(undefined4 *)(this + 0xd4);
      *(undefined4 *)(pCVar2 + 0x1e4) = *(undefined4 *)(this + 0xd8);
      GetCursorPos(&local_c);
      ScreenToClient(*(HWND *)(pCVar2 + 0x20),&local_c);
      *(LONG *)(pCVar2 + 0x158) = local_c.x;
      *(LONG *)(pCVar2 + 0x15c) = local_c.y;
    }
  }
  return;
}


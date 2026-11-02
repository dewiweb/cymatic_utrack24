// rea decompile_all
// name: CMFCPopupMenuBar::DrawDragCursor
// address: 0x1009f898
// body: available
// range: 0x1009f898-0x1009f9a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPopupMenuBar::DrawDragCursor(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenuBar::DrawDragCursor(CMFCPopupMenuBar *this,CDC *param_1)

{
  CPen *pCVar1;
  int iVar2;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar2 = 0;
  if (*(int *)(this + 0xd00) == 0) {
    pCVar1 = CDC::SelectObject(param_1,(CPen *)(this + 0xc78));
    do {
      CDC::MoveTo(param_1,(int)local_c,*(int *)(this + 0xc58));
      CDC::LineTo(param_1,*(int *)(this + 0xc60),
                  (*(int *)(this + 0xc64) - *(int *)(this + 0xc5c)) / 2 + *(int *)(this + 0xc5c) +
                  -1 + iVar2);
      CDC::MoveTo(param_1,(int)local_14,*(int *)(this + 0xc58) + iVar2);
      CDC::LineTo(param_1,*(int *)(this + 0xc58) + iVar2,*(int *)(this + 0xc64) - iVar2);
      CDC::MoveTo(param_1,(int)local_1c,(*(int *)(this + 0xc60) - iVar2) + -1);
      CDC::LineTo(param_1,(*(int *)(this + 0xc60) - iVar2) + -1,*(int *)(this + 0xc64) - iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    CDC::SelectObject(param_1,pCVar1);
  }
  return;
}


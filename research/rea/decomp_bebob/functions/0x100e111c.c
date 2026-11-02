// rea decompile_all
// name: CMFCImagePaintArea::CMFCImagePaintArea
// address: 0x100e111c
// body: available
// range: 0x100e111c-0x100e1220 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e11ae to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCImagePaintArea::CMFCImagePaintArea(class CMFCImageEditorDialog *)
   
   Library: Visual Studio 2010 Release */

CMFCImagePaintArea * __thiscall
CMFCImagePaintArea::CMFCImagePaintArea(CMFCImagePaintArea *this,CMFCImageEditorDialog *param_1)

{
  HDC pHVar1;
  HPEN pHVar2;
  
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  ((LPRECT)(this + 0x74))->left = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  FUN_1001714b((undefined4 *)(this + 0x88));
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined ***)(this + 0xc4) = CPen::vftable;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined ***)(this + 0xcc) = CPen::vftable;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  if (param_1 == (CMFCImageEditorDialog *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  *(CMFCImageEditorDialog **)(this + 0xe4) = param_1;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  SetRectEmpty((LPRECT)(this + 0x74));
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach((CDC *)(this + 0x88),pHVar1);
  *(undefined4 *)(this + 0xe8) = 0;
  SetRectEmpty((LPRECT)(this + 0xd4));
  pHVar2 = CreatePen(0,1,*(COLORREF *)(this + 0x84));
  CMenu::Attach((CMenu *)(this + 0xc4),(HMENU__ *)pHVar2);
  return this;
}


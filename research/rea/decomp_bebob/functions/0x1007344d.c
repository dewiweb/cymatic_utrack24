// rea decompile_all
// name: CMFCTabCtrl::CMFCTabCtrl
// address: 0x1007344d
// body: available
// range: 0x1007344d-0x100736ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCTabCtrl::CMFCTabCtrl(void)
   
   Library: Visual Studio 2010 Release */

CMFCTabCtrl * __thiscall CMFCTabCtrl::CMFCTabCtrl(CMFCTabCtrl *this)

{
  CMFCBaseTabCtrl::CMFCBaseTabCtrl((CMFCBaseTabCtrl *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x27c) = 0;
  *(undefined4 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x284) = 0;
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x28c) = 0;
  *(undefined4 *)(this + 0x290) = 0;
  *(undefined4 *)(this + 0x294) = 0;
  *(undefined4 *)(this + 0x298) = 0;
  *(undefined4 *)(this + 0x29c) = 0;
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined4 *)(this + 0x2a4) = 0;
  *(undefined4 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 0x2ac) = 0;
  *(undefined4 *)(this + 0x2b0) = 0;
  *(undefined4 *)(this + 0x2b4) = 0;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0;
  CWnd::CWnd((CWnd *)(this + 0x2e0));
  *(undefined ***)(this + 0x2e0) = CScrollBar::vftable;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0x354));
  *(undefined ***)(this + 0x354) = CMFCTabButton::vftable;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0xaa4));
  *(undefined ***)(this + 0xaa4) = CMFCTabButton::vftable;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0x11f4));
  *(undefined ***)(this + 0x11f4) = CMFCTabButton::vftable;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0x1944));
  *(undefined ***)(this + 0x1944) = CMFCTabButton::vftable;
  CMFCButton::CMFCButton((CMFCButton *)(this + 0x2094));
  *(undefined ***)(this + 0x2094) = CMFCTabButton::vftable;
  CList<HWND__*,HWND__*>::CList<HWND__*,HWND__*>((CList<HWND__*,HWND__*> *)(this + 0x27e8),10);
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  SetRectEmpty((LPRECT)(this + 0x290));
  SetRectEmpty((LPRECT)(this + 0x2a0));
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x264) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x254) = 0;
  SetRectEmpty((LPRECT)(this + 0x270));
  *(undefined4 *)(this + 0x224) = 1;
  *(undefined4 *)(this + 0x100) = 1;
  *(undefined4 *)(this + 0x228) = 1;
  *(undefined4 *)(this + 0xfc) = 1;
  *(undefined4 *)(this + 0x234) = 1;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x27e4) = 0;
  SetRectEmpty((LPRECT)(this + 0x2b0));
  SetRectEmpty((LPRECT)(this + 0x2c0));
  SetRectEmpty((LPRECT)(this + 0x2d0));
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x24c) = 0;
  return this;
}


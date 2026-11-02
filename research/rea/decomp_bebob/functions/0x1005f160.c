// rea decompile_all
// name: CMFCPopupMenu::CMFCPopupMenu
// address: 0x1005f160
// body: available
// range: 0x1005f160-0x1005f2ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCPopupMenu::CMFCPopupMenu(void)
   
   Library: Visual Studio 2010 Release */

CMFCPopupMenu * __thiscall CMFCPopupMenu::CMFCPopupMenu(CMFCPopupMenu *this)

{
  undefined **ppuVar1;
  
  CMiniFrameWnd::CMiniFrameWnd((CMiniFrameWnd *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x140,(int *)ppuVar1);
  *(undefined4 *)(this + 0x144) = 0;
  CMFCPopupMenuBar::CMFCPopupMenuBar((CMFCPopupMenuBar *)(this + 0x14c));
  *(undefined4 *)(this + 0xed8) = 0;
  *(undefined4 *)(this + 0xedc) = 0;
  *(undefined4 *)(this + 0xef8) = 0;
  *(undefined4 *)(this + 0xefc) = 0;
  *(undefined4 *)(this + 0xf00) = 0;
  *(undefined4 *)(this + 0xf04) = 0;
  *(undefined4 *)(this + 0xf08) = 0;
  *(undefined4 *)(this + 0xf0c) = 0;
  *(undefined4 *)(this + 0xf10) = 0;
  *(undefined4 *)(this + 0xf14) = 0;
  CWnd::CWnd((CWnd *)(this + 0xf28));
  *(undefined ***)(this + 0xf28) = CScrollBar::vftable;
  *(undefined4 *)(this + 4000) = 0;
  *(undefined ***)(this + 0xf9c) = CBitmap::vftable;
  *(undefined4 *)(this + 0xfa8) = 0;
  *(undefined ***)(this + 0xfa4) = CBitmap::vftable;
  *(undefined4 *)(this + 0xfb0) = 0;
  *(undefined ***)(this + 0xfac) = CBitmap::vftable;
  *(undefined4 *)(this + 0xfc8) = 0;
  *(undefined ***)(this + 0xfc4) = CBitmap::vftable;
  *(undefined4 *)(this + 0xfd0) = 0;
  *(undefined ***)(this + 0xfcc) = CBitmap::vftable;
  *(undefined4 *)(this + 0xfe0) = 0;
  *(undefined4 *)(this + 0xfe4) = 0;
  *(undefined4 *)(this + 0xfe8) = 0;
  *(undefined4 *)(this + 0xfec) = 0;
  CToolTipCtrl::CToolTipCtrl((CToolTipCtrl *)(this + 0xff0));
  *(undefined4 *)(this + 0x1090) = 0;
  *(undefined4 *)(this + 0x1094) = 0;
  *(undefined4 *)(this + 0x1098) = 0;
  *(undefined4 *)(this + 0x109c) = 0;
  *(undefined4 *)(this + 0x10a0) = 0;
  *(undefined4 *)(this + 0x10a4) = 0;
  *(undefined4 *)(this + 0x10a8) = 0;
  *(undefined4 *)(this + 0x10ac) = 0;
  Initialize(this);
  return this;
}


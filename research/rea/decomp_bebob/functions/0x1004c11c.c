// rea decompile_all
// name: CMFCPropertyGridCtrl::CMFCPropertyGridCtrl
// address: 0x1004c11c
// body: available
// range: 0x1004c11c-0x1004c349 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCPropertyGridCtrl::CMFCPropertyGridCtrl(void)
   
   Library: Visual Studio 2010 Release */

CMFCPropertyGridCtrl * __thiscall
CMFCPropertyGridCtrl::CMFCPropertyGridCtrl(CMFCPropertyGridCtrl *this)

{
  undefined **ppuVar1;
  
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  CToolTipCtrl::CToolTipCtrl((CToolTipCtrl *)(this + 0x74));
  CMFCHeaderCtrl::CMFCHeaderCtrl((CMFCHeaderCtrl *)(this + 0x104));
  CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl
            ((CMFCPropertyGridToolTipCtrl *)(this + 0x1b0));
  CWnd::CWnd((CWnd *)(this + 0x244));
  *(undefined ***)(this + 0x244) = CScrollBar::vftable;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x2d0,(int *)ppuVar1);
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x2d4,(int *)ppuVar1);
  *(undefined4 *)(this + 0x2e4) = 0;
  *(undefined ***)(this + 0x2e0) = CFont::vftable;
  ((LPRECT)(this + 0x2e8))->left = 0;
  *(undefined4 *)(this + 0x2ec) = 0;
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2f4) = 0;
  *(undefined4 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 0x32c) = 0;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x334) = 0;
  *(undefined4 *)(this + 0x338) = 0;
  *(undefined4 *)(this + 0x33c) = 0;
  *(undefined4 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x344) = 0;
  CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*>::
  CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*>
            ((CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*> *)(this + 0x360),10);
  CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*>::
  CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*>
            ((CList<CMFCPropertyGridProperty*,CMFCPropertyGridProperty*> *)(this + 0x37c),10);
  *(undefined4 *)(this + 0x3c0) = 0;
  *(undefined ***)(this + 0x3bc) = CBrush::vftable;
  *(undefined4 *)(this + 0x2f8) = 0xffffffff;
  *(undefined4 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2fc) = 3;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  SetRectEmpty((LPRECT)(this + 0x2e8));
  *(undefined4 *)(this + 0x318) = 0;
  SetRectEmpty((LPRECT)(this + 0x328));
  SetRectEmpty((LPRECT)(this + 0x338));
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined4 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x324) = 0;
  *(undefined4 *)(this + 0x398) = 0;
  *(undefined4 *)(this + 0x350) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x2c0) = 1;
  *(undefined4 *)(this + 0x348) = 0;
  *(undefined4 *)(this + 0x34c) = 0;
  FUN_100022b0(this + 0x2d0,L"True");
  FUN_100022b0(this + 0x2d4,L"False");
  *(undefined2 *)(this + 0x2d8) = 0x2c;
  *(undefined4 *)(this + 0x3a0) = 0xffffffff;
  *(undefined4 *)(this + 0x3a4) = 0xffffffff;
  *(undefined4 *)(this + 0x3a8) = 0xffffffff;
  *(undefined4 *)(this + 0x3ac) = 0xffffffff;
  *(undefined4 *)(this + 0x3b0) = 0xffffffff;
  *(undefined4 *)(this + 0x3b4) = 0xffffffff;
  *(undefined4 *)(this + 0x3b8) = 0xffffffff;
  *(undefined4 *)(this + 0x354) = 0;
  *(undefined4 *)(this + 0x358) = 1;
  *(undefined4 *)(this + 0x35c) = 1;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x3c4) = 0;
  this[0x24] = (CMFCPropertyGridCtrl)0x1;
  return this;
}


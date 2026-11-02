// rea decompile_all
// name: CMFCBaseTabCtrl::CMFCBaseTabCtrl
// address: 0x100952c8
// body: available
// range: 0x100952c8-0x100954ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCBaseTabCtrl::CMFCBaseTabCtrl(void)
   
   Library: Visual Studio 2010 Release */

CMFCBaseTabCtrl * __thiscall CMFCBaseTabCtrl::CMFCBaseTabCtrl(CMFCBaseTabCtrl *this)

{
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  CPtrArray::CPtrArray((CPtrArray *)(this + 0x88));
  CImageList::CImageList((CImageList *)(this + 0xa8));
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  CMap<HICON__*,HICON__*,int,int>::CMap<HICON__*,HICON__*,int,int>
            ((CMap<HICON__*,HICON__*,int,int> *)(this + 0xbc),10);
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined ***)(this + 0x124) = CBrush::vftable;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined ***)(this + 300) = CFont::vftable;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined ***)(this + 0x134) = CFont::vftable;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>
            ((CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *)(this + 0x158),10);
  COleDropTarget::COleDropTarget((COleDropTarget *)(this + 0x17c));
  *(undefined ***)(this + 0x17c) = CMFCTabDropTarget::vftable;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined ***)(this + 0x1b8) = CArray<unsigned_long,unsigned_long>::vftable;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  ((LPRECT)(this + 0x1f0))->left = 0;
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  *(undefined4 *)(this + 0xa4) = 0xffffffff;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xe4) = 0xffffffff;
  *(undefined4 *)(this + 0xe8) = 1;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0x100) = 1;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0xf4) = 0xffffffff;
  *(undefined4 *)(this + 0xf8) = 0xffffffff;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 1;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x11c) = 0xffffffff;
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  *(undefined4 *)(this + 0xec) = 2;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x13c) = 0xffffffff;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1d0) = 1;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x1d4) = 0xffffffff;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  SetRectEmpty((LPRECT)(this + 0x1f0));
  return this;
}


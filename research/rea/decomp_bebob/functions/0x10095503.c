// rea decompile_all
// name: CMFCBaseTabCtrl::~CMFCBaseTabCtrl
// address: 0x10095503
// body: available
// range: 0x10095503-0x100955cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CMFCBaseTabCtrl::~CMFCBaseTabCtrl(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCBaseTabCtrl::~CMFCBaseTabCtrl(CMFCBaseTabCtrl *this)

{
  *(undefined ***)this = vftable;
  FUN_10005770((undefined4 *)(this + 0x1b8));
  FUN_100e32ca((COleDropTarget *)(this + 0x17c));
  *(undefined ***)(this + 0x158) = CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::vftable;
  CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::RemoveAll
            ((CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *)(this + 0x158));
  *(undefined ***)(this + 0x134) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x134));
  *(undefined ***)(this + 300) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 300));
  *(undefined ***)(this + 0x124) = CBrush::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x124));
  *(undefined ***)(this + 0xbc) = CMap<HICON__*,HICON__*,int,int>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0xbc));
  CImageList::~CImageList((CImageList *)(this + 0xa8));
  CPtrArray::~CPtrArray((CPtrArray *)(this + 0x88));
  CWnd::~CWnd((CWnd *)this);
  return;
}


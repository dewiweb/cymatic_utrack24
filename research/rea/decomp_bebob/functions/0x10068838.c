// rea decompile_all
// name: CMFCToolBar::~CMFCToolBar
// address: 0x10068838
// body: available
// range: 0x10068838-0x1006883c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall CMFCToolBar::~CMFCToolBar(CMFCToolBar *this)

{
  CObject *pCVar1;
  
  *(undefined ***)this = vftable;
  while (*(int *)(this + 0xbf0) != 0) {
    pCVar1 = CObList::RemoveHead((CObList *)(this + 0xbe4));
    if (pCVar1 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar1 + 4))(1);
    }
  }
  while (*(int *)(this + 0xc0c) != 0) {
    pCVar1 = CObList::RemoveHead((CObList *)(this + 0xc00));
    if (pCVar1 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar1 + 4))(1);
    }
  }
  RemoveAllButtons(this);
  *(undefined ***)(this + 0xcac) =
       CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0xcac));
  *(undefined ***)(this + 0xc78) = CPen::vftable;
  CImageList::~CImageList((CImageList *)(this + 0xc78));
  FUN_1009b790((COleDropTarget *)(this + 0xc1c));
  FUN_1001e259((CObList *)(this + 0xc00));
  FUN_1001e259((CObList *)(this + 0xbe4));
  FUN_1001e259((CObList *)(this + 0xbc8));
  FUN_100692f3((undefined4 *)(this + 0xb6c));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x9f8));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x8ec));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x7e0));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x6d4));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x5c8));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x4bc));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x3b0));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x2a4));
  FUN_1007fbc8((CPane *)this);
  return;
}


// rea decompile_all
// name: CMFCToolBarImages::~CMFCToolBarImages
// address: 0x10082f65
// body: available
// range: 0x10082f65-0x10083068 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10082f9e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CMFCToolBarImages::~CMFCToolBarImages(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarImages::~CMFCToolBarImages(CMFCToolBarImages *this)

{
  CImageList *this_00;
  int iVar1;
  
  *(undefined ***)this = vftable;
  if ((CDC *)(this + 0x40) == (CDC *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x44);
  }
  if (iVar1 == 0) {
    this_00 = (CImageList *)(this + 0x98);
    if (this_00 == (CImageList *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(this + 0x9c);
    }
    if ((iVar1 == 0) && (*(int *)(this + 0xa0) == 0)) {
      if (*(int *)(this + 0x24) == 0) {
        AfxDeleteObject((void **)(this + 0x88));
        AfxDeleteObject((void **)(this + 0x8c));
        AfxDeleteObject((void **)(this + 0x90));
      }
      *(undefined ***)(this + 0xf0) = CMap<unsigned_int,unsigned_int,int,int>::vftable;
      CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0xf0));
      *(undefined ***)(this + 0xd4) = CList<HINSTANCE__*,HINSTANCE__*>::vftable;
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xd4));
      *(undefined ***)(this + 0xb8) = CList<unsigned_int,unsigned_int>::vftable;
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xb8));
      *(undefined ***)this_00 = CBitmap::vftable;
      CImageList::~CImageList(this_00);
      FUN_10001030((undefined4 *)(*(int *)(this + 0x94) + -0x10));
      CDC::~CDC((CDC *)(this + 0x40));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


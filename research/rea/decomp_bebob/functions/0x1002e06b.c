// rea decompile_all
// name: CMFCToolBar::CMFCToolBar
// address: 0x1002e06b
// body: available
// range: 0x1002e06b-0x1002e3a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBar::CMFCToolBar(void)
   
   Library: Visual Studio 2010 Release */

CMFCToolBar * __thiscall CMFCToolBar::CMFCToolBar(CMFCToolBar *this)

{
  CMFCBaseToolBar::CMFCBaseToolBar((CMFCBaseToolBar *)this);
  *(undefined ***)this = vftable;
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x2a4));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x3b0));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x4bc));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x5c8));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x6d4));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x7e0));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x8ec));
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0x9f8));
  *(undefined4 *)(this + 0xb38) = 0;
  *(undefined4 *)(this + 0xb50) = 0;
  CMFCControlBarImpl::CMFCControlBarImpl((CMFCControlBarImpl *)(this + 0xb6c),(CPane *)this);
  *(undefined4 *)(this + 0xb9c) = 0;
  *(undefined4 *)(this + 0xba0) = 0;
  *(undefined4 *)(this + 0xba4) = 0;
  *(undefined4 *)(this + 0xba8) = 0;
  *(undefined4 *)(this + 0xbac) = 0;
  *(undefined4 *)(this + 0xbb0) = 0;
  *(undefined4 *)(this + 0xbb4) = 0;
  *(undefined4 *)(this + 3000) = 0;
  *(undefined4 *)(this + 0xbc0) = 0;
  *(undefined4 *)(this + 0xbc4) = 0;
  CObList::CObList((CObList *)(this + 0xbc8),10);
  CObList::CObList((CObList *)(this + 0xbe4),10);
  CObList::CObList((CObList *)(this + 0xc00),10);
  CMFCToolBarDropTarget::CMFCToolBarDropTarget((CMFCToolBarDropTarget *)(this + 0xc1c));
  *(undefined4 *)(this + 0xc58) = 0;
  *(undefined4 *)(this + 0xc5c) = 0;
  *(undefined4 *)(this + 0xc60) = 0;
  *(undefined4 *)(this + 0xc64) = 0;
  *(undefined4 *)(this + 0xc68) = 0;
  *(undefined4 *)(this + 0xc6c) = 0;
  *(undefined4 *)(this + 0xc70) = 0;
  *(undefined4 *)(this + 0xc74) = 0;
  *(undefined4 *)(this + 0xc7c) = 0;
  *(undefined ***)(this + 0xc78) = CPen::vftable;
  *(undefined4 *)(this + 0xc80) = 0;
  *(undefined4 *)(this + 0xc84) = 0;
  *(undefined4 *)(this + 0xc88) = 0;
  *(undefined4 *)(this + 0xc8c) = 0;
  CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&>::
  CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&>
            ((CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&> *)
             (this + 0xcac),10);
  *(undefined4 *)(this + 0xb78) = 0xffffffff;
  *(undefined4 *)(this + 0xb7c) = 0xffffffff;
  *(undefined4 *)(this + 0xb80) = 0xffffffff;
  *(undefined4 *)(this + 0xb84) = 0xffffffff;
  *(undefined4 *)(this + 0xb8c) = 0xffffffff;
  SetRectEmpty((LPRECT)(this + 0xc58));
  *(undefined4 *)(this + 0xc80) = 0xffffffff;
  *(undefined4 *)(this + 0xc84) = 0xffffffff;
  *(undefined4 *)(this + 0xbac) = 0x17;
  *(undefined4 *)(this + 0xbb0) = 0x16;
  *(undefined4 *)(this + 0xbb4) = 0x10;
  *(undefined4 *)(this + 3000) = 0xf;
  *(undefined4 *)(this + 0xb9c) = 0x17;
  *(undefined4 *)(this + 0xba0) = 0x16;
  *(undefined4 *)(this + 0xba4) = 0x10;
  *(undefined4 *)(this + 0xc98) = 0;
  *(undefined4 *)(this + 0xb2c) = 0;
  *(undefined4 *)(this + 0xb0c) = 0;
  *(undefined4 *)(this + 0xb10) = 0;
  *(undefined4 *)(this + 0xca0) = 0;
  *(undefined4 *)(this + 0x124) = 1;
  *(undefined4 *)(this + 0x120) = 1;
  *(undefined4 *)(this + 0xba8) = 0xf;
  *(undefined4 *)(this + 0xbbc) = 0;
  *(undefined4 *)(this + 0xb30) = 0;
  SetRectEmpty((LPRECT)(this + 0xc68));
  *(undefined4 *)(this + 0xc88) = 0xffffffff;
  *(undefined4 *)(this + 0xb90) = 0;
  *(undefined4 *)(this + 0xca4) = 0;
  *(undefined4 *)(this + 0xb34) = 0;
  *(undefined4 *)(this + 0xc8c) = 0xffffffff;
  *(undefined4 *)(this + 0xc90) = 0;
  *(undefined4 *)(this + 0xca8) = 0;
  *(undefined4 *)(this + 0xb04) = 0;
  *(undefined4 *)(this + 0xb48) = 1;
  *(undefined4 *)(this + 0xb4c) = 1;
  *(undefined4 *)(this + 0xb08) = 1;
  *(undefined4 *)(this + 0xb14) = 0;
  *(undefined4 *)(this + 0xb18) = 0;
  *(undefined4 *)(this + 0xb74) = 0;
  *(undefined4 *)(this + 0xb3c) = 1;
  *(undefined4 *)(this + 0xb40) = 1;
  *(undefined4 *)(this + 0xb1c) = 0;
  *(undefined4 *)(this + 0xb88) = 0;
  *(undefined4 *)(this + 0xb94) = 0;
  *(undefined4 *)(this + 0xbc0) = 0;
  *(undefined4 *)(this + 0xbc4) = 0;
  *(undefined4 *)(this + 0xb20) = 1;
  *(undefined4 *)(this + 0xb44) = 0;
  *(undefined4 *)(this + 0xb58) = 0;
  *(undefined4 *)(this + 0xb5c) = 0;
  *(undefined4 *)(this + 0xc9c) = 0;
  *(undefined4 *)(this + 0xb60) = 0;
  *(undefined4 *)(this + 0xb54) = 0;
  *(undefined4 *)(this + 0xb98) = 0xfffffff6;
  *(undefined4 *)(this + 0xb28) = 0;
  *(undefined4 *)(this + 0xb24) = 0;
  *(undefined4 *)(this + 0xb64) = 0;
  *(undefined4 *)(this + 0xb68) = 0;
  *(undefined4 *)(this + 0xc94) = 0;
  return this;
}


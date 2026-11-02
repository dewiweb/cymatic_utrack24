// rea decompile_all
// name: CMFCToolBarsToolsPropertyPage::CMFCToolBarsToolsPropertyPage
// address: 0x100e6929
// body: available
// range: 0x100e6929-0x100e6a79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarsToolsPropertyPage::CMFCToolBarsToolsPropertyPage(void)
   
   Library: Visual Studio 2010 Release */

CMFCToolBarsToolsPropertyPage * __thiscall
CMFCToolBarsToolsPropertyPage::CMFCToolBarsToolsPropertyPage(CMFCToolBarsToolsPropertyPage *this)

{
  undefined **ppuVar1;
  
  CPropertyPage::CPropertyPage((CPropertyPage *)this,0x4220,0,0x38);
  *(undefined ***)this = vftable;
  CMFCMenuButton::CMFCMenuButton((CMFCMenuButton *)(this + 0xa8));
  CMFCMenuButton::CMFCMenuButton((CMFCMenuButton *)(this + 0x818));
  CWnd::CWnd((CWnd *)(this + 0xf88));
  *(undefined ***)(this + 0xf88) = CEdit::vftable;
  CWnd::CWnd((CWnd *)(this + 0xffc));
  *(undefined ***)(this + 0xffc) = CEdit::vftable;
  CWnd::CWnd((CWnd *)(this + 0x1070));
  *(undefined ***)(this + 0x1070) = CEdit::vftable;
  CWnd::CWnd((CWnd *)(this + 0x10e4));
  *(undefined ***)(this + 0x10e4) = CButton::vftable;
  CVSToolsListBox::CVSToolsListBox((CVSToolsListBox *)(this + 0x1158),this);
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x132c,(int *)ppuVar1);
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x1330,(int *)ppuVar1);
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x1334,(int *)ppuVar1);
  *(undefined4 *)(this + 0x1344) = 0;
  *(undefined ***)(this + 0x1340) = CMenu::vftable;
  *(undefined4 *)(this + 0x134c) = 0;
  *(undefined ***)(this + 0x1348) = CMenu::vftable;
  FUN_100022b0(this + 0x132c,(short *)&PTR_1011d390);
  FUN_100022b0(this + 0x1330,(short *)&PTR_1011d390);
  FUN_100022b0(this + 0x1334,(short *)&PTR_1011d390);
  *(undefined4 *)(this + 0x1338) = 0;
  *(undefined4 *)(this + 0x133c) = 0;
  return this;
}


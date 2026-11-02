// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::CMFCToolBarsKeyboardPropertyPage
// address: 0x100e4edf
// body: available
// range: 0x100e4edf-0x100e5073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarsKeyboardPropertyPage::CMFCToolBarsKeyboardPropertyPage(class
   CFrameWnd *,int)
   
   Library: Visual Studio 2010 Release */

CMFCToolBarsKeyboardPropertyPage * __thiscall
CMFCToolBarsKeyboardPropertyPage::CMFCToolBarsKeyboardPropertyPage
          (CMFCToolBarsKeyboardPropertyPage *this,CFrameWnd *param_1,int param_2)

{
  undefined **ppuVar1;
  
  CPropertyPage::CPropertyPage((CPropertyPage *)this,0x3f08,0,0x38);
  *(undefined ***)this = vftable;
  CWnd::CWnd((CWnd *)(this + 0xa8));
  *(undefined ***)(this + 0xa8) = CStatic::vftable;
  CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl
            ((CMFCAcceleratorKeyAssignCtrl *)(this + 0x11c));
  CWnd::CWnd((CWnd *)(this + 0x1a8));
  *(undefined ***)(this + 0x1a8) = CComboBox::vftable;
  CWnd::CWnd((CWnd *)(this + 0x21c));
  *(undefined ***)(this + 0x21c) = CStatic::vftable;
  CWnd::CWnd((CWnd *)(this + 0x290));
  *(undefined ***)(this + 0x290) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x304));
  *(undefined ***)(this + 0x304) = CListBox::vftable;
  CWnd::CWnd((CWnd *)(this + 0x378));
  *(undefined ***)(this + 0x378) = CListBox::vftable;
  CWnd::CWnd((CWnd *)(this + 0x3ec));
  *(undefined ***)(this + 0x3ec) = CComboBox::vftable;
  CWnd::CWnd((CWnd *)(this + 0x460));
  *(undefined ***)(this + 0x460) = CButton::vftable;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x4d4,(int *)ppuVar1);
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x4d8,(int *)ppuVar1);
  *(int *)(this + 0x4ec) = param_2;
  *(CFrameWnd **)(this + 0x4f8) = param_1;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x4fc,(int *)ppuVar1);
  FUN_100022b0(this + 0x4d4,(short *)&PTR_1011d390);
  FUN_100022b0(this + 0x4d8,(short *)&PTR_1011d390);
  *(undefined4 *)(this + 0x4dc) = 0;
  *(undefined4 *)(this + 0x4e0) = 0;
  *(undefined4 *)(this + 0x4e8) = 0;
  *(undefined4 *)(this + 0x4f0) = 0;
  *(undefined4 *)(this + 0x4f4) = 0;
  *(undefined4 *)(this + 0x4e4) = 0;
  return this;
}


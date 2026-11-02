// rea decompile_all
// name: CMFCToolBarsOptionsPropertyPage::CMFCToolBarsOptionsPropertyPage
// address: 0x100e5780
// body: available
// range: 0x100e5780-0x100e588b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarsOptionsPropertyPage::CMFCToolBarsOptionsPropertyPage(int)
   
   Library: Visual Studio 2010 Release */

CMFCToolBarsOptionsPropertyPage * __thiscall
CMFCToolBarsOptionsPropertyPage::CMFCToolBarsOptionsPropertyPage
          (CMFCToolBarsOptionsPropertyPage *this,int param_1)

{
  CPropertyPage::CPropertyPage((CPropertyPage *)this,0x3f09,0,0x38);
  *(undefined ***)this = vftable;
  CWnd::CWnd((CWnd *)(this + 0xa8));
  *(undefined ***)(this + 0xa8) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x11c));
  *(undefined ***)(this + 0x11c) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 400));
  *(undefined ***)(this + 400) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x204));
  *(undefined ***)(this + 0x204) = CStatic::vftable;
  CWnd::CWnd((CWnd *)(this + 0x278));
  *(undefined ***)(this + 0x278) = CStatic::vftable;
  CWnd::CWnd((CWnd *)(this + 0x2ec));
  *(undefined ***)(this + 0x2ec) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x360));
  *(undefined ***)(this + 0x360) = CButton::vftable;
  *(int *)(this + 1000) = param_1;
  *(undefined4 *)(this + 0x3d4) = DAT_101603d8;
  *(undefined4 *)(this + 0x3d8) = DAT_101603dc;
  *(undefined4 *)(this + 0x3dc) = DAT_101611ec;
  *(undefined4 *)(this + 0x3e0) = DAT_101611f0;
  *(undefined4 *)(this + 0x3e4) = DAT_10166e5c;
  return this;
}


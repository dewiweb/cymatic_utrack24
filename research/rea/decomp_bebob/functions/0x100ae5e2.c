// rea decompile_all
// name: CMFCRibbonEdit::OnKey
// address: 0x100ae5e2
// body: available
// range: 0x100ae5e2-0x100ae666 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonEdit::OnKey(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCRibbonEdit::OnKey(CMFCRibbonEdit *this,int param_1)

{
  CWnd *this_00;
  int iVar1;
  BOOL BVar2;
  CMFCRibbonBar *pCVar3;
  
  if (*(int *)(this + 0x78) == 0) {
    BVar2 = IsRectEmpty((RECT *)(this + 0x18));
    if (BVar2 == 0) {
      pCVar3 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
      if (pCVar3 != (CMFCRibbonBar *)0x0) {
        FUN_1006dd3f((int)pCVar3);
      }
      if (((param_1 == 0) && (this_00 = *(CWnd **)(this + 400), this_00 != (CWnd *)0x0)) &&
         (*(int *)(this_00 + 0x20) != 0)) {
        CWnd::SetFocus(this_00);
        if (*(int *)(*(int *)(this + 0x18c) + -0xc) != 0) {
          CRichEditCtrl::SetSel(*(CRichEditCtrl **)(this + 400),0,-1);
        }
      }
      else {
        (**(code **)(*(int *)this + 500))();
      }
      iVar1 = 1;
    }
    else {
      iVar1 = CMFCRibbonBaseElement::OnKey((CMFCRibbonBaseElement *)this,param_1);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


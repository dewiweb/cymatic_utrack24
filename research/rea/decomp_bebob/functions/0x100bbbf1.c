// rea decompile_all
// name: CMFCRibbonButton::OnKey
// address: 0x100bbbf1
// body: available
// range: 0x100bbbf1-0x100bbcdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCRibbonButton::OnKey(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCRibbonButton::OnKey(CMFCRibbonButton *this,int param_1)

{
  int iVar1;
  BOOL BVar2;
  CMFCRibbonBar *this_00;
  CMFCRibbonPanel *this_01;
  CFrameWnd *pCVar3;
  
  iVar1 = (**(code **)(*(int *)this + 0x38))();
  if (iVar1 == 0) {
    BVar2 = IsRectEmpty((RECT *)(this + 0x18));
    if (BVar2 == 0) {
      this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
      iVar1 = (**(code **)(*(int *)this + 0x98))();
      if ((iVar1 == 0) || ((param_1 == 0 && (*(int *)(*(int *)(this + 0xc) + -0xc) != 0)))) {
        if ((this_00 != (CMFCRibbonBar *)0x0) &&
           (pCVar3 = CWnd::GetTopLevelFrame((CWnd *)this_00), pCVar3 != (CFrameWnd *)0x0)) {
          pCVar3 = CWnd::GetTopLevelFrame((CWnd *)this_00);
          CWnd::SetFocus((CWnd *)pCVar3);
        }
        (**(code **)(*(int *)this + 0x1c0))
                  (((RECT *)(this + 0x18))->left,*(undefined4 *)(this + 0x1c));
      }
      else {
        iVar1 = (**(code **)(*(int *)this + 0x40))();
        if (iVar1 == 0) {
          if (this_00 != (CMFCRibbonBar *)0x0) {
            FUN_1006dd3f((int)this_00);
          }
          this_01 = (CMFCRibbonPanel *)(**(code **)(*(int *)this + 0x8c))();
          if (this_01 != (CMFCRibbonPanel *)0x0) {
            CMFCRibbonPanel::SetFocused(this_01,(CMFCRibbonBaseElement *)this);
          }
          (**(code **)(*(int *)this + 0x9c))();
          if (*(int *)(this + 0x40) != 0) {
            SendMessageW(*(HWND *)(*(int *)(this + 0x40) + 0x20),0x100,0x24,0);
          }
          return (uint)(*(int *)(this + 0xf8) != 0);
        }
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


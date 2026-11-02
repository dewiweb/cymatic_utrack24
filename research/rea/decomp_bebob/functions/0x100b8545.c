// rea decompile_all
// name: CMFCRibbonBaseElement::OnKey
// address: 0x100b8545
// body: available
// range: 0x100b8545-0x100b8632 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonBaseElement::OnKey(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCRibbonBaseElement::OnKey(CMFCRibbonBaseElement *this,int param_1)

{
  BOOL BVar1;
  CMFCRibbonPanel *this_00;
  int iVar2;
  CMFCRibbonBar *pCVar3;
  CFrameWnd *pCVar4;
  CMFCRibbonPanelMenu *pCVar5;
  int *piVar6;
  
  if (*(int *)(this + 0x78) == 0) {
    BVar1 = IsRectEmpty((RECT *)(this + 0x18));
    if (BVar1 == 0) {
      iVar2 = NotifyCommand(this,1);
      return iVar2;
    }
    this_00 = (CMFCRibbonPanel *)(**(code **)(*(int *)this + 0x8c))();
    if ((this_00 != (CMFCRibbonPanel *)0x0) &&
       (iVar2 = CMFCRibbonPanel::IsCollapsed(this_00), iVar2 != 0)) {
      iVar2 = (**(code **)(*(int *)this + 0x98))();
      if (iVar2 == 0) {
        iVar2 = NotifyCommand(this,1);
        if (iVar2 != 0) {
          if (*(int *)(this + 0x38) != 0) {
            pCVar3 = GetTopLevelRibbonBar(this);
            pCVar4 = AFXGetParentFrame(*(CWnd **)(this + 0x38));
            (**(code **)(*(int *)pCVar4 + 0x60))();
            if ((pCVar3 != (CMFCRibbonBar *)0x0) &&
               (pCVar4 = CWnd::GetTopLevelFrame((CWnd *)pCVar3), pCVar4 != (CFrameWnd *)0x0)) {
              pCVar4 = CWnd::GetTopLevelFrame((CWnd *)pCVar3);
              CWnd::SetFocus((CWnd *)pCVar4);
            }
          }
          return 1;
        }
      }
      else {
        pCVar3 = GetTopLevelRibbonBar(this);
        if (pCVar3 != (CMFCRibbonBar *)0x0) {
          FUN_1006dd3f((int)pCVar3);
        }
        pCVar5 = CMFCRibbonPanel::ShowPopup(this_00,(CMFCRibbonDefaultPanelButton *)0x0);
        if ((pCVar5 != (CMFCRibbonPanelMenu *)0x0) &&
           (piVar6 = (int *)FUN_100a427c(pCVar5 + 0x10c4,this), piVar6 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100b8620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar2 = (**(code **)(*piVar6 + 0x13c))();
          return iVar2;
        }
      }
    }
  }
  return 0;
}


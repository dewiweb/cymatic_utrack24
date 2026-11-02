// rea decompile_all
// name: CMFCRibbonPanel::ShowPopup
// address: 0x100b2dc4
// body: available
// range: 0x100b2dc4-0x100b2f19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b2e33 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: class CMFCRibbonPanelMenu * __thiscall CMFCRibbonPanel::ShowPopup(class
   CMFCRibbonDefaultPanelButton *)
   
   Library: Visual Studio 2010 Release */

CMFCRibbonPanelMenu * __thiscall
CMFCRibbonPanel::ShowPopup(CMFCRibbonPanel *this,CMFCRibbonDefaultPanelButton *param_1)

{
  ulong uVar1;
  CMFCRibbonBar *this_00;
  CFont *pCVar2;
  CPen *pCVar3;
  int iVar4;
  CMFCRibbonPanelMenu *pCVar5;
  CMFCPopupMenu *this_01;
  LONG LVar6;
  CClientDC local_44 [20];
  uint local_30;
  CWnd *local_2c;
  CMFCRibbonBaseElement *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x100b2dd0;
  if (param_1 == (CMFCRibbonDefaultPanelButton *)0x0) {
    param_1 = (CMFCRibbonDefaultPanelButton *)(this + 0xb8);
  }
  local_28 = (CMFCRibbonBaseElement *)param_1;
  local_2c = (CWnd *)(**(code **)(*(int *)param_1 + 0x90))();
  if (local_2c != (CWnd *)0x0) {
    if (*(CMFCRibbonCategory **)(this + 0xa8) != (CMFCRibbonCategory *)0x0) {
      CMFCRibbonCategory::EnsureVisible
                (*(CMFCRibbonCategory **)(this + 0xa8),(CMFCRibbonButton *)param_1);
    }
    uVar1 = CWnd::GetExStyle(local_2c);
    local_30 = uVar1 & 0x400000;
    if (*(int *)(this + 0x248) == 0) {
      if (*(int *)(this + 0xa8) == 0) {
LAB_100b2e33:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)param_1);
      CClientDC::CClientDC(local_44,(CWnd *)this_00);
      local_8 = 0;
      pCVar2 = CWnd::GetFont((CWnd *)this_00);
      pCVar3 = CDC::SelectObject((CDC *)local_44,(CPen *)pCVar2);
      if (pCVar3 == (CPen *)0x0) goto LAB_100b2e33;
      iVar4 = FUN_100ac553(*(void **)(this + 0xa8),(CDC *)local_44);
      (**(code **)(*(int *)this + 0x24))(local_44,iVar4);
      CDC::SelectObject((CDC *)local_44,pCVar3);
      local_8 = 0xffffffff;
      CClientDC::~CClientDC(local_44);
    }
    local_24.left = *(LONG *)(param_1 + 0x18);
    local_24.top = *(LONG *)(param_1 + 0x1c);
    local_24.right = *(LONG *)(param_1 + 0x20);
    local_24.bottom = *(LONG *)(param_1 + 0x24);
    CWnd::ClientToScreen(local_2c,&local_24);
    pCVar5 = FUN_1000858a(0x1f00);
    local_8 = 1;
    if (pCVar5 == (CMFCRibbonPanelMenu *)0x0) {
      this_01 = (CMFCPopupMenu *)0x0;
    }
    else {
      this_01 = (CMFCPopupMenu *)CMFCRibbonPanelMenu::CMFCRibbonPanelMenu(pCVar5,this);
    }
    local_8 = 0xffffffff;
    CMFCPopupMenu::SetParentRibbonElement(this_01,local_28);
    LVar6 = local_24.right;
    if (local_30 == 0) {
      LVar6 = local_24.left;
    }
    (**(code **)(*(int *)this_01 + 0x208))(local_2c,LVar6,local_24.bottom,0,0,0);
    CMFCRibbonBaseElement::SetDroppedDown(local_28,this_01);
  }
  pCVar5 = (CMFCRibbonPanelMenu *)FUN_100f90cf();
  return pCVar5;
}


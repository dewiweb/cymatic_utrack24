// rea decompile_all
// name: FUN_100b09a3
// address: 0x100b09a3
// body: available
// range: 0x100b09a3-0x100b0bc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b0bc5 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_100b09a3(CMFCRibbonBaseElement *param_1)

{
  CMFCRibbonBar *this;
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CMFCPopupMenu *pCVar5;
  LONG LVar6;
  int local_40 [2];
  CWnd *local_38;
  uint local_34;
  CMFCRibbonBaseElement *local_30;
  CMFCPopupMenu *local_2c;
  CWnd *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x100b09af;
  local_28 = (CWnd *)(**(code **)(*(int *)param_1 + 0x90))();
  if ((((local_28 != (CWnd *)0x0) && (*(int *)(local_28 + 0x20) != 0)) &&
      (this = CMFCRibbonBaseElement::GetTopLevelRibbonBar(param_1), this != (CMFCRibbonBar *)0x0))
     && (*(int *)(this + 0x20) != 0)) {
    CMFCRibbonBaseElement::OnShowPopupMenu(param_1);
    uVar1 = CWnd::GetExStyle((CWnd *)this);
    local_34 = uVar1 & 0x400000;
    if (*(int *)(param_1 + 0x16c) == 0) {
      CMFCRibbonGallery::CreateIcons((CMFCRibbonGallery *)param_1);
    }
    uVar2 = *(uint *)(param_1 + 0x2c0);
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0x48);
    }
    iVar3 = FID_conflict_GetLastSelectedItem(uVar2);
    if (-1 < iVar3) {
      FUN_100b0536(param_1,iVar3);
    }
    iVar3 = CMFCRibbonGallery::IsButtonLook((CMFCRibbonGallery *)param_1);
    local_30 = param_1;
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x16c) + -1;
      if ((iVar3 < 0) || (*(int *)(param_1 + 0x16c) <= iVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_30 = *(CMFCRibbonBaseElement **)(*(int *)(param_1 + 0x168) + iVar3 * 4);
    }
    local_38 = CWnd::GetSafeOwner((CWnd *)0x0,(HWND__ **)0x0);
    local_2c = FUN_1000858a(0x1f00);
    local_8 = 0;
    if (local_2c == (CMFCPopupMenu *)0x0) {
      local_2c = (CMFCPopupMenu *)0x0;
    }
    else {
      local_2c = (CMFCPopupMenu *)
                 CMFCRibbonPanelMenu::CMFCRibbonPanelMenu
                           ((CMFCRibbonPanelMenu *)local_2c,(CMFCRibbonGallery *)param_1);
    }
    pCVar5 = local_2c;
    local_8 = 0xffffffff;
    CMFCPopupMenu::SetParentRibbonElement(local_2c,local_30);
    *(undefined4 *)(pCVar5 + 0x1e24) = 1;
    local_24.left = *(LONG *)(param_1 + 0x18);
    local_24.top = *(LONG *)(param_1 + 0x1c);
    local_24.right = *(LONG *)(param_1 + 0x20);
    local_24.bottom = *(LONG *)(param_1 + 0x24);
    CWnd::ClientToScreen(local_28,&local_24);
    iVar3 = *(int *)(param_1 + 0x2ec);
    (**(code **)(*(int *)param_1 + 0x1e4))(local_40);
    LVar6 = local_24.bottom;
    iVar3 = local_40[0] + 8 + (-(uint)(iVar3 != 0) & 0xfffffffc) * 2;
    local_28 = (CWnd *)local_24.right;
    if (local_34 == 0) {
      local_28 = (CWnd *)local_24.left;
    }
    iVar4 = CMFCRibbonBaseElement::IsMenuMode(param_1);
    if ((iVar4 != 0) && (LVar6 = local_24.top, local_28 = (CWnd *)local_24.left, local_34 == 0)) {
      local_28 = (CWnd *)local_24.right;
    }
    iVar4 = CMFCRibbonGallery::IsButtonLook((CMFCRibbonGallery *)param_1);
    pCVar5 = local_2c;
    if (iVar4 == 0) {
      local_28 = (CWnd *)local_24.right;
      if (local_34 == 0) {
        local_28 = (CWnd *)local_24.left;
      }
      LVar6 = local_24.top + 3;
    }
    if (*(int *)(param_1 + 0x2dc) < 1) {
      if (local_30 == param_1) {
        iVar4 = 4;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x2c8);
      }
      if (*(int *)(param_1 + 0x2ec) == 0) {
        if (iVar4 < 5) {
          iVar4 = 4;
        }
      }
      else {
        iVar4 = 10;
      }
      CMFCRibbonPanelMenuBar::SetPreferedSize
                ((CMFCRibbonPanelMenuBar *)(local_2c + 0x10c4),iVar4 * iVar3,0);
      pCVar5 = local_2c;
    }
    else {
      CMFCRibbonPanelMenuBar::SetPreferedSize
                ((CMFCRibbonPanelMenuBar *)(local_2c + 0x10c4),*(int *)(param_1 + 0x2dc) * iVar3,0);
    }
    (**(code **)(*(int *)pCVar5 + 0x208))(local_38,local_28,LVar6,0,0,0);
    CMFCRibbonBaseElement::SetDroppedDown(local_30,pCVar5);
    if (*(int *)(pCVar5 + 0xeb4) != 0) {
      CMFCPopupMenu::TriggerResize(pCVar5);
    }
  }
  FUN_100f90cf();
  return;
}


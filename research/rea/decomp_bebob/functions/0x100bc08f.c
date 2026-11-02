// rea decompile_all
// name: CMFCRibbonButton::OnShowPopupMenu
// address: 0x100bc08f
// body: available
// range: 0x100bc08f-0x100bc3d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bc234 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonButton::OnShowPopupMenu(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonButton::OnShowPopupMenu(CMFCRibbonButton *this)

{
  int iVar1;
  int iVar2;
  CWnd *pCVar3;
  CMFCRibbonBar *this_00;
  ulong uVar4;
  uint uVar5;
  CWnd *pCVar6;
  CMFCRibbonPanelMenu *this_01;
  int *piVar7;
  CMFCPopupMenu *this_02;
  undefined4 uVar8;
  HWND pHVar9;
  int iVar10;
  LONG LVar11;
  int iVar12;
  CMFCPopupMenu *local_54;
  int local_50;
  int local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x100bc09b;
  iVar2 = (**(code **)(*(int *)this + 0x40))();
  if ((((iVar2 == 0) &&
       (pCVar3 = (CWnd *)(**(code **)(*(int *)this + 0x90))(), pCVar3 != (CWnd *)0x0)) &&
      (*(int *)(pCVar3 + 0x20) != 0)) &&
     ((this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this),
      this_00 != (CMFCRibbonBar *)0x0 && (*(int *)(this_00 + 0x20) != 0)))) {
    CMFCRibbonBaseElement::OnShowPopupMenu((CMFCRibbonBaseElement *)this);
    uVar4 = CWnd::GetExStyle((CWnd *)this_00);
    uVar5 = uVar4 & 0x400000;
    pCVar6 = CWnd::GetSafeOwner((CWnd *)0x0,(HWND__ **)0x0);
    if (*(int *)(this + 0x158) < 1) {
      iVar2 = *(int *)(this + 0xf8);
      if (iVar2 == 0) goto LAB_100bc3cd;
      local_44.left = *(LONG *)(this + 0x18);
      local_44.top = *(LONG *)(this + 0x1c);
      local_44.right = *(LONG *)(this + 0x20);
      local_44.bottom = *(LONG *)(this + 0x24);
      CWnd::ClientToScreen(pCVar3,&local_44);
      this_02 = FUN_1000858a(0x10c4);
      local_8 = 1;
      if (this_02 == (CMFCPopupMenu *)0x0) {
        local_54 = (CMFCPopupMenu *)0x0;
      }
      else {
        local_54 = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(this_02);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(local_54 + 0xeac) = 0;
      uVar8 = 0;
      if ((*(int *)(this + 0x104) != 0) && (uVar5 == 0)) {
        uVar8 = 1;
      }
      *(undefined4 *)(local_54 + 0xeb8) = uVar8;
      CMFCPopupMenu::SetParentRibbonElement(local_54,(CMFCRibbonBaseElement *)this);
      iVar12 = DAT_1016843c;
      if (DAT_1016843c != 0) {
        iVar1 = *(int *)(DAT_1016843c + 0x20);
        pHVar9 = GetParent(*(HWND *)(pCVar3 + 0x20));
        pCVar3 = CWnd::FromHandle(pHVar9);
        iVar10 = 0;
        if (pCVar3 != (CWnd *)0x0) {
          iVar10 = *(int *)(pCVar3 + 0x20);
        }
        if (iVar1 != iVar10) {
          SendMessageW(*(HWND *)(iVar12 + 0x20),0x10,0,0);
        }
      }
      if ((*(int *)(this + 0x104) != 0) || (LVar11 = local_44.left, uVar5 != 0)) {
        LVar11 = local_44.right;
      }
      (**(code **)(*(int *)local_54 + 0x208))(pCVar6,LVar11,local_44.bottom,iVar2,0,0);
    }
    else {
      if (*(int *)(this + 0x138) != 0) {
        FillWindowList(this);
      }
      this_01 = FUN_1000858a(0x1f00);
      local_8 = 0;
      if (this_01 == (CMFCRibbonPanelMenu *)0x0) {
        local_54 = (CMFCPopupMenu *)0x0;
      }
      else {
        local_54 = (CMFCPopupMenu *)
                   CMFCRibbonPanelMenu::CMFCRibbonPanelMenu
                             (this_01,this_00,
                              (CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)
                              (this + 0x150),0);
      }
      local_8 = 0xffffffff;
      CMFCPopupMenu::SetParentRibbonElement(local_54,(CMFCRibbonBaseElement *)this);
      *(undefined4 *)(local_54 + 0x1e24) = 1;
      iVar2 = (**(code **)(*(int *)this + 0x1c8))();
      for (iVar12 = 0; (iVar2 != 0 && (iVar12 < *(int *)(this + 0x158))); iVar12 = iVar12 + 1) {
        if ((iVar12 < 0) || (*(int *)(this + 0x158) <= iVar12)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        if (*(int *)(*(int *)(*(int *)(this + 0x154) + iVar12 * 4) + 0x90) == 0) {
          iVar2 = 0;
        }
      }
      *(int *)(local_54 + 0x1e28) = iVar2;
      if ((*(int *)(this + 0x30) != 0) &&
         (iVar2 = (**(code **)(**(int **)(this + 0x30) + 0x8c))(), iVar2 != 0)) {
        piVar7 = (int *)(**(code **)(**(int **)(this + 0x30) + 0x8c))();
        iVar2 = (**(code **)(*piVar7 + 0x10))();
        if (iVar2 != 0) {
          *(undefined4 *)(local_54 + 0x1e28) = 0;
        }
      }
      local_34.left = *(LONG *)(this + 0x18);
      local_34.top = *(LONG *)(this + 0x1c);
      local_34.right = *(LONG *)(this + 0x20);
      local_34.bottom = *(LONG *)(this + 0x24);
      CWnd::ClientToScreen(pCVar3,&local_34);
      if ((*(int *)(this + 0x104) != 0) || (local_50 = local_34.left, uVar5 != 0)) {
        local_50 = local_34.right;
      }
      local_48 = local_34.bottom;
      if (((*(int *)(this + 0x134) != 0) && (*(int *)(this + 0x104) != 0)) && (uVar5 == 0)) {
        *(undefined4 *)(local_54 + 0xeb8) = 1;
      }
      iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
      if (iVar2 != 0) {
        local_50 = local_34.left;
        if (uVar5 == 0) {
          local_50 = local_34.right;
        }
        local_48 = local_34.top;
      }
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      SetRectEmpty(&local_24);
      piVar7 = (int *)(**(code **)(*(int *)this + 0x8c))();
      if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 0x20))(&local_24), iVar2 != 0))
      {
        CWnd::ClientToScreen(pCVar3,&local_24);
        local_50 = local_24.right;
        if (uVar5 == 0) {
          local_50 = local_24.left;
        }
        local_48 = local_24.top;
        CMFCRibbonPanelMenuBar::SetPreferedSize
                  ((CMFCRibbonPanelMenuBar *)(local_54 + 0x10c4),local_24.right - local_24.left,
                   local_24.bottom - local_24.top);
        *(undefined4 *)(local_54 + 0x1e28) = 0;
      }
      (**(code **)(*(int *)local_54 + 0x208))(pCVar6,local_50,local_48,0,0,0);
    }
    CMFCRibbonBaseElement::SetDroppedDown((CMFCRibbonBaseElement *)this,local_54);
  }
LAB_100bc3cd:
  FUN_100f90cf();
  return;
}


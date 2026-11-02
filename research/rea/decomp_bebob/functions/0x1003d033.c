// rea decompile_all
// name: CPaneFrameWnd::OnPressButtons
// address: 0x1003d033
// body: available
// range: 0x1003d033-0x1003d418 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d150 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CPaneFrameWnd::OnPressButtons(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::OnPressButtons(CPaneFrameWnd *this,uint param_1)

{
  CObject *pCVar1;
  int iVar2;
  undefined **ppuVar3;
  HMODULE pHVar4;
  CMFCPopupMenu *this_00;
  CMFCToolBarMenuButton *pCVar5;
  int *piVar6;
  HMENU__ *pHVar7;
  undefined4 *puVar8;
  CMFCPopupMenu *this_01;
  wchar_t *pwVar9;
  CMFCPopupMenu *pCVar10;
  int iVar11;
  tagPOINT local_3e0;
  CMFCCaptionButton *local_3d8;
  CMFCPopupMenu *local_3d4;
  CMFCPopupMenu *local_3d0;
  CMFCPopupMenu *local_3cc;
  wchar_t *local_3c8;
  CMFCToolBarMenuButton local_3c4 [232];
  CMFCToolBarMenuButton local_2dc [232];
  CMFCToolBarMenuButton local_1f4 [232];
  CMFCToolBarMenuButton local_10c [180];
  undefined4 local_58;
  int local_24;
  int local_20;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3d8;
  local_8 = 0x1003d042;
  if ((DAT_10166e54 == 0) && (param_1 == 0x19)) {
    local_3d8 = FindButton(this,0x19);
    if (local_3d8 == (CMFCCaptionButton *)0x0) goto LAB_1003d411;
    pCVar1 = (CObject *)(**(code **)(*(int *)this + 0x1a4))();
    if ((pCVar1 == (CObject *)0x0) || (*(int *)(pCVar1 + 0x20) == 0)) goto LAB_1003d411;
    iVar2 = CObject::IsKindOf(pCVar1,(CRuntimeClass *)&PTR_s_CMFCToolBar_10160470);
    if (iVar2 == 0) goto LAB_1003d411;
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,pCVar1);
    local_3cc = *(CMFCPopupMenu **)(pCVar1 + 0xca0);
    if ((local_3cc == (CMFCPopupMenu *)0x0) || (*(int *)(pCVar1 + 0xb54) == 0)) goto LAB_1003d411;
    *(int *)(local_3d8 + 4) = 1;
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(&local_3c8,(int *)ppuVar3);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)pCVar1,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c8);
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimLeft
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c8);
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimRight
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c8);
    if (*(int *)(local_3c8 + -6) == 0) {
      pHVar4 = (HMODULE)FUN_1000ac62();
      if (pHVar4 == (HMODULE)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_10006200(&local_3c8,pHVar4,0x3ee8);
      }
      if (iVar2 == 0) goto LAB_1003d150;
    }
    local_3d4 = FUN_1000858a(0x10c4);
    local_8._0_1_ = 1;
    if (local_3d4 == (CMFCPopupMenu *)0x0) {
      this_00 = (CMFCPopupMenu *)0x0;
    }
    else {
      this_00 = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(local_3d4);
    }
    local_8._0_1_ = 0;
    local_3d4 = FUN_1000858a(0x10c4);
    local_8._0_1_ = 2;
    if (local_3d4 == (CMFCPopupMenu *)0x0) {
      local_3d0 = (CMFCPopupMenu *)0x0;
    }
    else {
      local_3d0 = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(local_3d4);
    }
    local_8._0_1_ = 0;
    pCVar5 = (CMFCToolBarMenuButton *)
             CMFCToolBarMenuButton::CMFCToolBarMenuButton(local_3c4,1,(HMENU__ *)0x0,-1,L"DUMMY",0);
    local_8._0_1_ = 3;
    CMFCPopupMenu::InsertItem(local_3d0,pCVar5,-1);
    local_8._0_1_ = 0;
    CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_3c4);
    piVar6 = (int *)(**(code **)(*(int *)local_3d0 + 0x1c0))();
    iVar11 = 0;
    iVar2 = -1;
    pwVar9 = local_3c8;
    pHVar7 = (HMENU__ *)(**(code **)(*piVar6 + 0x438))();
    CMFCToolBarMenuButton::CMFCToolBarMenuButton(local_1f4,0xffffffff,pHVar7,iVar2,pwVar9,iVar11);
    local_8._0_1_ = 4;
    puVar8 = (undefined4 *)GetCustomizeText(local_3cc,(int *)&local_3d4);
    local_8._0_1_ = 5;
    CMFCToolBarMenuButton::CMFCToolBarMenuButton
              (local_2dc,*(uint *)(local_3cc + 0xe8),(HMENU__ *)0x0,-1,(wchar_t *)*puVar8,0);
    local_8._0_1_ = 7;
    FUN_10001030((undefined4 *)(local_3d4 + -0x10));
    local_3cc = FUN_1000858a(0x10c4);
    local_8._0_1_ = 8;
    if (local_3cc == (CMFCPopupMenu *)0x0) {
      this_01 = (CMFCPopupMenu *)0x0;
    }
    else {
      this_01 = (CMFCPopupMenu *)CMFCPopupMenu::CMFCPopupMenu(local_3cc);
    }
    local_8._0_1_ = 7;
    CMFCPopupMenu::InsertItem(this_01,local_1f4,-1);
    CMFCPopupMenu::InsertItem(this_01,local_2dc,-1);
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(&local_3cc,(int *)ppuVar3);
    local_8 = CONCAT31(local_8._1_3_,9);
    pHVar4 = (HMODULE)FUN_1000ac62();
    if (pHVar4 == (HMODULE)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_10006200(&local_3cc,pHVar4,0x427a);
    }
    if (iVar2 == 0) {
LAB_1003d150:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    piVar6 = (int *)(**(code **)(*(int *)this_01 + 0x1c0))();
    iVar11 = 0;
    iVar2 = -1;
    pCVar10 = local_3cc;
    pHVar7 = (HMENU__ *)(**(code **)(*piVar6 + 0x438))();
    CMFCToolBarMenuButton::CMFCToolBarMenuButton
              (local_10c,0xffffffff,pHVar7,iVar2,(wchar_t *)pCVar10,iVar11);
    local_58 = 1;
    local_8._0_1_ = 10;
    (**(code **)(*(int *)local_3d0 + 4))(1);
    (**(code **)(*(int *)this_01 + 4))(1);
    CMFCPopupMenu::InsertItem(this_00,local_10c,-1);
    (**(code **)(*(int *)local_3d8 + 0xc))(&local_24);
    local_3e0.x = local_24;
    local_3e0.y = local_20;
    ClientToScreen(*(HWND *)(this + 0x20),&local_3e0);
    CMFCCaptionButton::GetSize();
    (**(code **)(*(int *)this_00 + 0x208))(this,local_3e0.x + -2,local_3e0.y + -9,0,0,0);
    *(undefined4 *)(this_00 + 0xeac) = 1;
    *(undefined4 *)(this_00 + 0x54) = *(undefined4 *)(this + 0x20);
    CMFCPopupMenu::SetQuickMode(this_00);
    *(undefined4 *)(this_00 + 0x10b8) = 1;
    local_8._0_1_ = 9;
    CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_10c);
    FUN_10001030((undefined4 *)(local_3cc + -0x10));
    local_8._0_1_ = 4;
    CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_2dc);
    local_8 = (uint)local_8._1_3_ << 8;
    CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_1f4);
    FUN_10001030((undefined4 *)(local_3c8 + -8));
  }
LAB_1003d411:
  FUN_100f90cf();
  return;
}


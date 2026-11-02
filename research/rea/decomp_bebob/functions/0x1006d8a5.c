// rea decompile_all
// name: CMFCRibbonBar::SetMaximizeMode
// address: 0x1006d8a5
// body: available
// range: 0x1006d8a5-0x1006db07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006d9ea to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCRibbonBar::SetMaximizeMode(int,class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonBar::SetMaximizeMode(CMFCRibbonBar *this,int param_1,CWnd *param_2)

{
  CWnd *pCVar1;
  int *piVar2;
  CWnd *this_00;
  CObject *pCVar3;
  HMENU pHVar4;
  CMenu *pCVar5;
  BOOL BVar6;
  ulong uVar7;
  CMFCRibbonBaseElement *pCVar8;
  int iVar9;
  tagMENUITEMINFOW local_48;
  CMFCRibbonCaptionButton *local_18;
  CMFCRibbonBaseElement *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  this_00 = param_2;
  uStack_4 = 0x38;
  local_8 = 0x1006d8b1;
  if (*(int *)(this + 0x2e8) != param_1) {
    local_14 = (CMFCRibbonBaseElement *)0x0;
    if (0 < *(int *)(this + 700)) {
      do {
        iVar9 = *(int *)(this + 0x3e0) + -1;
        if ((iVar9 < 0) || (*(int *)(this + 0x3e0) <= iVar9)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        piVar2 = *(int **)(*(int *)(this + 0x3dc) + iVar9 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))(1);
        }
        CArray<int,int>::SetSize((CArray<int,int> *)(this + 0x3d8),iVar9,-1);
        local_14 = local_14 + 1;
      } while ((int)local_14 < *(int *)(this + 700));
    }
    *(undefined4 *)(this + 700) = 0;
    if (param_1 != 0) {
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)param_2);
      if ((pCVar3 == (CObject *)0x0) ||
         (local_14 = (CMFCRibbonBaseElement *)0x1, *(int *)(pCVar3 + 0xa0) == 0)) {
        local_14 = (CMFCRibbonBaseElement *)0x0;
      }
      pCVar1 = param_2 + 0x20;
      param_2 = (CWnd *)0x0;
      pHVar4 = GetSystemMenu(*(HWND *)pCVar1,0);
      pCVar5 = CMenu::FromHandle(pHVar4);
      if ((pCVar5 != (CMenu *)0x0) && (BVar6 = IsMenu(*(HMENU *)(pCVar5 + 4)), BVar6 != 0)) {
        param_2 = *(CWnd **)(pCVar5 + 4);
        BVar6 = IsMenu((HMENU)param_2);
        if ((BVar6 == 0) ||
           ((uVar7 = CWnd::GetExStyle(this_00), (uVar7 & 0x80000) == 0 &&
            (local_14 == (CMFCRibbonBaseElement *)0x0)))) {
          param_2 = (CWnd *)0x0;
        }
      }
      local_14 = (CMFCRibbonBaseElement *)GetWindowLongW(*(HWND *)(this_00 + 0x20),-0x10);
      if (param_2 != (CWnd *)0x0) {
        if (((uint)local_14 & 0x20000) != 0) {
          local_18 = FUN_1000858a(0x168);
          local_8 = 0;
          if (local_18 == (CMFCRibbonCaptionButton *)0x0) {
            pCVar8 = (CMFCRibbonBaseElement *)0x0;
          }
          else {
            pCVar8 = (CMFCRibbonBaseElement *)
                     CMFCRibbonCaptionButton::CMFCRibbonCaptionButton
                               (local_18,0xf020,*(HWND__ **)(this_00 + 0x20));
          }
          local_8 = 0xffffffff;
          CMFCRibbonButtonsGroup::AddButton((CMFCRibbonButtonsGroup *)(this + 0x32c),pCVar8);
          *(int *)(this + 700) = *(int *)(this + 700) + 1;
        }
        if (((uint)local_14 & 0x10000) != 0) {
          local_18 = FUN_1000858a(0x168);
          local_8 = 1;
          if (local_18 == (CMFCRibbonCaptionButton *)0x0) {
            pCVar8 = (CMFCRibbonBaseElement *)0x0;
          }
          else {
            pCVar8 = (CMFCRibbonBaseElement *)
                     CMFCRibbonCaptionButton::CMFCRibbonCaptionButton
                               (local_18,0xf120,*(HWND__ **)(this_00 + 0x20));
          }
          local_8 = 0xffffffff;
          CMFCRibbonButtonsGroup::AddButton((CMFCRibbonButtonsGroup *)(this + 0x32c),pCVar8);
          *(int *)(this + 700) = *(int *)(this + 700) + 1;
        }
        local_18 = FUN_1000858a(0x168);
        local_8 = 2;
        if (local_18 == (CMFCRibbonCaptionButton *)0x0) {
          local_14 = (CMFCRibbonBaseElement *)0x0;
        }
        else {
          local_14 = (CMFCRibbonBaseElement *)
                     CMFCRibbonCaptionButton::CMFCRibbonCaptionButton
                               (local_18,0xf060,*(HWND__ **)(this_00 + 0x20));
        }
        local_8 = 0xffffffff;
        _memset(&local_48,0,0x30);
        local_48.cbSize = 0x30;
        local_48.fMask = 1;
        BVar6 = GetMenuItemInfoW((HMENU)param_2,0xf060,0,&local_48);
        if ((BVar6 == 0) || (((byte)local_48.fState & 3) != 0)) {
          *(undefined4 *)(local_14 + 0x78) = 1;
        }
        CMFCRibbonButtonsGroup::AddButton((CMFCRibbonButtonsGroup *)(this + 0x32c),local_14);
        *(int *)(this + 700) = *(int *)(this + 700) + 1;
      }
    }
    *(int *)(this + 0x2e8) = param_1;
    *(undefined4 *)(this + 0x324) = 0;
    *(undefined4 *)(this + 0x328) = 0;
    (**(code **)(*(int *)this + 0x20c))();
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  return;
}


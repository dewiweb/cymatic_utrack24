// rea decompile_all
// name: FUN_100a7871
// address: 0x100a7871
// body: available
// range: 0x100a7871-0x100a7b8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a7b88 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_100a7871(CMFCOutlookBarTabCtrl *param_1)

{
  int iVar1;
  BOOL BVar2;
  int *piVar3;
  HICON pHVar4;
  LPCWSTR in_stack_fffffe30;
  UINT in_stack_fffffe34;
  int local_1c0;
  undefined1 local_1bc [4];
  HINSTANCE local_1b8;
  int local_1b4;
  CMFCToolBarButton local_1b0 [112];
  undefined **local_140 [46];
  undefined4 local_88;
  CMFCOutlookBarTabCtrl *local_7c;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1b0;
  local_8 = 0x100a7880;
  iVar1 = CMFCOutlookBarTabCtrl::IsMode2003(param_1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x260) + 0x350))();
    CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(param_1 + 0xf28));
    FUN_10006ce0(&local_1b4,(short *)&PTR_1011d390);
    local_8 = 0;
    EnableCustomizeButton(param_1 + 0x260,1,0,&local_1b4,0);
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(local_1b4 + -0x10));
    if ((param_1 == (CMFCOutlookBarTabCtrl *)0xfffffda8) || (*(int *)(param_1 + 0x25c) == 0)) {
      piVar3 = (int *)(**(code **)(*(int *)param_1 + 0x234))(local_1bc);
      iVar1 = *piVar3;
      local_1b8 = (HINSTANCE)piVar3[1];
    }
    else {
      iVar1 = *(int *)(param_1 + 0x250);
      local_1b8 = *(HINSTANCE *)(param_1 + 0x254);
    }
    if ((iVar1 == 0) && (local_1b8 == (HINSTANCE)0x0)) {
      iVar1 = 0x10;
      local_1b8 = (HINSTANCE)0x10;
    }
    FUN_10025d25(param_1 + 0x260,iVar1 + 6,(undefined1 *)((int)&local_1b8[3].unused + 2),iVar1,
                 local_1b8,0);
    FUN_100822ef((int)(param_1 + 0x504));
    *(int *)(param_1 + 0x554) = iVar1;
    *(HINSTANCE *)(param_1 + 0x558) = local_1b8;
    if (*(int *)(param_1 + 0xf00) != 0) {
      CMFCCustomizeButton::CMFCCustomizeButton((CMFCCustomizeButton *)local_140);
      local_140[0] = COutlookCustomizeButton::vftable;
      local_8 = 1;
      CMFCCustomizeButton::CopyFrom
                ((CMFCCustomizeButton *)local_140,*(CMFCToolBarButton **)(param_1 + 0xf00));
      local_3c = 0;
      local_34 = 0;
      local_88 = 1;
      local_7c = param_1;
      CObList::RemoveHead((CObList *)(param_1 + 0xe28));
      if (*(int **)(param_1 + 0xf00) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xf00) + 4))(1);
      }
      *(undefined4 *)(param_1 + 0xf00) = 0;
      (**(code **)(*(int *)(param_1 + 0x260) + 0x344))(local_140,0xffffffff);
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0xf00) = *(undefined4 *)(*(int *)(param_1 + 0xe2c) + 8);
      CMFCCustomizeButton::~CMFCCustomizeButton((CMFCCustomizeButton *)local_140);
    }
    local_1c0 = 0;
    local_1b4 = 0;
    if (0 < *(int *)(param_1 + 0x9c)) {
      do {
        if ((local_1b4 < 0) || (*(int *)(param_1 + 0x90) <= local_1b4)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + local_1b4 * 4);
        if ((*(int *)(iVar1 + 0x34) != 0) &&
           (BVar2 = IsRectEmpty((RECT *)(iVar1 + 0x10)), BVar2 != 0)) {
          CMFCToolBarButton::CMFCToolBarButton
                    (local_1b0,local_1c0 + 0xf203,local_1c0,*(wchar_t **)(iVar1 + 4),0,0);
          local_8 = 2;
          (**(code **)(*(int *)(param_1 + 0x260) + 0x344))(local_1b0,0xffffffff);
          piVar3 = CMap<int,int,int,int>::operator[]
                             ((CMap<int,int,int,int> *)(param_1 + 0xf28),local_1c0);
          iVar1 = local_1b4;
          *piVar3 = local_1b4;
          local_1b8 = (HINSTANCE)(**(code **)(*(int *)param_1 + 0x1c0))(local_1b4);
          if (((param_1 != (CMFCOutlookBarTabCtrl *)0xfffffda8) && (*(int *)(param_1 + 0x25c) != 0))
             || (((pHVar4 = (HICON)(**(code **)(*(int *)param_1 + 0x1d4))(iVar1),
                  pHVar4 == (HICON__ *)0x0 &&
                  (iVar1 = (**(code **)(*(int *)param_1 + 0x238))(), iVar1 != 0)) &&
                 (local_1b8 != (HINSTANCE)0xffffffff)))) {
            pHVar4 = FID_conflict_ExtractIconW(local_1b8,in_stack_fffffe30,in_stack_fffffe34);
          }
          CMFCToolBarImages::AddIcon((CMFCToolBarImages *)(param_1 + 0x504),pHVar4,0);
          local_1c0 = local_1c0 + 1;
          local_8 = 0xffffffff;
          CMFCToolBarButton::~CMFCToolBarButton(local_1b0);
        }
        local_1b4 = local_1b4 + 1;
      } while (local_1b4 < *(int *)(param_1 + 0x9c));
    }
    (**(code **)(*(int *)(param_1 + 0x260) + 0x3e0))();
    RedrawWindow(*(HWND *)(param_1 + 0x280),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  FUN_100f90cf();
  return;
}


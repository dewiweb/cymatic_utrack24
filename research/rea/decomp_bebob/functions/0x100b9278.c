// rea decompile_all
// name: CMFCRibbonBaseElement::AddToListBox
// address: 0x100b9278
// body: available
// range: 0x100b9278-0x100b93d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b92a1 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonBaseElement::AddToListBox(class
   CMFCRibbonCommandsListBox *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCRibbonBaseElement::AddToListBox
          (CMFCRibbonBaseElement *this,CMFCRibbonCommandsListBox *param_1,int param_2)

{
  CMFCRibbonCommandsListBox *pCVar1;
  uint uVar2;
  CMFCRibbonCommandsListBox *pCVar3;
  int iVar4;
  LRESULT LVar5;
  int *piVar6;
  WPARAM wParam;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  pCVar3 = param_1;
  uStack_4 = 8;
  local_8 = 0x100b9284;
  if (param_1 == (CMFCRibbonCommandsListBox *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x20);
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  uVar2 = *(uint *)(this + 0x48);
  if (((uVar2 == 0) || (uVar2 == 0xffffffff)) || ((0xe10f < uVar2 && (uVar2 < 0xe120)))) {
LAB_100b93ce:
    wParam = 0xffffffff;
  }
  else {
    pCVar1 = param_1 + 0x20;
    param_1 = (CMFCRibbonCommandsListBox *)0x0;
    LVar5 = SendMessageW(*(HWND *)pCVar1,0x18b,0,0);
    if (0 < LVar5) {
      do {
        piVar6 = (int *)SendMessageW(*(HWND *)(pCVar3 + 0x20),0x199,(WPARAM)param_1,0);
        if ((piVar6 != (int *)0x0) && (piVar6[0x12] == *(int *)(this + 0x48))) {
          iVar4 = (**(code **)(*piVar6 + 0x98))();
          if (iVar4 == 0) goto LAB_100b93ce;
        }
        param_1 = param_1 + 1;
        LVar5 = SendMessageW(*(HWND *)(pCVar3 + 0x20),0x18b,0,0);
      } while ((int)param_1 < LVar5);
    }
    (**(code **)(*(int *)this + 0x10c))();
    piVar6 = FUN_10005e30((int *)(*(int *)(this + 0x10) + -0x10));
    param_1 = (CMFCRibbonCommandsListBox *)(piVar6 + 4);
    local_8 = 0;
    if (piVar6[1] == 0) {
      FUN_100022b0(&param_1,*(short **)(this + 4));
    }
    FUN_10006ce0(local_14,(short *)&DAT_1012bb58);
    local_8 = CONCAT31(local_8._1_3_,1);
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_1,L"&&",
               local_14[0]);
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_1,L'&');
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_1,
               local_14[0],L"&");
    wParam = SendMessageW(*(HWND *)(pCVar3 + 0x20),0x180,0,(LPARAM)param_1);
    SendMessageW(*(HWND *)(pCVar3 + 0x20),0x19a,wParam,(LPARAM)this);
    FUN_10001030((undefined4 *)(local_14[0] + -8));
    FUN_10001030((undefined4 *)(param_1 + -0x10));
  }
  return wParam;
}


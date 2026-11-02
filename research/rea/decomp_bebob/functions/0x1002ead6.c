// rea decompile_all
// name: CMFCToolBar::CreateDroppedButton
// address: 0x1002ead6
// body: available
// range: 0x1002ead6-0x1002ebfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002eb01 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class CMFCToolBarButton * __thiscall CMFCToolBar::CreateDroppedButton(class
   COleDataObject *)
   
   Library: Visual Studio 2010 Release */

CMFCToolBarButton * __thiscall
CMFCToolBar::CreateDroppedButton(CMFCToolBar *this,COleDataObject *param_1)

{
  CMFCToolBar *pCVar1;
  CMFCToolBarButton *pCVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_4ec;
  CMFCToolBar *local_4e8;
  CMFCToolBarButtonCustomizeDialog local_4e4 [1244];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4dc;
  local_8 = 0x1002eae5;
  local_4e8 = this;
  pCVar2 = CMFCToolBarButton::CreateFromOleData(param_1);
  if (pCVar2 == (CMFCToolBarButton *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  iVar3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     (pCVar2 + 0x2c),L'\t',0);
  if (-1 < iVar3) {
    puVar4 = (undefined4 *)
             ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                       ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        (pCVar2 + 0x2c),(int)&local_4ec);
    local_8 = 0;
    FUN_10007c90(pCVar2 + 0x2c,puVar4);
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(local_4ec + -0x10));
  }
  pCVar1 = local_4e8;
  if (*(int *)(pCVar2 + 0x1c) != 0) {
    *(undefined4 *)(pCVar2 + 8) = 0;
    *(undefined4 *)(pCVar2 + 0xc) = 1;
    if (*(int *)(pCVar2 + 4) == 0) {
      iVar3 = *(int *)(pCVar2 + 0x34);
    }
    else {
      iVar3 = *(int *)(pCVar2 + 0x38);
    }
    if ((iVar3 == -1) && (*(int *)(*(int *)(pCVar2 + 0x2c) + -0xc) == 0)) {
      iVar3 = (**(code **)(*(int *)local_4e8 + 0x408))(pCVar2);
      CMFCToolBarButtonCustomizeDialog::CMFCToolBarButtonCustomizeDialog
                (local_4e4,pCVar2,DAT_10166e6c,(CWnd *)pCVar1,0,iVar3);
      local_8 = 1;
      iVar3 = FUN_1001bf3c((CDialog *)local_4e4);
      if (iVar3 != 1) {
        (**(code **)(*(int *)pCVar2 + 4))(1);
        local_8 = 0xffffffff;
        CMFCToolBarButtonCustomizeDialog::~CMFCToolBarButtonCustomizeDialog(local_4e4);
        goto LAB_1002ebf3;
      }
      local_8 = 0xffffffff;
      CMFCToolBarButtonCustomizeDialog::~CMFCToolBarButtonCustomizeDialog(local_4e4);
    }
  }
  if (*(int *)(pCVar2 + 4) == 0) {
    iVar3 = *(int *)(pCVar2 + 0x34);
  }
  else {
    iVar3 = *(int *)(pCVar2 + 0x38);
  }
  if (iVar3 < 0) {
    *(undefined4 *)(pCVar2 + 8) = 1;
    *(undefined4 *)(pCVar2 + 0xc) = 0;
  }
LAB_1002ebf3:
  pCVar2 = (CMFCToolBarButton *)FUN_100f90cf();
  return pCVar2;
}


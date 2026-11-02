// rea decompile_all
// name: OnUserToolTip
// address: 0x100f08c1
// body: available
// range: 0x100f08c1-0x100f0942 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f08fa to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall CMFCTasksPaneToolBar::OnUserToolTip(class CMFCToolBarButton
   *,class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > &)const 
    protected: virtual int __thiscall CMFCTasksPaneToolBar::OnUserToolTip(class CMFCToolBarButton
   *,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >
   &)const 
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall OnUserToolTip(void *this,CObject *param_1,void *param_2)

{
  int iVar1;
  HMODULE pHVar2;
  CObject *pCVar3;
  undefined4 uVar4;
  
  iVar1 = CObject::IsKindOf(param_1,(CRuntimeClass *)&PTR_s_CTasksPaneMenuButton_101631f0);
  if (iVar1 == 0) {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CTasksPaneNavigateButton_101631b8,param_1);
    if ((pCVar3 == (CObject *)0x0) &&
       (pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CTasksPaneHistoryButton_101631d4,param_1
                                   ), pCVar3 == (CObject *)0x0)) {
      uVar4 = OnUserToolTip(this);
      return uVar4;
    }
    FUN_10007c90(param_2,(undefined4 *)(pCVar3 + 0x2c));
  }
  else {
    pHVar2 = (HMODULE)FUN_1000ac62();
    if ((pHVar2 == (HMODULE)0x0) || (iVar1 = FUN_10006200(param_2,pHVar2,0x4280), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
  }
  return 1;
}


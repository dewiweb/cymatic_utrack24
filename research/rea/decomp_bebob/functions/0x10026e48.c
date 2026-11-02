// rea decompile_all
// name: OnUserToolTip
// address: 0x10026e48
// body: available
// range: 0x10026e48-0x10026ef8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCToolBar::OnUserToolTip(class CMFCToolBarButton *,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > &)const 
    public: virtual int __thiscall CMFCToolBar::OnUserToolTip(class CMFCToolBarButton *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)const 
   
   Library: Visual Studio 2010 Release */

undefined4 __fastcall OnUserToolTip(CWnd *param_1)

{
  CFrameWnd *pCVar1;
  CObject *pCVar2;
  undefined4 uVar3;
  
  pCVar1 = AFXGetParentFrame(param_1);
  if (pCVar1 != (CFrameWnd *)0x0) {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownFrame_1016161c,(CObject *)pCVar1
                               );
    if ((pCVar2 != (CObject *)0x0) &&
       (pCVar1 = AFXGetParentFrame((CWnd *)pCVar2), pCVar1 == (CFrameWnd *)0x0)) {
      return 0;
    }
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar1);
    if (pCVar2 != (CObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10026e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(int *)pCVar2 + 0x1f0))();
      return uVar3;
    }
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,(CObject *)pCVar1);
    if (pCVar2 != (CObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10026eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(int *)pCVar2 + 0x1dc))();
      return uVar3;
    }
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,(CObject *)pCVar1);
    if (pCVar2 != (CObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10026ece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(int *)pCVar2 + 0x1c8))();
      return uVar3;
    }
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_1012089c,(CObject *)0x0);
    if (pCVar2 != (CObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10026eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(int *)pCVar2 + 0x1f8))();
      return uVar3;
    }
  }
  return 0;
}


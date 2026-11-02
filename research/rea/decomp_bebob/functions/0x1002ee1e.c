// rea decompile_all
// name: CMFCToolBar::OnPromptReset
// address: 0x1002ee1e
// body: available
// range: 0x1002ee1e-0x1002eeeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ee88 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: long __thiscall CMFCToolBar::OnPromptReset(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CMFCToolBar::OnPromptReset(CMFCToolBar *this,uint param_1,long param_2)

{
  undefined **ppuVar1;
  HMODULE pHVar2;
  int iVar3;
  wchar_t *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1002ee2a;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar1);
  local_8 = 0;
  CWnd::GetWindowTextW
            ((CWnd *)this,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimLeft
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimRight
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  if (*(int *)(local_14[0] + -0xc) == 0) {
    pHVar2 = (HMODULE)FUN_1000ac62();
    iVar3 = 0;
    if (pHVar2 != (HMODULE)0x0) {
      iVar3 = FUN_10006200(local_14,pHVar2,0x3ee8);
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
  }
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(&local_18,(int *)ppuVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  Format((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&local_18,0x3eef);
  iVar3 = AfxMessageBox(local_18,0x31,0);
  if (iVar3 == 1) {
    (**(code **)(*(int *)this + 0x388))();
  }
  FUN_10001030((undefined4 *)(local_18 + -8));
  FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  return 0;
}


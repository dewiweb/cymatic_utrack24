// rea decompile_all
// name: CMFCLinkCtrl::OnDraw
// address: 0x1004ed5f
// body: available
// range: 0x1004ed5f-0x1004ee4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004edae to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCLinkCtrl::OnDraw(class CDC *,class CRect const &,unsigned
   int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCLinkCtrl::OnDraw(CMFCLinkCtrl *this,CDC *param_1,CRect *param_2,uint param_3)

{
  CFont *pCVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x1004ed6b;
  if ((*(int *)(this + 0x754) == 0) && (*(int *)(this + 0xb0) == 0)) {
    pCVar1 = CMFCButton::SelectFont((CMFCButton *)this,param_1);
  }
  else {
    pCVar1 = (CFont *)(**(code **)(*(int *)param_1 + 0x28))(&DAT_10166bdc);
  }
  if (pCVar1 != (CFont *)0x0) {
    uVar2 = DAT_10166ae0;
    if ((*(int *)(this + 0xb0) == 0) && (uVar2 = DAT_10166ae4, *(int *)(this + 0x75c) == 0)) {
      uVar2 = DAT_10166adc;
    }
    (**(code **)(*(int *)param_1 + 0x30))(uVar2);
    CDC::SetBkMode(param_1,1);
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(&local_28,(int *)ppuVar3);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28);
    local_24 = *(undefined4 *)param_2;
    uStack_20 = *(undefined4 *)(param_2 + 4);
    uStack_1c = *(undefined4 *)(param_2 + 8);
    uStack_18 = *(undefined4 *)(param_2 + 0xc);
    (**(code **)(*(int *)param_1 + 0x68))
              (local_28,*(undefined4 *)(local_28 + -0xc),&local_24,
               (-(uint)(*(int *)(this + 0x750) != 0) & 0xfffffff0) + 0x20);
    (**(code **)(*(int *)param_1 + 0x28))(pCVar1);
    FUN_10001030((undefined4 *)(local_28 + -0x10));
    FUN_100f90cf();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


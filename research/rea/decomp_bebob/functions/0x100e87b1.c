// rea decompile_all
// name: OnUpdateToolTip
// address: 0x100e87b1
// body: available
// range: 0x100e87b1-0x100e8826 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCToolBarEditBoxButton::OnUpdateToolTip(class CWnd *,int,class
   CToolTipCtrl &,class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   &)
    public: virtual int __thiscall CMFCToolBarEditBoxButton::OnUpdateToolTip(class CWnd *,int,class
   CToolTipCtrl &,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall
OnUpdateToolTip(void *this,undefined4 param_1,undefined4 param_2,CToolTipCtrl *param_3,
               undefined4 *param_4)

{
  CWnd *pCVar1;
  BOOL BVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined4 uVar5;
  wchar_t *pwVar6;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100e87bd;
  pCVar1 = *(CWnd **)((int)this + 0x78);
  if ((pCVar1 == (CWnd *)0x0) || (BVar2 = IsWindow(*(HWND *)(pCVar1 + 0x20)), BVar2 == 0)) {
    uVar5 = 0;
  }
  else {
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar3);
    local_8 = 0;
    iVar4 = (**(code **)(*(int *)this + 0xa8))(local_14);
    pwVar6 = local_14[0];
    if (iVar4 == 0) {
      pwVar6 = (wchar_t *)*param_4;
    }
    CToolTipCtrl::AddTool(param_3,pCVar1,pwVar6,(tagRECT *)0x0,0);
    FUN_10001030((undefined4 *)(local_14[0] + -8));
    uVar5 = 1;
  }
  return uVar5;
}


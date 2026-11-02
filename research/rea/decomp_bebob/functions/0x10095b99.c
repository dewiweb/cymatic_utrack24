// rea decompile_all
// name: GetTabLabel
// address: 0x10095b99
// body: available
// range: 0x10095b99-0x10095be6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10095bdc to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCBaseTabCtrl::GetTabLabel(int,class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > &)const 
    public: virtual int __thiscall CMFCBaseTabCtrl::GetTabLabel(int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)const 
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall GetTabLabel(void *this,int param_1,void *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0x9c) <= param_1)) {
    uVar3 = 0;
  }
  else {
    if (*(int *)((int)this + 0x90) <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar1 = *(int *)(*(int *)((int)this + 0x8c) + param_1 * 4);
    if (*(int *)(iVar1 + 0x3c) == 0) {
      ppuVar2 = *(undefined ***)(iVar1 + 4);
    }
    else {
      ppuVar2 = &PTR_1011d390;
    }
    FUN_100022b0(param_2,(short *)ppuVar2);
    uVar3 = 1;
  }
  return uVar3;
}


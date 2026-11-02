// rea decompile_all
// name: GetIconToolTip
// address: 0x100ed198
// body: available
// range: 0x100ed198-0x100ed240 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char>
   > > __thiscall CMFCRibbonColorButton::GetIconToolTip(class CMFCRibbonGalleryIcon const *)const 
    protected: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CMFCRibbonColorButton::GetIconToolTip(class
   CMFCRibbonGalleryIcon const *)const 
   
   Library: Visual Studio 2010 Release */

undefined4 * __thiscall GetIconToolTip(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined3 extraout_var;
  int *piVar5;
  int *piVar6;
  
  iVar1 = param_2;
  uVar3 = CMFCRibbonColorButton::GetColorByIndex(this,*(int *)(param_2 + 0x168));
  if (uVar3 == 0xffffffff) {
    FUN_100b0e3c((int)this,param_1,iVar1);
  }
  else {
    ppuVar4 = FUN_1000ad47();
    FUN_10005e00(&param_2,(int *)ppuVar4);
    bVar2 = Lookup(&PTR_vftable_10161da0,uVar3,&param_2);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      FUN_100022f0(&param_2,L"Hex={%02X,%02X,%02X}");
    }
    piVar6 = (int *)(param_2 + -0x10);
    piVar5 = FUN_10005e30(piVar6);
    *param_1 = piVar5 + 4;
    FUN_10001030(piVar6);
  }
  return param_1;
}


// rea decompile_all
// name: CMFCRibbonTab::GetToolTipText
// address: 0x100acf7c
// body: available
// range: 0x100acf7c-0x100acfef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CMFCRibbonTab::GetToolTipText(void)const 
   
   Library: Visual Studio 2010 Release */

undefined4 * __thiscall CMFCRibbonTab::GetToolTipText(CMFCRibbonTab *this)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_stack_00000004;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100acf88;
  local_14[0] = (int *)0x0;
  if (*(int *)(this + 0xb0) == 0) {
    FUN_10006ce0(in_stack_00000004,(short *)&PTR_1011d390);
  }
  else {
    local_14[0] = FUN_10005e30((int *)(*(int *)(*(int *)(this + 0x2c) + 0x30) + -0x10));
    local_14[0] = local_14[0] + 4;
    local_8 = 0;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,L'&');
    piVar2 = local_14[0] + -4;
    piVar1 = FUN_10005e30(piVar2);
    *in_stack_00000004 = piVar1 + 4;
    FUN_10001030(piVar2);
  }
  return in_stack_00000004;
}


// rea decompile_all
// name: ATL::operator+
// address: 0x1000b7ed
// body: available
// range: 0x1000b7ed-0x1000b850 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > __cdecl
   ATL::operator+(char const *,class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > > const &)
   
   Library: Visual Studio 2010 Release */

char * __cdecl
ATL::operator+(char *param_1,
              CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  IAtlStringMgr *pIVar3;
  size_t sVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *in_stack_0000000c;
  
  pIVar3 = CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::GetManager
                     (in_stack_0000000c);
  FUN_10005e00(param_1,(int *)pIVar3);
  pwVar1 = *(wchar_t **)in_stack_0000000c;
  iVar2 = *(int *)(pwVar1 + -6);
  if (param_2 == (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)0x0) {
    sVar4 = 0;
  }
  else {
    sVar4 = _wcslen((wchar_t *)param_2);
  }
  CSimpleStringT<wchar_t,0>::Concatenate
            ((CSimpleStringT<wchar_t,0> *)param_1,(wchar_t *)param_2,sVar4,pwVar1,iVar2);
  return param_1;
}


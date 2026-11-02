// rea decompile_all
// name: AfxExtractSubString
// address: 0x1000ac6d
// body: available
// range: 0x1000ac6d-0x1000acea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall AfxExtractSubString(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &,wchar_t const *,int,wchar_t)
   
   Library: Visual Studio 2010 Release */

int AfxExtractSubString(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
                       wchar_t *param_2,int param_3,wchar_t param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  rsize_t rVar3;
  rsize_t rVar4;
  
  if (param_2 == (wchar_t *)0x0) {
LAB_1000ac7a:
    iVar1 = 0;
  }
  else {
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      pwVar2 = _wcschr(param_2,param_4);
      if (pwVar2 == (wchar_t *)0x0) {
        ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)param_1);
        goto LAB_1000ac7a;
      }
      param_2 = pwVar2 + 1;
    }
    pwVar2 = _wcschr(param_2,param_4);
    if (pwVar2 == (wchar_t *)0x0) {
      iVar1 = lstrlenW(param_2);
    }
    else {
      iVar1 = (int)pwVar2 - (int)param_2 >> 1;
    }
    rVar3 = iVar1 * 2;
    rVar4 = rVar3;
    pwVar2 = ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength
                       ((CSimpleStringT<wchar_t,0> *)param_1,iVar1);
    FUN_10004cd0(pwVar2,rVar3,param_2,rVar4);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)param_1,-1);
    iVar1 = 1;
  }
  return iVar1;
}


// rea decompile_all
// name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimRight
// address: 0x1001941a
// body: available
// range: 0x1001941a-0x1001946d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > & __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   >::TrimRight(void)
   
   Library: Visual Studio 2010 Release */

CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> * __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimRight
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this)

{
  wint_t _C;
  int iVar1;
  wint_t *pwVar2;
  wint_t *pwVar3;
  
  pwVar2 = *(wint_t **)this;
  _C = *pwVar2;
  pwVar3 = (wint_t *)0x0;
  if (_C != 0) {
    do {
      iVar1 = _iswspace(_C);
      if (iVar1 == 0) {
        pwVar3 = (wint_t *)0x0;
      }
      else if (pwVar3 == (wint_t *)0x0) {
        pwVar3 = pwVar2;
      }
      pwVar2 = pwVar2 + 1;
      _C = *pwVar2;
    } while (_C != 0);
    if (pwVar3 != (wint_t *)0x0) {
      iVar1 = (int)pwVar3 - *(int *)this >> 1;
      FUN_10002140(this,iVar1);
      FUN_100010c0(this,iVar1);
    }
  }
  return (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> *)this;
}


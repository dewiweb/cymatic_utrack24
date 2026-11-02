// rea decompile_all
// name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimLeft
// address: 0x100192ef
// body: available
// range: 0x100192ef-0x1001934c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > & __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   >::TrimLeft(void)
   
   Library: Visual Studio 2010 Release */

CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> * __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimLeft
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this)

{
  wint_t *pwVar1;
  int iVar2;
  void *pvVar3;
  wint_t *pwVar4;
  int iVar5;
  
  pwVar4 = *(wint_t **)this;
  while( true ) {
    iVar2 = _iswspace(*pwVar4);
    if (iVar2 == 0) break;
    pwVar4 = pwVar4 + 1;
  }
  pwVar1 = *(wint_t **)this;
  if (pwVar4 != pwVar1) {
    iVar2 = (int)pwVar4 - (int)pwVar1 >> 1;
    pvVar3 = (void *)FUN_10002140(this,*(int *)(pwVar1 + -6));
    iVar5 = *(int *)(*(int *)this + -0xc) - iVar2;
    FUN_10004d70(pvVar3,*(int *)(*(int *)this + -0xc) * 2 + 2,(void *)((int)pvVar3 + iVar2 * 2),
                 iVar5 * 2 + 2);
    FUN_100010c0(this,iVar5);
  }
  return (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> *)this;
}


// rea decompile_all
// name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Delete
// address: 0x10018fa2
// body: available
// range: 0x10018fa2-0x10019023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::Delete(int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Delete
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  rsize_t rVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  iVar1 = *(int *)(*(int *)this + -0xc);
  iVar3 = AtlAddThrow<int>(param_2,param_1);
  if (iVar1 < iVar3) {
    param_2 = iVar1 - param_1;
  }
  if (0 < param_2) {
    pwVar4 = CSimpleStringT<wchar_t,0>::GetBuffer((CSimpleStringT<wchar_t,0> *)this);
    rVar2 = (((iVar1 - param_1) - param_2) + 1) * 2;
    FUN_10004d70(pwVar4 + param_1,rVar2,pwVar4 + param_1 + param_2,rVar2);
    FUN_100010c0(this,iVar1 - param_2);
  }
  return *(int *)(*(int *)this + -0xc);
}


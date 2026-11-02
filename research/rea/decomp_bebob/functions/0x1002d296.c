// rea decompile_all
// name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
// address: 0x1002d296
// body: available
// range: 0x1002d296-0x1002d315 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::Remove(wchar_t)
   
   Library: Visual Studio 2010 Release */

int __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this,wchar_t param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  uint uVar8;
  uint local_8;
  
  iVar4 = *(int *)(*(int *)this + -0xc);
  pwVar5 = (wchar_t *)FUN_10002140(this,iVar4);
  pwVar2 = pwVar5 + iVar4;
  pwVar1 = pwVar5;
  while (pwVar6 = pwVar1, pwVar6 < pwVar2) {
    pwVar1 = pwVar6 + 1;
    if (*pwVar6 != param_1) {
      uVar8 = (int)pwVar1 - (int)pwVar6 >> 1;
      pwVar3 = pwVar5 + uVar8;
      for (local_8 = 0; (pwVar5 != pwVar3 && (local_8 < uVar8)); local_8 = local_8 + 1) {
        *pwVar5 = *pwVar6;
        pwVar6 = pwVar6 + 1;
        pwVar5 = pwVar5 + 1;
      }
    }
  }
  iVar7 = (int)pwVar6 - (int)pwVar5 >> 1;
  *pwVar5 = L'\0';
  FUN_100010c0(this,iVar4 - iVar7);
  return iVar7;
}


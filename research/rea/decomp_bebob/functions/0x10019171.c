// rea decompile_all
// name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
// address: 0x10019171
// body: available
// range: 0x10019171-0x100192ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::Replace(wchar_t const *,wchar_t const *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this,wchar_t *param_1
          ,wchar_t *param_2)

{
  wchar_t *pwVar1;
  rsize_t rVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  int local_18;
  size_t local_10;
  int local_c;
  size_t local_8;
  
  if (param_1 == (wchar_t *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = _wcslen(param_1);
  }
  if (local_8 == 0) {
    local_c = 0;
  }
  else {
    if (param_2 == (wchar_t *)0x0) {
      local_10 = 0;
    }
    else {
      local_10 = _wcslen(param_2);
    }
    local_c = 0;
    pwVar6 = *(wchar_t **)this;
    pwVar1 = pwVar6 + *(int *)(pwVar6 + -6);
    if (pwVar6 < pwVar1) {
      do {
        while (pwVar3 = _wcsstr(pwVar6,param_1), pwVar3 != (wchar_t *)0x0) {
          local_c = local_c + 1;
          pwVar6 = pwVar3 + local_8;
        }
        if (pwVar6 == (wchar_t *)0x0) {
          sVar4 = 0;
        }
        else {
          sVar4 = _wcslen(pwVar6);
        }
        pwVar6 = pwVar6 + sVar4 + 1;
      } while (pwVar6 < pwVar1);
      if (0 < local_c) {
        local_18 = *(int *)(*(int *)this + -0xc);
        iVar7 = (local_10 - local_8) * local_c + local_18;
        iVar8 = iVar7;
        if (iVar7 <= local_18) {
          iVar8 = local_18;
        }
        pwVar3 = (wchar_t *)FUN_10002140(this,iVar8);
        pwVar1 = pwVar3 + local_18;
        for (pwVar6 = pwVar3; pwVar6 < pwVar1; pwVar6 = pwVar6 + sVar4 + 1) {
          pwVar5 = _wcsstr(pwVar6,param_1);
          if (pwVar5 != (wchar_t *)0x0) {
            do {
              iVar8 = (local_18 - ((int)pwVar5 - (int)pwVar3 >> 1)) - local_8;
              rVar2 = iVar8 * 2;
              FUN_10004d70(pwVar5 + local_10,rVar2,pwVar5 + local_8,rVar2);
              FUN_10004cd0(pwVar5,local_10 * 2,param_2,local_10 * 2);
              pwVar6 = pwVar5 + local_10;
              local_18 = local_18 + (local_10 - local_8);
              pwVar5[iVar8 + local_10] = L'\0';
              pwVar5 = _wcsstr(pwVar6,param_1);
            } while (pwVar5 != (wchar_t *)0x0);
          }
          if (pwVar6 == (wchar_t *)0x0) {
            sVar4 = 0;
          }
          else {
            sVar4 = _wcslen(pwVar6);
          }
        }
        FUN_100010c0(this,iVar7);
      }
    }
  }
  return local_c;
}


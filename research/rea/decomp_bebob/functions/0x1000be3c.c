// rea decompile_all
// name: AfxFormatStrings
// address: 0x1000be3c
// body: available
// range: 0x1000be3c-0x1000bf68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000be4c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall AfxFormatStrings(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &,wchar_t const *,wchar_t const * const *,int)
   
   Library: Visual Studio 2010 Release */

void AfxFormatStrings(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
                     wchar_t *param_2,wchar_t **param_3,int param_4)

{
  wchar_t wVar1;
  LPCWSTR lpString;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  pwVar6 = param_2;
  if ((param_2 == (wchar_t *)0x0) || (param_3 == (wchar_t **)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  param_2 = (wchar_t *)0x0;
  wVar1 = *pwVar6;
  pwVar4 = pwVar6;
  while (wVar1 != L'\0') {
    if (*pwVar4 == L'%') {
      uVar2 = (uint)(ushort)pwVar4[1];
      if ((uVar2 < 0x31) || (0x39 < uVar2)) {
        if ((uVar2 < 0x41) || (0x5a < uVar2)) goto LAB_1000beaa;
        if (uVar2 < 0x3a) goto LAB_1000be8c;
        iVar3 = uVar2 - 0x38;
      }
      else {
LAB_1000be8c:
        iVar3 = uVar2 - 0x31;
      }
      pwVar4 = pwVar4 + 2;
      if (param_4 <= iVar3) goto LAB_1000bead;
      if (param_3[iVar3] != (LPCWSTR)0x0) {
        iVar3 = lstrlenW(param_3[iVar3]);
        param_2 = (wchar_t *)((int)param_2 + iVar3);
      }
    }
    else {
LAB_1000beaa:
      pwVar4 = pwVar4 + 1;
LAB_1000bead:
      param_2 = (wchar_t *)((int)param_2 + 1);
    }
    wVar1 = *pwVar4;
  }
  pwVar4 = (wchar_t *)FUN_10002140(param_1,(int)param_2);
  wVar1 = *pwVar6;
  do {
    if (wVar1 == L'\0') {
      ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer
                ((CSimpleStringT<wchar_t,0> *)param_1,(int)pwVar4 - *(int *)param_1 >> 1);
      return;
    }
    if (*pwVar6 == L'%') {
      uVar2 = (uint)(ushort)pwVar6[1];
      if ((uVar2 < 0x31) || (0x39 < uVar2)) {
        if ((uVar2 < 0x41) || (0x5a < uVar2)) goto LAB_1000bf3f;
        if (uVar2 < 0x3a) goto LAB_1000bef9;
        iVar3 = uVar2 - 0x38;
      }
      else {
LAB_1000bef9:
        iVar3 = uVar2 - 0x31;
      }
      pwVar6 = pwVar6 + 2;
      if (param_4 <= iVar3) {
        *pwVar4 = L'?';
        goto LAB_1000bf45;
      }
      lpString = param_3[iVar3];
      if (lpString != (LPCWSTR)0x0) {
        iVar5 = lstrlenW(lpString);
        ATL::Checked::tcscpy_s(pwVar4,(int)param_2 + 1,param_3[iVar3]);
        param_2 = (wchar_t *)((int)param_2 - iVar5);
        pwVar4 = pwVar4 + iVar5;
      }
    }
    else {
LAB_1000bf3f:
      *pwVar4 = *pwVar6;
      pwVar6 = pwVar6 + 1;
LAB_1000bf45:
      pwVar4 = pwVar4 + 1;
      param_2 = (wchar_t *)((int)param_2 + -1);
    }
    wVar1 = *pwVar6;
  } while( true );
}


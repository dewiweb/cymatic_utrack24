// rea decompile_all
// name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
// address: 0x1004a80f
// body: available
// range: 0x1004a80f-0x1004a8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >(wchar_t,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this,wchar_t param_1,
          int param_2)

{
  undefined **ppuVar1;
  errno_t eVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  wchar_t local_2c [2];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_28;
  wchar_t *local_24;
  wchar_t local_20 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1004a81b;
  local_28 = this;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(local_28,(int *)ppuVar1);
  local_8 = 0;
  if (0 < param_2) {
    sVar6 = 1;
    local_2c[0] = param_1;
    local_2c[1] = 0;
    if (param_1 != L'\0') {
      sVar6 = _wcslen(local_2c);
    }
    local_24 = (wchar_t *)0x0;
    local_8 = CONCAT31(local_8._1_3_,1);
    CTempBuffer<wchar_t,10,ATL::CCRTAllocator>::Allocate
              ((CTempBuffer<wchar_t,10,ATL::CCRTAllocator> *)&local_24,sVar6 + 1);
    eVar2 = _wmemcpy_s(local_24,sVar6 + 1,local_2c,1);
    FUN_10004c40(eVar2);
    iVar5 = param_2 * sVar6;
    pwVar3 = (wchar_t *)FUN_10002140(local_28,iVar5);
    if (sVar6 == 1) {
      ChTraitsCRT<wchar_t>::FloodCharacters(*local_24,param_2,pwVar3);
    }
    else if (0 < param_2) {
      do {
        iVar4 = 0;
        if (0 < (int)sVar6) {
          do {
            *pwVar3 = local_24[iVar4];
            pwVar3 = pwVar3 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)sVar6);
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    FUN_100010c0(local_28,iVar5);
    if (local_24 != local_20) {
      CTempBuffer<wchar_t,10,ATL::CCRTAllocator>::FreeHeap
                ((CTempBuffer<wchar_t,10,ATL::CCRTAllocator> *)&local_24);
    }
  }
  FUN_100f90cf();
  return;
}


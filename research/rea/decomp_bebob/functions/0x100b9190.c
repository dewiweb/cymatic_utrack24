// rea decompile_all
// name: CMFCRibbonBaseElement::UpdateTooltipInfo
// address: 0x100b9190
// body: available
// range: 0x100b9190-0x100b9277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonBaseElement::UpdateTooltipInfo(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonBaseElement::UpdateTooltipInfo(CMFCRibbonBaseElement *this)

{
  CSimpleStringT<wchar_t,0> *this_00;
  uint uVar1;
  undefined **ppuVar2;
  HMODULE pHVar3;
  int iVar4;
  wchar_t *local_18;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100b919c;
  if (((*(int *)(this + 0xa4) != 0) && (*(int *)(this + 0x48) != 0)) &&
     (*(int *)(this + 0x48) != -1)) {
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar2);
    uVar1 = *(uint *)(this + 0x48);
    local_8 = 0;
    pHVar3 = (HMODULE)FUN_1000ac62();
    if ((pHVar3 != (HMODULE)0x0) && (iVar4 = FUN_10006200(local_14,pHVar3,uVar1), iVar4 != 0)) {
      this_00 = (CSimpleStringT<wchar_t,0> *)(this + 0x10);
      ATL::CSimpleStringT<wchar_t,0>::Empty(this_00);
      ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(this + 0x14));
      if (*(int *)(local_14[0] + -6) != 0) {
        AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            (this + 0x14),local_14[0],0,L'\n');
        AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            this_00,local_14[0],1,L'\n');
        FUN_10006ce0(&local_18,(short *)&DAT_1012bb58);
        local_8 = CONCAT31(local_8._1_3_,1);
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)this_00,
                   L"&&",local_18);
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)this_00,
                   L'&');
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)this_00,
                   local_18,L"&");
        FUN_10001030((undefined4 *)(local_18 + -8));
      }
    }
    FUN_10001030((undefined4 *)(local_14[0] + -8));
  }
  return;
}


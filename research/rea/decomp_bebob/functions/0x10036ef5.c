// rea decompile_all
// name: CMFCBaseVisualManager::GetStandardWindowsTheme
// address: 0x10036ef5
// body: available
// range: 0x10036ef5-0x10037119 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual enum CMFCBaseVisualManager::WinXpTheme __thiscall
   CMFCBaseVisualManager::GetStandardWindowsTheme(void)
   
   Library: Visual Studio 2010 Release */

WinXpTheme __thiscall CMFCBaseVisualManager::GetStandardWindowsTheme(CMFCBaseVisualManager *this)

{
  int iVar1;
  size_t sVar2;
  WinXpTheme WVar3;
  int local_624;
  int local_620;
  int local_61c;
  wchar_t *local_618;
  wchar_t local_614 [256];
  short local_414;
  undefined1 local_412 [510];
  short local_214;
  undefined1 local_212 [522];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x614;
  local_8 = 0x10036f04;
  local_214 = 0;
  _memset(local_212,0,0x1fe);
  local_414 = 0;
  _memset(local_412,0,0x1fe);
  if ((*(code **)(this + 100) == (code *)0x0) ||
     (iVar1 = (**(code **)(this + 100))(&local_214,0xff,&local_414,0xff,0,0), iVar1 != 0))
  goto LAB_10037114;
  FUN_10006ce0(&local_618,&local_214);
  local_8 = 0;
  FUN_10006ce0(&local_61c,&local_414);
  local_8 = CONCAT31(local_8._1_3_,1);
  __wsplitpath_s(local_618,(wchar_t *)0x0,0,(wchar_t *)0x0,0,local_614,0x100,(wchar_t *)0x0,0);
  sVar2 = _wcslen(local_614);
  FUN_10002180(&local_618,local_614,sVar2);
  iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::CompareNoCase
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_618,L"Luna");
  if ((iVar1 == 0) ||
     (iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::CompareNoCase
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_618,L"Aero"), iVar1 == 0)) {
    if ((*(code **)(this + 0x5c) == (code *)0x0) || (*(int *)(this + 0x10) == 0)) {
LAB_10037075:
      iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::CompareNoCase
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_61c,L"normalcolor");
      if ((iVar1 != 0) &&
         (iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                  CompareNoCase((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)&local_61c,L"homestead"), iVar1 != 0)) {
        iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                CompareNoCase((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_61c,L"metallic");
        if (iVar1 != 0) goto LAB_10036ffc;
        FUN_10006ce0(&local_620,&local_214);
        local_8 = CONCAT31(local_8._1_3_,2);
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeLower
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_620)
        ;
        iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_620,L"royale",0);
        if (iVar1 < 0) {
          FUN_10001030((undefined4 *)(local_620 + -0x10));
        }
        else {
          FUN_10001030((undefined4 *)(local_620 + -0x10));
        }
      }
    }
    else {
      local_624 = 0;
      iVar1 = (**(code **)(this + 0x5c))(*(int *)(this + 0x10),1,0,0xeef,&local_624);
      if ((iVar1 == 0) && (local_624 != 1)) goto LAB_10037075;
    }
    FUN_10001030((undefined4 *)(local_61c + -0x10));
    FUN_10001030((undefined4 *)(local_618 + -8));
  }
  else {
LAB_10036ffc:
    FUN_10001030((undefined4 *)(local_61c + -0x10));
    FUN_10001030((undefined4 *)(local_618 + -8));
  }
LAB_10037114:
  WVar3 = FUN_100f90cf();
  return WVar3;
}


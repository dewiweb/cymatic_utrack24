// rea decompile_all
// name: CMFCShellListCtrl::OnFormatFileSize
// address: 0x10044180
// body: available
// range: 0x10044180-0x100442ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCShellListCtrl::OnFormatFileSize(__int64,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCShellListCtrl::OnFormatFileSize
          (CMFCShellListCtrl *this,__int64 param_1,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  int local_230;
  int local_22c;
  WCHAR local_228 [256];
  WCHAR local_28 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x220;
  local_8 = 0x1004418f;
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)param_2);
  if (param_1 == 0) {
    FUN_100022b0(param_2,(short *)&DAT_10123550);
  }
  else {
    __alldiv((uint)param_1,param_1._4_4_,0x400,0);
    FUN_100022f0(param_2,L"%I64d");
    GetNumberFormatW(0x400,0x80000000,*(LPCWSTR *)param_2,(NUMBERFMTW *)0x0,local_228,0xff);
    FUN_100022b0(param_2,local_228);
    GetLocaleInfoW(0x400,0xe,local_28,10);
    iVar1 = lstrlenW(local_28);
    if (0 < iVar1) {
      local_22c = *(int *)(*(int *)param_2 + -0xc) - iVar1;
      do {
        local_22c = local_22c + -1;
        if (local_22c < 0) goto LAB_100442b7;
        this_00 = (void *)ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                          Mid(param_2,(int)&local_230,local_22c);
        local_8 = 0;
        iVar1 = FUN_10005720(this_00,(ushort *)local_28);
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_230 + -0x10));
      } while (iVar1 != 0);
      puVar2 = (undefined4 *)
               ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                         (param_2,(int)&local_22c);
      local_8 = 1;
      FUN_10007c90(param_2,puVar2);
      local_8 = 0xffffffff;
      FUN_10001030((undefined4 *)(local_22c + -0x10));
    }
  }
LAB_100442b7:
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)param_2,L" KB");
  FUN_100f90cf();
  return;
}


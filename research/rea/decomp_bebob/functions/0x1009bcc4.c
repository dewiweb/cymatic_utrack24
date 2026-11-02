// rea decompile_all
// name: CUserTool::SetToolIcon
// address: 0x1009bcc4
// body: available
// range: 0x1009bcc4-0x1009bdf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual struct HICON__ * __thiscall CUserTool::SetToolIcon(void)
   
   Library: Visual Studio 2010 Release */

HICON__ * __thiscall CUserTool::SetToolIcon(CUserTool *this)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  HICON__ *pHVar4;
  size_t sVar5;
  DWORD_PTR DVar6;
  LPCWSTR local_4d4;
  SHFILEINFOW local_4d0;
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c8;
  local_8 = 0x1009bcd3;
  piVar1 = FUN_10005e30((int *)(*(int *)(this + 0x14) + -0x10));
  local_4d4 = (LPCWSTR)(piVar1 + 4);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_4d4,L"\\",0);
  if (((iVar2 == -1) &&
      (iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_4d4,L"/",0), iVar2 == -1)) &&
     (iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_4d4,L":",0), iVar2 == -1)) {
    piVar1 = FUN_10005e30((int *)(*(int *)(this + 0x14) + -0x10));
    local_8._0_1_ = 1;
    DVar3 = SearchPathW((LPCWSTR)0x0,(LPCWSTR)(piVar1 + 4),(LPCWSTR)0x0,0x104,local_21c,
                        (LPWSTR *)0x0);
    if (DVar3 == 0) {
      (**(code **)(*(int *)this + 0x14))();
      FUN_10001030(piVar1);
      goto LAB_1009bd83;
    }
    sVar5 = _wcslen(local_21c);
    FUN_10002180(&local_4d4,local_21c,sVar5);
    local_8._0_1_ = 0;
    FUN_10001030(piVar1);
  }
  DVar6 = SHGetFileInfoW(local_4d4,0,&local_4d0,0x2b4,0x105);
  if (DVar6 == 0) {
    (**(code **)(*(int *)this + 0x14))();
  }
LAB_1009bd83:
  FUN_10001030((undefined4 *)(local_4d4 + -8));
  pHVar4 = (HICON__ *)FUN_100f90cf();
  return pHVar4;
}


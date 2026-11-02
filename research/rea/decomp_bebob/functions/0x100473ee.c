// rea decompile_all
// name: CMFCShellTreeCtrl::OnGetItemText
// address: 0x100473ee
// body: available
// range: 0x100473ee-0x1004745f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10047415 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CMFCShellTreeCtrl::OnGetItemText(struct
   _AFX_SHELLITEMINFO *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCShellTreeCtrl::OnGetItemText(CMFCShellTreeCtrl *this,_AFX_SHELLITEMINFO *param_1)

{
  DWORD_PTR DVar1;
  int in_stack_00000008;
  WCHAR *pWVar2;
  SHFILEINFOW local_2bc;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  DVar1 = SHGetFileInfoW(*(LPCWSTR *)(in_stack_00000008 + 4),0,&local_2bc,0x2b4,0x208);
  if (DVar1 == 0) {
    pWVar2 = L"???";
  }
  else {
    pWVar2 = local_2bc.szDisplayName;
  }
  FUN_10006ce0(param_1,pWVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


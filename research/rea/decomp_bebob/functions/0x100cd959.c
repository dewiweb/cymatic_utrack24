// rea decompile_all
// name: CShellManager::BrowseForFolder
// address: 0x100cd959
// body: available
// range: 0x100cd959-0x100cda6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CShellManager::BrowseForFolder(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,class CWnd *,wchar_t const *,wchar_t
   const *,unsigned int,int *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CShellManager::BrowseForFolder
          (CShellManager *this,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,CWnd *param_2,
          wchar_t *param_3,wchar_t *param_4,uint param_5,int *param_6)

{
  LPITEMIDLIST pidl;
  BOOL BVar1;
  int iVar2;
  _browseinfoW local_440;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_420;
  int *local_41c;
  WCHAR local_418 [260];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_420 = param_1;
  local_41c = param_6;
  _memset(&local_440,0,0x20);
  local_440.lpszTitle = param_4;
  if (param_4 == (wchar_t *)0x0) {
    local_440.lpszTitle = (LPCWSTR)&PTR_1011d390;
  }
  local_440.pszDisplayName = local_418;
  if (param_2 == (CWnd *)0x0) {
    local_440.hwndOwner = (HWND)0x0;
  }
  else {
    local_440.hwndOwner = *(HWND *)(param_2 + 0x20);
  }
  local_440.pidlRoot = (LPCITEMIDLIST)0x0;
  local_440.iImage = -1;
  local_440.ulFlags = param_5;
  *(wchar_t **)(this + 8) = param_3;
  local_440.lpfn = BrowseCallbackProc;
  local_440.lParam = (LPARAM)this;
  pidl = SHBrowseForFolderW(&local_440);
  if (pidl != (LPITEMIDLIST)0x0) {
    BVar1 = SHGetPathFromIDListW(pidl,local_210);
    if ((BVar1 != 0) && (FUN_100022b0(local_420,local_210), local_41c != (int *)0x0)) {
      *local_41c = local_440.iImage;
    }
    FreeItem(this,pidl);
  }
  *(undefined4 *)(this + 8) = 0;
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


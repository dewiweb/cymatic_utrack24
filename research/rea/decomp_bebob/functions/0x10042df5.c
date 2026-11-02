// rea decompile_all
// name: CMFCShellListCtrl::GetShellImageList
// address: 0x10042df5
// body: available
// range: 0x10042df5-0x10042e5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct _IMAGELIST * __thiscall CMFCShellListCtrl::GetShellImageList(int)
   
   Library: Visual Studio 2010 Release */

_IMAGELIST * __thiscall CMFCShellListCtrl::GetShellImageList(CMFCShellListCtrl *this,int param_1)

{
  UINT UVar1;
  _IMAGELIST *p_Var2;
  SHFILEINFOW local_4c8;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  UVar1 = GetWindowsDirectoryW(local_214,0x104);
  if (UVar1 != 0) {
    SHGetFileInfoW(local_214,0,&local_4c8,0x2b4,param_1 == 0 | 0x4000);
  }
  p_Var2 = (_IMAGELIST *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var2;
}


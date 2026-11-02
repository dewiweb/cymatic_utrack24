// rea decompile_all
// name: _wcscoll
// address: 0x100fc8af
// body: available
// range: 0x100fc8af-0x100fc8f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100fc8e0 to 0x100facd8 _wcscmp (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _wcscoll
   
   Library: Visual Studio 2010 Release */

int __cdecl _wcscoll(wchar_t *_Str1,wchar_t *_Str2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_1016a538 != 0) {
    iVar2 = __wcscoll_l(_Str1,_Str2,(_locale_t)0x0);
    return iVar2;
  }
  if ((_Str1 != (wchar_t *)0x0) && (_Str2 != (wchar_t *)0x0)) {
    iVar2 = _wcscmp(_Str1,_Str2);
    return iVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_100fe6d4();
  return 0x7fffffff;
}


// rea decompile_all
// name: IsFontInstalled
// address: 0x100f2fc0
// body: available
// range: 0x100f2fc0-0x100f3050 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f2ff5 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl IsFontInstalled(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

int __cdecl IsFontInstalled(wchar_t *param_1)

{
  size_t sVar1;
  errno_t eVar2;
  HDC hdc;
  int iVar3;
  wchar_t *in_ECX;
  undefined4 local_68;
  tagLOGFONTW local_64;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_68 = 0;
  _memset(&local_64,0,0x5c);
  sVar1 = _wcslen(in_ECX);
  if (0x1f < sVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  eVar2 = _wcscpy_s(local_64.lfFaceName,0x20,in_ECX);
  FUN_10004c40(eVar2);
  local_64.lfCharSet = '\x01';
  local_68 = 0;
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    EnumFontFamiliesExW(hdc,&local_64,FUN_100f2f7e,(LPARAM)&local_68,0);
    ReleaseDC((HWND)0x0,hdc);
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// rea decompile_all
// name: CShellManager::ItemFromPath
// address: 0x100cd84b
// body: available
// range: 0x100cd84b-0x100cd8d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100cd86c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall CShellManager::ItemFromPath(wchar_t const *,struct _ITEMIDLIST * &)
   
   Library: Visual Studio 2010 Release */

long __thiscall
CShellManager::ItemFromPath(CShellManager *this,wchar_t *param_1,_ITEMIDLIST **param_2)

{
  HRESULT HVar1;
  long lVar2;
  ULONG local_21c;
  ULONG local_218;
  IShellFolder *local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  HVar1 = SHGetDesktopFolder(&local_214);
  if (-1 < HVar1) {
    lstrcpyW(local_210,param_1);
    (*local_214->lpVtbl->ParseDisplayName)
              (local_214,(HWND)0x0,(IBindCtx *)0x0,local_210,&local_21c,param_2,&local_218);
    (*local_214->lpVtbl->Release)(local_214);
  }
  lVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar2;
}


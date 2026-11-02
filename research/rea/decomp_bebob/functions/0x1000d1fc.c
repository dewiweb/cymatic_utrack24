// rea decompile_all
// name: AfxCtxLoadLibraryW
// address: 0x1000d1fc
// body: available
// range: 0x1000d1fc-0x1000d250 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    struct HINSTANCE__ * __cdecl AfxCtxLoadLibraryW(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

HINSTANCE__ * __cdecl AfxCtxLoadLibraryW(wchar_t *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  BOOL BVar2;
  ULONG_PTR *lpCookie;
  ULONG_PTR local_24;
  HMODULE local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1014e590;
  uStack_c = 0x1000d208;
  local_24 = 0;
  lpCookie = &local_24;
  pAVar1 = AfxGetModuleState();
  BVar2 = ActivateActCtx(*(HANDLE *)(pAVar1 + 0x80),lpCookie);
  local_20 = (HMODULE)0x0;
  if (BVar2 == 0) {
    local_20 = (HINSTANCE__ *)0x0;
  }
  else {
    local_8 = (undefined *)0x0;
    local_20 = LoadLibraryW(param_1);
    local_8 = (undefined *)0xfffffffe;
    FUN_1000d251();
  }
  return local_20;
}


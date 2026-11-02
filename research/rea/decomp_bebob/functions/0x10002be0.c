// rea decompile_all
// name: FUN_10002be0
// address: 0x10002be0
// body: available
// range: 0x10002be0-0x10002c30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_10002be0(LPCSTR param_1)

{
  char cVar1;
  LPCSTR pCVar2;
  LPWSTR lpWideCharStr;
  undefined4 uVar3;
  
  pCVar2 = param_1;
  do {
    cVar1 = *pCVar2;
    pCVar2 = pCVar2 + 1;
  } while (cVar1 != '\0');
  lpWideCharStr = _calloc((size_t)(pCVar2 + (1 - (int)(param_1 + 1))),2);
  MultiByteToWideChar(0,1,param_1,-1,lpWideCharStr,(int)(pCVar2 + (1 - (int)(param_1 + 1))));
  uVar3 = Ordinal_2(lpWideCharStr);
  _free(lpWideCharStr);
  return uVar3;
}


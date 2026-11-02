// rea decompile_all
// name: DoRegisterWindowClass
// address: 0x1001a7ba
// body: available
// range: 0x1001a7ba-0x1001a812 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl DoRegisterWindowClass(char const *,char const *)
   
   Library: Visual Studio 2010 Release */

void __cdecl DoRegisterWindowClass(char *param_1,char *param_2)

{
  HINSTANCE pHVar1;
  AFX_MODULE_STATE *pAVar2;
  BOOL BVar3;
  int iVar4;
  WNDPROC *ppWVar5;
  tagWNDCLASSW local_2c;
  
  local_2c.style = 0;
  ppWVar5 = &local_2c.lpfnWndProc;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppWVar5 = (WNDPROC)0x0;
    ppWVar5 = ppWVar5 + 1;
  }
  pAVar2 = AfxGetModuleState();
  pHVar1 = *(HINSTANCE *)(pAVar2 + 8);
  BVar3 = FID_conflict_AfxCtxGetClassInfoW(pHVar1,(LPCWSTR)param_2,&local_2c);
  if (BVar3 == 0) {
    local_2c.style = 8;
    local_2c.lpfnWndProc = DefWindowProcW_exref;
    local_2c.hInstance = pHVar1;
  }
  local_2c.lpszClassName = (LPCWSTR)param_1;
  AfxRegisterClass(&local_2c);
  return;
}


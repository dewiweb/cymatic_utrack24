// rea decompile_all
// name: AfxRegisterWndClass
// address: 0x1001442f
// body: available
// range: 0x1001442f-0x10014531 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    char const * __stdcall AfxRegisterWndClass(unsigned int,struct HICON__ *,struct HBRUSH__
   *,struct HICON__ *)
    wchar_t const * __stdcall AfxRegisterWndClass(unsigned int,struct HICON__ *,struct HBRUSH__
   *,struct HICON__ *)
   
   Library: Visual Studio 2010 Release */

_AFX_THREAD_STATE * AfxRegisterWndClass(UINT param_1,HCURSOR param_2,HBRUSH param_3,HICON param_4)

{
  HINSTANCE pHVar1;
  _AFX_THREAD_STATE *p_Var2;
  AFX_MODULE_STATE *pAVar3;
  int *piVar4;
  BOOL BVar5;
  int iVar6;
  tagWNDCLASSW local_30;
  int local_8;
  
  p_Var2 = AfxGetThreadState();
  p_Var2 = p_Var2 + 0x7c;
  pAVar3 = AfxGetModuleState();
  pHVar1 = *(HINSTANCE *)(pAVar3 + 8);
  if (((param_2 == (HCURSOR)0x0) && (param_3 == (HBRUSH)0x0)) && (param_4 == (HICON)0x0)) {
    piVar4 = __errno();
    local_8 = *piVar4;
    piVar4 = __errno();
    *piVar4 = 0;
    __snwprintf_s((wchar_t *)p_Var2,0x60,0x5f,L"Afx:%p:%x",pHVar1,param_1);
  }
  else {
    piVar4 = __errno();
    local_8 = *piVar4;
    piVar4 = __errno();
    *piVar4 = 0;
    __snwprintf_s((wchar_t *)p_Var2,0x60,0x5f,L"Afx:%p:%x:%p:%p:%p",pHVar1,param_1,param_2,param_3,
                  param_4);
  }
  piVar4 = __errno();
  if (*piVar4 == 0) {
    piVar4 = __errno();
    *piVar4 = local_8;
  }
  else {
    piVar4 = __errno();
    ATL::AtlCrtErrorCheck(*piVar4);
  }
  BVar5 = FID_conflict_AfxCtxGetClassInfoW(pHVar1,(LPCWSTR)p_Var2,&local_30);
  if (BVar5 == 0) {
    local_30.style = param_1;
    local_30.lpfnWndProc = DefWindowProcW_exref;
    local_30.hIcon = param_4;
    local_30.hCursor = param_2;
    local_30.hbrBackground = param_3;
    local_30.cbWndExtra = 0;
    local_30.cbClsExtra = 0;
    local_30.lpszMenuName = (LPCWSTR)0x0;
    local_30.hInstance = pHVar1;
    local_30.lpszClassName = (LPCWSTR)p_Var2;
    iVar6 = AfxRegisterClass(&local_30);
    if (iVar6 == 0) {
      FUN_100170f3();
    }
  }
  return p_Var2;
}


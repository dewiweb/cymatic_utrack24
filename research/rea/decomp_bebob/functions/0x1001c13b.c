// rea decompile_all
// name: CreateDlg
// address: 0x1001c13b
// body: available
// range: 0x1001c13b-0x1001c192 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CWnd::CreateDlg(char const *,class CWnd *)
    protected: int __thiscall CWnd::CreateDlg(wchar_t const *,class CWnd *)
   
   Library: Visual Studio 2010 Release */

bool __thiscall CreateDlg(void *this,LPCWSTR param_1,int param_2)

{
  HMODULE hModule;
  bool bVar1;
  AFX_MODULE_STATE *pAVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPCDLGTEMPLATEW pDVar3;
  
  pDVar3 = (LPCDLGTEMPLATEW)0x0;
  pAVar2 = AfxGetModuleState();
  hModule = *(HMODULE *)(pAVar2 + 0xc);
  hResInfo = FindResourceW(hModule,param_1,(LPCWSTR)&DAT_00000005);
  hResData = LoadResource(hModule,hResInfo);
  if (hResData != (HGLOBAL)0x0) {
    pDVar3 = LockResource(hResData);
  }
  bVar1 = FUN_1001bd78(this,pDVar3,param_2,hModule);
  FreeResource(hResData);
  return bVar1;
}


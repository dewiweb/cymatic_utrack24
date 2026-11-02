// rea decompile_all
// name: CWinApp::ShowAppMessageBox
// address: 0x10009f6f
// body: available
// range: 0x10009f6f-0x1000a0d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static int __cdecl CWinApp::ShowAppMessageBox(class CWinApp *,wchar_t const *,unsigned
   int,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __cdecl CWinApp::ShowAppMessageBox(CWinApp *param_1,wchar_t *param_2,uint param_3,uint param_4)

{
  HWND__ *hWnd;
  DWORD DVar1;
  CWinApp *pCVar2;
  int iVar3;
  LPWSTR lpFilename;
  DWORD local_21c;
  int local_218;
  HWND__ *local_214;
  WCHAR local_210 [259];
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  DoEnableModeless(0);
  hWnd = CWnd::GetSafeOwner_((HWND__ *)0x0,&local_214);
  if (hWnd != local_214) {
    EnableWindow(hWnd,1);
  }
  local_21c = 0;
  GetWindowThreadProcessId(hWnd,&local_21c);
  if ((((hWnd == (HWND__ *)0x0) || (DVar1 = GetCurrentProcessId(), local_21c != DVar1)) ||
      (pCVar2 = (CWinApp *)SendMessageW(hWnd,0x376,0,0), pCVar2 == (CWinApp *)0x0)) &&
     (pCVar2 = (CWinApp *)0x0, param_1 != (CWinApp *)0x0)) {
    pCVar2 = param_1 + 0x7c;
  }
  local_218 = 0;
  if ((pCVar2 != (CWinApp *)0x0) && (local_218 = *(int *)pCVar2, param_4 != 0)) {
    *(uint *)pCVar2 = param_4 + 0x30000;
  }
  if ((param_3 & 0xf0) == 0) {
    if ((param_3 & 0xf) < 2) {
      param_3 = param_3 | 0x30;
    }
    else if ((param_3 & 0xf) - 3 < 2) {
      param_3 = param_3 | 0x20;
    }
  }
  local_210[0] = L'\0';
  if (param_1 == (CWinApp *)0x0) {
    lpFilename = local_210;
    DVar1 = GetModuleFileNameW((HMODULE)0x0,lpFilename,0x104);
    if (DVar1 == 0x104) {
      local_a = 0;
    }
  }
  else {
    lpFilename = *(LPWSTR *)(param_1 + 0x50);
  }
  AfxCtxMessageBoxW(hWnd,param_2,lpFilename,param_3);
  if (pCVar2 != (CWinApp *)0x0) {
    *(int *)pCVar2 = local_218;
  }
  if (local_214 != (HWND)0x0) {
    EnableWindow(local_214,1);
  }
  DoEnableModeless(1);
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


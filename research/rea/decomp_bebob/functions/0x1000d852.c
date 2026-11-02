// rea decompile_all
// name: _AfxFullPath2
// address: 0x1000d852
// body: available
// range: 0x1000d852-0x1000da24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d87b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    int __stdcall _AfxFullPath2(wchar_t *,wchar_t const *,class CFileException *)
   
   Library: Visual Studio 2010 Release */

int _AfxFullPath2(wchar_t *param_1,wchar_t *param_2,CFileException *param_3)

{
  DWORD DVar1;
  errno_t eVar2;
  undefined **ppuVar3;
  BOOL BVar4;
  HANDLE hFindFile;
  int iVar5;
  int iVar6;
  DWORD local_278;
  byte local_274 [4];
  wchar_t *local_270;
  wchar_t *local_26c;
  LPCWSTR local_268;
  _WIN32_FIND_DATAW local_264;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x268;
  local_8 = 0x1000d861;
  local_26c = param_2;
  if ((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  DVar1 = GetFullPathNameW(param_2,0x104,param_1,&local_270);
  if (DVar1 == 0) {
    eVar2 = _wcsncpy_s(param_1,0x104,local_26c,0xffffffff);
    FUN_10004c40(eVar2);
    _AfxFillExceptionInfo(param_3,local_26c);
    goto LAB_1000d9fb;
  }
  if (0x103 < DVar1) {
    if (param_3 != (CFileException *)0x0) {
      *(undefined4 *)(param_3 + 8) = 3;
      FUN_100022b0(param_3 + 0x10,local_26c);
    }
    goto LAB_1000d9fb;
  }
  ppuVar3 = FUN_1000ad47();
  FUN_10005e00(&local_268,(int *)ppuVar3);
  local_8 = 0;
  AfxGetRoot(param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                     &local_268);
  BVar4 = PathIsUNCW(local_268);
  if (BVar4 == 0) {
    BVar4 = GetVolumeInformationW
                      (local_268,(LPWSTR)0x0,0,(LPDWORD)0x0,&local_278,(LPDWORD)local_274,
                       (LPWSTR)0x0,0);
    if (BVar4 == 0) {
LAB_1000d947:
      _AfxFillExceptionInfo(param_3,local_26c);
    }
    else {
      if ((local_274[0] & 2) == 0) {
        CharUpperW(param_1);
      }
      if (((local_274[0] & 4) != 0) ||
         (hFindFile = FindFirstFileW(local_26c,&local_264), hFindFile == (HANDLE)0xffffffff))
      goto LAB_1000d9ea;
      FindClose(hFindFile);
      if ((local_270 == (wchar_t *)0x0) || (local_270 <= param_1)) goto LAB_1000d947;
      iVar5 = lstrlenW(local_264.cFileName);
      iVar6 = (int)local_270 - (int)param_1 >> 1;
      if (iVar5 + iVar6 < 0x104) {
        eVar2 = _wcscpy_s(local_270,0x104 - iVar6,local_264.cFileName);
        FUN_10004c40(eVar2);
        goto LAB_1000d9ea;
      }
      if (param_3 != (CFileException *)0x0) {
        *(undefined4 *)(param_3 + 8) = 3;
        FUN_100022b0(param_3 + 0x10,local_26c);
      }
    }
    FUN_10001030((undefined4 *)(local_268 + -8));
  }
  else {
LAB_1000d9ea:
    FUN_10001030((undefined4 *)(local_268 + -8));
  }
LAB_1000d9fb:
  iVar5 = FUN_100f90cf();
  return iVar5;
}


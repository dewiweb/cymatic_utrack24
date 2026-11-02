// rea decompile_all
// name: CFrameWnd::OnToolTipText
// address: 0x1005671c
// body: available
// range: 0x1005671c-0x10056843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10056744 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CFrameWnd::OnToolTipText(unsigned int,struct tagNMHDR *,long *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CFrameWnd::OnToolTipText(CFrameWnd *this,uint param_1,tagNMHDR *param_2,long *param_3)

{
  undefined **ppuVar1;
  HWND hWnd;
  uint uVar2;
  errno_t eVar3;
  int iVar4;
  LPCWSTR local_218;
  wchar_t local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20c;
  local_8 = 0x1005672b;
  if ((param_2 == (tagNMHDR *)0x0) || (param_3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(&local_218,(int *)ppuVar1);
  hWnd = *(HWND *)(param_2 + 4);
  local_8 = 0;
  if (((*(int *)(param_2 + 8) == -0x208) && (((byte)param_2[100] & 1) != 0)) ||
     ((*(int *)(param_2 + 8) == -0x212 && (((byte)param_2[0xb4] & 1) != 0)))) {
    hWnd = (HWND)GetDlgCtrlID(hWnd);
  }
  if (hWnd != (HWND)0x0) {
    uVar2 = FUN_1000abfa((uint)hWnd,local_214,0x100);
    if (uVar2 == 0) {
      FUN_10001030((undefined4 *)(local_218 + -8));
      goto LAB_1005683c;
    }
    AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &local_218,local_214,1,L'\n');
  }
  if (*(int *)(param_2 + 8) == -0x208) {
    WideCharToMultiByte(3,0,local_218,-1,(LPSTR)(param_2 + 0x10),0x50,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else {
    eVar3 = _wcsncpy_s((wchar_t *)(param_2 + 0x10),0x50,local_218,0xffffffff);
    FUN_10004c40(eVar3);
  }
  *param_3 = 0;
  SetWindowPos(*(HWND *)param_2,(HWND)0x0,0,0,0,0,0x213);
  FUN_10001030((undefined4 *)(local_218 + -8));
LAB_1005683c:
  iVar4 = FUN_100f90cf();
  return iVar4;
}


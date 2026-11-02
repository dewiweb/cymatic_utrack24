// rea decompile_all
// name: CPreviewViewEx::OnDisplayPageNumber
// address: 0x10068eab
// body: available
// range: 0x10068eab-0x10068faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10068ec8 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CPreviewViewEx::OnDisplayPageNumber(unsigned int,unsigned
   int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPreviewViewEx::OnDisplayPageNumber(CPreviewViewEx *this,uint param_1,uint param_2)

{
  CFrameWnd *pCVar1;
  undefined **ppuVar2;
  int iVar3;
  wchar_t *local_18;
  LPARAM local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10068eb7;
  if (*(int *)(this + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pCVar1 = AFXGetParentFrame((CWnd *)this);
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(&local_18,(int *)ppuVar2);
  local_8 = 0;
  iVar3 = AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_18,*(wchar_t **)(*(int *)(this + 0x158) + 0x1c),
                              (uint)(param_2 != 1),L'\n');
  if (iVar3 != 0) {
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    if ((param_2 != 1) == 0) {
      FUN_100022f0(local_14,local_18);
    }
    else {
      FUN_100022f0(local_14,local_18);
    }
    if (*(int *)(this + 0xe24) == 0) {
      SendMessageW(*(HWND *)(pCVar1 + 0x20),0x362,0,local_14[0]);
    }
    else {
      (**(code **)(**(int **)(this + 0xe24) + 800))(0xff,local_14[0],1);
    }
    FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  }
  FUN_10001030((undefined4 *)(local_18 + -8));
  return;
}


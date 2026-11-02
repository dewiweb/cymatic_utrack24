// rea decompile_all
// name: CMFCRibbonSeparator::AddToListBox
// address: 0x100b8b3d
// body: available
// range: 0x100b8b3d-0x100b8bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b8b67 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonSeparator::AddToListBox(class CMFCRibbonCommandsListBox
   *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCRibbonSeparator::AddToListBox
          (CMFCRibbonSeparator *this,CMFCRibbonCommandsListBox *param_1,int param_2)

{
  CMFCRibbonCommandsListBox *pCVar1;
  int iVar2;
  undefined **ppuVar3;
  HMODULE pHVar4;
  LPARAM *pLVar5;
  WPARAM wParam;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  pCVar1 = param_1;
  uStack_4 = 8;
  local_8 = 0x100b8b49;
  if (param_1 == (CMFCRibbonCommandsListBox *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 0) {
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(&param_1,(int *)ppuVar3);
    local_8 = 0;
    pHVar4 = (HMODULE)FUN_1000ac62();
    if (pHVar4 != (HMODULE)0x0) {
      iVar2 = FUN_10006200(&param_1,pHVar4,0x42c7);
      if (iVar2 != 0) {
        pLVar5 = (LPARAM *)
                 ATL::operator+((char *)local_14,
                                (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>
                                 *)&DAT_10127318);
        wParam = SendMessageW(*(HWND *)(pCVar1 + 0x20),0x180,0,*pLVar5);
        FUN_10001030((undefined4 *)(local_14[0] + -0x10));
        SendMessageW(*(HWND *)(pCVar1 + 0x20),0x19a,wParam,(LPARAM)this);
        FUN_10001030((undefined4 *)(param_1 + -0x10));
        return wParam;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


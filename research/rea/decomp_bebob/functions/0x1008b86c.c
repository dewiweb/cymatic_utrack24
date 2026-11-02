// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::OnOK
// address: 0x1008b86c
// body: available
// range: 0x1008b86c-0x1008ba18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008b8e7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCToolBarButtonCustomizeDialog::OnOK(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarButtonCustomizeDialog::OnOK(CMFCToolBarButtonCustomizeDialog *this)

{
  undefined **ppuVar1;
  HMODULE pHVar2;
  CCommandManager *this_00;
  CMFCToolBarButtonCustomizeDialog *this_01;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x1008b878;
  CWnd::UpdateData((CWnd *)this,1);
  iVar3 = *(int *)(this + 0x488);
  if (*(int *)(this + 0x498) == 0) {
    if (*(int *)(this + 0x4cc) == 0) {
      iVar3 = CMFCToolBar::GetDefaultImage(*(uint *)(*(int *)(this + 0x47c) + 0x20));
    }
    else {
      iVar3 = 0;
    }
  }
  if ((*(int *)(this + 0x48c) == 0) || (-1 < iVar3)) {
    if ((*(int *)(this + 0x490) == 0) || (*(int *)(*(int *)(this + 0x474) + -0xc) != 0)) {
      if (*(int *)(*(int *)(this + 0x47c) + 0x18) == 0) {
        *(int *)(*(int *)(this + 0x47c) + 8) = *(int *)(this + 0x490);
      }
      if (*(int *)(this + 0x494) == 0) {
        *(undefined4 *)(*(int *)(this + 0x47c) + 0xc) = *(undefined4 *)(this + 0x48c);
      }
      else {
        iVar5 = *(int *)(this + 0x48c);
        uVar4 = *(uint *)(*(int *)(this + 0x47c) + 0x20);
        iVar6 = iVar3;
        this_00 = (CCommandManager *)FUN_10037712();
        CCommandManager::EnableMenuItemImage(this_00,uVar4,iVar5,iVar6);
      }
      *(undefined4 *)(*(int *)(this + 0x47c) + 4) = *(undefined4 *)(this + 0x498);
      (**(code **)(**(int **)(this + 0x47c) + 0xbc))(iVar3);
      FUN_10007c90((void *)(*(int *)(this + 0x47c) + 0x2c),(undefined4 *)(this + 0x474));
      if (*(int *)(*(int *)(this + 0x4c8) + -0xc) != 0) {
        ATL::CSimpleStringT<wchar_t,0>::AppendChar
                  ((CSimpleStringT<wchar_t,0> *)(*(int *)(this + 0x47c) + 0x2c),L'\t');
        ATL::CSimpleStringT<wchar_t,0>::Append
                  ((CSimpleStringT<wchar_t,0> *)(*(int *)(this + 0x47c) + 0x2c),
                   *(wchar_t **)(this + 0x4c8),*(int *)(*(wchar_t **)(this + 0x4c8) + -6));
      }
      CDialog::OnOK((CDialog *)this);
      return;
    }
    ppuVar1 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar1);
    local_8 = 1;
    pHVar2 = (HMODULE)FUN_1000ac62();
    if ((pHVar2 == (HMODULE)0x0) || (iVar3 = FUN_10006200(local_14,pHVar2,0x3e82), iVar3 == 0))
    goto LAB_1008b8e7;
    AfxMessageBox(local_14[0],0,0);
    this_01 = this + 0x1f0;
  }
  else {
    ppuVar1 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar1);
    local_8 = 0;
    pHVar2 = (HMODULE)FUN_1000ac62();
    if ((pHVar2 == (HMODULE)0x0) || (iVar3 = FUN_10006200(local_14,pHVar2,0x3e81), iVar3 == 0)) {
LAB_1008b8e7:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    AfxMessageBox(local_14[0],0,0);
    this_01 = this + 0x2d8;
  }
  CWnd::SetFocus((CWnd *)this_01);
  FUN_10001030((undefined4 *)(local_14[0] + -8));
  return;
}


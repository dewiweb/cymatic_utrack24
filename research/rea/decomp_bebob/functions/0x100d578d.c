// rea decompile_all
// name: CMFCToolBarsMenuPropertyPage::OnSelchangeMenuList
// address: 0x100d578d
// body: available
// range: 0x100d578d-0x100d590d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d58a8 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsMenuPropertyPage::OnSelchangeMenuList(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsMenuPropertyPage::OnSelchangeMenuList(CMFCToolBarsMenuPropertyPage *this)

{
  uint uVar1;
  WPARAM wParam;
  int *piVar2;
  AFX_MODULE_STATE *pAVar3;
  HMODULE pHVar4;
  int iVar5;
  CWnd *pCVar6;
  HICON local_8;
  
  CWnd::UpdateData((CWnd *)this,1);
  if (*(int **)(this + 0x544) != (int *)0x0) {
    if (*(int *)(this + 0x554) != 0) {
      (**(code **)(**(int **)(this + 0x544) + 0x3b0))(0xffffffff);
      CMenuHash::SaveMenuBar
                ((CMenuHash *)&DAT_10168048,*(HMENU__ **)(this + 0x554),
                 *(CMFCToolBar **)(this + 0x544));
    }
    wParam = SendMessageW(*(HWND *)(this + 0x4dc),0x147,0,0);
    if (wParam == 0xffffffff) {
      FUN_100022b0(this + 0x530,(short *)&PTR_1011d390);
      SendMessageW(*(HWND *)(this + 0x224),0x170,0,0);
      CWnd::UpdateData((CWnd *)this,0);
      *(undefined4 *)(this + 0x554) = 0;
      return;
    }
    local_8 = (HICON)0x0;
    piVar2 = (int *)SendMessageW(*(HWND *)(this + 0x4dc),0x150,wParam,0);
    if (piVar2 == (int *)0x0) {
      pHVar4 = (HMODULE)FUN_1000ac62();
      if ((pHVar4 == (HMODULE)0x0) || (iVar5 = FUN_10006200(this + 0x530,pHVar4,0x3eeb), iVar5 == 0)
         ) goto LAB_100d58a8;
      pCVar6 = AfxGetMainWnd();
      if (pCVar6 != (CWnd *)0x0) {
        local_8 = (HICON)GetClassLongW(*(HWND *)(pCVar6 + 0x20),-0xe);
      }
      iVar5 = *(int *)(*(int *)(this + 0x544) + 0xcd8);
    }
    else {
      (**(code **)(*piVar2 + 100))(this + 0x530,6);
      uVar1 = piVar2[0x15];
      AfxGetModuleState();
      pAVar3 = AfxGetModuleState();
      local_8 = LoadIconW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)(uVar1 & 0xffff));
      if (local_8 == (HICON)0x0) {
        local_8 = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
      }
      iVar5 = piVar2[0x22];
    }
    if (iVar5 == 0) {
LAB_100d58a8:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    (**(code **)(**(int **)(this + 0x544) + 0x430))(iVar5,0,0);
    SendMessageW(*(HWND *)(this + 0x224),0x170,(WPARAM)local_8,0);
    *(int *)(this + 0x554) = iVar5;
    CWnd::UpdateData((CWnd *)this,0);
  }
  return;
}


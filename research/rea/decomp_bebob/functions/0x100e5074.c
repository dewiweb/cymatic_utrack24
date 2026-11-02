// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::OnInitDialog
// address: 0x100e5074
// body: available
// range: 0x100e5074-0x100e52da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e5098 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBarsKeyboardPropertyPage::OnInitDialog(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarsKeyboardPropertyPage::OnInitDialog(CMFCToolBarsKeyboardPropertyPage *this)

{
  int *piVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  AFX_MODULE_STATE *pAVar5;
  int iVar6;
  LRESULT LVar7;
  undefined **ppuVar8;
  WPARAM WVar9;
  HMODULE pHVar10;
  int local_24;
  LPARAM local_20;
  CObject *local_1c;
  int local_18;
  WPARAM local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x100e5080;
  CDialog::OnInitDialog((CDialog *)this);
  if (DAT_1016788c == 0) {
LAB_100e5098:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_1012e830,
                              (CObject *)pCVar3);
  FUN_10096643(pCVar4,(int)(this + 0x3ec),0);
  SendMessageW(*(HWND *)(this + 0x40c),0x14e,0,0);
  OnSelchangeCategory(this);
  pAVar5 = AfxGetModuleState();
  piVar1 = *(int **)(*(int *)(pAVar5 + 4) + 0x5c);
  if ((*(int *)(this + 0x4ec) != 0) && (piVar1 != (int *)0x0)) {
    local_24 = (**(code **)(*piVar1 + 0x10))();
    while (local_24 != 0) {
      local_1c = (CObject *)(**(code **)(*piVar1 + 0x14))(&local_24);
      iVar6 = CObject::IsKindOf(local_1c,(CRuntimeClass *)&PTR_s_CMultiDocTemplate_10134a2c);
      if ((iVar6 != 0) && (*(int *)(local_1c + 0x8c) != 0)) {
        local_18 = 0;
        local_14 = 0;
        do {
          LVar7 = SendMessageW(*(HWND *)(this + 0x1c8),0x146,0,0);
          if (LVar7 <= (int)local_14) break;
          LVar7 = SendMessageW(*(HWND *)(this + 0x1c8),0x150,local_14,0);
          if ((LVar7 == 0) || (local_18 = 1, *(int *)(LVar7 + 0x54) != *(int *)(local_1c + 0x54))) {
            local_18 = 0;
          }
          local_14 = local_14 + 1;
        } while (local_18 == 0);
        if (local_18 == 0) {
          ppuVar8 = FUN_1000ad47();
          FUN_10005e00(&local_20,(int *)ppuVar8);
          local_8 = 0;
          (**(code **)(*(int *)local_1c + 100))(&local_20,2);
          WVar9 = SendMessageW(*(HWND *)(this + 0x1c8),0x143,0,local_20);
          SendMessageW(*(HWND *)(this + 0x1c8),0x151,WVar9,(LPARAM)local_1c);
          local_8 = 0xffffffff;
          FUN_10001030((undefined4 *)(local_20 + -0x10));
        }
      }
    }
  }
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,*(CObject **)(this + 0x4f8)
                             );
  if ((pCVar4 != (CObject *)0x0) && (*(int *)(pCVar4 + 0x80) != 0)) {
    ppuVar8 = FUN_1000ad47();
    FUN_10005e00(&local_20,(int *)ppuVar8);
    local_8 = 1;
    pHVar10 = (HMODULE)FUN_1000ac62();
    if (pHVar10 == (HMODULE)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_10006200(&local_20,pHVar10,0x3ef2);
    }
    if (iVar6 == 0) goto LAB_100e5098;
    WVar9 = SendMessageW(*(HWND *)(this + 0x1c8),0x143,0,local_20);
    SendMessageW(*(HWND *)(this + 0x1c8),0x151,WVar9,0);
    SendMessageW(*(HWND *)(this + 0x1c8),0x14e,WVar9,0);
    OnSelchangeViewType(this);
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(local_20 + -0x10));
  }
  LVar7 = SendMessageW(*(HWND *)(this + 0x1c8),0x147,0,0);
  if (LVar7 == -1) {
    SendMessageW(*(HWND *)(this + 0x1c8),0x14e,0,0);
    OnSelchangeViewType(this);
  }
  return 1;
}


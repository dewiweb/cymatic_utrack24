// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::OnSelchangeViewType
// address: 0x100e4a9e
// body: available
// range: 0x100e4a9e-0x100e4bf1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e4b99 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsKeyboardPropertyPage::OnSelchangeViewType(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsKeyboardPropertyPage::OnSelchangeViewType(CMFCToolBarsKeyboardPropertyPage *this)

{
  WPARAM wParam;
  LRESULT LVar1;
  AFX_MODULE_STATE *pAVar2;
  HICON wParam_00;
  CObject *pCVar3;
  uint uVar4;
  LPACCEL lpAccelDst;
  undefined4 uVar5;
  
  *(undefined4 *)(this + 0x4dc) = 0;
  *(undefined4 *)(this + 0x4f0) = 0;
  if (*(void **)(this + 0x4e0) != (void *)0x0) {
    FUN_100085b9(*(void **)(this + 0x4e0));
    *(undefined4 *)(this + 0x4e0) = 0;
  }
  wParam = SendMessageW(*(HWND *)(this + 0x1c8),0x147,0,0);
  if (wParam == 0xffffffff) {
    SendMessageW(*(HWND *)(this + 0x23c),0x170,0,0);
    return;
  }
  LVar1 = SendMessageW(*(HWND *)(this + 0x1c8),0x150,wParam,0);
  if (LVar1 == 0) {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,
                                *(CObject **)(this + 0x4f8));
    if (pCVar3 != (CObject *)0x0) {
      wParam_00 = (HICON)GetClassLongW(*(HWND *)(pCVar3 + 0x20),-0xe);
      uVar5 = *(undefined4 *)(pCVar3 + 0x80);
      goto LAB_100e4b6a;
    }
  }
  else {
    uVar4 = *(uint *)(LVar1 + 0x54);
    AfxGetModuleState();
    pAVar2 = AfxGetModuleState();
    wParam_00 = LoadIconW(*(HINSTANCE *)(pAVar2 + 0xc),(LPCWSTR)(uVar4 & 0xffff));
    uVar5 = *(undefined4 *)(LVar1 + 0x8c);
LAB_100e4b6a:
    *(undefined4 *)(this + 0x4dc) = uVar5;
    if (wParam_00 != (HICON)0x0) goto LAB_100e4b80;
  }
  wParam_00 = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
LAB_100e4b80:
  SendMessageW(*(HWND *)(this + 0x23c),0x170,(WPARAM)wParam_00,0);
  if (*(HACCEL *)(this + 0x4dc) != (HACCEL)0x0) {
    uVar4 = CopyAcceleratorTableW(*(HACCEL *)(this + 0x4dc),(LPACCEL)0x0,0);
    *(uint *)(this + 0x4e8) = uVar4;
    lpAccelDst = FUN_1000858a(-(uint)((int)((ulonglong)uVar4 * 6 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar4 * 6));
    *(LPACCEL *)(this + 0x4e0) = lpAccelDst;
    if (lpAccelDst != (LPACCEL)0x0) {
      CopyAcceleratorTableW(*(HACCEL *)(this + 0x4dc),lpAccelDst,*(int *)(this + 0x4e8));
      *(LRESULT *)(this + 0x4f0) = LVar1;
      OnSelchangeCommandsList(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


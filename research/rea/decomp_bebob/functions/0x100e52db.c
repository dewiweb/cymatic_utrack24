// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::OnUpdateNewShortcutKey
// address: 0x100e52db
// body: available
// range: 0x100e52db-0x100e5417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e52f1 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsKeyboardPropertyPage::OnUpdateNewShortcutKey(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsKeyboardPropertyPage::OnUpdateNewShortcutKey(CMFCToolBarsKeyboardPropertyPage *this)

{
  bool bVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *this_00;
  wchar_t *pwVar4;
  HMODULE pHVar5;
  int iVar6;
  int local_8;
  
  if (this != (CMFCToolBarsKeyboardPropertyPage *)0xfffffe6c) {
    ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(this + 0x4d8));
    CWnd::ShowWindow((CWnd *)(this + 0xa8),0);
    CWnd::EnableWindow((CWnd *)(this + 0x460),0);
    if (*(int *)(this + 400) != 0) {
      if (*(int *)(this + 0x4e0) == 0) goto LAB_100e52f1;
      bVar1 = false;
      local_8 = 0;
      iVar6 = 0;
      do {
        if (*(int *)(this + 0x4e8) <= local_8) break;
        if ((*(short *)(this + 0x196) == *(short *)(*(int *)(this + 0x4e0) + 2 + iVar6)) &&
           ((((byte)this[0x194] ^ *(byte *)(*(int *)(this + 0x4e0) + iVar6)) & 0x1d) == 0)) {
          pHVar2 = GetParent(*(HWND *)(this + 0x20));
          pCVar3 = CWnd::FromHandle(pHVar2);
          this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_1012e830,
                                       (CObject *)pCVar3);
          if (this_00 == (CObject *)0x0) goto LAB_100e52f1;
          pwVar4 = (wchar_t *)
                   GetCommandName(this_00,(uint)*(ushort *)(iVar6 + 4 + *(int *)(this + 0x4e0)));
          if (pwVar4 == (wchar_t *)0x0) {
            pwVar4 = L"????";
          }
          FUN_100022b0(this + 0x4d8,pwVar4);
          bVar1 = true;
        }
        local_8 = local_8 + 1;
        iVar6 = iVar6 + 6;
      } while (!bVar1);
      if (!bVar1) {
        pHVar5 = (HMODULE)FUN_1000ac62();
        if ((pHVar5 == (HMODULE)0x0) ||
           (iVar6 = FUN_10006200(this + 0x4d8,pHVar5,0x3e89), iVar6 == 0)) goto LAB_100e52f1;
        CWnd::EnableWindow((CWnd *)(this + 0x460),1);
      }
      CWnd::ShowWindow((CWnd *)(this + 0xa8),5);
    }
    CWnd::UpdateData((CWnd *)this,0);
    return;
  }
LAB_100e52f1:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


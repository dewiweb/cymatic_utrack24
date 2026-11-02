// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::OnAssign
// address: 0x100e5466
// body: available
// range: 0x100e5466-0x100e561f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e547b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsKeyboardPropertyPage::OnAssign(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarsKeyboardPropertyPage::OnAssign(CMFCToolBarsKeyboardPropertyPage *this)

{
  void *_Src;
  longlong lVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  int iVar5;
  void *_Dst;
  LRESULT LVar6;
  LRESULT LVar7;
  WPARAM wParam;
  undefined4 *puVar8;
  int local_c;
  int local_8;
  
  if ((((*(int *)(this + 0x4e0) != 0) && (*(int *)(this + 0x4f4) != 0)) &&
      (*(int *)(this + 400) != 0)) && (this + 0x194 != (CMFCToolBarsKeyboardPropertyPage *)0x0)) {
    *(undefined2 *)(this + 0x198) = *(undefined2 *)(*(int *)(this + 0x4f4) + 0x20);
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_1012e830,
                                (CObject *)pCVar3);
    iVar5 = (**(code **)(*(int *)pCVar4 + 0x184))(this + 0x194);
    if (iVar5 != 0) {
      _Src = *(void **)(this + 0x4e0);
      lVar1 = (ulonglong)(*(int *)(this + 0x4e8) + 1) * 6;
      _Dst = FUN_1000858a(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      *(void **)(this + 0x4e0) = _Dst;
      if (_Dst == (void *)0x0) goto LAB_100e547b;
      FID_conflict__memcpy(_Dst,_Src,*(int *)(this + 0x4e8) * 6);
      LVar6 = SendMessageW(*(HWND *)(this + 0x324),0x18b,0,0);
      local_c = 0;
      if (0 < *(int *)(this + 0x4e8)) {
        local_8 = 0;
        do {
          wParam = 0;
          if (0 < LVar6) {
            do {
              LVar7 = SendMessageW(*(HWND *)(this + 0x324),0x199,wParam,0);
              if (LVar7 == local_8 + (int)_Src) {
                SendMessageW(*(HWND *)(this + 0x324),0x19a,wParam,*(int *)(this + 0x4e0) + local_8);
                break;
              }
              wParam = wParam + 1;
            } while ((int)wParam < LVar6);
          }
          local_c = local_c + 1;
          local_8 = local_8 + 6;
        } while (local_c < *(int *)(this + 0x4e8));
      }
      puVar8 = (undefined4 *)(*(int *)(this + 0x4e8) * 6 + *(int *)(this + 0x4e0));
      *puVar8 = *(undefined4 *)(this + 0x194);
      *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(this + 0x198);
      *(int *)(this + 0x4e8) = *(int *)(this + 0x4e8) + 1;
      FUN_100085b9(_Src);
      CKeyboardManager::UpdateAccelTable
                (DAT_1016788c,*(CMultiDocTemplate **)(this + 0x4f0),*(tagACCEL **)(this + 0x4e0),
                 *(int *)(this + 0x4e8),(CFrameWnd *)0x0);
      AddKeyEntry(this,(tagACCEL *)(*(int *)(this + 0x4e8) * 6 + -6 + *(int *)(this + 0x4e0)));
      CMFCAcceleratorKeyAssignCtrl::ResetKey((CMFCAcceleratorKeyAssignCtrl *)(this + 0x11c));
      OnUpdateNewShortcutKey(this);
      CWnd::SetFocus((CWnd *)(this + 0x378));
    }
    return;
  }
LAB_100e547b:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


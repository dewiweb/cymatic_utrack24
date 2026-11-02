// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::OnInitDialog
// address: 0x1008b030
// body: available
// range: 0x1008b030-0x1008b2ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008b05f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBarButtonCustomizeDialog::OnInitDialog(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarButtonCustomizeDialog::OnInitDialog(CMFCToolBarButtonCustomizeDialog *this)

{
  LPRECT lpRect;
  CWnd *this_00;
  CWnd *pCVar1;
  ulong uVar2;
  undefined4 *puVar3;
  CFrameWnd *pCVar4;
  int iVar5;
  int local_20;
  int local_1c;
  int local_18;
  CWnd *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1008b03c;
  CDialog::OnInitDialog((CDialog *)this);
  local_14 = CWnd::GetDlgItem((CWnd *)this,0x4079);
  if (local_14 != (CWnd *)0x0) {
    this_00 = CWnd::GetDlgItem((CWnd *)this,0x407b);
    if (this_00 != (CWnd *)0x0) {
      pCVar1 = AfxGetMainWnd();
      if (pCVar1 != (CWnd *)0x0) {
        pCVar1 = AfxGetMainWnd();
        uVar2 = CWnd::GetExStyle(pCVar1);
        if ((uVar2 & 0x400000) != 0) {
          CWnd::ModifyStyleEx((CWnd *)this,0,0x400000,0);
        }
      }
      if (*(CMFCToolBarImages **)(this + 0x480) == (CMFCToolBarImages *)0x0) {
        CWnd::EnableWindow((CWnd *)(this + 0x2d8),0);
        CWnd::EnableWindow((CWnd *)(this + 0x108),0);
        if (*(int *)(this + 0x488) < 0) {
          CWnd::EnableWindow(local_14,0);
          CWnd::EnableWindow(this_00,0);
        }
      }
      else {
        CMFCToolBarButtonsListButton::SetImages
                  ((CMFCToolBarButtonsListButton *)(this + 0x2d8),
                   *(CMFCToolBarImages **)(this + 0x480));
        RebuildImageList(this);
        CMFCToolBarButtonsListButton::SelectButton
                  ((CMFCToolBarButtonsListButton *)(this + 0x2d8),*(int *)(this + 0x488));
      }
      if ((*(int *)(this + 0x498) == 0) || (*(int *)(*(int *)(this + 0x47c) + 0x3c) != 0)) {
        SendMessageW(*(HWND *)(this + 0xb4),0xf1,1,0);
      }
      else {
        SendMessageW(*(HWND *)(this + 0x128),0xf1,1,0);
      }
      if (*(int *)(this + 0x48c) == 0) {
        if (*(int *)(this + 0x490) == 0) goto LAB_1008b05f;
        CWnd::CheckDlgButton((CWnd *)this,0x407a,1);
        *(undefined4 *)(this + 0x490) = 1;
        CWnd::EnableWindow((CWnd *)(this + 0x2d8),0);
      }
      else {
        if (*(int *)(this + 0x490) == 0) {
          iVar5 = 0x4079;
        }
        else {
          iVar5 = 0x407b;
        }
        CWnd::CheckDlgButton((CWnd *)this,iVar5,1);
      }
      iVar5 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (*(int *)(this + 0x47c) + 0x2c),L'\t',0);
      if (iVar5 < 0) {
        FUN_10007c90(this + 0x474,(undefined4 *)(*(int *)(this + 0x47c) + 0x2c));
      }
      else {
        puVar3 = (undefined4 *)
                 ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                           ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            (*(int *)(this + 0x47c) + 0x2c),(int)&local_18);
        local_8 = 0;
        FUN_10007c90(this + 0x474,puVar3);
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_18 + -0x10));
        puVar3 = (undefined4 *)
                 ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                           ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            (*(int *)(this + 0x47c) + 0x2c),(int)&local_20);
        local_8 = 1;
        FUN_10007c90(this + 0x4c8,puVar3);
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_20 + -0x10));
      }
      pCVar4 = CWnd::GetParentFrame((CWnd *)this);
      if (pCVar4 != (CFrameWnd *)0x0) {
        (**(code **)(*(int *)pCVar4 + 0x170))
                  (*(undefined4 *)(*(int *)(this + 0x47c) + 0x20),this + 0x478);
      }
      if (*(int *)(this + 0x494) != 0) {
        CWnd::EnableWindow(local_14,0);
      }
      if (*(int *)(*(int *)(this + 0x47c) + 0x18) != 0) {
        CWnd::EnableWindow(local_14,0);
      }
      lpRect = (LPRECT)(this + 0x4b8);
      GetClientRect(*(HWND *)(this + 0x19c),lpRect);
      CWnd::MapWindowPoints((CWnd *)(this + 0x17c),(CWnd *)this,lpRect);
      local_1c = 0x10;
      local_18 = 0x10;
      if (DAT_10166f80 < 0x11) {
        local_1c = DAT_10166f80;
      }
      if (DAT_10166f84 < 0x11) {
        local_18 = DAT_10166f84;
      }
      *(LONG *)(this + 0x4c0) = lpRect->left + local_1c;
      *(int *)(this + 0x4c4) = *(int *)(this + 0x4bc) + local_18;
      EnableControls(this);
      CWnd::UpdateData((CWnd *)this,0);
      return 1;
    }
  }
LAB_1008b05f:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


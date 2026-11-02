// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::OnInitDialog
// address: 0x100963b6
// body: available
// range: 0x100963b6-0x10096642 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100964ea to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarsCustomizeDialog::OnInitDialog(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarsCustomizeDialog::OnInitDialog(CMFCToolBarsCustomizeDialog *this)

{
  CWnd *pCVar1;
  CWnd *pCVar2;
  undefined **ppuVar3;
  HMODULE pHVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  wchar_t *local_58;
  tagRECT local_54;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x100963c2;
  local_60 = CPropertySheet::OnInitDialog((CPropertySheet *)this);
  local_54.left = 0;
  local_54.top = 0;
  local_54.right = 0;
  local_54.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_54);
  pCVar1 = CWnd::GetDlgItem((CWnd *)this,2);
  if (pCVar1 == (CWnd *)0x0) goto LAB_1009663a;
  CWnd::ShowWindow(pCVar1,5);
  CWnd::EnableWindow(pCVar1,1);
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  GetClientRect(*(HWND *)(pCVar1 + 0x20),&local_34);
  MapWindowPoints(*(HWND *)(pCVar1 + 0x20),*(HWND *)(this + 0x20),(LPPOINT)&local_34,2);
  local_44.left = 0;
  local_44.top = 0;
  local_44.right = 0;
  local_44.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_44);
  CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,local_44.right - local_44.left,
                     ((local_44.bottom - local_44.top) - local_34.top) + 0x10 + local_34.bottom,0x16
                    );
  CWnd::SetWindowPos(pCVar1,(CWnd *)0x0,(local_34.left - local_34.right) + -8 + local_54.right,
                     local_34.top + 4,0,0,0x15);
  pCVar2 = CWnd::GetDlgItem((CWnd *)this,1);
  if (pCVar2 != (CWnd *)0x0) {
    CWnd::ModifyStyle(pCVar2,1,0,0);
  }
  CWnd::ModifyStyle(pCVar1,0,1,0);
  ppuVar3 = FUN_1000ad47();
  FUN_10005e00(&local_58,(int *)ppuVar3);
  local_8 = 0;
  pHVar4 = (HMODULE)FUN_1000ac62();
  if ((pHVar4 == (HMODULE)0x0) || (iVar5 = FUN_10006200(&local_58,pHVar4,0x3ee9), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  CWnd::SetWindowTextW(pCVar1,local_58);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_24);
  local_64 = GetSystemMetrics(0);
  local_5c = GetSystemMetrics(0x3e);
  iVar5 = GetSystemMetrics(1);
  local_5c = local_5c - iVar5;
  iVar6 = GetSystemMetrics(0x3e);
  iVar6 = iVar6 + local_5c;
  iVar5 = local_24.top;
  iVar7 = local_24.left;
  if (local_24.left < 0) {
    if (local_24.top < 0) goto LAB_10096570;
LAB_10096572:
    if (local_24.left < 0) {
      iVar7 = 0;
    }
LAB_1009657d:
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,iVar7,iVar5,0,0,1);
  }
  else {
    if (local_24.top < 0) {
LAB_10096570:
      iVar5 = 0;
      goto LAB_10096572;
    }
    if ((local_64 < local_24.right) || (iVar6 < local_24.bottom)) {
      if (iVar6 < local_24.bottom) {
        iVar5 = (local_24.top - local_24.bottom) + iVar6;
      }
      if (local_64 < local_24.right) {
        iVar7 = (local_24.left - local_24.right) + local_64;
      }
      goto LAB_1009657d;
    }
  }
  pCVar1 = CWnd::GetDlgItem((CWnd *)this,9);
  if (pCVar1 != (CWnd *)0x0) {
    if (((byte)this[0x148] & 8) == 0) {
      pCVar2 = (CWnd *)(this + 0x150);
      CWnd::SubclassWindow(pCVar2,*(HWND__ **)(pCVar1 + 0x20));
      CWnd::ShowWindow(pCVar2,5);
      CWnd::EnableWindow(pCVar2,1);
      uVar9 = 0;
      uVar8 = 0;
      iVar5 = AFX_GLOBAL_DATA::Is32BitIcons((AFX_GLOBAL_DATA *)&DAT_10166aa0);
      CMFCButton::SetImage((CMFCButton *)pCVar2,(-(uint)(iVar5 != 0) & 0x3a8) + 0x3f03,uVar8,uVar9);
      CWnd::SetWindowTextW(pCVar2,(wchar_t *)&PTR_1011d390);
      (**(code **)(*(int *)pCVar2 + 0x16c))(&local_68,1);
      CWnd::SetWindowPos(pCVar2,(CWnd *)0x0,local_54.left + 8,local_34.top,local_68,local_64,0x14);
    }
    else {
      CWnd::ShowWindow(pCVar1,0);
      CWnd::EnableWindow(pCVar1,0);
    }
  }
  FUN_10001030((undefined4 *)(local_58 + -8));
LAB_1009663a:
  iVar5 = FUN_100f90cf();
  return iVar5;
}


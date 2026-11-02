// rea decompile_all
// name: CMFCEditBrowseCtrl::OnBrowse
// address: 0x100509b3
// body: available
// range: 0x100509b3-0x10050d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100509e2 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCEditBrowseCtrl::OnBrowse(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCEditBrowseCtrl::OnBrowse(CMFCEditBrowseCtrl *this)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  int local_57c;
  int local_578;
  wchar_t *local_574;
  wchar_t *local_570;
  int local_56c;
  wchar_t *local_568;
  wchar_t *local_564;
  char local_55d;
  CFileDialog local_55c [840];
  wchar_t local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x56c;
  local_8 = 0x100509c2;
  local_568 = (wchar_t *)0x0;
  if (this == (CMFCEditBrowseCtrl *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x20);
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (*(int *)(this + 0xac) == 2) {
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(&local_564,(int *)ppuVar2);
    local_8 = 2;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_564);
    if (*(int *)(local_564 + -6) != 0) {
      __wsplitpath_s(local_564,(wchar_t *)0x0,0,(wchar_t *)0x0,0,local_214,0x100,(wchar_t *)0x0,0);
      FUN_10006ce0(&local_56c,local_214);
      local_8 = CONCAT31(local_8._1_3_,3);
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimLeft
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_56c);
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::TrimRight
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_56c);
      if (*(int *)(local_56c + -0xc) == 0) {
        ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)&local_564);
      }
      FUN_10006ce0(&local_574,L"*?<>|");
      local_8 = CONCAT31(local_8._1_3_,4);
      iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::FindOneOf
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_564,local_574);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*(int *)this + 0x170))(&local_564);
        if (iVar1 == 0) {
          CWnd::SetFocus((CWnd *)this);
          FUN_10001030((undefined4 *)(local_574 + -8));
          FUN_10001030((undefined4 *)(local_56c + -0x10));
          FUN_10001030((undefined4 *)(local_564 + -8));
          goto LAB_10050d2a;
        }
      }
      FUN_10001030((undefined4 *)(local_574 + -8));
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_10001030((undefined4 *)(local_56c + -0x10));
    }
    CFileDialog::CFileDialog
              (local_55c,1,
               (wchar_t *)
               (-(uint)(*(int *)(*(uint *)(this + 0xa4) - 0xc) != 0) & *(uint *)(this + 0xa4)),
               local_564,0,
               (wchar_t *)
               (-(uint)(*(int *)(*(uint *)(this + 0xa8) - 0xc) != 0) & *(uint *)(this + 0xa8)),
               (CWnd *)0x0,0,1);
    local_8._0_1_ = 5;
    iVar1 = CFileDialog::DoModal(local_55c);
    if (iVar1 == 1) {
      puVar3 = (undefined4 *)CFileDialog::GetPathName(local_55c);
      local_8 = CONCAT31(local_8._1_3_,6);
      local_568 = (wchar_t *)0x1;
      iVar1 = FUN_10005720(&local_564,(ushort *)*puVar3);
      local_55d = '\x01';
      if (iVar1 == 0) goto LAB_10050c5b;
    }
    else {
LAB_10050c5b:
      local_55d = '\0';
    }
    local_8 = 5;
    if (((uint)local_568 & 1) != 0) {
      FUN_10001030((undefined4 *)(local_57c + -0x10));
    }
    if (local_55d != '\0') {
      puVar3 = (undefined4 *)CFileDialog::GetPathName(local_55c);
      local_8._0_1_ = 7;
      CWnd::SetWindowTextW((CWnd *)this,(wchar_t *)*puVar3);
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_10001030((undefined4 *)(local_578 + -0x10));
      SendMessageW(*(HWND *)(this + 0x20),0xb9,1,0);
      (**(code **)(*(int *)this + 0x16c))();
    }
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    if (pCVar5 != (CWnd *)0x0) {
      pHVar4 = GetParent(*(HWND *)(this + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar4);
      RedrawWindow(*(HWND *)(pCVar5 + 0x20),(RECT *)0x0,(HRGN)0x0,0x481);
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    CFileDialog::~CFileDialog(local_55c);
LAB_10050d17:
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(local_564 + -8));
  }
  else if ((*(int *)(this + 0xac) == 3) && (DAT_10169594 != (CShellManager *)0x0)) {
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(&local_568,(int *)ppuVar2);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_568);
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(&local_570,(int *)ppuVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar1 = CShellManager::BrowseForFolder
                      (DAT_10169594,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_570,(CWnd *)this,local_568,(wchar_t *)0x0,1,(int *)0x0);
    if (iVar1 != 0) {
      iVar1 = FUN_10005720(&local_570,(ushort *)local_568);
      if (iVar1 != 0) {
        CWnd::SetWindowTextW((CWnd *)this,local_570);
        SendMessageW(*(HWND *)(this + 0x20),0xb9,1,0);
        (**(code **)(*(int *)this + 0x16c))();
      }
    }
    FUN_10001030((undefined4 *)(local_570 + -8));
    local_564 = local_568;
    goto LAB_10050d17;
  }
  CWnd::SetFocus((CWnd *)this);
LAB_10050d2a:
  FUN_100f90cf();
  return;
}


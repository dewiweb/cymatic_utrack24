// rea decompile_all
// name: CMFCToolBarEditBoxButton::OnChangeParentWnd
// address: 0x100e88ba
// body: available
// range: 0x100e88ba-0x100e8a0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e88fc to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarEditBoxButton::OnChangeParentWnd(class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarEditBoxButton::OnChangeParentWnd(CMFCToolBarEditBoxButton *this,CWnd *param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  int iVar3;
  undefined **ppuVar4;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100e88c6;
  CMFCToolBarButton::OnChangeParentWnd((CMFCToolBarButton *)this,param_1);
  iVar3 = *(int *)(this + 0x78);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
    pHVar1 = GetParent(*(HWND *)(iVar3 + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar1);
    if (pCVar2 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    if (param_1 != (CWnd *)0x0) {
      if (pCVar2 == (CWnd *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(pCVar2 + 0x20);
      }
      if (iVar3 == *(int *)(param_1 + 0x20)) goto LAB_100e8a03;
    }
    CWnd::GetWindowTextW
              (*(CWnd **)(this + 0x78),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0x7c));
    (**(code **)(**(int **)(this + 0x78) + 0x60))();
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))(1);
    }
    *(undefined4 *)(this + 0x78) = 0;
  }
  if ((param_1 != (CWnd *)0x0) && (*(int *)(param_1 + 0x20) != 0)) {
    local_24.left = *(LONG *)(this + 0x54);
    local_24.top = *(LONG *)(this + 0x58);
    local_24.right = *(LONG *)(this + 0x5c);
    local_24.bottom = *(LONG *)(this + 0x60);
    InflateRect(&local_24,-3,-1);
    local_24.bottom = DAT_10166c6c + local_24.top;
    iVar3 = (**(code **)(*(int *)this + 200))(param_1,&local_24);
    *(int *)(this + 0x78) = iVar3;
    if (iVar3 != 0) {
      (**(code **)(*(int *)this + 0x30))();
      SendMessageW(*(HWND *)(*(int *)(this + 0x78) + 0x20),0x30,DAT_10166bb8,1);
      ppuVar4 = FUN_1000ad47();
      FUN_10005e00(&local_28,(int *)ppuVar4);
      local_8 = 0;
      CWnd::GetWindowTextW
                (*(CWnd **)(this + 0x78),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28);
      if (*(int *)(local_28 + -0xc) == 0) {
        *(undefined4 *)(this + 0x80) = 1;
        CWnd::SetWindowTextW(*(CWnd **)(this + 0x78),*(wchar_t **)(this + 0x7c));
        *(undefined4 *)(this + 0x80) = 0;
      }
      else {
        FUN_10007c90(this + 0x7c,&local_28);
      }
      FUN_10001030((undefined4 *)(local_28 + -0x10));
    }
  }
LAB_100e8a03:
  FUN_100f90cf();
  return;
}


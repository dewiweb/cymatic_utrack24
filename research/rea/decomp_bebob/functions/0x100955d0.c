// rea decompile_all
// name: CMFCBaseTabCtrl::SetTabLabel
// address: 0x100955d0
// body: available
// range: 0x100955d0-0x10095753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009573d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::SetTabLabel(int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCBaseTabCtrl::SetTabLabel
          (CMFCBaseTabCtrl *this,int param_1,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2)

{
  CToolTipCtrl *this_00;
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *this_01;
  int iVar3;
  CToolInfo local_238 [16];
  tagRECT local_228 [34];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (((-1 < param_1) && (param_1 < *(int *)(this + 0x9c))) &&
     (*(int *)(*(int *)param_2 + -0xc) != 0)) {
    if (*(int *)(this + 0x90) <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar3 = *(int *)(*(int *)(this + 0x8c) + param_1 * 4);
    FUN_10007c90((void *)(iVar3 + 4),(undefined4 *)param_2);
    this_00 = *(CToolTipCtrl **)(this + 0xd8);
    if ((this_00 != (CToolTipCtrl *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
      if (*(int *)(this + 0xe0) == 0) {
        CToolTipCtrl::UpdateTipText
                  (this_00,*(wchar_t **)param_2,(CWnd *)this,*(uint *)(iVar3 + 0x28));
      }
      else {
        CToolTipCtrl::GetToolInfo(this_00,local_238,(CWnd *)this,*(uint *)(iVar3 + 0x28));
        CToolTipCtrl::DelTool(*(CToolTipCtrl **)(this + 0xd8),(CWnd *)this,*(uint *)(iVar3 + 0x28));
        CToolTipCtrl::AddTool
                  (*(CToolTipCtrl **)(this + 0xd8),(CWnd *)this,(wchar_t *)0xffffffff,local_228,
                   *(uint *)(iVar3 + 0x28));
      }
    }
    pCVar2 = *(CWnd **)(iVar3 + 0x20);
    if ((pCVar2 != (CWnd *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
      CWnd::SetWindowTextW(pCVar2,*(wchar_t **)param_2);
    }
    (**(code **)(*(int *)this + 0x180))();
    if (param_1 == *(int *)(this + 0xa0)) {
      pHVar1 = GetParent(*(HWND *)(this + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar1);
      this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,
                                   (CObject *)pCVar2);
      if (this_01 != (CObject *)0x0) {
        iVar3 = (**(code **)(*(int *)this_01 + 1000))();
        if (iVar3 != 0) {
          CWnd::SetWindowTextW((CWnd *)this_01,*(wchar_t **)param_2);
        }
        iVar3 = (**(code **)(*(int *)this_01 + 0x164))();
        if (iVar3 == 0) {
          pHVar1 = GetParent(*(HWND *)(this_01 + 0x20));
          this_01 = (CObject *)CWnd::FromHandle(pHVar1);
        }
        if (this_01 != (CObject *)0x0) {
          RedrawWindow(*(HWND *)(this_01 + 0x20),(RECT *)0x0,(HRGN)0x0,0x401);
        }
      }
    }
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


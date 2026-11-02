// rea decompile_all
// name: CreateNewToolBar
// address: 0x100625d4
// body: available
// range: 0x100625d4-0x10062754 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100625f8 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: class CMFCToolBar const * __thiscall CFrameImpl::CreateNewToolBar(char const *)
    protected: class CMFCToolBar const * __thiscall CFrameImpl::CreateNewToolBar(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CreateNewToolBar(void *this,wchar_t *param_1)

{
  wchar_t *pwVar1;
  undefined **ppuVar2;
  CObject *this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x100625e0;
  if (param_1 != (wchar_t *)0x0) {
    local_28 = (wchar_t *)
               CFrameImpl::GetFreeCtrlBarID
                         (*(uint *)((int)this + 4),*(uint *)((int)this + 8),
                          (CObList *)((int)this + 0x54));
    if (local_28 == (wchar_t *)0x0) {
      ppuVar2 = FUN_1000ad47();
      FUN_10005e00(&local_28,(int *)ppuVar2);
      local_8 = 0;
      Format((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&local_28,0x3f73);
      pwVar1 = local_28;
      AfxMessageBox(local_28,0x40,0);
      FUN_10001030((undefined4 *)(pwVar1 + -8));
    }
    else {
      this_00 = CRuntimeClass::CreateObject(*(CRuntimeClass **)((int)this + 0xf8));
      iVar3 = (**(code **)(*(int *)this_00 + 800))
                        (*(undefined4 *)((int)this + 0xb0),0x50402808,local_28);
      if (iVar3 == 0) {
        (**(code **)(*(int *)this_00 + 4))(1);
      }
      else {
        CWnd::SetWindowTextW((CWnd *)this_00,param_1);
        iVar3 = *(int *)this_00;
        uVar4 = (**(code **)(iVar3 + 0x1bc))();
        (**(code **)(iVar3 + 0x1e0))(uVar4 | 0x34);
        (**(code **)(*(int *)this_00 + 0x1e8))(0xf000);
        local_24.left = 0;
        local_24.top = 0;
        local_24.right = 0;
        local_24.bottom = 0;
        GetWindowRect(*(HWND *)(this_00 + 0x20),&local_24);
        iVar3 = GetSystemMetrics(0x10);
        iVar5 = GetSystemMetrics(0x11);
        (**(code **)(*(int *)this_00 + 0x1f8))
                  (iVar3 / 2,iVar5 / 2,(local_24.right - local_24.left) + iVar3 / 2,
                   (local_24.bottom - local_24.top) + iVar5 / 2,0,1);
        *(undefined4 *)(this_00 + 300) = 0x7fff;
        (**(code **)(**(int **)((int)this + 0xb0) + 0x174))(1);
        CObList::AddTail((CObList *)((int)this + 0x54),this_00);
      }
    }
    FUN_100f90cf();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


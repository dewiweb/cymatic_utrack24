// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonCaption
// address: 0x10034170
// body: available
// range: 0x10034170-0x10034398 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10034296 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonCaption(class CDC *,class
   CMFCRibbonBar *,class CRect,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonCaption
          (undefined4 param_1_00,CDC *param_1,int param_2,int param_4,int param_5,undefined4 param_6
          ,int param_7,int param_8,undefined4 param_9,int param_10)

{
  HWND pHVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HDC hdc;
  undefined **ppuVar5;
  int *piVar6;
  int local_34 [2];
  int *local_2c;
  CWnd *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  HICON__ *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x1003417c;
  pHVar1 = GetParent(*(HWND *)(param_2 + 0x20));
  local_28 = CWnd::FromHandle(pHVar1);
  local_20 = *(undefined1 **)(param_2 + 0x2f4);
  CWnd::GetExStyle(local_28);
  if ((*(uint *)(param_2 + 0x31c) & 2) != 0) {
    local_18 = CGlobalUtils::GetWndIcon((CGlobalUtils *)&PTR_vftable_10160f68,local_28);
    if (local_18 != (HICON__ *)0x0) {
      local_24 = GetSystemMetrics(0x32);
      local_34[0] = GetSystemMetrics(0x31);
      local_1c = param_7 - param_5;
      iVar2 = GetSystemMetrics(4);
      if (iVar2 < local_1c) {
        iVar2 = GetSystemMetrics(4);
      }
      else {
        iVar2 = param_7 - param_5;
      }
      iVar2 = iVar2 + param_4;
      iVar3 = ((iVar2 - local_34[0]) - param_4) / 2;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      iVar4 = ((param_7 - local_24) - param_5) / 2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      if (param_1 == (CDC *)0x0) {
        hdc = (HDC)0x0;
      }
      else {
        hdc = *(HDC *)(param_1 + 4);
      }
      DrawIconEx(hdc,param_4 + iVar3,param_5 + iVar4,local_18,local_34[0],local_24,0,(HBRUSH)0x0,3);
      if (param_8 < iVar2) {
        param_8 = iVar2;
      }
    }
  }
  local_1c = (**(code **)(*(int *)param_1 + 0x28))();
  if (local_1c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  local_18 = (HICON__ *)CDC::SetBkMode(param_1,1);
  ppuVar5 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar5);
  local_8 = 0;
  CWnd::GetWindowTextW
            (local_28,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14
            );
  piVar6 = (int *)CDC::GetTextExtent(param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                              *)local_34);
  iVar2 = *piVar6;
  if (iVar2 < param_10 - param_8) {
    param_8 = param_8 + ((param_10 - param_8) - iVar2) / 2;
  }
  if (iVar2 + param_8 < param_10) {
    param_10 = iVar2 + param_8;
  }
  if (param_8 < param_10) {
    if (local_20 == (undefined1 *)0x0) {
      (**(code **)(*(int *)param_1 + 0x30))();
      (**(code **)(*(int *)param_1 + 0x68))();
      (**(code **)(*(int *)param_1 + 0x30))();
    }
    else {
      local_20 = &stack0xffffff88;
      FUN_10005e30((int *)(local_14[0] + -0x10));
      (**(code **)(*local_2c + 0x2c4))(param_1);
    }
  }
  CDC::SetBkMode(param_1,(int)local_18);
  (**(code **)(*(int *)param_1 + 0x28))();
  FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  return;
}


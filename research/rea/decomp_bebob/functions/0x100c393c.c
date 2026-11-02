// rea decompile_all
// name: CBaseTabbedPane::FloatTab
// address: 0x100c393c
// body: available
// range: 0x100c393c-0x100c3ac8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CBaseTabbedPane::FloatTab(class CWnd *,int,enum
   AFX_DOCK_METHOD,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CBaseTabbedPane::FloatTab
          (CBaseTabbedPane *this,CWnd *param_1,int param_2,AFX_DOCK_METHOD param_3,int param_4)

{
  undefined **ppuVar1;
  int iVar2;
  CObject *pCVar3;
  CObject *pCVar4;
  BOOL BVar5;
  CWnd *pCVar6;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100c3948;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar1);
  local_8 = 0;
  CWnd::GetWindowTextW
            (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14)
  ;
  if ((*(int *)(local_14[0] + -6) == 0) &&
     (iVar2 = (**(code **)(**(int **)(this + 0x358) + 0x1b8))(param_2,local_14), iVar2 != 0)) {
    CWnd::SetWindowTextW(param_1,local_14[0]);
  }
  (**(code **)(**(int **)(this + 0x358) + 0x194))(param_2,1);
  if (param_3 == 1) {
    SendMessageW(*(HWND *)(*(int *)(this + 0x358) + 0x20),0x202,0,0);
  }
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)param_1);
  if (pCVar3 != (CObject *)0x0) {
    (**(code **)(*(int *)pCVar3 + 0x37c))();
  }
  if ((param_3 == 2) && (pCVar3 != (CObject *)0x0)) {
    pCVar4 = (CObject *)(**(code **)(*(int *)this + 0x224))(0);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10162338,pCVar4);
    if (pCVar4 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar4 + 0x250))(pCVar3);
LAB_100c3a19:
      FUN_10001030((undefined4 *)(local_14[0] + -8));
      return 1;
    }
    if ((*(HWND *)(this + 0x33c) != (HWND)0x0) &&
       (BVar5 = IsWindow(*(HWND *)(this + 0x33c)), BVar5 != 0)) {
      pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar3 + 0x200));
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10162338,
                                  (CObject *)pCVar6);
      if ((pCVar4 != (CObject *)0x0) &&
         (iVar2 = (**(code **)(*(int *)pCVar4 + 0x24c))(pCVar3), iVar2 != 0)) goto LAB_100c3a19;
    }
  }
  iVar2 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CPane_1012cc40);
  if (iVar2 != 0) {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,(CObject *)param_1);
    (**(code **)(*(int *)pCVar3 + 0x1f8))
              (*(undefined4 *)(pCVar3 + 0x1d8),*(undefined4 *)(pCVar3 + 0x1dc),
               *(undefined4 *)(pCVar3 + 0x1e0),*(undefined4 *)(pCVar3 + 0x1e4),param_3,param_4 == 0)
    ;
  }
  FUN_10001030((undefined4 *)(local_14[0] + -8));
  return (uint)(iVar2 != 0);
}


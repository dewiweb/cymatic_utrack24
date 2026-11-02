// rea decompile_all
// name: CBaseTabbedPane::AddTab
// address: 0x100c36e9
// body: available
// range: 0x100c36e9-0x100c393b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CBaseTabbedPane::AddTab(class CWnd *,int,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CBaseTabbedPane::AddTab(CBaseTabbedPane *this,CWnd *param_1,int param_2,int param_3,int param_4)

{
  CWnd *this_00;
  int iVar1;
  CObject *pCVar2;
  int *piVar3;
  int iVar4;
  CObject *pCVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  undefined **ppuVar8;
  LRESULT LVar9;
  
  this_00 = param_1;
  iVar1 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c);
  if (iVar1 == 0) {
    iVar1 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CPane_1012cc40);
    if (iVar1 != 0) {
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,(CObject *)this_00);
      pHVar6 = GetParent(*(HWND *)(pCVar2 + 0x20));
      pCVar7 = CWnd::FromHandle(pHVar6);
      (**(code **)(*(int *)pCVar2 + 0x218))(*(undefined4 *)(this + 0x358),1);
      CWnd::SetParent((CWnd *)pCVar2,*(CWnd **)(this + 0x358));
      (**(code **)(*(int *)pCVar2 + 0x21c))(pCVar7);
      iVar1 = CObject::IsKindOf(pCVar2,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
      if (iVar1 != 0) {
        (**(code **)(*(int *)pCVar2 + 0x1ec))(0);
      }
    }
    ppuVar8 = FUN_1000ad47();
    FUN_10005e00(&param_1,(int *)ppuVar8);
    CWnd::GetWindowTextW
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &param_1);
    (**(code **)(**(int **)(this + 0x358) + 0x188))(this_00,param_1,param_3,param_4);
    iVar1 = (**(code **)(**(int **)(this + 0x358) + 0x1a8))();
    iVar1 = iVar1 + -1;
    LVar9 = SendMessageW(*(HWND *)(this_00 + 0x20),0x7f,0,0);
    (**(code **)(**(int **)(this + 0x358) + 0x1d0))(iVar1,LVar9);
    (**(code **)(**(int **)(this + 0x358) + 0x1f0))(iVar1,param_4);
    if (param_2 == 0) {
      (**(code **)(**(int **)(this + 0x358) + 0x1a4))(iVar1,0,1,0);
    }
    else if (param_3 != 0) {
      (**(code **)(**(int **)(this + 0x358) + 0x210))(iVar1);
    }
    FUN_10001030((undefined4 *)(param_1 + -0x10));
    iVar1 = 1;
  }
  else {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,(CObject *)this_00)
    ;
    iVar1 = (**(code **)(*(int *)this + 0x224))(0);
    piVar3 = (int *)(**(code **)(*(int *)pCVar2 + 0x3a4))();
    iVar4 = (**(code **)(*piVar3 + 0x1a8))();
    param_3 = 0;
    if (0 < iVar4) {
      do {
        pCVar5 = (CObject *)(**(code **)(*piVar3 + 0x1ac))(param_3);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,pCVar5);
        param_2 = (**(code **)(*piVar3 + 0x278))(param_3);
        param_4 = (**(code **)(*piVar3 + 0x1ec))(param_3);
        (**(code **)(*(int *)pCVar5 + 0x1ec))(0);
        (**(code **)(*(int *)this + 0x3b8))(pCVar5,param_2,param_2,param_4);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar5);
        if (pCVar5 != (CObject *)0x0) {
          (**(code **)(*(int *)(pCVar5 + 0x1d4) + 0x10))(iVar1 != 0,pCVar2 + 0x1d4);
        }
        param_3 = param_3 + 1;
      } while (param_3 < iVar4);
    }
    (**(code **)(*piVar3 + 0x198))();
    (**(code **)(*(int *)param_1 + 0x60))();
    iVar1 = 0;
  }
  return iVar1;
}


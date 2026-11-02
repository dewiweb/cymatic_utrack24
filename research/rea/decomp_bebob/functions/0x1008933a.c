// rea decompile_all
// name: CPane::OnDestroy
// address: 0x1008933a
// body: available
// range: 0x1008933a-0x100893c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008939b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100893be to 0x100123eb FUN_100123eb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPane::OnDestroy(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPane::OnDestroy(CPane *this)

{
  int iVar1;
  HWND pHVar2;
  CWnd *this_00;
  CObject *pCVar3;
  BOOL BVar4;
  
  iVar1 = (**(code **)(*(int *)this + 0x168))();
  if (iVar1 != 0) {
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    this_00 = CWnd::FromHandle(pHVar2);
    iVar1 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_1012e24c);
    if (iVar1 != 0) {
      pHVar2 = GetParent(*(HWND *)(this_00 + 0x20));
      this_00 = CWnd::FromHandle(pHVar2);
    }
    iVar1 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c);
    if (iVar1 != 0) {
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,
                                  (CObject *)this_00);
      if (pCVar3 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      pHVar2 = *(HWND *)(this + 0x20);
      (**(code **)(*(int *)pCVar3 + 0x3c4))(this);
      BVar4 = IsWindow(pHVar2);
      if (BVar4 == 0) {
        return;
      }
    }
  }
  FUN_100123eb((CWnd *)this);
  return;
}


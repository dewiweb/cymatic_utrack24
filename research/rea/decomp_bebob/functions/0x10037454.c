// rea decompile_all
// name: CKeyboardManager::ResetAll
// address: 0x10037454
// body: available
// range: 0x10037454-0x10037583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003751b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CKeyboardManager::ResetAll(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CKeyboardManager::ResetAll(CKeyboardManager *this)

{
  int *piVar1;
  AFX_MODULE_STATE *pAVar2;
  CObject *pCVar3;
  int iVar4;
  HACCEL pHVar5;
  CWnd *pCVar6;
  uint uVar7;
  CKeyboardManager *local_8;
  
  local_8 = this;
  pAVar2 = AfxGetModuleState();
  piVar1 = *(int **)(*(int *)(pAVar2 + 4) + 0x5c);
  if (piVar1 != (int *)0x0) {
    local_8 = (CKeyboardManager *)(**(code **)(*piVar1 + 0x10))();
    while (local_8 != (CKeyboardManager *)0x0) {
      pCVar3 = (CObject *)(**(code **)(*piVar1 + 0x14))(&local_8);
      iVar4 = CObject::IsKindOf(pCVar3,(CRuntimeClass *)&PTR_s_CMultiDocTemplate_10134a2c);
      if ((iVar4 != 0) && (*(int *)(pCVar3 + 0x8c) != 0)) {
        uVar7 = *(uint *)(pCVar3 + 0x54);
        if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        pAVar2 = AfxGetModuleState();
        pHVar5 = LoadAcceleratorsW(*(HINSTANCE *)(pAVar2 + 0xc),(LPCWSTR)(uVar7 & 0xffff));
        if (pHVar5 != (HACCEL)0x0) {
          UpdateAccelTable(this,(CMultiDocTemplate *)pCVar3,pHVar5,(CFrameWnd *)0x0);
        }
      }
    }
  }
  pCVar6 = AfxGetMainWnd();
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1012733c,(CObject *)pCVar6);
  if ((pCVar3 != (CObject *)0x0) && (*(int *)(pCVar3 + 0x80) != 0)) {
    pCVar6 = AfxGetMainWnd();
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar6);
    if (pCVar3 == (CObject *)0x0) {
      pCVar6 = AfxGetMainWnd();
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,(CObject *)pCVar6);
      if (pCVar3 == (CObject *)0x0) {
        pCVar6 = AfxGetMainWnd();
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_1012089c,
                                    (CObject *)pCVar6);
        if (pCVar3 == (CObject *)0x0) {
          return;
        }
        uVar7 = *(uint *)(pCVar3 + 0x1a4);
      }
      else {
        uVar7 = *(uint *)(pCVar3 + 0x130);
      }
    }
    else {
      uVar7 = *(uint *)(pCVar3 + 0x348);
    }
    if (uVar7 != 0) {
      pAVar2 = AfxGetModuleState();
      pHVar5 = LoadAcceleratorsW(*(HINSTANCE *)(pAVar2 + 0xc),(LPCWSTR)(uVar7 & 0xffff));
      if (pHVar5 != (HACCEL)0x0) {
        UpdateAccelTable(this,(CMultiDocTemplate *)0x0,pHVar5,(CFrameWnd *)0x0);
      }
    }
  }
  return;
}


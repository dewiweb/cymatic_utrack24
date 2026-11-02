// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::SetupFromMenus
// address: 0x10097799
// body: available
// range: 0x10097799-0x1009786c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsCustomizeDialog::SetupFromMenus(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarsCustomizeDialog::SetupFromMenus(CMFCToolBarsCustomizeDialog *this)

{
  int *piVar1;
  AFX_MODULE_STATE *pAVar2;
  CObject *pCVar3;
  CMenu *pCVar4;
  int iVar5;
  CMFCToolBarsCustomizeDialog *local_8;
  
  local_8 = this;
  pAVar2 = AfxGetModuleState();
  piVar1 = *(int **)(*(int *)(pAVar2 + 4) + 0x5c);
  if (piVar1 != (int *)0x0) {
    local_8 = (CMFCToolBarsCustomizeDialog *)(**(code **)(*piVar1 + 0x10))();
    while (local_8 != (CMFCToolBarsCustomizeDialog *)0x0) {
      pCVar3 = (CObject *)(**(code **)(*piVar1 + 0x14))(&local_8);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiDocTemplate_10134a2c,pCVar3);
      if ((pCVar3 != (CObject *)0x0) &&
         (pCVar4 = CMenu::FromHandle(*(HMENU__ **)(pCVar3 + 0x88)), pCVar4 != (CMenu *)0x0)) {
        AddMenuCommands(this,pCVar4,0,(wchar_t *)0x0,(wchar_t *)0x0);
      }
    }
  }
  pCVar4 = CMenu::FromHandle(*(HMENU__ **)(*(int *)(this + 0x140) + 0x7c));
  if (pCVar4 == (CMenu *)0x0) {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,
                                *(CObject **)(this + 0x140));
    if (pCVar3 == (CObject *)0x0) {
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,
                                  *(CObject **)(this + 0x140));
      if (pCVar3 == (CObject *)0x0) {
        return;
      }
      iVar5 = *(int *)(pCVar3 + 0x1d0);
    }
    else {
      iVar5 = *(int *)(pCVar3 + 1000);
    }
    if (iVar5 == 0) {
      return;
    }
    pCVar4 = CMenu::FromHandle(*(HMENU__ **)(iVar5 + 0xcd8));
    if (pCVar4 == (CMenu *)0x0) {
      return;
    }
  }
  AddMenuCommands(this,pCVar4,0,(wchar_t *)0x0,(wchar_t *)0x0);
  return;
}


// rea decompile_all
// name: CPaneContainerManager::RemoveAllPanesAndPaneDividers
// address: 0x100c4dbf
// body: available
// range: 0x100c4dbf-0x100c4e54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c4e18 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CPaneContainerManager::RemoveAllPanesAndPaneDividers(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneContainerManager::RemoveAllPanesAndPaneDividers(CPaneContainerManager *this)

{
  __POSITION *p_Var1;
  CObject *pCVar2;
  ulong uVar3;
  __POSITION *p_Var4;
  
  p_Var1 = *(__POSITION **)(this + 8);
  while (p_Var4 = p_Var1, p_Var4 != (__POSITION *)0x0) {
    if (p_Var4 == (__POSITION *)0x0) goto LAB_100c4e18;
    p_Var1 = *(__POSITION **)p_Var4;
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,*(CObject **)(p_Var4 + 8)
                               );
    uVar3 = CWnd::GetExStyle((CWnd *)pCVar2);
    if ((uVar3 & 0x10000000) != 0) {
      CObList::RemoveAt((CObList *)(this + 4),p_Var4);
    }
  }
  p_Var1 = *(__POSITION **)(this + 0x24);
  while( true ) {
    p_Var4 = p_Var1;
    if (p_Var4 == (__POSITION *)0x0) {
      return;
    }
    if (p_Var4 == (__POSITION *)0x0) break;
    p_Var1 = *(__POSITION **)p_Var4;
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,*(CObject **)(p_Var4 + 8)
                               );
    uVar3 = CWnd::GetExStyle((CWnd *)pCVar2);
    if ((uVar3 & 0x10000000) != 0) {
      CObList::RemoveAt((CObList *)(this + 0x20),p_Var4);
    }
  }
LAB_100c4e18:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


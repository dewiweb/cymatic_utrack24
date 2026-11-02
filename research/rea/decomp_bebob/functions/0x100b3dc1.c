// rea decompile_all
// name: CMFCRibbonPanel::GetLastTabStop
// address: 0x100b3dc1
// body: available
// range: 0x100b3dc1-0x100b3ea8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b3e3b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CMFCRibbonBaseElement * __thiscall CMFCRibbonPanel::GetLastTabStop(void)const 
   
   Library: Visual Studio 2010 Release */

CMFCRibbonBaseElement * __thiscall CMFCRibbonPanel::GetLastTabStop(CMFCRibbonPanel *this)

{
  CObject *pCVar1;
  int iVar2;
  int iVar3;
  CMFCRibbonBaseElement *pCVar4;
  int iVar5;
  
  if (*(int *)(this + 0xb0) == 0) {
LAB_100b3e76:
    iVar5 = *(int *)(this + 0x25c);
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return (CMFCRibbonBaseElement *)0x0;
      }
      if ((iVar5 < 0) || (*(int *)(this + 0x25c) <= iVar5)) {
LAB_100b3e3b:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      pCVar4 = (CMFCRibbonBaseElement *)
               (**(code **)(**(int **)(*(int *)(this + 600) + iVar5 * 4) + 0x16c))();
    } while (pCVar4 == (CMFCRibbonBaseElement *)0x0);
  }
  else {
    iVar5 = *(int *)(this + 0x25c);
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        iVar5 = *(int *)(this + 0x25c);
        goto LAB_100b3e73;
      }
      if ((iVar5 < 0) || (*(int *)(this + 0x25c) <= iVar5)) goto LAB_100b3e3b;
      pCVar1 = *(CObject **)(*(int *)(this + 600) + iVar5 * 4);
      iVar3 = CObject::IsKindOf(pCVar1,(CRuntimeClass *)&PTR_s_CMFCRibbonLabel_1013aaa0);
      iVar2 = CObject::IsKindOf(pCVar1,(CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734);
    } while ((((iVar2 != 0) || (iVar3 != 0)) || (*(int *)(pCVar1 + 0x9c) != 0)) ||
            (pCVar4 = (CMFCRibbonBaseElement *)(**(code **)(*(int *)pCVar1 + 0x168))(),
            pCVar4 == (CMFCRibbonBaseElement *)0x0));
  }
  return pCVar4;
LAB_100b3e73:
  iVar5 = iVar5 + -1;
  if (iVar5 < 0) goto LAB_100b3e76;
  if ((iVar5 < 0) || (*(int *)(this + 0x25c) <= iVar5)) goto LAB_100b3e3b;
  pCVar1 = *(CObject **)(*(int *)(this + 600) + iVar5 * 4);
  iVar3 = CObject::IsKindOf(pCVar1,(CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734);
  if ((iVar3 != 0) &&
     (pCVar4 = (CMFCRibbonBaseElement *)(**(code **)(*(int *)pCVar1 + 0x168))(),
     pCVar4 != (CMFCRibbonBaseElement *)0x0)) {
    return pCVar4;
  }
  goto LAB_100b3e73;
}


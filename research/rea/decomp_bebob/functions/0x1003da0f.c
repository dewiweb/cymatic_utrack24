// rea decompile_all
// name: CDockingManager::FindDockSite
// address: 0x1003da0f
// body: available
// range: 0x1003da0f-0x1003da87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003da78 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CDockSite * __thiscall CDockingManager::FindDockSite(unsigned long,int)
   
   Library: Visual Studio 2010 Release */

CDockSite * __thiscall
CDockingManager::FindDockSite(CDockingManager *this,ulong param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  CObject *pCVar4;
  undefined4 *puVar5;
  
  if (param_2 == 0) {
    puVar1 = *(undefined4 **)(this + 0x28);
  }
  else {
    puVar1 = *(undefined4 **)(this + 0x24);
  }
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return (CDockSite *)0x0;
    }
    if (param_2 == 0) {
      if (puVar1 == (undefined4 *)0x0) goto LAB_1003da78;
      puVar5 = (undefined4 *)puVar1[1];
    }
    else {
      if (puVar1 == (undefined4 *)0x0) {
LAB_1003da78:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar5 = (undefined4 *)*puVar1;
    }
    pCVar4 = (CObject *)puVar1[2];
    iVar2 = CObject::IsKindOf(pCVar4,(CRuntimeClass *)&PTR_s_CDockSite_1012dd78);
    puVar1 = puVar5;
    if ((iVar2 != 0) && (uVar3 = (**(code **)(*(int *)pCVar4 + 400))(), uVar3 == (param_1 & 0xf000))
       ) {
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockSite_1012dd78,pCVar4);
      return (CDockSite *)pCVar4;
    }
  } while( true );
}


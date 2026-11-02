// rea decompile_all
// name: CMultiPaneFrameWnd::CanBeDockedToPane
// address: 0x100c6b86
// body: available
// range: 0x100c6b86-0x100c6be8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c6bdf to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMultiPaneFrameWnd::CanBeDockedToPane(class CDockablePane const
   *)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMultiPaneFrameWnd::CanBeDockedToPane(CMultiPaneFrameWnd *this,CDockablePane *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int iVar4;
  
  puVar2 = *(undefined4 **)(this + 0x188);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)*puVar1);
    iVar4 = (**(code **)(*(int *)param_1 + 0x180))(pCVar3);
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*(int *)pCVar3 + 0x180))(param_1), iVar4 != 0)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


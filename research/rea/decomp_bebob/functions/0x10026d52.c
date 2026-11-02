// rea decompile_all
// name: CMFCToolBar::GetDroppedDownMenu
// address: 0x10026d52
// body: available
// range: 0x10026d52-0x10026dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026db2 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCToolBarMenuButton * __thiscall CMFCToolBar::GetDroppedDownMenu(int *)const 
   
   Library: Visual Studio 2010 Release */

CMFCToolBarMenuButton * __thiscall CMFCToolBar::GetDroppedDownMenu(CMFCToolBar *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)(this + 0xbd4) != 0) {
    puVar2 = *(undefined4 **)(this + 0xbcc);
    while (puVar2 != (undefined4 *)0x0) {
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,
                                  (CObject *)*puVar1);
      if ((pCVar3 != (CObject *)0x0) && (iVar4 = (**(code **)(*(int *)pCVar3 + 0x70))(), iVar4 != 0)
         ) {
        if (param_1 != (int *)0x0) {
          *param_1 = iVar5;
          return (CMFCToolBarMenuButton *)pCVar3;
        }
        return (CMFCToolBarMenuButton *)pCVar3;
      }
      iVar5 = iVar5 + 1;
    }
    if (param_1 != (int *)0x0) {
      *param_1 = -1;
    }
  }
  return (CMFCToolBarMenuButton *)0x0;
}


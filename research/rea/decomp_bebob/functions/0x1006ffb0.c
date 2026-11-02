// rea decompile_all
// name: CMFCMenuBar::CalcMaxButtonHeight
// address: 0x1006ffb0
// body: available
// range: 0x1006ffb0-0x10070024 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070009 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCMenuBar::CalcMaxButtonHeight(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCMenuBar::CalcMaxButtonHeight(CMFCMenuBar *this)

{
  undefined4 *puVar1;
  CObject *this_00;
  int iVar2;
  
  *(undefined4 *)(this + 0xcfc) = 0;
  puVar1 = *(undefined4 **)(this + 0xbcc);
  do {
    if (puVar1 == (undefined4 *)0x0) goto LAB_10070019;
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    this_00 = (CObject *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    iVar2 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMFCToolBarMenuButtonsButton_1012ec78)
    ;
  } while ((((iVar2 != 0) ||
            (iVar2 = CObject::IsKindOf(this_00,(CRuntimeClass *)
                                               &PTR_s_CMFCToolBarSystemMenuButton_101616f8),
            iVar2 != 0)) || (*(int *)(this_00 + 0xc) == 0)) ||
          (iVar2 = CMFCToolBarButton::IsDrawImage((CMFCToolBarButton *)this_00), iVar2 == 0));
  *(undefined4 *)(this + 0xcfc) = 1;
LAB_10070019:
                    /* WARNING: Could not recover jumptable at 0x1007001f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(*(int *)this + 0x354))();
  return iVar2;
}


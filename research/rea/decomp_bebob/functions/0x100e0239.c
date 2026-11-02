// rea decompile_all
// name: CMFCToolBarButtonsListButton::SelectButton
// address: 0x100e0239
// body: available
// range: 0x100e0239-0x100e0290 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e0281 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCToolBarButtonsListButton::SelectButton(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarButtonsListButton::SelectButton(CMFCToolBarButtonsListButton *this,int param_1)

{
  CMFCToolBarButton *pCVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 < 0) {
    SelectButton(this,(CMFCToolBarButton *)0x0);
  }
  else {
    puVar2 = *(undefined4 **)(this + 0x78);
    do {
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      if (puVar2 == (undefined4 *)0x0) {
LAB_100e0281:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      pCVar1 = (CMFCToolBarButton *)puVar2[2];
      puVar2 = (undefined4 *)*puVar2;
      if (pCVar1 == (CMFCToolBarButton *)0x0) goto LAB_100e0281;
      if (*(int *)(pCVar1 + 4) == 0) {
        iVar3 = *(int *)(pCVar1 + 0x34);
      }
      else {
        iVar3 = *(int *)(pCVar1 + 0x38);
      }
    } while (iVar3 != param_1);
    SelectButton(this,pCVar1);
  }
  return 1;
}


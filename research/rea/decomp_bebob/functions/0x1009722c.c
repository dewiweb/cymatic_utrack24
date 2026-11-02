// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::AddUserTools
// address: 0x1009722c
// body: available
// range: 0x1009722c-0x100972a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009724c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsCustomizeDialog::AddUserTools(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsCustomizeDialog::AddUserTools(CMFCToolBarsCustomizeDialog *this,wchar_t *param_1)

{
  int *piVar1;
  CMFCToolBarButton *pCVar2;
  undefined4 *puVar3;
  CMFCToolBarButton local_84 [124];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  local_8 = 0x10097238;
  if (param_1 != (wchar_t *)0x0) {
    puVar3 = *(undefined4 **)(DAT_101685b0 + 8);
    while( true ) {
      if (puVar3 == (undefined4 *)0x0) {
        FUN_100f90cf();
        return;
      }
      if (puVar3 == (undefined4 *)0x0) break;
      piVar1 = puVar3 + 2;
      puVar3 = (undefined4 *)*puVar3;
      pCVar2 = (CMFCToolBarButton *)
               CMFCToolBarButton::CMFCToolBarButton
                         (local_84,*(uint *)(*piVar1 + 0x10),0,*(wchar_t **)(*piVar1 + 4),0,0);
      local_8 = 0;
      AddButton(this,param_1,pCVar2,-1);
      local_8 = 0xffffffff;
      CMFCToolBarButton::~CMFCToolBarButton(local_84);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


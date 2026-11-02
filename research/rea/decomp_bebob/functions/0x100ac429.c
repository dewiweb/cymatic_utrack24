// rea decompile_all
// name: FUN_100ac429
// address: 0x100ac429
// body: available
// range: 0x100ac429-0x100ac551 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ac54d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_100ac429(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = CMFCRibbonCategory::vftable;
  iVar2 = 0;
  if (0 < (int)param_1[0xfa]) {
    do {
      if ((iVar2 < 0) || ((int)param_1[0xfa] <= iVar2)) goto LAB_100ac54d;
      piVar1 = *(int **)(param_1[0xf9] + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0xfa]);
  }
  iVar2 = 0;
  if (0 < (int)param_1[0x186]) {
    do {
      if ((iVar2 < 0) || ((int)param_1[0x186] <= iVar2)) {
LAB_100ac54d:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar1 = *(int **)(param_1[0x185] + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x186]);
  }
  FUN_1006d033(param_1 + 0x184);
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(param_1 + 0x141));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(param_1 + 0xfe));
  FUN_100ab003(param_1 + 0xf8);
  FUN_1006d048(param_1 + 0xf3);
  CMFCRibbonButton::~CMFCRibbonButton((CMFCRibbonButton *)(param_1 + 0x95));
  CMFCRibbonButton::~CMFCRibbonButton((CMFCRibbonButton *)(param_1 + 0x3b));
  CMFCRibbonBaseElement::~CMFCRibbonBaseElement((CMFCRibbonBaseElement *)(param_1 + 0xd));
  FUN_10001030((undefined4 *)(param_1[0xc] + -0x10));
  return;
}


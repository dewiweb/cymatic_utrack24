// rea decompile_all
// name: CMFCPopupMenuBar::CreateDroppedButton
// address: 0x100a1658
// body: available
// range: 0x100a1658-0x100a1732 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a167b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class CMFCToolBarButton * __thiscall
   CMFCPopupMenuBar::CreateDroppedButton(class COleDataObject *)
   
   Library: Visual Studio 2010 Release */

CMFCToolBarButton * __thiscall
CMFCPopupMenuBar::CreateDroppedButton(CMFCPopupMenuBar *this,COleDataObject *param_1)

{
  CMFCToolBarButton *pCVar1;
  CMFCToolBarButton *pCVar2;
  CMFCToolBarMenuButton *this_00;
  int iVar3;
  
  pCVar1 = CMFCToolBarButton::CreateFromOleData(param_1);
  if (pCVar1 != (CMFCToolBarButton *)0x0) {
    pCVar2 = (CMFCToolBarButton *)
             AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,
                                (CObject *)pCVar1);
    if (pCVar2 == (CMFCToolBarButton *)0x0) {
      this_00 = FUN_1000858a(0xe8);
      if (this_00 == (CMFCToolBarMenuButton *)0x0) {
        pCVar2 = (CMFCToolBarButton *)0x0;
      }
      else {
        if (*(int *)(pCVar1 + 0x3c) == 0) {
          if (*(int *)(pCVar1 + 4) == 0) {
            iVar3 = *(int *)(pCVar1 + 0x34);
          }
          else {
            iVar3 = *(int *)(pCVar1 + 0x38);
          }
        }
        else {
          iVar3 = -1;
        }
        pCVar2 = (CMFCToolBarButton *)
                 CMFCToolBarMenuButton::CMFCToolBarMenuButton
                           (this_00,*(uint *)(pCVar1 + 0x20),(HMENU__ *)0x0,iVar3,
                            *(wchar_t **)(pCVar1 + 0x2c),*(int *)(pCVar1 + 4));
      }
      if (pCVar2 == (CMFCToolBarButton *)0x0) goto LAB_100a167b;
      *(int *)(pCVar2 + 8) = 1;
      *(uint *)(pCVar2 + 0xc) = (uint)(*(int *)(pCVar1 + 0x3c) == 0);
      iVar3 = (**(code **)(*(int *)pCVar1 + 0x2c))(pCVar2);
      (**(code **)(*(int *)pCVar1 + 4))(1);
      if ((iVar3 == 0) || (*(int *)(*(int *)(pCVar2 + 0x2c) + -0xc) == 0)) {
        (**(code **)(*(int *)pCVar2 + 4))(1);
        pCVar2 = (CMFCToolBarButton *)0x0;
      }
    }
    return pCVar2;
  }
LAB_100a167b:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}


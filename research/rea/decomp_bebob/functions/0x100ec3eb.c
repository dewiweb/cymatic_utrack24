// rea decompile_all
// name: CMFCRibbonColorButton::OnShowPopupMenu
// address: 0x100ec3eb
// body: available
// range: 0x100ec3eb-0x100ec5fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ec4d7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonColorButton::OnShowPopupMenu(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonColorButton::OnShowPopupMenu(CMFCRibbonColorButton *this)

{
  CObject *pCVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  
  *(undefined4 *)(this + 0x310) = 0xffffffff;
  CMFCRibbonBaseElement::OnShowPopupMenu((CMFCRibbonBaseElement *)this);
  iVar4 = 0;
  if (0 < *(int *)(this + 0x158)) {
    do {
      if ((iVar4 < 0) || (*(int *)(this + 0x158) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonColorMenuButton_1013e478,
                                  *(CObject **)(*(int *)(this + 0x154) + iVar4 * 4));
      if (pCVar1 == (CObject *)0x0) {
        iVar4 = iVar4 + 1;
      }
      else {
        (**(code **)(*(int *)pCVar1 + 4))(1);
        FUN_1006cfdb(this + 0x150,iVar4,1);
      }
    } while (iVar4 < *(int *)(this + 0x158));
  }
  if (*(int *)(this + 0x364) == 0) {
    (**(code **)(*(int *)this + 0x1dc))();
    AddGroup(this,(short *)&PTR_1011d390,*(int *)(this + 800));
  }
  iVar4 = *(int *)(this + 0x334);
  if (0 < iVar4) {
    AddGroup(this,*(short **)(this + 0x37c),iVar4);
  }
  if (*(int *)(this + 0x360) != 0) {
    pvVar2 = FUN_1000858a(0x16c);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = CMFCRibbonColorMenuButton(pvVar2,2,this,*(wchar_t **)(this + 0x374),0);
    }
    *(int **)(this + 0x380) = piVar3;
    (**(code **)(*piVar3 + 0x24))(*(undefined4 *)(this + 0x378));
    CMFCRibbonGallery::AddSubItem
              ((CMFCRibbonGallery *)this,*(CMFCRibbonBaseElement **)(this + 0x380),0,0);
  }
  if (*(int *)(this + 0x354) != 0) {
    pvVar2 = FUN_1000858a(0x16c);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = CMFCRibbonColorMenuButton
                         (pvVar2,1,this,*(wchar_t **)(this + 0x36c),
                          (uint)(*(int *)(this + 0x30c) == -1));
    }
    *(int **)(this + 900) = piVar3;
    (**(code **)(*piVar3 + 0x24))(*(undefined4 *)(this + 0x370));
    CMFCRibbonGallery::AddSubItem
              ((CMFCRibbonGallery *)this,*(CMFCRibbonBaseElement **)(this + 900),0,
               *(int *)(this + 0x358));
  }
  if ((*(int *)(this + 0x364) == 0) || (*(int *)(this + 0x348) < 1)) {
    *(undefined4 *)(this + 0x1f0) = *(undefined4 *)(this + 0x388);
    *(undefined4 *)(this + 500) = *(undefined4 *)(this + 0x38c);
  }
  else {
    *(undefined4 *)(this + 0x1f0) = *(undefined4 *)(this + 0x388);
    *(int *)(this + 500) = *(int *)(this + 0x38c) + -3;
  }
  FUN_100b09a3((CMFCRibbonBaseElement *)this);
  if (0 < iVar4) {
    FUN_100cdc3e(this + 0x178,*(int *)(this + 0x180) + -1,1);
    FUN_1006cfdb(this + 0x18c,*(int *)(this + 0x194) + -1,1);
    *(int *)(this + 0x2e0) = *(int *)(this + 0x2e0) - iVar4;
  }
  return;
}


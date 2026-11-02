// rea decompile_all
// name: CMFCRibbonUndoButton::NotifyHighlightListItem
// address: 0x100f275b
// body: available
// range: 0x100f275b-0x100f2830 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonUndoButton::NotifyHighlightListItem(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonUndoButton::NotifyHighlightListItem(CMFCRibbonUndoButton *this,int param_1)

{
  CObject *pCVar1;
  CMFCRibbonBaseElement *pCVar2;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100f2767;
  if (*(int *)(this + 0x40) != 0) {
    *(int *)(this + 0x30c) = param_1 + 1;
    local_14[0] = FUN_10005e30((int *)(*(int *)(this + 0x318) + -0x10));
    local_14[0] = local_14[0] + 4;
    local_8 = 0;
    if (0 < *(int *)(this + 0x30c)) {
      if (*(int *)(this + 0x30c) == 1) {
        FUN_10007c90(local_14,(undefined4 *)(this + 0x31c));
      }
      else {
        FUN_100022f0(local_14,*(wchar_t **)(this + 800));
      }
    }
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenu_1012fd88,
                                *(CObject **)(this + 0x40));
    if ((pCVar1 != (CObject *)0x0) &&
       (*(CMFCRibbonPanel **)(pCVar1 + 0x1ee4) != (CMFCRibbonPanel *)0x0)) {
      pCVar2 = CMFCRibbonPanel::FindByID(*(CMFCRibbonPanel **)(pCVar1 + 0x1ee4),0);
      if (pCVar2 != (CMFCRibbonBaseElement *)0x0) {
        (**(code **)(*(int *)pCVar2 + 0x10))(local_14[0]);
        (**(code **)(*(int *)pCVar2 + 0x118))();
      }
    }
    FUN_100af7df((int)this);
    local_8 = 0xffffffff;
    FUN_10001030(local_14[0] + -4);
  }
  CMFCRibbonBaseElement::NotifyHighlightListItem((CMFCRibbonBaseElement *)this,param_1);
  return;
}


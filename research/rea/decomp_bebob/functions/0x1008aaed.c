// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::RebuildImageList
// address: 0x1008aaed
// body: available
// range: 0x1008aaed-0x1008ab9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonCustomizeDialog::RebuildImageList(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarButtonCustomizeDialog::RebuildImageList(CMFCToolBarButtonCustomizeDialog *this)

{
  int iVar1;
  CObject *pCVar2;
  CMFCToolBarButton *this_00;
  int iVar3;
  CMFCToolBarButton *pCVar4;
  
  CMFCToolBarButtonsListButton::RemoveButtons((CMFCToolBarButtonsListButton *)(this + 0x2d8));
  while (*(int *)(this + 0x4a8) != 0) {
    pCVar2 = CObList::RemoveHead((CObList *)(this + 0x49c));
    if (pCVar2 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar2 + 4))(1);
    }
  }
  iVar1 = *(int *)(*(int *)(this + 0x480) + 4);
  for (iVar3 = *(int *)(this + 0x484); iVar3 <= iVar1 + -1; iVar3 = iVar3 + 1) {
    this_00 = FUN_1000858a(0x70);
    pCVar4 = (CMFCToolBarButton *)0x0;
    if (this_00 != (CMFCToolBarButton *)0x0) {
      pCVar4 = (CMFCToolBarButton *)CMFCToolBarButton::CMFCToolBarButton(this_00);
    }
    (**(code **)(*(int *)pCVar4 + 0xbc))(iVar3);
    CMFCToolBarButtonsListButton::AddButton((CMFCToolBarButtonsListButton *)(this + 0x2d8),pCVar4);
    CObList::AddTail((CObList *)(this + 0x49c),(CObject *)pCVar4);
  }
  InvalidateRect(*(HWND *)(this + 0x2f8),(RECT *)0x0,1);
  return;
}


// rea decompile_all
// name: CMFCRibbonGalleryIcon::OnClick
// address: 0x100af4e2
// body: available
// range: 0x100af4e2-0x100af573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonGalleryIcon::OnClick(class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCRibbonGalleryIcon::OnClick(CMFCRibbonGalleryIcon *this,undefined4 param_2,undefined4 param_3)

{
  CMFCRibbonGalleryIcon *pCVar1;
  int *piVar2;
  
  pCVar1 = *(CMFCRibbonGalleryIcon **)(this + 0x30);
  if (*(CMFCRibbonGalleryIcon **)(this + 0x30) == (CMFCRibbonGalleryIcon *)0x0) {
    pCVar1 = this;
  }
  (**(code **)(**(int **)(this + 0x164) + 0x1e0))(pCVar1);
  if (-1 < *(int *)(this + 0x168)) {
    piVar2 = *(int **)(this + 0x38);
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(*(CMFCRibbonBaseElement **)(this + 0x164) + 0x38);
      if (piVar2 == (int *)0x0) {
        CMFCRibbonBaseElement::NotifyCommand(*(CMFCRibbonBaseElement **)(this + 0x164),0);
        return;
      }
    }
    if (*(int *)(*(CMFCRibbonGallery **)(this + 0x164) + 0x2c0) != 0) {
      CMFCRibbonGallery::SetNotifyParentID(*(CMFCRibbonGallery **)(this + 0x164),1);
    }
    *(undefined4 *)(*(int *)(this + 0x164) + 0x70) = 0;
    (**(code **)(**(int **)(this + 0x164) + 0x184))(0);
    (**(code **)(*piVar2 + 0x44c))(*(undefined4 *)(this + 0x164),param_2,param_3);
  }
  return;
}


// rea decompile_all
// name: CMFCRibbonPanelMenu::CMFCRibbonPanelMenu
// address: 0x100a469e
// body: available
// range: 0x100a469e-0x100a4746 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCRibbonPanelMenu::CMFCRibbonPanelMenu(class CMFCRibbonGallery *)
   
   Library: Visual Studio 2010 Release */

CMFCRibbonPanelMenu * __thiscall
CMFCRibbonPanelMenu::CMFCRibbonPanelMenu(CMFCRibbonPanelMenu *this,CMFCRibbonGallery *param_1)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  
  CMFCPopupMenu::CMFCPopupMenu((CMFCPopupMenu *)this);
  *(undefined ***)this = vftable;
  CMFCRibbonPanelMenuBar::CMFCRibbonPanelMenuBar((CMFCRibbonPanelMenuBar *)(this + 0x10c4),param_1);
  *(undefined4 *)(this + 0x1efc) = 0;
  *(undefined4 *)(this + 0xef0) = 1;
  if (*(int *)(param_1 + 0x2f0) != 0) {
    CMFCRibbonPanel::GetPaltteMinSize(*(CMFCRibbonPanel **)(this + 0x1ee4));
    if ((0 < local_1c) && (0 < local_18)) {
      iVar2 = GetBorderSize(this);
      iVar1 = local_18 + (short)((uint)iVar2 >> 0x10) * 2;
      if (*(int *)(param_1 + 0x2f4) == 0) {
        CMFCPopupMenu::EnableResize((CMFCPopupMenu *)this,local_1c + (short)iVar2 * 2,iVar1);
      }
      else {
        CMFCPopupMenu::EnableVertResize((CMFCPopupMenu *)this,iVar1);
      }
    }
  }
  return this;
}


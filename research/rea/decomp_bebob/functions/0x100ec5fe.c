// rea decompile_all
// name: CMFCRibbonColorButton::OnClickPaletteSubItem
// address: 0x100ec5fe
// body: available
// range: 0x100ec5fe-0x100ec6bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCRibbonColorButton::OnClickPaletteSubItem(class
   CMFCRibbonButton *,class CMFCRibbonPanelMenuBar *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCRibbonColorButton::OnClickPaletteSubItem
          (CMFCRibbonColorButton *this,CMFCRibbonButton *param_1,CMFCRibbonPanelMenuBar *param_2)

{
  CMFCRibbonBar *pCVar1;
  int iVar2;
  CMFCRibbonColorButton *this_00;
  HPALETTE__ *pHVar3;
  CMFCColorDialog local_970 [204];
  ulong local_8a4;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x960;
  local_8 = 0x100ec60d;
  if ((*(int *)(param_1 + 0x30) == *(int *)(this + 0x380)) && (*(int *)(this + 0x380) != 0)) {
    this_00 = this;
    if (*(CMFCRibbonColorButton **)(this + 0x30) != (CMFCRibbonColorButton *)0x0) {
      this_00 = *(CMFCRibbonColorButton **)(this + 0x30);
    }
    (**(code **)(*(int *)this + 0xf8))();
    pHVar3 = (HPALETTE__ *)0x0;
    pCVar1 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
    CMFCColorDialog::CMFCColorDialog(local_970,*(ulong *)(this + 0x30c),0,(CWnd *)pCVar1,pHVar3);
    local_8 = 0;
    iVar2 = FUN_1001bf3c((CDialog *)local_970);
    if (iVar2 == 1) {
      UpdateColor(this_00,local_8a4);
      CMFCRibbonBaseElement::NotifyCommand((CMFCRibbonBaseElement *)this_00,0);
    }
    local_8 = 0xffffffff;
    CMFCColorDialog::~CMFCColorDialog(local_970);
  }
  else if ((*(int *)(param_1 + 0x30) == *(int *)(this + 900)) && (*(int *)(this + 900) != 0)) {
    UpdateColor(this,0xffffffff);
    CMFCRibbonBaseElement::NotifyCommand((CMFCRibbonBaseElement *)this,1);
  }
  iVar2 = FUN_100f90cf();
  return iVar2;
}


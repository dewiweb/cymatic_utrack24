// rea decompile_all
// name: CMFCRibbonPanelMenuBar::CMFCRibbonPanelMenuBar
// address: 0x100a4564
// body: available
// range: 0x100a4564-0x100a4658 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCRibbonPanelMenuBar::CMFCRibbonPanelMenuBar(class CMFCRibbonGallery *)
   
   Library: Visual Studio 2010 Release */

CMFCRibbonPanelMenuBar * __thiscall
CMFCRibbonPanelMenuBar::CMFCRibbonPanelMenuBar
          (CMFCRibbonPanelMenuBar *this,CMFCRibbonGallery *param_1)

{
  undefined4 uVar1;
  CMFCRibbonBar *pCVar2;
  undefined ***pppuVar3;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  CMFCRibbonPanel *local_18;
  CMFCRibbonPanelMenuBar *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100a4570;
  local_14 = this;
  CMFCPopupMenuBar::CMFCPopupMenuBar((CMFCPopupMenuBar *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0xd80) = 0;
  *(undefined4 *)(this + 0xd84) = 0;
  *(undefined4 *)(this + 0xd88) = 0;
  *(undefined4 *)(this + 0xd8c) = 0;
  *(undefined4 *)(this + 0xd90) = 0;
  *(undefined4 *)(this + 0xd94) = 0;
  *(undefined4 *)(this + 0xd98) = 0;
  *(undefined4 *)(this + 0xd9c) = 0;
  local_8 = 0;
  *(undefined4 *)(this + 0xda0) = 0;
  *(undefined4 *)(this + 0xda4) = 0;
  CWnd::CWnd((CWnd *)(this + 0xda8));
  *(undefined ***)(this + 0xda8) = CScrollBar::vftable;
  local_8._0_1_ = 1;
  local_18 = FUN_1000858a(0x268);
  local_8._0_1_ = 2;
  if (local_18 == (CMFCRibbonPanel *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CMFCRibbonPanel::CMFCRibbonPanel(local_18,param_1);
  }
  *(undefined4 *)(this + 0xe20) = uVar1;
  CommonInit(this);
  local_2c = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
  local_28 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_8._0_1_ = 3;
  FUN_100afd83(param_1,(CArray<int,int> *)&local_2c);
  uVar1 = 0;
  pppuVar3 = &local_2c;
  pCVar2 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)param_1);
  FUN_100a41a7(this,(int)pCVar2,(int)pppuVar3,uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_1006d033(&local_2c);
  return this;
}


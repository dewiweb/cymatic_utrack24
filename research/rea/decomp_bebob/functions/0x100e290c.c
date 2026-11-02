// rea decompile_all
// name: CMFCImageEditorDialog::CMFCImageEditorDialog
// address: 0x100e290c
// body: available
// range: 0x100e290c-0x100e2a34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCImageEditorDialog::CMFCImageEditorDialog(class CBitmap *,class CWnd
   *,int)
   
   Library: Visual Studio 2010 Release */

CMFCImageEditorDialog * __thiscall
CMFCImageEditorDialog::CMFCImageEditorDialog
          (CMFCImageEditorDialog *this,CBitmap *param_1,CWnd *param_2,int param_3)

{
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  ushort local_1a;
  CMFCImageEditorDialog *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100e2918;
  local_14 = this;
  CDialogEx::CDialogEx((CDialogEx *)this,0x3f05,param_2);
  local_8 = 0;
  *(undefined ***)this = vftable;
  CWnd::CWnd((CWnd *)(this + 0xb8));
  *(undefined ***)(this + 0xb8) = CStatic::vftable;
  local_8._0_1_ = 1;
  CWnd::CWnd((CWnd *)(this + 300));
  *(undefined ***)(this + 300) = CStatic::vftable;
  local_8._0_1_ = 2;
  CWnd::CWnd((CWnd *)(this + 0x1a0));
  *(undefined ***)(this + 0x1a0) = CStatic::vftable;
  local_8._0_1_ = 3;
  CMFCImagePaintArea::CMFCImagePaintArea((CMFCImagePaintArea *)(this + 0x214),this);
  *(CBitmap **)(this + 0x300) = param_1;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x31c) = 0;
  local_8._0_1_ = 4;
  *(undefined4 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x324) = 0;
  *(undefined4 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 0x32c) = 0;
  CMFCColorBar::CMFCColorBar((CMFCColorBar *)(this + 0x330));
  local_8 = CONCAT31(local_8._1_3_,5);
  CMFCToolBar::CMFCToolBar((CMFCToolBar *)(this + 0x1120));
  *(undefined ***)(this + 0x1120) = CMFCImageEditorPaletteBar::vftable;
  GetObjectW(*(HANDLE *)(*(int *)(this + 0x300) + 4),0x18,local_2c);
  *(undefined4 *)(this + 0x304) = local_28;
  *(undefined4 *)(this + 0x308) = local_24;
  if (param_3 == -1) {
    param_3 = (int)local_1a;
  }
  *(int *)(this + 0x30c) = param_3;
  return this;
}


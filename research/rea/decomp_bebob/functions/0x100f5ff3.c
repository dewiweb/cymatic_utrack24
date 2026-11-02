// rea decompile_all
// name: CMFCCustomColorsPropertyPage::OnColour
// address: 0x100f5ff3
// body: available
// range: 0x100f5ff3-0x100f6104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCCustomColorsPropertyPage::OnColour(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCCustomColorsPropertyPage::OnColour(CMFCCustomColorsPropertyPage *this)

{
  uint uVar1;
  double local_1c;
  double local_14;
  double local_c;
  
  uVar1 = *(uint *)(this + 0x1f8);
  *(undefined8 *)(this + 0x134) = *(undefined8 *)(this + 0x1f0);
  *(uint *)(this + 0x224) = uVar1 & 0xff;
  *(undefined8 *)(this + 300) = *(undefined8 *)(this + 0x1e8);
  *(undefined4 *)(this + 0x240) = 1;
  *(uint *)(this + 0x22c) = uVar1 >> 8 & 0xff;
  *(uint *)(this + 0x228) = uVar1 >> 0x10 & 0xff;
  InvalidateRect(*(HWND *)(this + 0xcc),(RECT *)0x0,1);
  CMFCColorPickerCtrl::GetHLS((CMFCColorPickerCtrl *)(this + 0x168),&local_1c,&local_14,&local_c);
  uVar1 = HLS2Int(local_1c);
  *(uint *)(this + 0x234) = uVar1;
  uVar1 = HLS2Int(local_14);
  *(uint *)(this + 0x230) = uVar1;
  uVar1 = HLS2Int(local_c);
  *(uint *)(this + 0x238) = uVar1;
  uVar1 = FUN_1009c879(local_1c,local_14,local_c);
  CMFCColorDialog::SetNewColor(*(CMFCColorDialog **)(this + 0xa8),uVar1);
  CMFCColorDialog::SetPageOne
            (*(CMFCColorDialog **)(this + 0xa8),(uchar)this[0x224],(uchar)this[0x22c],
             (uchar)this[0x228]);
  CWnd::UpdateData((CWnd *)this,0);
  *(undefined4 *)(this + 0x240) = 0;
  return;
}


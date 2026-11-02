// rea decompile_all
// name: CMFCCaptionBar::OnDrawImage
// address: 0x100bde32
// body: available
// range: 0x100bde32-0x100bdeef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCCaptionBar::OnDrawImage(class CDC *,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCCaptionBar::OnDrawImage
          (CMFCCaptionBar *this,CDC *param_1,int param_3,int param_4,int param_5,int param_6)

{
  CMFCToolBarImages *this_00;
  HDC hdc;
  tagAFXDrawState local_10 [12];
  
  if (*(HICON *)(this + 0x2b8) == (HICON)0x0) {
    if (0 < *(int *)(this + 0x2c0)) {
      if (*(int *)(this + 0x3c8) == 0) {
        param_5 = *(int *)(this + 0x3d8) - *(int *)(this + 0x3d0);
        param_6 = *(int *)(this + 0x3dc) - *(int *)(this + 0x3d4);
      }
      else {
        param_5 = param_5 - param_3;
        param_6 = param_6 - param_4;
      }
      this_00 = (CMFCToolBarImages *)(this + 700);
      CMFCToolBarImages::PrepareDrawImage(this_00,local_10,param_5,param_6,0);
      CMFCToolBarImages::Draw(this_00,param_1,param_3,param_4,0,0,0,0,0,0,0xff);
      CMFCToolBarImages::EndDrawImage(this_00,local_10);
    }
  }
  else {
    if (param_1 == (CDC *)0x0) {
      hdc = (HDC)0x0;
    }
    else {
      hdc = *(HDC *)(param_1 + 4);
    }
    DrawIconEx(hdc,param_3,param_4,*(HICON *)(this + 0x2b8),param_5 - param_3,param_6 - param_4,0,
               (HBRUSH)0x0,3);
  }
  return;
}


// rea decompile_all
// name: CPreviewDC::MirrorFont
// address: 0x100f3320
// body: available
// range: 0x100f3320-0x100f351c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewDC::MirrorFont(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPreviewDC::MirrorFont(CPreviewDC *this)

{
  HFONT h;
  int iVar1;
  HFONT h_00;
  int iVar2;
  tagSIZE local_b0;
  tagSIZE local_a8;
  LOGFONTW local_a0;
  tagTEXTMETRICW local_44;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 8) != 0) {
    if (*(HANDLE *)(this + 0x2c) == (HANDLE)0x0) {
      (**(code **)(*(int *)this + 0x24))(0xe);
    }
    else if (*(int *)(this + 4) != 0) {
      GetObjectW(*(HANDLE *)(this + 0x2c),0x5c,&local_a0);
      GetTextFaceW(*(HDC *)(this + 8),0x20,local_a0.lfFaceName);
      GetTextMetricsW(*(HDC *)(this + 8),&local_44);
      if (local_44.tmHeight < 0) {
        local_a0.lfHeight = local_44.tmHeight;
      }
      else {
        local_a0.lfHeight = local_44.tmInternalLeading - local_44.tmHeight;
      }
      local_a0.lfWidth = local_44.tmAveCharWidth;
      local_a0.lfWeight = local_44.tmWeight;
      local_a0.lfItalic = local_44.tmItalic;
      local_a0.lfUnderline = local_44.tmUnderlined;
      local_a0.lfStrikeOut = local_44.tmStruckOut;
      local_a0.lfCharSet = local_44.tmCharSet;
      local_a0.lfPitchAndFamily = local_44.tmPitchAndFamily;
      h = CreateFontIndirectW(&local_a0);
      SelectObject(*(HDC *)(this + 4),h);
      GetTextMetricsW(*(HDC *)(this + 4),&local_44);
      iVar2 = -local_a0.lfHeight;
      if (local_44.tmHeight < 0) {
        iVar1 = -local_44.tmHeight;
      }
      else {
        iVar1 = local_44.tmHeight - local_44.tmInternalLeading;
      }
      local_a8.cx = 0;
      local_a8.cy = 0;
      GetWindowExtEx(*(HDC *)(this + 4),&local_a8);
      local_b0.cx = 0;
      local_b0.cy = 0;
      GetViewportExtEx(*(HDC *)(this + 4),&local_b0);
      if (local_a8.cy < 0) {
        local_a8.cy = -local_a8.cy;
      }
      if (local_b0.cy < 0) {
        local_b0.cy = -local_b0.cy;
      }
      iVar2 = MulDiv(iVar2,local_b0.cy,local_a8.cy);
      iVar1 = MulDiv(iVar1,local_b0.cy,local_a8.cy);
      if (iVar2 < iVar1) {
        local_a0.lfFaceName[0] = L'\0';
        local_a0.lfPitchAndFamily = ((local_a0.lfPitchAndFamily & 0xf0) != 0x50) - 1U & 0x50;
        h_00 = CreateFontIndirectW(&local_a0);
        SelectObject(*(HDC *)(this + 4),h_00);
        DeleteObject(h);
        h = h_00;
      }
      AfxDeleteObject((void **)(this + 0x28));
      *(HFONT *)(this + 0x28) = h;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


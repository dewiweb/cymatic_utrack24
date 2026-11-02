// rea decompile_all
// name: FUN_0046c3a0
// address: 0x46c3a0
// body: available
// range: 0x46c3a0-0x46c5d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046c3a0(void)

{
  WCHAR *pWVar1;
  byte extraout_var;
  int iVar2;
  HFONT h;
  HGDIOBJ pvVar3;
  UINT UVar4;
  HFONT h_00;
  BOOL BVar5;
  int iVar6;
  DWORD DVar7;
  uint uVar8;
  int in_ECX;
  undefined1 auStack_154 [4];
  WCHAR *local_150;
  WCHAR local_14c [2];
  LOGFONTW local_148;
  _OUTLINETEXTMETRICW local_e8;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_154;
  SetMapperFlags(*(HDC *)(in_ECX + 0x34),0);
  SetMapMode(*(HDC *)(in_ECX + 0x34),1);
  _memset(&local_148,0,0x5c);
  local_148.lfCharSet = '\x01';
  local_148.lfOutPrecision = '\b';
  local_148.lfClipPrecision = '\0';
  local_148.lfQuality = '\x02';
  local_148.lfPitchAndFamily = '\0';
  FUN_0045e080(*(undefined4 *)(in_ECX + 0xc),"Italic");
  local_148.lfItalic = extraout_var >> 7 ^ 1;
  iVar2 = FUN_0045e080(*(undefined4 *)(in_ECX + 0xc),&DAT_00c187f4);
  local_148.lfHeight = -0x100;
  local_148.lfWeight = 400;
  if (-1 < iVar2) {
    local_148.lfWeight = 700;
  }
  local_150 = local_148.lfFaceName;
  FUN_0045e270(*(undefined4 *)(in_ECX + 8));
  h = CreateFontIndirectW(&local_148);
  if (h != (HFONT)0x0) {
    pvVar3 = SelectObject(*(HDC *)(in_ECX + 0x34),h);
    *(HGDIOBJ *)(in_ECX + 0x30) = pvVar3;
    if (pvVar3 != (HGDIOBJ)0x0) {
      *(HFONT *)(in_ECX + 0x2c) = h;
      UVar4 = GetOutlineTextMetricsW(*(HDC *)(in_ECX + 0x34),0xd8,&local_e8);
      if (UVar4 != 0) {
        *(UINT *)(in_ECX + 0x84) = local_e8.otmEMSquare;
        local_148.lfHeight = -local_e8.otmEMSquare;
        h_00 = CreateFontIndirectW(&local_148);
        *(HFONT *)(in_ECX + 0x2c) = h_00;
        SelectObject(*(HDC *)(in_ECX + 0x34),h_00);
        DeleteObject(h);
      }
    }
  }
  BVar5 = GetTextMetricsW(*(HDC *)(in_ECX + 0x34),(LPTEXTMETRICW)(in_ECX + 0x38));
  if (BVar5 != 0) {
    iVar2 = GetDeviceCaps(*(HDC *)(in_ECX + 0x34),0x5a);
    iVar6 = GetDeviceCaps(*(HDC *)(in_ECX + 0x34),0x58);
    local_150 = (WCHAR *)((float)(iVar2 + iVar6) * 0.5);
    iVar2 = GetDeviceCaps(*(HDC *)(in_ECX + 0x34),0x5a);
    pWVar1 = local_150;
    local_14c[0] = *(WCHAR *)(in_ECX + 0x68);
    local_14c[1] = 0;
    local_150 = (WCHAR *)0x0;
    *(float *)(in_ECX + 0x7c) =
         ((float)*(int *)(in_ECX + 0x84) * ((float)pWVar1 / (float)iVar2)) /
         (float)*(int *)(in_ECX + 0x38);
    *(float *)(in_ECX + 0x78) = (float)*(int *)(in_ECX + 0x3c) / (float)*(int *)(in_ECX + 0x38);
    DVar7 = GetGlyphIndicesW(*(HDC *)(in_ECX + 0x34),local_14c,1,(LPWORD)&local_150,1);
    if ((DVar7 == 0xffffffff) || ((short)local_150 == -1)) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)local_150 & 0xffff;
    }
    *(uint *)(in_ECX + 0x80) = uVar8;
    FUN_0046c5e0(*(undefined4 *)(in_ECX + 0x34));
  }
  __security_check_cookie(local_c ^ (uint)auStack_154);
  return;
}


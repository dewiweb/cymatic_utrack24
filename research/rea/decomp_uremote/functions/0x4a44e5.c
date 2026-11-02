// rea decompile_all
// name: FUN_004a44e5
// address: 0x4a44e5
// body: available
// range: 0x4a44e5-0x4a46e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a44e5(void)

{
  char cVar1;
  HGDIOBJ pvVar2;
  UINT UVar3;
  HFONT h;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int unaff_ESI;
  undefined4 uVar7;
  HFONT local_158;
  float local_154;
  double local_150;
  _OUTLINETEXTMETRICW local_148;
  LOGFONTW local_70;
  uint local_c;
  
  local_c = DAT_00955fd4 ^ (uint)&local_158;
  SetMapperFlags(*(HDC *)(unaff_ESI + 0x34),0);
  SetMapMode(*(HDC *)(unaff_ESI + 0x34),1);
  uVar7 = 0x58;
  local_70.lfHeight = 0;
  _memset(&local_70.lfWidth,0,0x58);
  local_70.lfCharSet = '\x01';
  local_70.lfClipPrecision = '\0';
  local_70.lfOutPrecision = '\b';
  local_70.lfPitchAndFamily = '\0';
  local_70.lfQuality = '\x02';
  FUN_004c751a();
  cVar1 = FUN_00465e75(unaff_ESI + 0xc,uVar7);
  local_70.lfItalic = cVar1 != '\0';
  uVar7 = extraout_ECX;
  FUN_004c751a(extraout_ECX);
  cVar1 = FUN_00465e75(unaff_ESI + 0xc,uVar7);
  local_70.lfWeight = (-(uint)(cVar1 != '\0') & 300) + 400;
  local_70.lfHeight = -0x100;
  FUN_00466bc9(0x40);
  local_158 = CreateFontIndirectW(&local_70);
  if (local_158 != (HFONT)0x0) {
    pvVar2 = SelectObject(*(HDC *)(unaff_ESI + 0x34),local_158);
    *(HGDIOBJ *)(unaff_ESI + 0x30) = pvVar2;
    if (pvVar2 != (HGDIOBJ)0x0) {
      *(HFONT *)(unaff_ESI + 0x2c) = local_158;
      UVar3 = GetOutlineTextMetricsW(*(HDC *)(unaff_ESI + 0x34),0xd8,&local_148);
      if (UVar3 != 0) {
        *(UINT *)(unaff_ESI + 0x84) = local_148.otmEMSquare;
        local_70.lfHeight = -local_148.otmEMSquare;
        h = CreateFontIndirectW(&local_70);
        *(HFONT *)(unaff_ESI + 0x2c) = h;
        SelectObject(*(HDC *)(unaff_ESI + 0x34),h);
        DeleteObject(local_158);
      }
    }
  }
  BVar4 = GetTextMetricsW(*(HDC *)(unaff_ESI + 0x34),(LPTEXTMETRICW)(unaff_ESI + 0x38));
  if (BVar4 != 0) {
    iVar5 = GetDeviceCaps(*(HDC *)(unaff_ESI + 0x34),0x5a);
    iVar6 = GetDeviceCaps(*(HDC *)(unaff_ESI + 0x34),0x58);
    local_154 = (float)(iVar5 + iVar6) * 0.5;
    local_158 = (HFONT)(float)*(int *)(unaff_ESI + 0x38);
    local_150 = (double)local_154;
    local_154 = (float)GetDeviceCaps(*(HDC *)(unaff_ESI + 0x34),0x5a);
    *(float *)(unaff_ESI + 0x7c) =
         (((float)local_150 / (float)(int)local_154) * (float)*(int *)(unaff_ESI + 0x84)) /
         (float)local_158;
    *(float *)(unaff_ESI + 0x78) = (float)*(int *)(unaff_ESI + 0x3c) / (float)local_158;
    uVar7 = FUN_004a47bf(*(undefined4 *)(unaff_ESI + 0x34),*(undefined2 *)(unaff_ESI + 0x68));
    *(undefined4 *)(unaff_ESI + 0x80) = uVar7;
    FUN_004a46ea(unaff_ESI,*(undefined4 *)(unaff_ESI + 0x34),(float)*(int *)(unaff_ESI + 0x38));
  }
  __security_check_cookie(local_c ^ (uint)&local_158);
  return;
}


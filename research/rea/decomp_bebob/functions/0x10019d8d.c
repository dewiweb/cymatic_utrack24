// rea decompile_all
// name: FUN_10019d8d
// address: 0x10019d8d
// body: available
// range: 0x10019d8d-0x1001a28f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a28b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_10019d8d(AFX_GLOBAL_DATA *param_1)

{
  int *piVar1;
  double dVar2;
  AFX_GLOBAL_DATA *this;
  BYTE BVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  HFONT pHVar7;
  HGDIOBJ pvVar8;
  CGdiObject *pCVar9;
  CWnd *pCVar10;
  undefined4 extraout_EDX;
  undefined4 *puVar11;
  ulonglong uVar12;
  LPCWSTR lpString2;
  LONG LVar13;
  CWindowDC local_498 [4];
  HDC local_494;
  HDC local_490;
  CGdiObject *local_484;
  long local_480;
  CGdiObject *local_47c;
  CGdiObject *local_478;
  CGdiObject *local_474;
  undefined **local_470;
  HGDIOBJ local_46c;
  int local_468;
  AFX_GLOBAL_DATA *local_464;
  UINT local_460 [83];
  LONG local_314;
  BYTE local_310;
  UINT local_268 [56];
  uint local_188;
  LONG local_178;
  BYTE local_174;
  byte local_171;
  WCHAR local_16c [126];
  LOGFONTW local_70;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x488;
  local_8 = 0x10019d9c;
  local_464 = param_1;
  CWindowDC::CWindowDC(local_498,(CWnd *)0x0);
  local_8 = 0;
  local_468 = GetDeviceCaps(local_490,0x58);
  dVar2 = (double)local_468 / 96.0;
  *(double *)(param_1 + 0x1dc) = dVar2;
  if ((1.0 < dVar2) && (dVar2 < 1.1)) {
    *(undefined8 *)(param_1 + 0x1dc) = 0x3ff0000000000000;
  }
  if (((CGdiObject *)(param_1 + 0x114) != (CGdiObject *)0x0) && (*(int *)(param_1 + 0x118) != 0)) {
    pvVar4 = CGdiObject::Detach((CGdiObject *)(param_1 + 0x114));
    DeleteObject(pvVar4);
  }
  local_47c = (CGdiObject *)(param_1 + 0x11c);
  if ((local_47c != (CGdiObject *)0x0) && (*(int *)(param_1 + 0x120) != 0)) {
    pvVar4 = CGdiObject::Detach(local_47c);
    DeleteObject(pvVar4);
  }
  local_474 = (CGdiObject *)(param_1 + 0x124);
  if ((local_474 != (CGdiObject *)0x0) && (*(int *)(param_1 + 0x128) != 0)) {
    pvVar4 = CGdiObject::Detach(local_474);
    DeleteObject(pvVar4);
  }
  if (((CGdiObject *)(param_1 + 300) != (CGdiObject *)0x0) && (*(int *)(param_1 + 0x130) != 0)) {
    pvVar4 = CGdiObject::Detach((CGdiObject *)(param_1 + 300));
    DeleteObject(pvVar4);
  }
  local_478 = (CGdiObject *)(param_1 + 0x134);
  if ((local_478 != (CGdiObject *)0x0) && (*(int *)(param_1 + 0x138) != 0)) {
    pvVar4 = CGdiObject::Detach(local_478);
    DeleteObject(pvVar4);
  }
  if (((CGdiObject *)(param_1 + 0x13c) != (CGdiObject *)0x0) && (*(int *)(param_1 + 0x140) != 0)) {
    pvVar4 = CGdiObject::Detach((CGdiObject *)(param_1 + 0x13c));
    DeleteObject(pvVar4);
  }
  if (((CGdiObject *)(param_1 + 0x144) != (CGdiObject *)0x0) && (*(int *)(param_1 + 0x148) != 0)) {
    pvVar4 = CGdiObject::Detach((CGdiObject *)(param_1 + 0x144));
    DeleteObject(pvVar4);
  }
  if (((CGdiObject *)(param_1 + 0x14c) != (CGdiObject *)0x0) && (*(int *)(param_1 + 0x150) != 0)) {
    pvVar4 = CGdiObject::Detach((CGdiObject *)(param_1 + 0x14c));
    DeleteObject(pvVar4);
  }
  local_484 = (CGdiObject *)(param_1 + 0x15c);
  if ((local_484 != (CGdiObject *)0x0) && (*(int *)(param_1 + 0x160) != 0)) {
    pvVar4 = CGdiObject::Detach(local_484);
    DeleteObject(pvVar4);
  }
  if (((CGdiObject *)(param_1 + 0x154) != (CGdiObject *)0x0) && (*(int *)(param_1 + 0x158) != 0)) {
    pvVar4 = CGdiObject::Detach((CGdiObject *)(param_1 + 0x154));
    DeleteObject(pvVar4);
  }
  local_268[0] = 0x1f8;
  FUN_1001893b(local_268);
  _memset(&local_70,0,0x5c);
  iVar5 = GetTextCharsetInfo(local_494,(LPFONTSIGNATURE)0x0,0);
  local_70.lfWeight = local_178;
  local_70.lfItalic = local_174;
  iVar6 = (local_188 ^ (int)local_188 >> 0x1f) - ((int)local_188 >> 0x1f);
  if (iVar6 < 0xd) {
    local_70.lfHeight = 0xb;
  }
  else {
    local_70.lfHeight = iVar6 + -1;
  }
  if ((int)local_188 < 0) {
    local_70.lfHeight = -local_70.lfHeight;
  }
  local_70.lfCharSet = (BYTE)iVar5;
  lstrcpyW(local_70.lfFaceName,local_16c);
  if ((*(int *)param_1 == 0) && (local_171 < 3)) {
    iVar5 = EnumFontFamiliesW(local_494,(LPCWSTR)0x0,FontFamalyProcFonts,(LPARAM)DAT_10166a90);
    if (iVar5 == 0) {
      lstrcpyW(local_70.lfFaceName,DAT_10166a90);
      local_70.lfQuality = '\x05';
    }
    else {
      iVar5 = EnumFontFamiliesW(local_494,(LPCWSTR)0x0,FontFamalyProcFonts,(LPARAM)DAT_10166a8c);
      lpString2 = DAT_10166a94;
      if (iVar5 == 0) {
        lpString2 = DAT_10166a8c;
      }
      lstrcpyW(local_70.lfFaceName,lpString2);
    }
  }
  pHVar7 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)(param_1 + 0x114),(HMENU__ *)pHVar7);
  local_468 = local_70.lfHeight;
  LVar13 = local_70.lfHeight;
  local_480 = _labs(local_70.lfHeight);
  uVar12 = FUN_100f8660(LVar13,extraout_EDX);
  local_70.lfHeight = (LONG)uVar12;
  if (local_468 < 0) {
    local_70.lfHeight = -local_70.lfHeight;
  }
  pHVar7 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)(param_1 + 0x154),(HMENU__ *)pHVar7);
  local_70.lfHeight = local_468;
  local_460[0] = 0x1f8;
  FUN_1001893b(local_460);
  local_70.lfItalic = local_310;
  local_70.lfWeight = local_314;
  pHVar7 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)local_47c,(HMENU__ *)pHVar7);
  local_70.lfItalic = local_174;
  local_70.lfWeight = local_178;
  local_70.lfUnderline = '\x01';
  pHVar7 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)local_478,(HMENU__ *)pHVar7);
  local_70.lfUnderline = '\0';
  local_70.lfWeight = 700;
  pHVar7 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)local_474,(HMENU__ *)pHVar7);
  BVar3 = local_70.lfCharSet;
  local_70.lfWeight = 0;
  local_70.lfCharSet = '\x02';
  iVar5 = GetSystemMetrics(0x48);
  local_70.lfHeight = iVar5 - 1;
  lstrcpyW(local_70.lfFaceName,DAT_10166a9c);
  pHVar7 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)local_484,(HMENU__ *)pHVar7);
  local_46c = (HGDIOBJ)0x0;
  local_470 = CFont::vftable;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_70.lfCharSet = BVar3;
  local_46c = GetStockObject(0x11);
  if ((local_46c != (HGDIOBJ)0x0) && (iVar5 = GetObjectW(local_46c,0x5c,&local_70), iVar5 != 0)) {
    local_70.lfHeight = local_188;
    local_70.lfWeight = local_178;
    local_70.lfItalic = local_174;
    local_70.lfOrientation = 900;
    local_70.lfEscapement = 0xa8c;
    lstrcpyW(local_70.lfFaceName,DAT_10166a98);
    pHVar7 = CreateFontIndirectW(&local_70);
    CMenu::Attach((CMenu *)(local_464 + 0x144),(HMENU__ *)pHVar7);
    local_70.lfEscapement = 900;
    pHVar7 = CreateFontIndirectW(&local_70);
    CMenu::Attach((CMenu *)(local_464 + 0x14c),(HMENU__ *)pHVar7);
  }
  pvVar8 = GetStockObject(0x11);
  pCVar9 = CGdiObject::FromHandle(pvVar8);
  GetObjectW(*(HANDLE *)(pCVar9 + 4),0x5c,&local_70);
  local_70.lfUnderline = '\x01';
  pHVar7 = CreateFontIndirectW(&local_70);
  this = local_464;
  CMenu::Attach((CMenu *)(local_464 + 0x13c),(HMENU__ *)pHVar7);
  local_70.lfUnderline = '\0';
  local_70.lfWeight = 700;
  pHVar7 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)(this + 300),(HMENU__ *)pHVar7);
  AFX_GLOBAL_DATA::UpdateTextMetrics(this);
  puVar11 = DAT_10166ec0;
  while( true ) {
    if (puVar11 == (undefined4 *)0x0) {
      local_8 = local_8 & 0xffffff00;
      local_470 = CFont::vftable;
      CImageList::~CImageList((CImageList *)&local_470);
      local_8 = 0xffffffff;
      CWindowDC::~CWindowDC(local_498);
      FUN_100f90cf();
      return;
    }
    if (puVar11 == (undefined4 *)0x0) break;
    piVar1 = (int *)puVar11[2];
    puVar11 = (undefined4 *)*puVar11;
    if (piVar1 == (int *)0x0) break;
    pCVar10 = CWnd::FromHandlePermanent((HWND__ *)piVar1[8]);
    if (pCVar10 != (CWnd *)0x0) {
      (**(code **)(*piVar1 + 0x3a8))();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

